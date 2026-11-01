#pragma once

namespace RE
{
	// The game side of the HUD's pickup prompt, the name and "E) Take" shown
	// while the crosshair rests on something. HUDDataModel holds it at +0x18,
	// and it holds the quick container's HUDQuickContainerDataModel at +0x20.
	class __declspec(novtable) HUDRolloverModel
	{
	public:
		static constexpr auto RTTI{ RTTI::HUDRolloverModel };
		static constexpr auto VTABLE{ VTABLE::HUDRolloverModel };

		virtual ~HUDRolloverModel();  // 00

		// Builds the prompt's state from the crosshair's pick: the name from
		// TESObjectREFR::GetDisplayFullName, the button texts and the
		// legendary mark. Sends it to the HUD as a HUDRolloverStateEvent only
		// when it differs from the last one. The HUD model's update calls it
		// only while its inputs changed, right after the quick container's
		// update.
		void Update()
		{
			using func_t = decltype(&HUDRolloverModel::Update);
			static REL::Relocation<func_t> func{ ID::HUDRolloverModel::Update };
			return func(this);
		}
	};
}
