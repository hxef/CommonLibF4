#pragma once

#include "RE/B/BSGFxDisplayObject.h"
#include "RE/B/BSTEvent.h"
#include "RE/H/HUDComponentBase.h"
#include "RE/P/PlayerAmmoCountEvent.h"
#include "RE/P/PlayerCrosshairModeEvent.h"
#include "RE/P/PlayerWeaponReloadEvent.h"

namespace RE
{
	// The ammo counter of the gameplay HUD, bound to
	// RightMeters_mc.AmmoCount_mc. nextAmmoCount holds the rounds in the gun
	// and in reserve while the weapon in hand takes ammo, and no value for a
	// melee weapon.
	class __declspec(novtable) HUDAmmoCounter :
		public HUDComponentBase  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::HUDAmmoCounter };
		static constexpr auto VTABLE{ VTABLE::HUDAmmoCounter };

		~HUDAmmoCounter() override;  // 00

		// members
		BSGFxDisplayObject                          clipCount;       // 0F8
		BSGFxDisplayObject                          reserveCount;    // 148
		std::byte                                   unk198[0x20];    // 198
		BSTValueEventSink<PlayerAmmoCountEvent>     nextAmmoCount;   // 1B8
		BSTValueEventSink<PlayerWeaponReloadEvent>  playerReloaded;  // 1D8
		BSTValueEventSink<PlayerCrosshairModeEvent> crosshairMode;   // 1F0
		std::byte                                   unk210[0x20];    // 210
	};
	static_assert(sizeof(HUDAmmoCounter) == 0x230);
}
