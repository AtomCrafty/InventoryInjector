#pragma once

namespace Data
{
	using RE::MagicSystem::SpellType;

	inline static util::enum_dict<SpellType> SpellTypeMap = {
		{ "spell", SpellType::kSpell },
		{ "disease", SpellType::kDisease },
		{ "power", SpellType::kPower },
		{ "lesserPower", SpellType::kLesserPower },
		{ "ability", SpellType::kAbility },
		{ "poison", SpellType::kPoison },
		{ "enchantment", SpellType::kEnchantment },
		{ "potion", SpellType::kPotion },
		{ "wortcraft", SpellType::kWortCraft },
		{ "leveledSpell", SpellType::kLeveledSpell },
		{ "addiction", SpellType::kAddiction },
		{ "voicePower", SpellType::kVoicePower },
		{ "staffEnchantment", SpellType::kStaffEnchantment },
		{ "scroll", SpellType::kScroll },
	};

	using RE::MagicSystem::Delivery;

	inline static util::enum_dict<Delivery> DeliveryTypeMap = {
		{ "self", Delivery::kSelf },
		{ "touch", Delivery::kTouch },
		{ "aimed", Delivery::kAimed },
		{ "targetActor", Delivery::kTargetActor },
		{ "targetLocation", Delivery::kTargetLocation },
	};

	using RE::MagicSystem::CastingType;

	inline static util::enum_dict<CastingType> CastingTypeMap = {
		{ "constantEffect", CastingType::kConstantEffect },
		{ "fireAndForget", CastingType::kFireAndForget },
		{ "concentration", CastingType::kConcentration },
		{ "scroll", CastingType::kScroll },
	};

	using EffectArchetype = RE::EffectArchetypes::ArchetypeID;

	inline static util::enum_dict<EffectArchetype> EffectArchetypeMap = {
		{ "valueModifier", EffectArchetype::kValueModifier },
		{ "script", EffectArchetype::kScript },
		{ "dispel", EffectArchetype::kDispel },
		{ "cureDisease", EffectArchetype::kCureDisease },
		{ "absorb", EffectArchetype::kAbsorb },
		{ "dualValueModifier", EffectArchetype::kDualValueModifier },
		{ "calm", EffectArchetype::kCalm },
		{ "demoralize", EffectArchetype::kDemoralize },
		{ "frenzy", EffectArchetype::kFrenzy },
		{ "disarm", EffectArchetype::kDisarm },
		{ "commandSummoned", EffectArchetype::kCommandSummoned },
		{ "invisibility", EffectArchetype::kInvisibility },
		{ "light", EffectArchetype::kLight },
		{ "darkness", EffectArchetype::kDarkness },
		{ "nightEye", EffectArchetype::kNightEye },
		{ "lock", EffectArchetype::kLock },
		{ "open", EffectArchetype::kOpen },
		{ "boundWeapon", EffectArchetype::kBoundWeapon },
		{ "summonCreature", EffectArchetype::kSummonCreature },
		{ "detectLife", EffectArchetype::kDetectLife },
		{ "telekinesis", EffectArchetype::kTelekinesis },
		{ "paralysis", EffectArchetype::kParalysis },
		{ "reanimate", EffectArchetype::kReanimate },
		{ "soulTrap", EffectArchetype::kSoulTrap },
		{ "turnUndead", EffectArchetype::kTurnUndead },
		{ "guide", EffectArchetype::kGuide },
		{ "werewolfFeed", EffectArchetype::kWerewolfFeed },
		{ "cureParalysis", EffectArchetype::kCureParalysis },
		{ "cureAddiction", EffectArchetype::kCureAddiction },
		{ "curePoison", EffectArchetype::kCurePoison },
		{ "concussion", EffectArchetype::kConcussion },
		{ "valueAndParts", EffectArchetype::kValueAndParts },
		{ "accumulateMagnitude", EffectArchetype::kAccumulateMagnitude },
		{ "stagger", EffectArchetype::kStagger },
		{ "peakValueModifier", EffectArchetype::kPeakValueModifier },
		{ "cloak", EffectArchetype::kCloak },
		{ "werewolf", EffectArchetype::kWerewolf },
		{ "slowTime", EffectArchetype::kSlowTime },
		{ "rally", EffectArchetype::kRally },
		{ "enhanceWeapon", EffectArchetype::kEnhanceWeapon },
		{ "spawnHazard", EffectArchetype::kSpawnHazard },
		{ "etherealize", EffectArchetype::kEtherealize },
		{ "banish", EffectArchetype::kBanish },
		{ "spawnScriptedRef", EffectArchetype::kSpawnScriptedRef },
		{ "disguise", EffectArchetype::kDisguise },
		{ "grabActor", EffectArchetype::kGrabActor },
		{ "vampireLord", EffectArchetype::kVampireLord },
	};

