#pragma once

#include "RE/B/BGSInventoryList.h"
#include "RE/B/BGSTypedFormValuePair.h"
#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/B/BSTTuple.h"
#include "RE/G/GameMenuBase.h"
#include "RE/I/Inventory3DManager.h"
#include "RE/I/InventoryInterface.h"
#include "RE/N/NiPointer.h"
#include "RE/R/Rumble.h"

namespace RE
{
	class BGSSoundDescriptorForm;
	class ExtraDataList;
	class NiNode;

	class __declspec(novtable) WorkbenchMenuBase :
		public GameMenuBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::WorkbenchMenuBase };
		static constexpr auto VTABLE{ VTABLE::WorkbenchMenuBase };

		// The numbers the menu gives to the functions its Flash movie can call.
		// When the movie calls one, Call receives its number in params.userData.
		// ExamineMenu adds its own from 9 on.
		enum class CodeObjectFunction : std::uint32_t
		{
			kRegisterComponents = 0,
			kPlaySound = 1,
			kStartAnimation = 2,
			kConfirmBuild = 3,
			kStartBuildConfirm = 4,
			kCancelConfirm = 5,
			kHideMenu = 6,
			kSendTutorialEvent = 7,
			kOnAlternateButton = 8
		};

		enum class HighlightMode
		{
			kModMenu,
			kAll,
			kWorld
		};

		class InitParams
		{
		public:
			InitParams();

			// members
			ObjectRefHandle            workbenchFurniture;                // 00
			ObjectRefHandle            inventorySource;                   // 04
			InventoryInterface::Handle item{ 0xFFFFFFFF };                // 08
			NiPointer<Actor>           actor{ nullptr };                  // 10
			std::uint32_t              stack{ 0 };                        // 18
			bool                       inspectMode{ true };               // 1C
			bool                       inspectingSingleItem{ false };     // 1D
			bool                       inspectingFeaturedItem{ false };   // 1E
			bool                       showFeaturedItemMessage{ false };  // 1F
			bool                       botCompanion{ false };             // 20
		};
		static_assert(sizeof(InitParams) == 0x28);

		class ModChoiceData
		{
		public:
			// members
			union
			{
				BGSMod::Attachment::Mod* mod;
				TESBoundObject*          object;
			};  // 00
			const BGSConstructibleObject*                                   recipe;         // 08
			BSTArray<BSTTuple<TESForm*, BGSTypedFormValuePair::SharedVal>>* requiredItems;  // 10
			BSTArray<BSTTuple<BGSPerk*, std::uint32_t>>                     requiredPerks;  // 18
			std::uint8_t                                                    rank;           // 30
			std::uint8_t                                                    index;          // 31
		};
		static_assert(sizeof(ModChoiceData) == 0x38);

		virtual ~WorkbenchMenuBase();  // 00

		// override (GameMenuBase)
		virtual void Call(const Params&) override;                                                               // 01
		virtual void MapCodeObjectFunctions() override;                                                          // 02
		virtual void PreDisplay() override;                                                                      // 05
		virtual void OnMenuStackChanged(const BSFixedString& a_topMenuName, bool a_passesTopMenuTest) override;  // 09

		// override (BSInputEventUser)
		virtual bool ShouldHandleEvent(const InputEvent*) override;       // 01
		virtual void OnThumbstickEvent(const ThumbstickEvent*) override;  // 04
		virtual void OnCursorMoveEvent(const CursorMoveEvent*) override;  // 05
		virtual void OnButtonEvent(const ButtonEvent*) override;          // 08

		// add
		virtual void                 OnHideMenu();                                 // 14
		virtual void                 UpdateMenu();                                 // 15
		virtual void                 BuildCanceled();                              // 16
		virtual void                 BuildConfirmed(bool a_ownerIsWorkbench) = 0;  // 17
		virtual bool                 GetWorkbenchHasInventory();                   // 18
		virtual const ModChoiceData* QCurrentModChoiceData();                      // 19
		virtual void                 ShowBuildFailureMessage();                    // 1A
		virtual bool                 TryCreate() = 0;                              // 1B

		void UpdateOptimizedAutoBuildInv()
		{
			using func_t = decltype(&WorkbenchMenuBase::UpdateOptimizedAutoBuildInv);
			static REL::Relocation<func_t> func{ ID::WorkbenchMenuBase::UpdateOptimizedAutoBuildInv };
			return func(this);
		}

		// Fills an empty a_components with the items in a_inventory that make
		// up a_requiredItems, junk standing in for the components it holds, an
		// item and a count each. True when every required item is there.
		// TryCreate fills its box's list this way and ConsumeSelectedItems what
		// it takes, both from optimizedAutoBuildInv.
		bool GetRequiredComponents(const BSTArray<BSTTuple<TESForm*, BGSTypedFormValuePair::SharedVal>>* a_requiredItems, BGSInventoryList* a_inventory, BSScrapArray<BSTTuple<TESBoundObject*, std::uint32_t>>* a_components)
		{
			using func_t = decltype(&WorkbenchMenuBase::GetRequiredComponents);
			static REL::Relocation<func_t> func{ ID::WorkbenchMenuBase::GetRequiredComponents };
			return func(this, a_requiredItems, a_inventory, a_components);
		}

		// Takes a_count of a_object from sharedContainers in order, from each
		// as many as it holds, until a_count is taken.
		void RemoveObjectFromContainers(TESBoundObject* a_object, std::uint32_t a_count)
		{
			using func_t = decltype(&WorkbenchMenuBase::RemoveObjectFromContainers);
			static REL::Relocation<func_t> func{ ID::WorkbenchMenuBase::RemoveObjectFromContainers };
			return func(this, a_object, a_count);
		}

		// Adds a_component to queuedCraftingComponents, whose crafting sounds,
		// or put down sounds for a form with none, UpdateMenu plays 1 at a time
		// once soundsQueued is set. PlayCraftSound sets it. ConsumeSelectedItems
		// queues every required item this way.
		void QueueCraftingComponent(TESForm* a_component)
		{
			using func_t = decltype(&WorkbenchMenuBase::QueueCraftingComponent);
			static REL::Relocation<func_t> func{ ID::WorkbenchMenuBase::QueueCraftingComponent };
			return func(this, a_component);
		}

		// Stops the last build's loop, then, only with something in
		// queuedCraftingComponents, sets soundsQueued and plays a_loop. UpdateMenu
		// stops the loop once the last queued sound ends. BuildConfirmed passes
		// CraftingLoopSound_Examine_DO's sound right after queueing the parts,
		// and ConsumeSelectedItems passes the one its caller hands it.
		void PlayCraftSound(BGSSoundDescriptorForm* a_loop)
		{
			using func_t = decltype(&WorkbenchMenuBase::PlayCraftSound);
			static REL::Relocation<func_t> func{ ID::WorkbenchMenuBase::PlayCraftSound };
			return func(this, a_loop);
		}

		// members
		NiPointer<TESObjectREFR>                    sharedContainerRef;        // 0E0
		NiPointer<TESObjectREFR>                    workbenchContainerRef;     // 0E8
		BSTArray<NiPointer<TESObjectREFR>>          sharedContainers;          // 0F0
		Inventory3DManager                          inv3DModelManager;         // 110
		BGSInventoryList                            optimizedAutoBuildInv;     // 250
		BSTArray<ModChoiceData>                     modChoiceArray;            // 2D0
		std::uint32_t                               modChoiceIndex;            // 2E8
		std::uint32_t                               lastModChoiceIndex;        // 2EC
		bool                                        repairing;                 // 2F0
		bool                                        queueHide;                 // 2F1
		bool                                        hiding;                    // 2F2
		bool                                        VATSWasEnabled;            // 2F3
		NiPointer<TESObjectREFR>                    workbenchRef;              // 2F8
		BSTSmartPointer<ExtraDataList>              recipeExtraDataList;       // 300
		NiPointer<NiNode>                           item3DGeometry;            // 308
		BSTArray<TESForm*>                          queuedCraftingComponents;  // 310
		std::uint64_t                               soundTimer;                // 328
		REX::TEnumSet<HighlightMode, std::uint32_t> highlightMode;             // 330
		Rumble::AutoRumblePause                     autoRumblePause;           // 334
		bool                                        initialized;               // 335
		bool                                        soundsQueued;              // 336
	};
	static_assert(sizeof(WorkbenchMenuBase) == 0x340);
}
