#pragma once

namespace RE
{
	class TESForm;

	// The object that writes and reads a save and records which forms changed
	// since the game started, so a save keeps only what changed. Only its flags
	// are mapped.
	class BGSSaveLoadGame
	{
	public:
		enum class Flags : std::uint32_t
		{
			kNone = 0,
			kNoChangeRecording = 1 << 0,  // AddChange records nothing, as while a new game sets up its world
			kLoading = 1 << 1,            // a save is loading, or a reset puts changed forms back
			kSaving = 1 << 2
		};

		[[nodiscard]] static BGSSaveLoadGame* GetSingleton()
		{
			static REL::Relocation<BGSSaveLoadGame**> singleton{ ID::BGSSaveLoadGame::Singleton };
			return *singleton;
		}

		[[nodiscard]] bool IsLoading() const noexcept { return flags.any(Flags::kLoading); }

		// Only this object's flag. AddChange also refuses while the running
		// thread's TLS flag kNoChangeRecording is up.
		[[nodiscard]] bool IsRecording() const noexcept { return flags.none(Flags::kNoChangeRecording); }

		// Whether the change record holds any of a_changeFlags for a_form: what
		// AddChange recorded since the game started, and what the loaded save
		// brought back.
		[[nodiscard]] bool HasChangeFlags(const TESForm* a_form, std::uint32_t a_changeFlags) const
		{
			using func_t = decltype(&BGSSaveLoadGame::HasChangeFlags);
			static REL::Relocation<func_t> func{ ID::BGSSaveLoadGame::HasChangeFlags };
			return func(this, a_form, a_changeFlags);
		}

		// members
		std::byte                           pad000[0x360];  // 000
		REX::TEnumSet<Flags, std::uint32_t> flags;          // 360
		std::byte                           pad364[0x14];   // 364
	};
	static_assert(sizeof(BGSSaveLoadGame) == 0x378);
}
