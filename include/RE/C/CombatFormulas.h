#pragma once

#include "RE/A/ActorValueOwner.h"
#include "RE/B/BGSEquipIndex.h"
#include "RE/B/BGSObjectInstance.h"
#include "RE/T/TESObjectWEAP.h"

namespace RE
{
	namespace CombatFormulas
	{
		[[nodiscard]] inline float GetWeaponDisplayAccuracy(const BGSObjectInstanceT<TESObjectWEAP>& a_weapon, Actor* a_actor)
		{
			using func_t = decltype(&CombatFormulas::GetWeaponDisplayAccuracy);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::GetWeaponDisplayAccuracy };
			return func(a_weapon, a_actor);
		}

		[[nodiscard]] inline float GetWeaponDisplayDamage(const BGSObjectInstanceT<TESObjectWEAP>& a_weapon, const TESAmmo* a_ammo, float a_condition)
		{
			using func_t = decltype(&CombatFormulas::GetWeaponDisplayDamage);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::GetWeaponDisplayDamage };
			return func(a_weapon, a_ammo, a_condition);
		}

		[[nodiscard]] inline float GetWeaponDisplayRange(const BGSObjectInstanceT<TESObjectWEAP>& a_weapon)
		{
			using func_t = decltype(&CombatFormulas::GetWeaponDisplayRange);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::GetWeaponDisplayRange };
			return func(a_weapon);
		}

		[[nodiscard]] inline float GetWeaponDisplayRateOfFire(const TESObjectWEAP& a_weapon, const TESObjectWEAP::InstanceData* a_data)
		{
			using func_t = decltype(&CombatFormulas::GetWeaponDisplayRateOfFire);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::GetWeaponDisplayRateOfFire };
			return func(a_weapon, a_data);
		}

		[[nodiscard]] inline float CalcTargetedLimbDamage(Actor* a_target, const BGSBodyPart* a_bodyPart, float a_physicalDamage, BSTArray<BSTTuple<TESForm*, BGSTypedFormValuePair::SharedVal>, BSTArrayHeapAllocator>* a_damageTypes)
		{
			using func_t = decltype(&CombatFormulas::CalcTargetedLimbDamage);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::CalcTargetedLimbDamage };
			return func(a_target, a_bodyPart, a_physicalDamage, a_damageTypes);
		}

		// The damage one attack deals before the target's armour. Combat and the
		// damage an item card shows both work it out through this.
		//
		// a_avOwner is the actor the damage belongs to, and a TESNPC record is
		// taken as well, with the actor values read off that instead. a_condition
		// is the weapon's item health, and a_rangeMult the falloff for a target
		// past the weapon's range, 1.0 within it.
		[[nodiscard]] inline float CalcWeaponDamage(const TESForm* a_avOwner, const TESObjectWEAP::InstanceData* a_data, const TESAmmo* a_ammo, float a_condition, float a_rangeMult)
		{
			using func_t = decltype(&CombatFormulas::CalcWeaponDamage);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::CalcWeaponDamage };
			return func(a_avOwner, a_data, a_ammo, a_condition, a_rangeMult);
		}

		// The speed an actor plays its attacks with a weapon at, as a multiple
		// of the animation's own. The animation graph reads it every frame as
		// weaponSpeedMult, and an automatic gun fires a held burst from its
		// attack animation looping, so this is also how fast the burst fires.
		//
		// It is the weapon's speed, off the instance data where there is one,
		// times the actor's WeaponSpeedMult, or LeftWeaponSpeedMult for any
		// equip index but 0, which counts as 1 at 0.001 or less. Two
		// handed swords and axes take fWeaponTwoHandedAnimationSpeedMult on
		// top, and the player's bolt action weapon takes
		// fVATSBoltActionAnimSpeedMult while VATS plays an attack back. So a
		// mod that raises the speed, such as an automatic receiver or the Rapid
		// legendary, quickens the attack through this.
		//
		// Returns 1 for no actor or no weapon.
		[[nodiscard]] inline float CalcWeaponSpeedMult(const Actor* a_actor, const BGSObjectInstanceT<TESObjectWEAP>& a_weapon, BGSEquipIndex a_equipIndex)
		{
			using func_t = decltype(&CombatFormulas::CalcWeaponSpeedMult);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::CalcWeaponSpeedMult };
			return func(a_actor, a_weapon, a_equipIndex);
		}

		// How much a VATS attack that rolls a hit adds to the VATS critical
		// meter, which is full at fVATSCriticalChargeLimit, 100 by default.
		//
		// It is fVATSCriticalChargeBase plus the actor's Luck times
		// fVATSCriticalChargeMult, plus the weapon's own critical charge bonus
		// times fVATSCriticalChargeBonusMult. Perks have the last word through
		// the Mod VATS Critical Charge entry point, which is handed the player
		// whoever the actor values came from, since the meter is the player's.
		//
		// a_weapon may hold no object, and then the weapon's bonus is left out.
		// For a player with no weapon the game passes the race's unarmedWeapon,
		// or UnarmedDefault, 000001F4, when the race has none.
		[[nodiscard]] inline float CalcVATSCriticalCharge(const ActorValueOwner* a_avOwner, const BGSObjectInstanceT<TESObjectWEAP>& a_weapon)
		{
			using func_t = decltype(&CombatFormulas::CalcVATSCriticalCharge);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::CalcVATSCriticalCharge };
			return func(a_avOwner, a_weapon);
		}

		[[nodiscard]] inline std::int64_t GetNumCrippledAttackConditions(Actor* a_actor)
		{
			using func_t = decltype(&CombatFormulas::GetNumCrippledAttackConditions);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::GetNumCrippledAttackConditions };
			return func(a_actor);
		}

		[[nodiscard]] inline float CalcScopeSteadyActionPointDrain(Actor* a_actor, float a_deltaSec)
		{
			using func_t = decltype(&CombatFormulas::CalcScopeSteadyActionPointDrain);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::CalcScopeSteadyActionPointDrain };
			return func(a_actor, a_deltaSec);
		}

		[[nodiscard]] inline float CalcResistedPercentage(const ActorValueInfo* a_resistance, float a_damage, float a_resistancePoints)
		{
			using func_t = decltype(&CombatFormulas::CalcResistedPercentage);
			static REL::Relocation<func_t> func{ ID::CombatFormulas::CalcResistedPercentage };
			return func(a_resistance, a_damage, a_resistancePoints);
		}
	}
}