	using EffectFlag = RE::EffectSetting::EffectSettingData::Flag;

	inline static util::enum_dict<EffectFlag> EffectFlagsMap = {
		{ "hostile", EffectFlag::kHostile },
		{ "recover", EffectFlag::kRecover },
		{ "detrimental", EffectFlag::kDetrimental },
		{ "snapToNavMesh", EffectFlag::kSnapToNavMesh },
		{ "noHitEvent", EffectFlag::kNoHitEvent },
		{ "dispelWithKeywords", EffectFlag::kDispelWithKeywords },
		{ "noDuration", EffectFlag::kNoDuration },
		{ "noArea", EffectFlag::kNoArea },
		{ "fxPersist", EffectFlag::kFXPersist },
		{ "goryVisuals", EffectFlag::kGoryVisuals },
		{ "hideInUI", EffectFlag::kHideInUI },
		{ "noRecast", EffectFlag::kNoRecast },
		{ "powerAffectsMagnitude", EffectFlag::kPowerAffectsMagnitude },
		{ "powerAffectsDuration", EffectFlag::kPowerAffectsDuration },
		{ "painless", EffectFlag::kPainless },
		{ "noHitEffect", EffectFlag::kNoHitEffect },
		{ "noDeathDispel", EffectFlag::kNoDeathDispel },
	};

