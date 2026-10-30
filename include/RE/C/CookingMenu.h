#pragma once

#include "RE/B/BSTArray.h"
#include "RE/E/ExamineMenu.h"

namespace RE
{
	class BGSConstructibleObject;

	// The menu of every bench whose furniture opens it as a cooking menu: the
	// cooking stations and the chemistry stations.
	class __declspec(novtable) CookingMenu :
		public ExamineMenu  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::CookingMenu };
		static constexpr auto VTABLE{ VTABLE::CookingMenu };
		static constexpr auto MENU_NAME{ "CookingMenu"sv };

		// members
		// Every recipe the bench makes, filled by RegisterMenuComponents. The
		// recipe rows of the selected category are drawn from it.
		BSTArray<BGSConstructibleObject*> recipes;  // 810
		std::uint16_t                     unk828;   // 828
	};
	static_assert(sizeof(CookingMenu) == 0x830);
}
