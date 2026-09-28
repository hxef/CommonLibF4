#pragma once

#include "RE/B/BGSTypedFormValuePair.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTTuple.h"
#include "RE/B/BaseFormComponent.h"

namespace RE
{
	enum class ENUM_FORM_ID;
	class CALCED_OBJECT;
	class ContainerItemExtra;
	class LEVELED_OBJECT;
	class INSTANCE_FILTER;

	// leveledLists holds every entry, sorted by level, those a script's
	// AddForm put in among them, and baseListCount counts them all.
	// scriptAddedLists points at the script's entries again, for the save.
	class __declspec(novtable) TESLeveledList :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESLeveledList };
		static constexpr auto VTABLE{ VTABLE::TESLeveledList };

		enum class LeveledListAllBelowForce
		{
			kNever = -1,
			kDefault = 0,
			kAlways = 1,
			kShiftUp = 2,
		};

		// LVLF. CalculateCurrentFormList reads kCalculateForEachItemInCount
		// first: such a list picks once per count asked, use all or not. A use
		// all list takes every entry at or below the level, up to
		// maxUseAllCount results when that is above 0. Any other picks 1
		// entry, from the top level group at or below the level, or with
		// kCalculateFromAllLevels from every entry from the level less
		// GetMaxLevelDifference up to the level. GetMaxLevelDifference is 0
		// unless a plugin changes its game setting, and 0 means no lower bound.
		// kAlways as a_allBelowForce does the same without the flag, and kNever
		// or kShiftUp turn the flag off. A pick never takes a level 0 entry,
		// which a use all list does. Without kCalculateForEachItemInCount,
		// what the list gives is multiplied by the count asked.
		enum class Flag : std::uint8_t
		{
			kCalculateFromAllLevels = 1 << 0,
			kCalculateForEachItemInCount = 1 << 1,
			kUseAll = 1 << 2,
		};

		// add
		// The list's chance none, or the value of its chance global when it has
		// one. A list passes a roll from 0 to 99 at or above it.
		virtual std::uint8_t GetChanceNone();                                          // 07
		virtual bool         GetMultCalc();                                            // 08
		virtual std::int32_t GetMaxLevelDifference() { return 0; }                     // 09
		virtual const char*  GetOverrideName() { return nullptr; }                     // 0A
		virtual bool         GetCanContainFormsOfType(ENUM_FORM_ID a_type) const = 0;  // 0B

		LEVELED_OBJECT* AddLeveledObject(std::uint16_t a_level, std::uint16_t a_count, std::uint8_t a_chanceNone, TESForm* a_item, ContainerItemExtra* a_itemExtra)
		{
			using func_t = decltype(&TESLeveledList::AddLeveledObject);
			static REL::Relocation<func_t> func{ ID::TESLeveledList::AddLeveledObject };
			return func(this, a_level, a_count, a_chanceNone, a_item, a_itemExtra);
		}

		void CalculateCurrentFormList(
			std::uint16_t                a_level,
			std::uint16_t                a_count,
			BSScrapArray<CALCED_OBJECT>& a_outCont,
			LeveledListAllBelowForce     a_allBelowForce = LeveledListAllBelowForce::kDefault,
			bool                         a_clampToPlayer = false,
			INSTANCE_FILTER*             a_instanceFilter = nullptr,
			const char*                  a_overrideName = nullptr)
		{
			using func_t = decltype(&TESLeveledList::CalculateCurrentFormList);
			static REL::Relocation<func_t> func{ ID::TESLeveledList::CalculateCurrentFormList };
			return func(this, a_level, a_count, a_outCont, a_allBelowForce, a_clampToPlayer, a_instanceFilter, a_overrideName);
		}

		void CalculateCurrentFormListForRef(TESObjectREFR* a_ref, BSScrapArray<CALCED_OBJECT>& a_outCont, bool a_legendary)
		{
			using func_t = decltype(&TESLeveledList::CalculateCurrentFormListForRef);
			static REL::Relocation<func_t> func{ ID::TESLeveledList::CalculateCurrentFormListForRef };
			return func(this, a_ref, a_outCont, a_legendary);
		}

		[[nodiscard]] bool GetUseAll() const
		{
			using func_t = decltype(&TESLeveledList::GetUseAll);
			static REL::Relocation<func_t> func{ ID::TESLeveledList::GetUseAll };
			return func(this);
		}

		// members
		TESGlobal*                                                      chanceGlobal;      // 08
		BSTArray<BSTTuple<TESForm*, BGSTypedFormValuePair::SharedVal>>* keywordChances;    // 10
		LEVELED_OBJECT*                                                 leveledLists;      // 18
		LEVELED_OBJECT**                                                scriptAddedLists;  // 20
		std::uint8_t                                                    scriptListCount;   // 28
		std::uint8_t                                                    baseListCount;     // 29
		std::uint8_t                                                    chanceNone;        // 2A
		REX::TEnumSet<Flag, std::uint8_t>                               llFlags;           // 2B
		std::uint8_t                                                    maxUseAllCount;    // 2C
	};
	static_assert(sizeof(TESLeveledList) == 0x30);
}
