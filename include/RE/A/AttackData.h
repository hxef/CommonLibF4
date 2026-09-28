#pragma once

namespace RE
{
	class AttackData
	{
	public:
		enum class Flag : std::uint32_t
		{
			kNone = 0,
			kIgnoreWeapon = 1U << 0,
			kBashAttack = 1U << 1,
			kPowerAttack = 1U << 2,
			kChargeAttack = 1U << 3,
			kRotatingAttack = 1U << 4,
			kContinuousAttack = 1U << 5
		};

		// members
		float                              damageMult;        // 00
		float                              attackChance;      // 04
		SpellItem*                         attackSpell;       // 08
		REX::TEnumSet<Flag, std::uint32_t> flags;             // 10
		float                              attackAngle;       // 14
		float                              strikeAngle;       // 18
		std::int32_t                       staggerOffset;     // 1C
		BGSKeyword*                        attackType;        // 20
		float                              knockdown;         // 28
		float                              recoveryTime;      // 2C
		float                              actionPointsMult;  // 30
	};
	static_assert(sizeof(AttackData) == 0x38);
}
