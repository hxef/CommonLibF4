#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	// What the crosshair rests on. PlayerCharacter holds the one instance and
	// the singleton points at it. ActivatePickRef asks it for its target first
	// and activates that reference, so the target is what "E) Take" picks up.
	class CrosshairPickData
	{
	public:
		[[nodiscard]] static CrosshairPickData* GetSingleton()
		{
			static REL::Relocation<CrosshairPickData**> singleton{ ID::CrosshairPickData::Singleton };
			return *singleton;
		}

		// The reference the crosshair picks, or an empty handle. Copied under
		// the pick's own read lock, so any thread may ask.
		[[nodiscard]] ObjectRefHandle GetTargetHandle()
		{
			using func_t = ObjectRefHandle*(CrosshairPickData*, ObjectRefHandle*);
			static REL::Relocation<func_t> func{ ID::CrosshairPickData::GetTargetHandle };
			ObjectRefHandle handle;
			func(this, &handle);
			return handle;
		}
	};
}
