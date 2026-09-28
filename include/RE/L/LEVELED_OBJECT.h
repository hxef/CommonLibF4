#pragma once

namespace RE
{
	class ContainerItemExtra;

	// An entry passes a roll from 0 to 99 above chanceNone, and 0 skips the
	// roll. The LVLI, LVLN and LVSP loaders keep the byte only from a record
	// of form version 69 or later and set 0 for an older one.
	class LEVELED_OBJECT
	{
	public:
		// members
		TESForm*            form;        // 00
		ContainerItemExtra* itemExtra;   // 08
		std::uint16_t       count;       // 10
		std::uint16_t       level;       // 12
		std::uint8_t        chanceNone;  // 14
	};
	static_assert(sizeof(LEVELED_OBJECT) == 0x18);
}
