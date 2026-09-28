#pragma once

#include "RE/B/BGSObjectInstance.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTEvent.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class Projectile;
	class TESObjectREFR;
	class TESObjectWEAP;

	class WeaponFiredEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<WeaponFiredEvent>* GetEventSource()
		{
			static REL::Relocation<BSTEventSource<WeaponFiredEvent>*> singleton{ ID::WeaponFiredEvent::GetEventSource };
			return singleton.get();
		}

		// members
		const BGSObjectInstanceT<TESObjectWEAP>*   weapon;       // 00
		NiPointer<TESObjectREFR>                   source;       // 08
		const BSScrapArray<NiPointer<Projectile>>* projectiles;  // 10
	};
	static_assert(sizeof(WeaponFiredEvent) == 0x18);
}
