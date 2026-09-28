#pragma once

#include "RE/B/BGSAttachParentArray.h"
#include "RE/B/BGSBipedObjectForm.h"
#include "RE/B/BGSBlockBashData.h"
#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSEquipType.h"
#include "RE/B/BGSInstanceNamingRulesForm.h"
#include "RE/B/BGSKeywordForm.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/B/BGSTypedFormValuePair.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTTuple.h"
#include "RE/T/TESBipedModelForm.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESEnchantableForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESRaceForm.h"

namespace RE
{
	enum class STAGGER_MAGNITUDE;

	class __declspec(novtable) TESObjectARMO :
		public TESBoundObject,             // 000
		public TESFullName,                // 068
		public TESRaceForm,                // 078
		public TESEnchantableForm,         // 088
		public BGSDestructibleObjectForm,  // 0A0
		public BGSPickupPutdownSounds,     // 0B0
		public TESBipedModelForm,          // 0C8
		public BGSEquipType,               // 1D0
		public BGSBipedObjectForm,         // 1E0
		public BGSBlockBashData,           // 1F0
		public BGSKeywordForm,             // 208
		public TESDescription,             // 228
		public BGSInstanceNamingRulesForm  // 240
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectARMO };
		static constexpr auto VTABLE{ VTABLE::TESObjectARMO };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kARMO };
		static constexpr auto TYPE_ID{ BSScript::kArmor };

		class __declspec(novtable) InstanceData :
			public TBO_InstanceData  // 00
		{
		public:
			static constexpr auto RTTI{ RTTI::TESObjectARMO__InstanceData };
			static constexpr auto VTABLE{ VTABLE::TESObjectARMO__InstanceData };

			// override (TBO_InstanceData)
			//
			// Each runs the game's own function by its ID, so a call the
			// compiler makes without the vtable, as on TESObjectARMO::armorData,
			// gets the same answer as a call through it.
			BGSKeywordForm* GetKeywordData() const override  // 01
			{
				using func_t = decltype(&InstanceData::GetKeywordData);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::GetKeywordData };
				return func(this);
			}

			void DeleteKeywordData() override  // 02
			{
				using func_t = decltype(&InstanceData::DeleteKeywordData);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::DeleteKeywordData };
				return func(this);
			}

			void CreateKeywordData() override  // 03
			{
				using func_t = decltype(&InstanceData::CreateKeywordData);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::CreateKeywordData };
				return func(this);
			}

			BGSBlockBashData* GetBlockBashData() const override  // 04
			{
				using func_t = decltype(&InstanceData::GetBlockBashData);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::GetBlockBashData };
				return func(this);
			}

			void DeleteBlockBashData() override  // 05
			{
				using func_t = decltype(&InstanceData::DeleteBlockBashData);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::DeleteBlockBashData };
				return func(this);
			}

			void CreateBlockBashData() override  // 06
			{
				using func_t = decltype(&InstanceData::CreateBlockBashData);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::CreateBlockBashData };
				return func(this);
			}

			BSTArray<EnchantmentItem*>* GetEnchantmentArray() const override  // 07
			{
				using func_t = decltype(&InstanceData::GetEnchantmentArray);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::GetEnchantmentArray };
				return func(this);
			}

			void DeleteEnchantmentArray() override  // 08
			{
				using func_t = decltype(&InstanceData::DeleteEnchantmentArray);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::DeleteEnchantmentArray };
				return func(this);
			}

			void CreateEnchantmentArray() override  // 09
			{
				using func_t = decltype(&InstanceData::CreateEnchantmentArray);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::CreateEnchantmentArray };
				return func(this);
			}

			BSTArray<BGSMaterialSwap*>* GetMaterialSwapArray() const override  // 0A
			{
				using func_t = decltype(&InstanceData::GetMaterialSwapArray);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::GetMaterialSwapArray };
				return func(this);
			}

			void DeleteMaterialSwapArray() override  // 0B
			{
				using func_t = decltype(&InstanceData::DeleteMaterialSwapArray);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::DeleteMaterialSwapArray };
				return func(this);
			}

			void CreateMaterialSwapArray() override  // 0C
			{
				using func_t = decltype(&InstanceData::CreateMaterialSwapArray);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::CreateMaterialSwapArray };
				return func(this);
			}

			float GetWeight() const override  // 0D
			{
				using func_t = decltype(&InstanceData::GetWeight);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::GetWeight };
				return func(this);
			}

			std::int32_t GetValue() const override  // 0E
			{
				using func_t = decltype(&InstanceData::GetValue);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::GetValue };
				return func(this);
			}

			std::uint32_t GetHealth() const override  // 0F
			{
				using func_t = decltype(&InstanceData::GetHealth);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::GetHealth };
				return func(this);
			}

			float GetColorRemappingIndex() const override  // 10
			{
				using func_t = decltype(&InstanceData::GetColorRemappingIndex);
				static REL::Relocation<func_t> func{ ID::TESObjectARMO::InstanceData::GetColorRemappingIndex };
				return func(this);
			}

			// members
			BSTArray<EnchantmentItem*>*                                     enchantments;         // 10
			BSTArray<BGSMaterialSwap*>*                                     materialSwaps;        // 18
			BGSBlockBashData*                                               blockBashData;        // 20
			BGSKeywordForm*                                                 keywords;             // 28
			BSTArray<BSTTuple<TESForm*, BGSTypedFormValuePair::SharedVal>>* damageTypes;          // 30
			BSTArray<BSTTuple<TESForm*, BGSTypedFormValuePair::SharedVal>>* actorValues;          // 38
			float                                                           weight;               // 40
			float                                                           colorRemappingIndex;  // 44
			std::uint32_t                                                   value;                // 48
			std::uint32_t                                                   health;               // 4C
			REX::TEnumSet<STAGGER_MAGNITUDE, std::int32_t>                  staggerRating;        // 50
			std::uint16_t                                                   rating;               // 54
			std::uint16_t                                                   index;                // 56
		};
		static_assert(sizeof(InstanceData) == 0x58);

		class ArmorAddon
		{
		public:
			// members
			std::uint16_t  index;       // 00
			TESObjectARMA* armorAddon;  // 08
		};
		static_assert(sizeof(ArmorAddon) == 0x10);

		bool Protects(const ActorValueInfo* a_condition, bool a_only)
		{
			using func_t = decltype(&TESObjectARMO::Protects);
			static REL::Relocation<func_t> func{ ID::TESObjectARMO::Protects };
			return func(this, a_condition, a_only);
		}

		// members
		InstanceData         armorData;      // 250
		BSTArray<ArmorAddon> modelArray;     // 2A8
		TESObjectARMO*       armorTemplate;  // 2C0
		BGSAttachParentArray attachParents;  // 2C8
	};
	static_assert(sizeof(TESObjectARMO) == 0x2E0);
}
