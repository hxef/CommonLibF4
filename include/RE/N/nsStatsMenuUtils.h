#pragma once

namespace RE
{
	namespace nsStatsMenuUtils
	{
		// The magnitude and duration the menus show for a_effect of a_item, as
		// the player would get them: with the player's perks, the difficulty and
		// the player's resistance to it. A harmful effect reads negative, except
		// on Rads, where a dose reads positive.
		inline void GetEffectDisplayInfo(MagicItem* a_item, EffectItem* a_effect, float& a_magnitude, float& a_duration)
		{
			using func_t = decltype(&nsStatsMenuUtils::GetEffectDisplayInfo);
			static REL::Relocation<func_t> func{ ID::nsStatsMenuUtils::GetEffectDisplayInfo };
			return func(a_item, a_effect, a_magnitude, a_duration);
		}
	}
}
