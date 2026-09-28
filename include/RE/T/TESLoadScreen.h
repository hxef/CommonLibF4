#pragma once

#include "RE/B/BGSLocalizedString.h"
#include "RE/T/TESCondition.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class BGSTransform;
	class TESBoundObject;

	class __declspec(novtable) TESLoadScreen :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESLoadScreen };
		static constexpr auto VTABLE{ VTABLE::TESLoadScreen };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kLSCR };

		class LoadNIFData
		{
		public:
			// members
			TESBoundObject* loadNif;                 // 00
			std::int16_t    rotationConstraints[2];  // 08
			TESModel        cameraPath;              // 10
			BGSTransform*   transform;               // 40
			float           zoomConstraints[2];      // 48
		};
		static_assert(sizeof(LoadNIFData) == 0x50);

		// The model of loadNIFData's loadNif when that is a static object or a
		// static collection, and nullptr for any other form or none. The
		// loading menu draws only a model this returns, so a weapon given as
		// loadNif shows nothing.
		[[nodiscard]] TESModel* GetLoadNIFModel() const
		{
			using func_t = decltype(&TESLoadScreen::GetLoadNIFModel);
			static REL::Relocation<func_t> func{ ID::TESLoadScreen::GetLoadNIFModel };
			return func(this);
		}

		// members
		TESCondition       conditions;   // 20
		LoadNIFData*       loadNIFData;  // 28
		BGSLocalizedString loadingText;  // 30
	};
	static_assert(sizeof(TESLoadScreen) == 0x38);
}
