#pragma once

#include "RE/B/BSExtraData.h"

namespace RE
{
	class __declspec(novtable) ExtraTimeLeft :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraTimeLeft };
		static constexpr auto VTABLE{ VTABLE::ExtraTimeLeft };
		static constexpr auto TYPE{ EXTRA_DATA_TYPE::kTimeLeft };

		ExtraTimeLeft(float a_timeLeft) :
			BSExtraData(TYPE),
			timeLeft(a_timeLeft)
		{
			REX::EMPLACE_VTABLE(this);
		}

		// members
		float timeLeft;  // 18
	};
	static_assert(sizeof(ExtraTimeLeft) == 0x20);
}