	inline static util::enum_dict<RE::ActorValue> ActorValueMap = {
		{ "Aggression", RE::ActorValue::kAggression },
		{ "Confidence", RE::ActorValue::kConfidence },
		{ "Energy", RE::ActorValue::kEnergy },
		{ "Morality", RE::ActorValue::kMorality },
		{ "Mood", RE::ActorValue::kMood },
		{ "Assistance", RE::ActorValue::kAssistance },
		{ "OneHanded", RE::ActorValue::kOneHanded },
		{ "TwoHanded", RE::ActorValue::kTwoHanded },
		{ "Marksman", RE::ActorValue::kArchery },
		{ "Block", RE::ActorValue::kBlock },
		{ "Smithing", RE::ActorValue::kSmithing },
		{ "HeavyArmor", RE::ActorValue::kHeavyArmor },
		{ "LightArmor", RE::ActorValue::kLightArmor },
		{ "Pickpocket", RE::ActorValue::kPickpocket },
		{ "Lockpicking", RE::ActorValue::kLockpicking },
		{ "Sneak", RE::ActorValue::kSneak },
		{ "Alchemy", RE::ActorValue::kAlchemy },
		{ "Speechcraft", RE::ActorValue::kSpeech },
		{ "Alteration", RE::ActorValue::kAlteration },
		{ "Conjuration", RE::ActorValue::kConjuration },
		{ "Destruction", RE::ActorValue::kDestruction },
		{ "Illusion", RE::ActorValue::kIllusion },
		{ "Restoration", RE::ActorValue::kRestoration },
		{ "Enchanting", RE::ActorValue::kEnchanting },
		{ "Health", RE::ActorValue::kHealth },
		{ "Magicka", RE::ActorValue::kMagicka },
		{ "Stamina", RE::ActorValue::kStamina },
		{ "HealRate", RE::ActorValue::kHealRate },
		{ "MagickaRate", RE::ActorValue::kMagickaRate },
		{ "StaminaRate", RE::ActorValue::kStaminaRate },
		{ "SpeedMult", RE::ActorValue::kSpeedMult },
		{ "InventoryWeight", RE::ActorValue::kInventoryWeight },
		{ "CarryWeight", RE::ActorValue::kCarryWeight },
		{ "CritChance", RE::ActorValue::kCriticalChance },
		{ "MeleeDamage", RE::ActorValue::kMeleeDamage },
		{ "UnarmedDamage", RE::ActorValue::kUnarmedDamage },
		{ "Mass", RE::ActorValue::kMass },
		{ "VoicePoints", RE::ActorValue::kVoicePoints },
		{ "VoiceRate", RE::ActorValue::kVoiceRate },
		{ "DamageResist", RE::ActorValue::kDamageResist },
		{ "PoisonResist", RE::ActorValue::kPoisonResist },
		{ "FireResist", RE::ActorValue::kResistFire },
		{ "ElectricResist", RE::ActorValue::kResistShock },
		{ "FrostResist", RE::ActorValue::kResistFrost },
		{ "MagicResist", RE::ActorValue::kResistMagic },
		{ "DiseaseResist", RE::ActorValue::kResistDisease },
		{ "PerceptionCondition", RE::ActorValue::kPerceptionCondition },
		{ "EnduranceCondition", RE::ActorValue::kEnduranceCondition },
		{ "LeftAttackCondition", RE::ActorValue::kLeftAttackCondition },
		{ "RightAttackCondition", RE::ActorValue::kRightAttackCondition },
		{ "LeftMobilityCondition", RE::ActorValue::kLeftMobilityCondition },
		{ "RightMobilityCondition", RE::ActorValue::kRightMobilityCondition },
		{ "BrainCondition", RE::ActorValue::kBrainCondition },
		{ "Paralysis", RE::ActorValue::kParalysis },
		{ "Invisibility", RE::ActorValue::kInvisibility },
		{ "NightEye", RE::ActorValue::kNightEye },
		{ "DetectLifeRange", RE::ActorValue::kDetectLifeRange },
		{ "WaterBreathing", RE::ActorValue::kWaterBreathing },
		{ "WaterWalking", RE::ActorValue::kWaterWalking },
		{ "IgnoreCrippledLimbs", RE::ActorValue::kIgnoreCrippledLimbs },
		{ "Fame", RE::ActorValue::kFame },
		{ "Infamy", RE::ActorValue::kInfamy },
		{ "JumpingBonus", RE::ActorValue::kJumpingBonus },
		{ "WardPower", RE::ActorValue::kWardPower },
		{ "RightItemCharge", RE::ActorValue::kRightItemCharge },
		{ "ArmorPerks", RE::ActorValue::kArmorPerks },
		{ "ShieldPerks", RE::ActorValue::kShieldPerks },
		{ "WardDeflection", RE::ActorValue::kWardDeflection },
		{ "Variable01", RE::ActorValue::kVariable01 },
		{ "Variable02", RE::ActorValue::kVariable02 },
		{ "Variable03", RE::ActorValue::kVariable03 },
		{ "Variable04", RE::ActorValue::kVariable04 },
		{ "Variable05", RE::ActorValue::kVariable05 },
		{ "Variable06", RE::ActorValue::kVariable06 },
		{ "Variable07", RE::ActorValue::kVariable07 },
		{ "Variable08", RE::ActorValue::kVariable08 },
		{ "Variable09", RE::ActorValue::kVariable09 },
		{ "Variable10", RE::ActorValue::kVariable10 },
		{ "BowSpeedBonus", RE::ActorValue::kBowSpeedBonus },
		{ "FavorActive", RE::ActorValue::kFavorActive },
		{ "FavorsPerDay", RE::ActorValue::kFavorsPerDay },
		{ "FavorsPerDayTimer", RE::ActorValue::kFavorsPerDayTimer },
		{ "LeftItemCharge", RE::ActorValue::kLeftItemCharge },
		{ "AbsorbChance", RE::ActorValue::kAbsorbChance },
		{ "Blindness", RE::ActorValue::kBlindness },
		{ "WeaponSpeedMult", RE::ActorValue::kWeaponSpeedMult },
		{ "ShoutRecoveryMult", RE::ActorValue::kShoutRecoveryMult },
		{ "BowStaggerBonus", RE::ActorValue::kBowStaggerBonus },
		{ "Telekinesis", RE::ActorValue::kTelekinesis },
		{ "FavorPointsBonus", RE::ActorValue::kFavorPointsBonus },
		{ "LastBribedIntimidated", RE::ActorValue::kLastBribedIntimidated },
		{ "LastFlattered", RE::ActorValue::kLastFlattered },
		{ "MovementNoiseMult", RE::ActorValue::kMovementNoiseMult },
		{ "BypassVendorStolenCheck", RE::ActorValue::kBypassVendorStolenCheck },
		{ "BypassVendorKeywordCheck", RE::ActorValue::kBypassVendorKeywordCheck },
		{ "WaitingForPlayer", RE::ActorValue::kWaitingForPlayer },
		{ "OneHandedMod", RE::ActorValue::kOneHandedModifier },
		{ "TwoHandedMod", RE::ActorValue::kTwoHandedModifier },
		{ "MarksmanMod", RE::ActorValue::kMarksmanModifier },
		{ "BlockMod", RE::ActorValue::kBlockModifier },
		{ "SmithingMod", RE::ActorValue::kSmithingModifier },
		{ "HeavyArmorMod", RE::ActorValue::kHeavyArmorModifier },
		{ "LightArmorMod", RE::ActorValue::kLightArmorModifier },
		{ "PickpocketMod", RE::ActorValue::kPickpocketModifier },
		{ "LockpickingMod", RE::ActorValue::kLockpickingModifier },
		{ "SneakMod", RE::ActorValue::kSneakingModifier },
		{ "AlchemyMod", RE::ActorValue::kAlchemyModifier },
		{ "SpeechcraftMod", RE::ActorValue::kSpeechcraftModifier },
		{ "AlterationMod", RE::ActorValue::kAlterationModifier },
		{ "ConjurationMod", RE::ActorValue::kConjurationModifier },
		{ "DestructionMod", RE::ActorValue::kDestructionModifier },
		{ "IllusionMod", RE::ActorValue::kIllusionModifier },
		{ "RestorationMod", RE::ActorValue::kRestorationModifier },
		{ "EnchantingMod", RE::ActorValue::kEnchantingModifier },
		{ "OneHandedSkillAdvance", RE::ActorValue::kOneHandedSkillAdvance },
		{ "TwoHandedSkillAdvance", RE::ActorValue::kTwoHandedSkillAdvance },
		{ "MarksmanSkillAdvance", RE::ActorValue::kMarksmanSkillAdvance },
		{ "BlockSkillAdvance", RE::ActorValue::kBlockSkillAdvance },
		{ "SmithingSkillAdvance", RE::ActorValue::kSmithingSkillAdvance },
		{ "HeavyArmorSkillAdvance", RE::ActorValue::kHeavyArmorSkillAdvance },
		{ "LightArmorSkillAdvance", RE::ActorValue::kLightArmorSkillAdvance },
		{ "PickpocketSkillAdvance", RE::ActorValue::kPickpocketSkillAdvance },
		{ "LockpickingSkillAdvance", RE::ActorValue::kLockpickingSkillAdvance },
		{ "SneakSkillAdvance", RE::ActorValue::kSneakingSkillAdvance },
		{ "AlchemySkillAdvance", RE::ActorValue::kAlchemySkillAdvance },
		{ "SpeechcraftSkillAdvance", RE::ActorValue::kSpeechcraftSkillAdvance },
		{ "AlterationSkillAdvance", RE::ActorValue::kAlterationSkillAdvance },
		{ "ConjurationSkillAdvance", RE::ActorValue::kConjurationSkillAdvance },
		{ "DestructionSkillAdvance", RE::ActorValue::kDestructionSkillAdvance },
		{ "IllusionSkillAdvance", RE::ActorValue::kIllusionSkillAdvance },
		{ "RestorationSkillAdvance", RE::ActorValue::kRestorationSkillAdvance },
		{ "EnchantingSkillAdvance", RE::ActorValue::kEnchantingSkillAdvance },
		{ "LeftWeaponSpeedMult", RE::ActorValue::kLeftWeaponSpeedMultiply },
		{ "DragonSouls", RE::ActorValue::kDragonSouls },
		{ "CombatHealthRegenMult", RE::ActorValue::kCombatHealthRegenMultiply },
		{ "OneHandedPowerMod", RE::ActorValue::kOneHandedPowerModifier },
		{ "TwoHandedPowerMod", RE::ActorValue::kTwoHandedPowerModifier },
		{ "MarksmanPowerMod", RE::ActorValue::kMarksmanPowerModifier },
		{ "BlockPowerMod", RE::ActorValue::kBlockPowerModifier },
		{ "SmithingPowerMod", RE::ActorValue::kSmithingPowerModifier },
		{ "HeavyArmorPowerMod", RE::ActorValue::kHeavyArmorPowerModifier },
		{ "LightArmorPowerMod", RE::ActorValue::kLightArmorPowerModifier },
		{ "PickpocketPowerMod", RE::ActorValue::kPickpocketPowerModifier },
		{ "LockpickingPowerMod", RE::ActorValue::kLockpickingPowerModifier },
		{ "SneakPowerMod", RE::ActorValue::kSneakingPowerModifier },
		{ "AlchemyPowerMod", RE::ActorValue::kAlchemyPowerModifier },
		{ "SpeechcraftPowerMod", RE::ActorValue::kSpeechcraftPowerModifier },
		{ "AlterationPowerMod", RE::ActorValue::kAlterationPowerModifier },
		{ "ConjurationPowerMod", RE::ActorValue::kConjurationPowerModifier },
		{ "DestructionPowerMod", RE::ActorValue::kDestructionPowerModifier },
		{ "IllusionPowerMod", RE::ActorValue::kIllusionPowerModifier },
		{ "RestorationPowerMod", RE::ActorValue::kRestorationPowerModifier },
		{ "EnchantingPowerMod", RE::ActorValue::kEnchantingPowerModifier },
		{ "DragonRend", RE::ActorValue::kDragonRend },
		{ "AttackDamageMult", RE::ActorValue::kAttackDamageMult },
		{ "HealRateMult", RE::ActorValue::kHealRateMult },
		{ "MagickaRateMult", RE::ActorValue::kMagickaRateMult },
		{ "StaminaRateMult", RE::ActorValue::kStaminaRateMult },
		{ "WerewolfPerks", RE::ActorValue::kWerewolfPerks },
		{ "VampirePerks", RE::ActorValue::kVampirePerks },
		{ "GrabActorOffset", RE::ActorValue::kGrabActorOffset },
		{ "Grabbed", RE::ActorValue::kGrabbed },
		{ "DEPRECATED05", RE::ActorValue::kDEPRECATED05 },
		{ "ReflectDamage", RE::ActorValue::kReflectDamage },
	};
}
