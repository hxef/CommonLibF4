#pragma once

#include "RE/B/BSTArray.h"
#include "RE/B/BSTHashMap.h"

namespace RE
{
	class Actor;
	class BGSDamageType;
	class BGSInventoryItem;

	namespace ActorUtils
	{
		class __declspec(novtable) ArmorRatingVisitorBase
		{
		public:
			static constexpr auto RTTI{ RTTI::ActorUtils__ArmorRatingVisitorBase };
			static constexpr auto VTABLE{ VTABLE::ActorUtils__ArmorRatingVisitorBase };

			ArmorRatingVisitorBase()
			{
				REX::EMPLACE_VTABLE(this);
			}

			ArmorRatingVisitorBase(const Actor* a_actor, bool a_checkEquipped)
			{
				ctor(a_actor, a_checkEquipped);
			}

			// add
			virtual bool ShouldProcess(TESBoundObject*) { return 1; };  // 00
			virtual void PostProcess(TESBoundObject*) {};               // 01

			std::int64_t operator()(const BGSInventoryItem* a_item, std::uint32_t a_stackID)
			{
				using func_t = decltype(&ArmorRatingVisitorBase::operator());
				static REL::Relocation<func_t> func{ ID::ActorUtils::ArmorRatingVisitorBase::_operator };
				return func(this, a_item, a_stackID);
			}

			// members
			Actor* actor;          // 08
			float  rating;         // 10
			float  armorPerks;     // 14
			bool   checkEquipped;  // 18

		private:
			void ctor(const Actor* a_actor, bool a_checkEquipped)
			{
				using func_t = decltype(&ArmorRatingVisitorBase::ctor);
				static REL::Relocation<func_t> func{ ID::ActorUtils::ArmorRatingVisitorBase::ctor };
				return func(this, a_actor, a_checkEquipped);
			}
		};
		static_assert(sizeof(ArmorRatingVisitorBase) == 0x20);

		class __declspec(novtable) ArmorRatingVisitor :
			public ArmorRatingVisitorBase  // 00
		{
			static constexpr auto RTTI{ RTTI::ActorUtils__ArmorRatingVisitor };
			static constexpr auto VTABLE{ VTABLE::ActorUtils__ArmorRatingVisitor };

			BSScrapArray<TESBoundObject*> foundArmor;  // 20
		};
		static_assert(sizeof(ArmorRatingVisitor) == 0x40);

		static inline float GetEquippedArmorDamageResistance(Actor* a_actor, const ActorValueInfo* a_info)
		{
			using func_t = decltype(ActorUtils::GetEquippedArmorDamageResistance);
			static REL::Relocation<func_t> func{ ID::ActorUtils::GetEquippedArmorDamageResistance };
			return func(a_actor, a_info);
		}

		// Adds the damage type values of every equipped piece of armor in
		// a_items into the map a_sums points to, one entry per damage type.
		// The engine passes the address of a pointer to the map, the way it
		// passes a lambda that captures the map by reference, so a hook on
		// a call to it takes the pointer by reference too. A stack's own
		// instance data is read where it has one, and the armor record's
		// otherwise. Reads a_items without locking, so the caller holds the
		// inventory's read lock.
		static inline bool SumEquippedArmorDamageTypes(const BSTArray<BGSInventoryItem>& a_items, BSTScrapHashMap<BGSDamageType*, std::int32_t>* const& a_sums)
		{
			using func_t = decltype(ActorUtils::SumEquippedArmorDamageTypes);
			static REL::Relocation<func_t> func{ ID::ActorUtils::SumEquippedArmorDamageTypes };
			return func(a_items, a_sums);
		}

		// Sets every typed resistance actor value from the armor an actor has
		// equipped, through SumEquippedArmorDamageTypes, and marks the armor
		// rating behind DamageResist as stale, so its next read adds the
		// equipped pieces up again. Equipping and unequipping call it. For an
		// actor without a process it adds up no armor.
		static inline void UpdateEquippedArmorResistances(Actor* a_actor)
		{
			using func_t = decltype(ActorUtils::UpdateEquippedArmorResistances);
			static REL::Relocation<func_t> func{ ID::ActorUtils::UpdateEquippedArmorResistances };
			return func(a_actor);
		}
	}
}
