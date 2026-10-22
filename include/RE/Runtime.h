#pragma once

namespace RE
{
	// The game builds this library runs on. 1 DLL serves both.
	enum class Runtime : std::uint8_t
	{
		kUnknown,
		kAE,  // 1.11.137 and later 1.11 builds
		kOG   // 1.10.163
	};

	// Read once from Fallout4.exe's ProductVersion, the string the Address
	// Library file is named by. Never call it during static init: it reads the
	// exe file. The generated Query or F4SE::Init calls it first.
	[[nodiscard]] Runtime GetRuntime() noexcept;

	[[nodiscard]] inline bool IsOG() noexcept { return GetRuntime() == Runtime::kOG; }
	[[nodiscard]] inline bool IsAE() noexcept { return GetRuntime() == Runtime::kAE; }

	// An Address Library ID that a build lacks. Never 0: 0 is a real OG ID.
	inline constexpr std::uint64_t NO_ID{ std::numeric_limits<std::uint64_t>::max() };

	// The offset of a raw ID in the loaded Address Library, or none when the
	// file lacks exactly that ID or the ID is NO_ID. Never stops the game for a
	// missing ID. The first lookup loads the Address Library, which stops the
	// game when that file is missing, so never call it at static init or at
	// unload.
	[[nodiscard]] std::optional<std::size_t> FindOffset(std::uint64_t a_id) noexcept;

	// An Address Library ID on AE and OG. { ae } is AE only, { ae, og } is
	// both, { NO_ID, og } is OG only, { ae, NO_ID } says OG has none.
	class RuntimeID
	{
	public:
		constexpr RuntimeID() noexcept = default;

		explicit constexpr RuntimeID(std::uint64_t a_ae, std::uint64_t a_og = NO_ID) noexcept :
			_ae(a_ae),
			_og(a_og)
		{}

		[[nodiscard]] constexpr std::uint64_t ae() const noexcept { return _ae; }
		[[nodiscard]] constexpr std::uint64_t og() const noexcept { return _og; }

		// The ID of the build that runs, NO_ID when it has none.
		[[nodiscard]] std::uint64_t get() const noexcept;

		// Whether the Address Library of the build that runs has this ID.
		[[nodiscard]] bool has() const noexcept;

		// These stop the game, naming both IDs, when the build lacks it. The
		// conversion lets REL::Relocation{ RE::ID::X } build as before.
		[[nodiscard]] std::size_t    offset() const;
		[[nodiscard]] std::uintptr_t address() const;

		operator REL::ID() const;

	private:
		std::uint64_t _ae{ NO_ID };
		std::uint64_t _og{ NO_ID };
	};
	static_assert(sizeof(RuntimeID) == 0x10);

	// A member whose place moved on 1.10.163. AE returns the declared member,
	// so AE code reads what it always read. OG reads a_og bytes into a_self.
	template <class T, class C>
	[[nodiscard]] T& RuntimeMember(C* a_self, T& a_ae, std::size_t a_og) noexcept
	{
		if (!IsOG())
			return a_ae;
		return *reinterpret_cast<T*>(reinterpret_cast<std::uintptr_t>(a_self) + a_og);
	}
}
