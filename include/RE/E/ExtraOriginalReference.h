#pragma once

#include "RE/B/BSExtraData.h"
#include "RE/B/BSPointerHandle.h"

namespace RE
{
	// On an item in the barter screen's copy of a trader's goods, names the
	// reference the item was copied from, such as a loose item the trader's
	// faction owns.
	class __declspec(novtable) ExtraOriginalReference :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraOriginalReference };
		static constexpr auto VTABLE{ VTABLE::ExtraOriginalReference };
		static constexpr auto TYPE{ EXTRA_DATA_TYPE::kOriginalReference };

		// members
		ObjectRefHandle originalReference;  // 18
	};
	static_assert(sizeof(ExtraOriginalReference) == 0x20);
}
