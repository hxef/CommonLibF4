#pragma once

#include "RE/B/BGSAimModel.h"
#include "RE/B/BSSpring_SpringState.h"
#include "RE/N/NiPoint2.h"

namespace RE
{
	class __declspec(novtable) AimModel
	{
	public:
		// The cone a shot spreads in, as half angles in radians, the max into
		// a_max and the min into a_min. It is the aim model's own cone times
		// the sneak and sights bonuses, crippled arms and the cone perks
		// (kModConeOfFireMult, asked only of an actor whose perks carry it),
		// plus an offset for an NPC that aims badly. Each is capped in degrees
		// at fAimModelFireConeAngleLimitMax and Min, 30 and 20, then turned
		// into radians. The NPC offset has no floor, so an NPC's cone can come
		// out below 0. ApplyConeOfFire asks it for every shot that spreads,
		// once before the pellets, and the crosshair asks it every frame.
		void GetMinMaxCone(float* a_max, float* a_min) const
		{
			using func_t = decltype(&AimModel::GetMinMaxCone);
			static REL::Relocation<func_t> func{ ID::AimModel::GetMinMaxCone };
			func(this, a_max, a_min);
		}

		// The cone right now, min + (max - min) * fireConeSize. Only the
		// crosshair asks.
		[[nodiscard]] float GetCurrentCone() const
		{
			using func_t = decltype(&AimModel::GetCurrentCone);
			static REL::Relocation<func_t> func{ ID::AimModel::GetCurrentCone };
			return func(this);
		}

		// members
		BGSAimModel::Data               aimModelData;          // 00
		BSSpring::SpringState<NiPoint2> recoilSpring;          // 40
		BSSpring::SpringState<NiPoint2> recoilDiminishSpring;  // 54
		NiPoint2                        targetRecoilHead;      // 68
		NiPoint2                        currentRecoilHead;     // 70
		NiPoint2                        prevRecoilRad;         // 78
		NiPoint2                        preShotAimRad;         // 80
		Actor*                          actor;                 // 88
		float                           fireConeSize;          // 90
		float                           lastShotDeltaMs;       // 94
		std::uint32_t                   continuousShots;       // 98
	};
	static_assert(sizeof(AimModel) == 0xA0);
}
