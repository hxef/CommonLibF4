#pragma once

#include "RE/B/BGSInventoryItem.h"
#include "RE/B/BSContainer.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTEvent.h"
#include "RE/P/PlayerCharacter.h"
#include "RE/S/Setting.h"

namespace RE
{
	class BGSBodyPart;
	class HitData;
	class TESHitEvent;
	class TESObjectARMO;
	class TESTriggerEnterEvent;
	class TESTriggerLeaveEvent;

	namespace PowerArmor
	{
		// The power armor system's event sink. Its hit handler wears the power
		// armor pieces of an actor hit while in power armor, through
		// DamagePiecesOrLimb. The game registers it while at least one actor is
		// in power armor, and refCount counts them.
		class __declspec(novtable) EventHandler :
			public BSTEventSink<TESHitEvent>,           // 00
			public BSTEventSink<TESTriggerEnterEvent>,  // 08
			public BSTEventSink<TESTriggerLeaveEvent>   // 10
		{
		public:
			static constexpr auto RTTI{ RTTI::PowerArmor__EventHandler };
			static constexpr auto VTABLE{ VTABLE::PowerArmor__EventHandler };

			virtual ~EventHandler();  // 00

			// override
			// Each of the game's functions sits in its own sink's table, so it
			// takes that sink part of the object as this.
			virtual BSEventNotifyControl ProcessEvent(const TESHitEvent& a_event, BSTEventSource<TESHitEvent>* a_source) override  // 01
			{
				using func_t = BSEventNotifyControl (*)(BSTEventSink<TESHitEvent>*, const TESHitEvent&, BSTEventSource<TESHitEvent>*);
				static REL::Relocation<func_t> func{ ID::PowerArmor::EventHandler::ProcessHitEvent };
				return func(this, a_event, a_source);
			}

			virtual BSEventNotifyControl ProcessEvent(const TESTriggerEnterEvent& a_event, BSTEventSource<TESTriggerEnterEvent>* a_source) override  // 02
			{
				using func_t = BSEventNotifyControl (*)(BSTEventSink<TESTriggerEnterEvent>*, const TESTriggerEnterEvent&, BSTEventSource<TESTriggerEnterEvent>*);
				static REL::Relocation<func_t> func{ ID::PowerArmor::EventHandler::ProcessTriggerEnterEvent };
				return func(this, a_event, a_source);
			}

			virtual BSEventNotifyControl ProcessEvent(const TESTriggerLeaveEvent& a_event, BSTEventSource<TESTriggerLeaveEvent>* a_source) override  // 03
			{
				using func_t = BSEventNotifyControl (*)(BSTEventSink<TESTriggerLeaveEvent>*, const TESTriggerLeaveEvent&, BSTEventSource<TESTriggerLeaveEvent>*);
				static REL::Relocation<func_t> func{ ID::PowerArmor::EventHandler::ProcessTriggerLeaveEvent };
				return func(this, a_event, a_source);
			}

			[[nodiscard]] static EventHandler* GetSingleton()
			{
				static REL::Relocation<EventHandler*> singleton{ ID::PowerArmor::EventHandler::Singleton };
				return singleton.get();
			}

			// members
			BSSpinLock    lock;      // 18
			std::uint32_t refCount;  // 20
		};
		static_assert(sizeof(EventHandler) == 0x28);

		// What DamagePiecesOrLimb runs over each stack of the piece it picked,
		// a lambda in the engine, so these members are its captures. An
		// unequipped stack only moves stackID on. On the equipped one it takes
		// the hit's share off the piece's health, unequips the piece when that
		// breaks it, and stops.
		class DamagePieceStackFunctor
		{
		public:
			BSContainer::ForEachResult operator()(BGSInventoryItem::Stack* a_stack) const
			{
				using func_t = decltype(&DamagePieceStackFunctor::operator());
				static REL::Relocation<func_t> func{ ID::PowerArmor::DamagePieceStackFunctor::_operator };
				return func(this, a_stack);
			}

			// members
			Actor*                actor;    // 00
			const HitData*        hitData;  // 08
			TESObjectARMO* const* armor;    // 10
			std::uint32_t*        stackID;  // 18
			const BGSBodyPart*    part;     // 20
		};
		static_assert(sizeof(DamagePieceStackFunctor) == 0x28);

		[[nodiscard]] inline bool ActorInPowerArmor(const Actor& a_actor)
		{
			using func_t = decltype(&ActorInPowerArmor);
			static REL::Relocation<func_t> func{ ID::PowerArmor::ActorInPowerArmor };
			return func(a_actor);
		}

		[[nodiscard]] inline bool PlayerInPowerArmor()
		{
			auto PlayerCharacter = PlayerCharacter::GetSingleton();
			return PlayerCharacter ? ActorInPowerArmor(*PlayerCharacter) : false;
		}

		// Wears a_actor's power armor for a hit on a_part. EventHandler's hit
		// handler calls it. The same part of the actor's race names the actor
		// value a piece has to protect. Under the inventory's read lock, the
		// first armor that has its first stack equipped, carries the power
		// armor keyword and protects that actor value takes the hit through
		// DamagePieceStackFunctor. Where the race gives that part no actor
		// value, the hit damages the limb's condition instead.
		inline void DamagePiecesOrLimb(Actor& a_actor, const HitData& a_hitData, const BGSBodyPart& a_part)
		{
			using func_t = decltype(&DamagePiecesOrLimb);
			static REL::Relocation<func_t> func{ ID::PowerArmor::DamagePiecesOrLimb };
			return func(a_actor, a_hitData, a_part);
		}

		[[nodiscard]] inline BGSKeyword* GetArmorKeyword()
		{
			using func_t = decltype(&GetArmorKeyword);
			static REL::Relocation<func_t> func{ ID::PowerArmor::GetArmorKeyword };
			return func();
		}

		[[nodiscard]] inline BGSKeyword* GetBatteryKeyword()
		{
			using func_t = decltype(&GetBatteryKeyword);
			static REL::Relocation<func_t> func{ ID::PowerArmor::GetBatteryKeyword };
			return func();
		}

		[[nodiscard]] inline TESAmmo* GetDefaultBatteryObject()
		{
			using func_t = decltype(&GetDefaultBatteryObject);
			static REL::Relocation<func_t> func{ ID::PowerArmor::GetDefaultBatteryObject };
			return func();
		}

		[[nodiscard]] inline bool IsPowerArmorBattery(const TESBoundObject* a_itemData)
		{
			using func_t = decltype(&IsPowerArmorBattery);
			static REL::Relocation<func_t> func{ ID::PowerArmor::IsPowerArmorBattery };
			return func(a_itemData);
		}

		inline void SyncFurnitureVisualsToInventory(TESObjectREFR* a_furniture, bool a_force3DUpdate, BGSInventoryItem* a_tempItemToAdd, bool a_hideCore)
		{
			using func_t = decltype(&SyncFurnitureVisualsToInventory);
			static REL::Relocation<func_t> func{ ID::PowerArmor::SyncFurnitureVisualsToInventory };
			return func(a_furniture, a_force3DUpdate, a_tempItemToAdd, a_hideCore);
		}

		[[nodiscard]] inline SettingT<GameSettingCollection>* GetNewBatteryCapacity()
		{
			static REL::Relocation<SettingT<GameSettingCollection>*> value{ ID::PowerArmor::fNewBatteryCapacity };
			return value.get();
		}
	}
}
