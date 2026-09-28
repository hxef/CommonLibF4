#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	namespace ExitPowerArmor
	{
		class Event
		{
		public:
		};
		static_assert(std::is_empty_v<Event>);

		[[nodiscard]] static inline BSTEventSource<ExitPowerArmor::Event>* GetEventSource()
		{
			using func_t = decltype(&ExitPowerArmor::GetEventSource);
			static REL::Relocation<func_t> func{ ID::ExitPowerArmor::GetEventSource };
			return func();
		}
	}
}
