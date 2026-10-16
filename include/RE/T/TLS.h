#pragma once

#include "REX/W32/NT.h"

namespace RE
{
	// The game's own block of per thread data.
	class TLS
	{
	public:
		enum class Flags : std::uint32_t
		{
			kNone = 0,
			kNoChangeRecording = 1 << 0,  // AddChange records nothing on this thread
			kApplyingSave = 1 << 3        // this thread is applying a save's changes to forms
		};

		// The running thread's block, found through the slot the game's own TLS
		// index names, as the game reads it.
		[[nodiscard]] static TLS* GetSingleton()
		{
			static REL::Relocation<std::uint32_t*> index{ ID::TLS::Index };
			return static_cast<TLS**>(REX::W32::NtCurrentTeb()->threadLocalStoragePointer)[*index];
		}

		// members
		std::byte                           pad000[0x830];  // 000
		bool                                consoleMode;    // 830
		std::byte                           pad831[0x8B];   // 831
		REX::TEnumSet<Flags, std::uint32_t> flags;          // 8BC
	};
}
