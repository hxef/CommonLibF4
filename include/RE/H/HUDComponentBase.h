#pragma once

#include "RE/B/BSGFxShaderFXTarget.h"
#include "RE/H/HUDModes.h"

namespace RE
{
	// The base class of every element of the gameplay HUD, such as the ammo
	// counter. HUDMenu keeps them in hudObjects. displayWarningColor picks the
	// warning colour over the HUD colour for the part, and the pickup prompt
	// sets it while taking the item it shows is stealing.
	class __declspec(novtable) HUDComponentBase :
		public BSGFxShaderFXTarget  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::HUDComponentBase };
		static constexpr auto VTABLE{ VTABLE::HUDComponentBase };

		~HUDComponentBase() override;  // 00

		// members
		std::uint64_t unkB0;                // B0
		std::uint64_t unkB8;                // B8
		bool          unkC0;                // C0
		HUDModes      hudModes;             // C8
		float         unkE8;                // E8
		float         unkEC;                // EC
		bool          unkF0;                // F0
		bool          unkF1;                // F1
		bool          displayWarningColor;  // F2
	};
	static_assert(sizeof(HUDComponentBase) == 0xF8);
}
