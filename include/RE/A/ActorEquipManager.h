#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/B/BSTSingleton.h"

namespace RE
{
	class BGSEquipSlot;
	class BGSObjectInstance;
	class EquippedItem;

	namespace ActorEquipManagerEvent
	{
		class Event;
	}

	class ActorEquipManager :
		public BSTSingletonSDM<ActorEquipManager>,            // 00
		public BSTEventSource<ActorEquipManagerEvent::Event>  // 08
	{
	public:
		enum class CanEquipResult
		{
			kSuccess = 0x0,
			kInvalidItem = 0x1,
			kNoModEquip = 0x2,
			kPAWhileNotInPA = 0x3,
			kNonPAWhileInPA = 0x4,
			kEquipStateLocked = 0x5,
			kItemBroken = 0x6,
			kNoEquipKeyword = 0x7
		};

		[[nodiscard]] static ActorEquipManager* GetSingleton()
		{
			static REL::Relocation<ActorEquipManager**> singleton{ ID::ActorEquipManager::Singleton };
			return *singleton;
		}

		// Whether the actor is allowed to equip the item the handle names, and
		// what stops it when it is not. The container screen asks this before
		// offering to equip an item. ToggleEquipInventoryItem asks it first and
		// turns a refusal into the matching HUD message, except
		// kEquipStateLocked when a_locked is set. CanEquip does not look at
		// whether the item is already on, and the toggle asks it before it
		// looks, so an answer that refuses the item also stops it coming off.
		//
		// kItemBroken comes from ExtraDataList::IsItemBroken, so it needs an
		// item whose health has been written down as zero or less. In the base
		// game only a power armor piece gets one.
		[[nodiscard]] CanEquipResult CanEquip(Actor* a_actor, const std::uint32_t& a_handleID, std::uint32_t a_stackID)
		{
			using func_t = decltype(&ActorEquipManager::CanEquip);
			static REL::Relocation<func_t> func{ ID::ActorEquipManager::CanEquip };
			return func(this, a_actor, a_handleID, a_stackID);
		}

		// Puts the item the handle names on the actor, or takes it off when
		// that stack already holds a slot. The Pip-Boy, the quick keys, the
		// container screen's equip button and Actor::EquipShouldEquipItems
		// all equip through this. It asks CanEquip first either way. Answers
		// false when the handle names nothing, after a refusal, and for an
		// item that is on while a_allowUnequip is false, as a quick key passes
		// it. a_slot is null from every caller in the game. a_locked lets it
		// past kEquipStateLocked, puts the item on forced and locked and takes
		// it off forced, as the container screen does for a companion.
		bool ToggleEquipInventoryItem(
			Actor*               a_actor,
			const std::uint32_t& a_handleID,
			std::uint32_t        a_stackID,
			const BGSEquipSlot*  a_slot,
			bool                 a_allowUnequip,
			bool                 a_locked)
		{
			using func_t = decltype(&ActorEquipManager::ToggleEquipInventoryItem);
			static REL::Relocation<func_t> func{ ID::ActorEquipManager::ToggleEquipInventoryItem };
			return func(this, a_actor, a_handleID, a_stackID, a_slot, a_allowUnequip, a_locked);
		}

		bool EquipObject(
			Actor*                   a_actor,
			const BGSObjectInstance& a_object,
			std::uint32_t            a_stackID,
			std::uint32_t            a_number,
			const BGSEquipSlot*      a_slot,
			bool                     a_queueEquip,
			bool                     a_forceEquip,
			bool                     a_playSounds,
			bool                     a_applyNow,
			bool                     a_locked)
		{
			using func_t = decltype(&ActorEquipManager::EquipObject);
			static REL::Relocation<func_t> func{ ID::ActorEquipManager::EquipObject };
			return func(this, a_actor, a_object, a_stackID, a_number, a_slot, a_queueEquip, a_forceEquip, a_playSounds, a_applyNow, a_locked);
		}

		bool UnequipObject(
			Actor*                   a_actor,
			const BGSObjectInstance* a_object,
			std::uint32_t            a_number,
			const BGSEquipSlot*      a_slot,
			std::uint32_t            a_stackID,
			bool                     a_queueEquip,
			bool                     a_forceEquip,
			bool                     a_playSounds,
			bool                     a_applyNow,
			const BGSEquipSlot*      a_slotBeingReplaced)
		{
			using func_t = decltype(&ActorEquipManager::UnequipObject);
			static REL::Relocation<func_t> func{ ID::ActorEquipManager::UnequipObject };
			return func(this, a_actor, a_object, a_number, a_slot, a_stackID, a_queueEquip, a_forceEquip, a_playSounds, a_applyNow, a_slotBeingReplaced);
		}

		void UnequipItem(Actor* a_actor, const EquippedItem* a_equippedItem, bool a_queueEquip)
		{
			using func_t = decltype(&ActorEquipManager::UnequipItem);
			static REL::Relocation<func_t> func{ ID::ActorEquipManager::UnequipItem };
			return func(this, a_actor, a_equippedItem, a_queueEquip);
		}
	};
	static_assert(sizeof(ActorEquipManager) == 0x60);
}
