#include "RE/Runtime.h"

namespace RE
{
	namespace
	{
		struct Game
		{
			Runtime      runtime{ Runtime::kUnknown };
			REL::Version version{};
		};

		const Game& GetGame() noexcept
		{
			static const Game game = [] {
				Game       result;
				const auto exe = REX::FModule::GetExecutingModule();
				if (const auto version = REL::GetFileVersion(exe.GetFileName())) {
					result.version = *version;
					if (*version == REL::Version{ 1, 10, 163, 0 })
						result.runtime = Runtime::kOG;
					else if ((*version)[0] == 1 && (*version)[1] == 11 && (*version)[2] >= 137)
						result.runtime = Runtime::kAE;
				}
				return result;
			}();
			return game;
		}

		// IDDB's table accessor is protected. A member pointer taken through this
		// derived class can be called on IDDB itself, so the table is read
		// without changing commonlib-shared.
		struct IDDBTable : REL::IDDB
		{
			[[nodiscard]] static std::span<const MAPPING> Get()
			{
				constexpr auto get = &IDDBTable::get_id2offset<MAPPING>;
				return (REL::IDDB::GetSingleton()->*get)();
			}
		};

		// REX::FAIL logs the message, shows it in a box and ends the game.
		[[noreturn]] void StopForMissing(const RuntimeID& a_id)
		{
			const auto name = [](std::uint64_t a_number) {
				return a_number == NO_ID ? "none"s : std::to_string(a_number);
			};
			REX::FAIL(
				"Fallout 4 {} has no address for an Address Library ID this plugin needs.\n"
				"AE ID: {}\n"
				"OG ID: {}",
				GetGame().version, name(a_id.ae()), name(a_id.og()));
			std::abort();
		}
	}

	Runtime GetRuntime() noexcept
	{
		return GetGame().runtime;
	}

	std::optional<std::size_t> FindOffset(std::uint64_t a_id) noexcept
	{
		if (a_id == NO_ID)
			return std::nullopt;
		// Both bins are sorted by ID. Fallout 4's Address Library comes only in
		// the format this table holds, so another format gives an empty table
		// and so none.
		const auto table = IDDBTable::Get();
		const auto it = std::ranges::lower_bound(table, a_id, {}, &REL::IDDB::MAPPING::id);
		if (it == table.end() || it->id != a_id)
			return std::nullopt;
		return static_cast<std::size_t>(it->offset);
	}

	std::uint64_t RuntimeID::get() const noexcept
	{
		switch (GetRuntime()) {
			case Runtime::kAE:
				return _ae;
			case Runtime::kOG:
				return _og;
			default:
				return NO_ID;
		}
	}

	bool RuntimeID::has() const noexcept
	{
		return FindOffset(get()).has_value();
	}

	std::size_t RuntimeID::offset() const
	{
		if (const auto result = FindOffset(get()))
			return *result;
		StopForMissing(*this);
	}

	std::uintptr_t RuntimeID::address() const
	{
		return REX::FModule::GetExecutingModule().GetBaseAddress() + offset();
	}

	RuntimeID::operator REL::ID() const
	{
		if (!has())
			StopForMissing(*this);
		return REL::ID{ get() };
	}
}
