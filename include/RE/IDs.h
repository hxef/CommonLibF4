#pragma once

namespace RE::ID
{
	namespace ActiveEffect
	{
		inline constexpr RE::RuntimeID CheckDisplacementSpellOnTarget{ RE::NO_ID };  // 1415178 - inlined
	}

	namespace Actor
	{
		inline constexpr RE::RuntimeID AddPerk{ 2230121 };
		inline constexpr RE::RuntimeID CanBarterItem{ 2229789, 1360005 };
		inline constexpr RE::RuntimeID CanUseIdle{ 2229592 };
		inline constexpr RE::RuntimeID ClearAttackStates{ 2229773 };
		inline constexpr RE::RuntimeID DrinkPotionCallback{ 2231345, 865490 };
		inline constexpr RE::RuntimeID EndInterruptPackage{ 2229892 };
		inline constexpr RE::RuntimeID ExitCover{ 2231166 };
		inline constexpr RE::RuntimeID GetAimVector{ 2230378 };
		inline constexpr RE::RuntimeID GetClosestBone{ 2230051 };
		inline constexpr RE::RuntimeID GetCollisionFilter{ 2277949 };
		inline constexpr RE::RuntimeID GetCombatStyle{ 2231053 };
		inline constexpr RE::RuntimeID GetCurrentAmmoCount{ 2229950, 33890 };
		inline constexpr RE::RuntimeID SetCurrentAmmoCount{ 2229952, 725546 };
		inline constexpr RE::RuntimeID GetCurrentCollisionGroup{ 2229993 };
		inline constexpr RE::RuntimeID GetCurrentFireLocation{ 2231167 };
		inline constexpr RE::RuntimeID GetDesiredSpeed{ 2230410 };
		inline constexpr RE::RuntimeID GetEquippedItemHealth{ 2231099, 783643 };
		inline constexpr RE::RuntimeID GetGhost{ 2229668 };
		inline constexpr RE::RuntimeID GetHostileToActor{ 2229968, 1148686 };
		inline constexpr RE::RuntimeID GetMountHandle{ 2231230 };
		inline constexpr RE::RuntimeID GetLevel{ 2229734, 661617 };
		inline constexpr RE::RuntimeID GetPerkRank{ 2230125, 1368313 };
		inline constexpr RE::RuntimeID GetSex{ 2229674 };
		inline constexpr RE::RuntimeID HandleDefaultAnimationSwitch{ 2229780 };
		inline constexpr RE::RuntimeID HandleItemEquip{ 2229781 };
		inline constexpr RE::RuntimeID HasObjects{ 2229961 };
		inline constexpr RE::RuntimeID InitiateDoNothingPackage{ 2229807 };
		inline constexpr RE::RuntimeID IsCrippled{ 2230998 };
		inline constexpr RE::RuntimeID IsFollowing{ 2230013 };
		inline constexpr RE::RuntimeID IsJumping{ 2229640 };
		inline constexpr RE::RuntimeID IsPathValid{ 2230279 };
		inline constexpr RE::RuntimeID IsPathing{ 2230276, 989661 };
		inline constexpr RE::RuntimeID IsPathingComplete{ 2230274 };
		inline constexpr RE::RuntimeID IsQuadruped{ 2229614 };
		inline constexpr RE::RuntimeID IsSneaking{ 2207655, 1173627 };
		inline constexpr RE::RuntimeID Move{ 2229934 };
		inline constexpr RE::RuntimeID OnMagazineEmpty{ 2231137, 763822 };
		inline constexpr RE::RuntimeID PerformAction{ 2231177 };
		inline constexpr RE::RuntimeID PlaySoundByEditorName{ 2230172 };
		inline constexpr RE::RuntimeID QueueMeleeHit{ 2231141, 204237 };
		inline constexpr RE::RuntimeID RemovePerk{ 2230122 };
		inline constexpr RE::RuntimeID Reset3D{ 2229913 };
		inline constexpr RE::RuntimeID RewardExperience{ 2230428, 262786 };
		inline constexpr RE::RuntimeID SetGunState{ 2231175 };
		inline constexpr RE::RuntimeID SetHeading{ 2229625 };
		inline constexpr RE::RuntimeID TrespassAlarm{ 2229834 };
		inline constexpr RE::RuntimeID UpdateVoiceTimer{ 2230178 };
		inline constexpr RE::RuntimeID GetBodyPartData{ 2229571, 1485196 };
		inline constexpr RE::RuntimeID GetEquippedItem{ 2231089, 1318331 };
		inline constexpr RE::RuntimeID GetEquippedWeapon{ 2231092 };
		inline constexpr RE::RuntimeID GetAimModel{ 2231147 };
		inline constexpr RE::RuntimeID GetCrimeTrackingFaction{ 2229787 };
		inline constexpr RE::RuntimeID ForceDetect{ 2230194 };
		inline constexpr RE::RuntimeID GetDesirability{ 2229946, 1325769 };
		inline constexpr RE::RuntimeID CalcArmorRating1{ 2230008, 1295757 };
		inline constexpr RE::RuntimeID CalcArmorRating2{ 2230009, 843406 };
		inline constexpr RE::RuntimeID RecalcArmorRating{ 2230010 };
		inline constexpr RE::RuntimeID InvalidateArmorRating{ 2229954 };
		inline constexpr RE::RuntimeID GetDamageResist{ 2231085 };
		inline constexpr RE::RuntimeID EquipObject{ 2230478 };
		inline constexpr RE::RuntimeID UnequipObject{ 2230479 };
		inline constexpr RE::RuntimeID EquipShouldEquipItems{ 2229945, 461874 };
		inline constexpr RE::RuntimeID CastWornItemEnchantments{ 2231285 };
		inline constexpr RE::RuntimeID UpdateSoundCallBack{ 2229974 };
		inline constexpr RE::RuntimeID GetFactionRank{ 2230100 };
		inline constexpr RE::RuntimeID IsAngryWithPlayer{ 2229998 };
		inline constexpr RE::RuntimeID RedressIfNeeded{ 2230394 };
		inline constexpr RE::RuntimeID UpdateSprinting{ 2230498 };
		inline constexpr RE::RuntimeID Jump{ 2229650 };
		inline constexpr RE::RuntimeID GetMobilityCrippled{ 2230996 };
		inline constexpr RE::RuntimeID SPECIALModifiedCallback{ 2231020 };
		inline constexpr RE::RuntimeID StopInteractingQuick{ 2231227, 129904 };
		inline constexpr RE::RuntimeID CalculateDetectionFormula{ 2230213 };
		inline constexpr RE::RuntimeID DoHitMe{ 2231148, 881215 };
	}

	namespace ActorEquipManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4798287, 1174340 };
		inline constexpr RE::RuntimeID EquipObject{ 2231392 };
		inline constexpr RE::RuntimeID UnequipObject{ 2231395, 1292493 };
		inline constexpr RE::RuntimeID UnequipItem{ 2231399 };
		inline constexpr RE::RuntimeID ToggleEquipInventoryItem{ 2231402, 332489 };
		inline constexpr RE::RuntimeID CanEquip{ 2231405, 702912 };
	}

	namespace ActorMagicCaster
	{
		inline constexpr RE::RuntimeID AdjustActiveEffect{ 2226091, 940203 };
	}

	namespace ActorUtils
	{
		namespace ArmorRatingVisitorBase
		{
			inline constexpr RE::RuntimeID _operator{ 2227206, 1119011 };
			inline constexpr RE::RuntimeID ctor{ 2227205 };
		}

		inline constexpr RE::RuntimeID GetEquippedArmorDamageResistance{ 2227189 };
		inline constexpr RE::RuntimeID SumEquippedArmorDamageTypes{ 2227208, 1151182 };
		inline constexpr RE::RuntimeID UpdateEquippedArmorResistances{ 2227187, 886654 };
	}

	namespace ActorValue
	{
		inline constexpr RE::RuntimeID Singleton{ 2189587, 405390 };
	}

	namespace AIFormulas
	{
		inline constexpr RE::RuntimeID GetBarterValue{ 2208969, 984344 };
		inline constexpr RE::RuntimeID ComputePickpocketSuccess{ 2208977 };
	}

	namespace AIProcess
	{
		inline constexpr RE::RuntimeID GetCurrentAmmo{ 2232300, 1154936 };
		inline constexpr RE::RuntimeID GetCommandType{ 2231825 };
		inline constexpr RE::RuntimeID GetOccupiedFurniture{ 2232401, 1162965 };
		inline constexpr RE::RuntimeID IsWeaponSubgraphFinishedLoading{ 2231757 };
		inline constexpr RE::RuntimeID KnockExplosion{ 2232384 };
		inline constexpr RE::RuntimeID ProcessGreet{ 2231808, 1174935 };
		inline constexpr RE::RuntimeID RequestLoadAnimationsForWeaponChange{ 2231758 };
		inline constexpr RE::RuntimeID SetActorsDetectionEvent{ 2231738 };
		inline constexpr RE::RuntimeID SetCurrentAmmo{ 2232302 };
		inline constexpr RE::RuntimeID SetCommandType{ 2231826 };
		inline constexpr RE::RuntimeID SetEquippedItem{ 2231627 };
		inline constexpr RE::RuntimeID SetupSpecialIdle{ 2231704 };
		inline constexpr RE::RuntimeID SetWeaponBonesCulled{ 2232535 };
		inline constexpr RE::RuntimeID StopCurrentIdle{ 2231705 };
		inline constexpr RE::RuntimeID SetRunOncePackage{ 2232344 };
		inline constexpr RE::RuntimeID AddToProcedureIndexRunning{ 2718412 };
		inline constexpr RE::RuntimeID ComputeLastTimeProcessed{ 2231541 };
		inline constexpr RE::RuntimeID GetActorLightLevel{ 2231981 };
	}

	namespace AITimer
	{
		inline constexpr RE::RuntimeID fTimer{ 2698609 };
	}

	namespace AimModel
	{
		inline constexpr RE::RuntimeID ApplyConeOfFire{ 2214971, 251609 };
		inline constexpr RE::RuntimeID GetMinMaxCone{ 2214973, 1391756 };
		inline constexpr RE::RuntimeID GetCurrentCone{ 2214974, 300337 };
	}

	namespace AnimationSystemUtils
	{
		inline constexpr RE::RuntimeID WillEventChangeState{ 2214271 };
	}

	namespace ApplyChangesFunctor
	{
		inline constexpr RE::RuntimeID WriteDataImpl{ 2223194 };
	}

	namespace ApplyColorUpdateEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2707340, 421543 };
	}

	namespace BarterMenu
	{
		inline constexpr RE::RuntimeID ClearTradingData{ 2222700 };
		inline constexpr RE::RuntimeID CompleteTrade{ 2222701, 379932 };
		inline constexpr RE::RuntimeID GetCapsOwedByPlayer{ 2222714 };
		inline constexpr RE::RuntimeID GetInvestmentAmount{ 2222715, 1456483 };
	}

	namespace BGSAnimationSystemUtils
	{
		inline constexpr RE::RuntimeID GetActiveSyncInfo{ 2214289 };
		inline constexpr RE::RuntimeID InitializeActorInstant{ 2236393 };
		inline constexpr RE::RuntimeID IsActiveGraphInTransition{ 2214305 };
	}

	namespace BGSAttachParentArray
	{
		inline constexpr RE::RuntimeID SetParentGroupNumber{ 2189125 };
	}

	namespace BGSAudio
	{
		inline constexpr RE::RuntimeID GetSoundDescriptor{ 2214758 };
		inline constexpr RE::RuntimeID GetUIOutputModel{ 2214800 };
		inline constexpr RE::RuntimeID PlaySoundDescriptor{ 2214755, 1239759 };
	}

	namespace BGSConstructibleObject
	{
		inline constexpr RE::RuntimeID FindRecipeForCreatedForm{ 2197324 };
		inline constexpr RE::RuntimeID PlayerPassesConditions{ 2197318 };
	}

	namespace BGSCraftItemEvent
	{
		inline constexpr RE::RuntimeID EventIndex{ 2663409 };
	}

	namespace BGSCreatedObjectManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4796296 };
		inline constexpr RE::RuntimeID DecrementRef{ 2228455 };
		inline constexpr RE::RuntimeID IncrementRef{ 2228454 };
	}

	namespace BGSDefaultObject
	{
		inline constexpr RE::RuntimeID Singleton{ 4797762 };
		inline constexpr RE::RuntimeID ctor{ 2197003 };
	}

	namespace BGSDefaultObjectManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4796209, 869877 };
	}

	namespace BGSDynamicPersistenceManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4796312 };
		inline constexpr RE::RuntimeID PromoteReference{ 2193819 };
		inline constexpr RE::RuntimeID DemoteReference{ 2193820 };
	}

	namespace BGSEntryPoint
	{
		inline constexpr RE::RuntimeID HandleEntryPoint{ 2206243, 714336 };
	}

	namespace BGSHackTerminal
	{
		inline constexpr RE::RuntimeID EventIndex{ 2663434 };
	}

	namespace BGSInventoryInterface
	{
		inline constexpr RE::RuntimeID Singleton{ 4796586, 501899 };
		inline constexpr RE::RuntimeID RequestInventoryItem{ 2194009, 1200959 };
		inline constexpr RE::RuntimeID ForceMergeStacks{ 2194032 };
	}

	namespace BGSInventoryItem
	{
		inline constexpr RE::RuntimeID FindAndWriteStackData{ 2194123, 770140 };
		inline constexpr RE::RuntimeID GetDisplayFullName1{ 2194079 };
		inline constexpr RE::RuntimeID GetDisplayFullName2{ 2194080, 623232 };
		inline constexpr RE::RuntimeID GetInstanceData{ 2194072, 491493 };
		inline constexpr RE::RuntimeID GetInventoryValue{ 2194099, 430292 };
		inline constexpr RE::RuntimeID GetExtraDataAt{ 2194092 };
		inline constexpr RE::RuntimeID MergeStacks{ 2194109, 1132179 };
		inline constexpr RE::RuntimeID IsEquipped{ 2194086, 806787 };
		inline constexpr RE::RuntimeID GetStackCount{ 2194107 };
		inline constexpr RE::RuntimeID IsQuestObject{ 2194076 };
		inline constexpr RE::RuntimeID GetTotalWeight{ 2194074 };
	}

	namespace BGSInventoryItemUtils
	{
		inline constexpr RE::RuntimeID GetInventoryValue{ 2194127, 23543 };
	}

	namespace BGSInventoryList
	{
		inline constexpr RE::RuntimeID AddItem1{ 2194159, 19103 };
		inline constexpr RE::RuntimeID AddItem2{ 2194160, 98986 };
		inline constexpr RE::RuntimeID AddStack{ 2194191, 564032 };
		inline constexpr RE::RuntimeID BuildFromContainer{ 2194158, 551792 };
		inline constexpr RE::RuntimeID BuildFromContainer_Impl{ 2194196, 801118 };
		inline constexpr RE::RuntimeID Clear{ 2194162, 1080446 };
		inline constexpr RE::RuntimeID ctor{ 2194153, 845050 };
		inline constexpr RE::RuntimeID FindAndWriteStackDataForItem{ 2194179, 1354005 };
		inline constexpr RE::RuntimeID FindItemIndex{ 2194165 };
		inline constexpr RE::RuntimeID GetItemCount{ 2194163 };
		inline constexpr RE::RuntimeID GetQuestItemCount{ 2194164 };
		inline constexpr RE::RuntimeID RemoveItem1{ 2194169 };
	}

	namespace BGSKeyword
	{
		inline constexpr RE::RuntimeID TypedKeywords{ 4799330, 1095775 };
	}

	namespace BGSKeywordForm
	{
		inline constexpr RE::RuntimeID AddKeyword{ 2192766 };
		inline constexpr RE::RuntimeID RemoveKeyword{ 2192767 };
	}

	namespace BGSListForm
	{
		inline constexpr RE::RuntimeID AddScriptAddedForm{ 2203262, 1064874 };
	}

	namespace BGSLoadGameBuffer
	{
		inline constexpr RE::RuntimeID LoadDataEndian{ 2228270 };
	}

	namespace BGSLocalizedStringDL
	{
		inline constexpr RE::RuntimeID GetText{ 2194238 };
	}

	namespace BGSLocalizedStringIL
	{
		inline constexpr RE::RuntimeID LookupByID{ 2194243, 496859 };
	}

	namespace BGSMessage
	{
		inline constexpr RE::RuntimeID AddButton{ RE::NO_ID };  // inlined
		inline constexpr RE::RuntimeID GetConvertedDescription{ 2203353 };
	}

	namespace BGSMod
	{
		namespace Attachment
		{
			namespace Mod
			{
				inline constexpr RE::RuntimeID FindModsForLooseMod{ 2197524 };
				inline constexpr RE::RuntimeID GetData{ RE::NO_ID };  // 33658 - inlined?
				inline constexpr RE::RuntimeID GetLooseMod{ 2197514 };
				inline constexpr RE::RuntimeID GetTargetOMODKeywords{ 2197534, 698469 };
				inline constexpr RE::RuntimeID SetLooseMod{ 2197558 };
			}

			inline constexpr RE::RuntimeID GetAllLooseMods{ 2661620 };
		}

		namespace Container
		{
			inline constexpr RE::RuntimeID GetData{ 2189206 };
		}

		namespace Template
		{
			namespace Items
			{
				inline constexpr RE::RuntimeID CreateInstanceDataForObjectAndExtra{ 2189244 };
			}
		}
	}

	namespace BGSNumericIDIndex
	{
		inline constexpr RE::RuntimeID GetNumericID{ 2228199 };
		inline constexpr RE::RuntimeID SetNumericID{ 2228200 };
	}

	namespace BGSObjectInstance
	{
		inline constexpr RE::RuntimeID ctor{ 2197563, 1095748 };
	}

	namespace BGSObjectInstanceExtra
	{
		inline constexpr RE::RuntimeID ctor{ 2189015 };
		inline constexpr RE::RuntimeID AttachModToReference{ 2189033 };
		inline constexpr RE::RuntimeID HasMod{ 2189026 };
		inline constexpr RE::RuntimeID AddMod{ 2189025 };
		inline constexpr RE::RuntimeID RemoveInvalidMods{ 2189028 };
		inline constexpr RE::RuntimeID RemoveMod{ 2189027 };
		inline constexpr RE::RuntimeID GetNumMods{ 2189019 };
	}

	namespace BGSOpenCloseForm
	{
		inline constexpr RE::RuntimeID AutoCloseRef{ 2192797 };
		inline constexpr RE::RuntimeID GetOpenState{ 2192799, 1480253 };
		inline constexpr RE::RuntimeID HasOnlyOpenCloseAnims{ 2192796 };
		inline constexpr RE::RuntimeID IsAnimating{ 2192801 };
		inline constexpr RE::RuntimeID IsOpenCloseEvent{ 2192795 };
		inline constexpr RE::RuntimeID IsOpenCloseForm{ 2192790 };
		inline constexpr RE::RuntimeID SetOpenState{ 2192798 };
	}

	namespace BGSPerkRankArray
	{
		inline constexpr RE::RuntimeID AllocatePerkRankArray{ 2192837 };
		inline constexpr RE::RuntimeID ClearPerks{ 2192836 };
	}

	namespace BGSPickLockEvent
	{
		inline constexpr RE::RuntimeID EventIndex{ 2663410 };
		inline constexpr RE::RuntimeID ctor{ 2214021 };
	}

	namespace BGSPrimitive
	{
		inline constexpr RE::RuntimeID CreateAbstract{ 2194290 };
	}

	namespace BGSProjectile
	{
		inline constexpr RE::RuntimeID CollidesWithSmallTransparentLayer{ 2197620 };
	}

	namespace BGSQuestInstanceText
	{
		inline constexpr RE::RuntimeID ParseString{ 2206630 };
	}

	namespace BGSSaveLoadFileEntry
	{
		inline constexpr RE::RuntimeID DeleteGame{ 2227855 };
		inline constexpr RE::RuntimeID LoadData{ 2227871 };
	}

	namespace BGSSaveGameBuffer
	{
		inline constexpr RE::RuntimeID SaveDataEndian{ 2228319 };
	}

	namespace BGSSaveLoadGame
	{
		inline constexpr RE::RuntimeID Singleton{ 2697789, 177947 };
		inline constexpr RE::RuntimeID HasChangeFlags{ 2227898, 688165 };
	}

	namespace BGSSaveLoadManager
	{
		inline constexpr RE::RuntimeID Singleton{ 2697802 };
		inline constexpr RE::RuntimeID BuildSaveGameList{ 2228053 };
		inline constexpr RE::RuntimeID GetSaveDirectoryPath{ 2228028 };
		inline constexpr RE::RuntimeID QueueSaveLoadTask{ 2228080 };
	}

	namespace BGSScene
	{
		inline constexpr RE::RuntimeID ResetAllSceneActions{ 2206864 };
		inline constexpr RE::RuntimeID SetSceneActive{ 2206845 };
	}

	namespace BGSSceneActionNPCResponseDialogue
	{
		inline constexpr RE::RuntimeID GetCurrentTopicInfo{ 2196825 };
		inline constexpr RE::RuntimeID UpdateAction1{ 2196817 };
		inline constexpr RE::RuntimeID UpdateAction2{ 2196800 };
	}

	namespace BGSSceneActionPlayerDialogue
	{
		inline constexpr RE::RuntimeID GetCurrentTopicInfo{ 2196825 };
	}

	namespace BGSStoryEventManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4800796 };
		inline constexpr RE::RuntimeID AddEvent{ 2214088 };
	}

	namespace BGSSynchronizedAnimationManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4798289 };
		inline constexpr RE::RuntimeID IsReferenceInSynchronizedScene{ 2214437 };
	}

	namespace BGSTerminal
	{
		inline constexpr RE::RuntimeID GetHackDifficultyLockLevel{ 2197777 };
		inline constexpr RE::RuntimeID IsTerminalRefInUse{ 2197779 };
		inline constexpr RE::RuntimeID Show{ 2197776 };
		inline constexpr RE::RuntimeID Activate{ 2197778 };
	}

	namespace BGSTerrainManager
	{
		inline constexpr RE::RuntimeID RecomputeQuickCullData{ 2213622 };
	}

	namespace bhkCharacterController
	{
		inline constexpr RE::RuntimeID Jump{ 2278191 };
	}

	namespace bhkNPCollisionObject
	{
		inline constexpr RE::RuntimeID CreateObject{ 2277912 };
		inline constexpr RE::RuntimeID CopyMembers{ 2277907 };
		inline constexpr RE::RuntimeID GetBody{ 2277926 };
		inline constexpr RE::RuntimeID GetBodyId{ 2277928 };
		inline constexpr RE::RuntimeID GetShape{ 2277929 };
		inline constexpr RE::RuntimeID GetTransform{ 2277944 };
		inline constexpr RE::RuntimeID SetMotionType{ 2277913 };
		inline constexpr RE::RuntimeID SetTransform{ 2277945 };
		inline constexpr RE::RuntimeID Getbhk{ 2277919 };
	}

	namespace hknpBodyCinfo
	{
		inline constexpr RE::RuntimeID ctor{ 2255967 };
	}

	namespace bhkPhysicsSystem
	{
		inline constexpr RE::RuntimeID ctor{ 2278008 };
		inline constexpr RE::RuntimeID AddToWorld{ 2278019 };
		inline constexpr RE::RuntimeID CopyMembers{ 2278007 };
	}

	namespace bhkPickData
	{
		inline constexpr RE::RuntimeID ctor{ 2230668 };
		inline constexpr RE::RuntimeID SetStartEnd{ 2236622 };
		inline constexpr RE::RuntimeID Reset{ 2277761 };
		inline constexpr RE::RuntimeID HasHit{ 2277770 };
		inline constexpr RE::RuntimeID GetHitFraction{ 2277771 };
		inline constexpr RE::RuntimeID GetAllCollectorRayHitSize{ 2277765 };
		inline constexpr RE::RuntimeID GetAllCollectorRayHitAt{ 2277766 };
		inline constexpr RE::RuntimeID SortAllCollectorHits{ 2277767 };
		inline constexpr RE::RuntimeID GetNiAVObject{ 2277764 };
		inline constexpr RE::RuntimeID GetBody{ 2277762 };
	}

	namespace bhkUtilFunctions
	{
		inline constexpr RE::RuntimeID FindFirstCollisionObject{ 2278093 };
		inline constexpr RE::RuntimeID GetAVObjectFromBodyID{ 2278085 };
	}

	namespace bhkWorld
	{
		inline constexpr RE::RuntimeID AddObjects{ 2277719 };
		inline constexpr RE::RuntimeID AddPhysicsSystem{ 2277752 };
		inline constexpr RE::RuntimeID IsBodyAdded{ 2277997 };
		inline constexpr RE::RuntimeID RemovePhysicsSystem{ 2277753 };
		inline constexpr RE::RuntimeID Activate{ 2277728 };
		inline constexpr RE::RuntimeID Enable{ 2277725 };
		inline constexpr RE::RuntimeID EnableCollision{ 2277730 };
		inline constexpr RE::RuntimeID IsActive{ 2277729 };
		inline constexpr RE::RuntimeID RemoveObjects{ 2277721 };
		inline constexpr RE::RuntimeID SetCollisionGroup{ 2277722 };
		inline constexpr RE::RuntimeID SetDismemberedLimb{ 2277726 };
		inline constexpr RE::RuntimeID SetMotion{ 2277723 };
	}

	namespace BipedAnim
	{
		inline constexpr RE::RuntimeID SetObjectGraphVariableInt{ 2194367, 831035 };
	}

	namespace BIPOBJECT
	{
		inline constexpr RE::RuntimeID dtor{ 2194330 };
	}

	namespace BSAudioManager
	{
		inline constexpr RE::RuntimeID Singleton{ 2703058 };
		inline constexpr RE::RuntimeID PlatformSingleton{ 2267094 };
		inline constexpr RE::RuntimeID GetSoundHandle{ 2267105 };
		inline constexpr RE::RuntimeID GetSoundHandleByName{ 2267104 };
		inline constexpr RE::RuntimeID GetSoundHandleByFile{ 2267103 };
	}

	namespace BSAwardsSystemUtility
	{
		inline constexpr RE::RuntimeID Singleton{ 2255115 };
	}

	namespace BSCullingProcess
	{
		inline constexpr RE::RuntimeID Process1{ 2275931 };
		inline constexpr RE::RuntimeID Process2{ 2275932 };
	}

	namespace BSGFxDisplayObject
	{
		inline constexpr RE::RuntimeID dtor{ 2287327, 1122133 };
	}

	namespace BSGFxObject
	{
		inline constexpr RE::RuntimeID AcquireFlashObjectByMemberName{ 2287014 };
		inline constexpr RE::RuntimeID AcquireFlashObjectByPath{ 2287015 };
	}

	namespace BSGFxShaderFXTarget
	{
		inline constexpr RE::RuntimeID ProcessEvent{ 2287033, 848563 };
		inline constexpr RE::RuntimeID AppendShaderFXInfos{ 2287021, 544646 };
		inline constexpr RE::RuntimeID CreateAndSetFiltersToColor1{ 2287028 };
		inline constexpr RE::RuntimeID CreateAndSetFiltersToColor2{ 2287029 };
		inline constexpr RE::RuntimeID CreateAndSetFiltersToHUD{ 2287027, 876001 };
		inline constexpr RE::RuntimeID EnableShadedBackground{ 2287022, 278402 };
	}

	namespace BSGraphics
	{
		namespace Renderer
		{
			inline constexpr RE::RuntimeID IncRef{ 2276869 };
			inline constexpr RE::RuntimeID DecRef{ 2276870 };
			inline constexpr RE::RuntimeID Begin{ 2276833 };
			inline constexpr RE::RuntimeID End{ 2276834 };
			inline constexpr RE::RuntimeID Lock{ 2276828 };
			inline constexpr RE::RuntimeID Unlock{ 2276829 };
		}

		namespace RenderTargetManager
		{
			inline constexpr RE::RuntimeID Singleton{ 2666735 };
			inline constexpr RE::RuntimeID SetEnableDynamicResolution{ 2277197 };
		}

		namespace State
		{
			inline constexpr RE::RuntimeID Singleton{ 2704621, 600795 };
		}

		namespace Utility
		{
			inline constexpr RE::RuntimeID ConvertHALFToNiPoint3Stream{ 2277113 };
			inline constexpr RE::RuntimeID ConvertNiPoint3ToHALFStream{ 2277114 };
			inline constexpr RE::RuntimeID PackVertexData{ 2277106 };
			inline constexpr RE::RuntimeID UnpackVertexData{ 2277129 };
		}

		inline constexpr RE::RuntimeID GetRendererData{ 2704429 };
		inline constexpr RE::RuntimeID GetCurrentRendererWindow{ 2704431 };
	}

	namespace BSIdleInputWatcher
	{
		inline constexpr RE::RuntimeID Singleton{ 4801008 };
	}

	namespace BSInputDeviceManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4807767, 1284221 };
	}

	namespace BSInputEnableLayer
	{
		inline constexpr RE::RuntimeID DecRef{ 2268272 };
	}

	namespace BSInputEnableManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4796297 };
		inline constexpr RE::RuntimeID AllocateNewLayer{ 2268244 };
		inline constexpr RE::RuntimeID EnableUserEvent{ 2268263 };
		inline constexpr RE::RuntimeID EnableOtherEvent{ 2268265 };
	}

	namespace BSModelDB
	{
		inline constexpr RE::RuntimeID Demand1{ 2275153 };
		inline constexpr RE::RuntimeID Demand2{ 2275154 };
	}

	namespace BSPointerHandle
	{
		namespace BSPointerHandleManagerInterface
		{
			inline constexpr RE::RuntimeID CreateHandle{ 2188375 };
			inline constexpr RE::RuntimeID GetHandle{ 2188676 };
			inline constexpr RE::RuntimeID GetSmartPointer{ 2188681, 967277 };
		}
	}

	namespace BSRandom
	{
		inline constexpr RE::RuntimeID UnsignedInt{ 2267950 };
		inline constexpr RE::RuntimeID Float{ 2267953, 1118937 };
		inline constexpr RE::RuntimeID Float0To1{ 2267954, 1025602 };
		inline constexpr RE::RuntimeID Int{ 2267952 };
	}

	namespace BSResource_Archive2_AsyncReaderStream
	{
		inline constexpr RE::RuntimeID DoOpen{ 2269387 };
		inline constexpr RE::RuntimeID DoClose{ 2269380 };
		inline constexpr RE::RuntimeID DoClone{ 2269379 };
		inline constexpr RE::RuntimeID DoStartRead{ 2269395 };
		inline constexpr RE::RuntimeID DoStartPacketAlignedBufferedRead{ 2269394 };
		inline constexpr RE::RuntimeID DoWait{ 2269399 };
	}

	namespace BSResource_Archive2_ReaderStream
	{
		inline constexpr RE::RuntimeID DoOpen{ 2269280 };
		inline constexpr RE::RuntimeID DoClose{ 2269285 };
		inline constexpr RE::RuntimeID DoGetKey{ 2269288 };
		inline constexpr RE::RuntimeID DoClone{ 2269279 };
		inline constexpr RE::RuntimeID DoRead{ 2269281 };
		inline constexpr RE::RuntimeID DoSeek{ 2269282 };
		inline constexpr RE::RuntimeID DoPrefetchAll{ 2269390 };
		inline constexpr RE::RuntimeID DoCreateAsync{ 2269287 };
	}

	namespace BSResource_EntryDBBaseUtil
	{
		inline constexpr RE::RuntimeID ReleaseEntryAction{ 2269463 };
	}

	namespace BSResource_GlobalLocations
	{
		inline constexpr RE::RuntimeID Singleton{ 2703394 };
	}

	namespace BSResource_GlobalPaths
	{
		inline constexpr RE::RuntimeID Singleton{ 2703393 };
	}

	namespace BSResource
	{
		inline constexpr RE::RuntimeID RegisterLocation{ 2269481 };
		inline constexpr RE::RuntimeID GetOrCreateStream{ 2269490 };

		namespace ID
		{
			inline constexpr RE::RuntimeID GenerateFromPath{ 2269259 };
		}
	}

	namespace BSResourceNiBinaryStream
	{
		inline constexpr RE::RuntimeID Seek{ 2269834 };
		inline constexpr RE::RuntimeID DoRead{ 2269839 };
		inline constexpr RE::RuntimeID DoWrite{ 2269840 };
		inline constexpr RE::RuntimeID GetBufferInfo{ 2269836 };
		inline constexpr RE::RuntimeID Ctor{ 2269830 };
		inline constexpr RE::RuntimeID Dtor{ 2269832 };
		inline constexpr RE::RuntimeID BinaryStreamWithRescan{ 2205871 };
	}

	namespace BSScaleformManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4796889 };
		inline constexpr RE::RuntimeID LoadMovie{ 2287422 };
		inline constexpr RE::RuntimeID GetMovieFilename{ 2287428 };
		inline constexpr RE::RuntimeID InitMovieViewport{ 4494254 };
		inline constexpr RE::RuntimeID FileUncacheOnMenuOpen{ 2667999 };
		inline constexpr RE::RuntimeID IsNameValid{ 2287425 };
	}

	namespace BSScaleformRenderer
	{
		inline constexpr RE::RuntimeID Initialize{ 2284938 };
	}

	namespace BSScaleformTranslator
	{
		inline constexpr RE::RuntimeID AddTranslations{ 2295298 };
	}

	namespace BSScript_Array
	{
		inline constexpr RE::RuntimeID ctor{ 2314915 };
	}

	namespace BSScript_ArrayWrapper
	{
		inline constexpr RE::RuntimeID ReplaceArray{ 2250435 };
	}

	namespace BSScript_Internal_NativeFunctionBase
	{
		inline constexpr RE::RuntimeID Call{ 2314780 };
	}

	namespace BSScript_Internal_Stack
	{
		inline constexpr RE::RuntimeID GetPageForFrame{ 2314680 };
		inline constexpr RE::RuntimeID GetStackFrameVariable{ 2314681 };
	}

	namespace BSScript_Object
	{
		inline constexpr RE::RuntimeID DecRef{ 2314437 };
		inline constexpr RE::RuntimeID GetHandle{ 2314431 };
		inline constexpr RE::RuntimeID IncRef{ 2314436 };
	}

	namespace BSScript_ObjectTypeInfo
	{
		inline constexpr RE::RuntimeID dtor{ 2314513 };
	}

	namespace BSScript_ObjectBindPolicy
	{
		inline constexpr RE::RuntimeID BindObject{ 2314370 };
		inline constexpr RE::RuntimeID UnbindObject{ 2314372 };
	}

	namespace BSScript_ZeroFunctionArguments
	{
		inline constexpr RE::RuntimeID ZeroFunctionArguments{ 2314598 };
	}

	namespace BSShaderProperty
	{
		inline constexpr RE::RuntimeID SetMaterial{ 2316285 };
	}

	namespace BSShaderResourceManager
	{
		inline constexpr RE::RuntimeID Singleton{ 2703483 };
	}

	namespace BSShaderTextureSet
	{
		inline constexpr RE::RuntimeID CreateObject{ 2316324 };
	}

	namespace BSShaderUtil
	{
		inline constexpr RE::RuntimeID SetMaterialAlpha{ 2317566 };
	}

	namespace BSSoundHandle
	{
		inline constexpr RE::RuntimeID ClearFollowedObject{ 2267067 };
		inline constexpr RE::RuntimeID FadeInPlay{ 2267075 };
		inline constexpr RE::RuntimeID FadeOutAndRelease{ 2267076 };
		inline constexpr RE::RuntimeID FadeTo{ 2267074 };
		inline constexpr RE::RuntimeID GetDuration{ 2267062 };
		inline constexpr RE::RuntimeID IsEnvelopeLoop{ 2267051 };
		inline constexpr RE::RuntimeID IsPaused{ 2267047 };
		inline constexpr RE::RuntimeID IsPlaying{ 2267046 };
		inline constexpr RE::RuntimeID IsValid{ 2267048 };
		inline constexpr RE::RuntimeID Pause{ 2267044 };
		inline constexpr RE::RuntimeID Play{ 2267042 };
		inline constexpr RE::RuntimeID PlayAfter{ 2267043 };
		inline constexpr RE::RuntimeID SetFrequency{ 2267059 };
		inline constexpr RE::RuntimeID SetFrequencyVariance{ 2267060 };
		inline constexpr RE::RuntimeID SetObjectToFollow{ 2267066 };
		inline constexpr RE::RuntimeID SetOutputModel{ 2267053 };
		inline constexpr RE::RuntimeID SetPosition{ 2267064 };
		inline constexpr RE::RuntimeID SetStaticAttenuation{ 2267061 };
		inline constexpr RE::RuntimeID Stop{ 2267045 };
	}

	namespace BSSpinLock
	{
		namespace BSReadWriteLock
		{
			inline constexpr RE::RuntimeID lock_read{ 2267897, 1573164 };
			inline constexpr RE::RuntimeID lock_write{ 2267898, 336186 };
			inline constexpr RE::RuntimeID try_lock_read{ 2267901, 1372435 };
			inline constexpr RE::RuntimeID try_lock_write{ 2267902, 1279453 };
		}

		inline constexpr RE::RuntimeID lock{ 2192245, 1425657 };
	}

	namespace BSStringPool
	{
		namespace Entry
		{
			inline constexpr RE::RuntimeID Release{ 2268720, 1204430 };
		}

		inline constexpr RE::RuntimeID GetEntry_char{ 2268729, 507142 };
		inline constexpr RE::RuntimeID GetEntry_wchar{ 2268730 };
	}

	namespace BSStringT
	{
		inline constexpr RE::RuntimeID Set{ 4471693, 407804 };
	}

	namespace BSSystemFileStreamer
	{
		inline constexpr RE::RuntimeID UncacheAll{ 2268797 };
	}

	namespace BSTempEffectDebris
	{
		inline constexpr RE::RuntimeID ctor{ 2212059 };
	}

	namespace BSTempEffectWeaponBlood
	{
		inline constexpr RE::RuntimeID ClearEffectForWeapon{ 2212158 };
	}

	namespace BSTEvent
	{
		namespace BSTGlobalEvent
		{
			inline constexpr RE::RuntimeID Singleton{ 4796078, 1424022 };
		}
	}

	namespace BSThreadEvent
	{
		inline constexpr RE::RuntimeID InitSDM{ 2268180 };
	}

	namespace BSTimer
	{
		inline constexpr RE::RuntimeID Singleton{ 2703179 };
		inline constexpr RE::RuntimeID QGlobalTimeMultiplier{ 2666307 };
		inline constexpr RE::RuntimeID QGlobalTimeMultiplierTarget{ 2666308 };
		inline constexpr RE::RuntimeID SetGlobalTimeMultiplier{ 2267970 };
	}

	namespace BSUIMessageData
	{
		inline constexpr RE::RuntimeID SendUIBoolMessage{ 2284981 };
		inline constexpr RE::RuntimeID SendUIStringMessage{ 2284977 };
		inline constexpr RE::RuntimeID SendUIPtrMessage{ 2284982 };
		inline constexpr RE::RuntimeID SendUIStringUIntMessage{ 2284979 };
	}

	namespace BSUtilities
	{
		inline constexpr RE::RuntimeID ConvertFloatToHalf{ 2212098 };
		inline constexpr RE::RuntimeID ConvertHalfToFloat{ 2195843 };
		inline constexpr RE::RuntimeID GetObjectByName{ 2274841 };
		inline constexpr RE::RuntimeID GetFlattenedBoneTree{ 2274858 };
	}

	namespace BSXAudio2Audio
	{
		inline constexpr RE::RuntimeID Singleton{ 2703127 };
	}

	namespace BSXAudio2Graph
	{
		inline constexpr RE::RuntimeID Singleton{ 2703127 };
		inline constexpr RE::RuntimeID Ctor{ 2267547 };
		inline constexpr RE::RuntimeID OnProcessingPassEnd{ 2267567 };
	}

	namespace Calendar
	{
		inline constexpr RE::RuntimeID Singleton{ 4796378, 1444952 };
		inline constexpr RE::RuntimeID GetDaysPassed{ 2228563 };
	}

	namespace CanDisplayNextHUDMessage
	{
		inline constexpr RE::RuntimeID GetEventSource{ 4802332 };
	}

	namespace CellAttachDetachEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2192250 };
	}

	namespace ColorUpdateEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 4802831 };
	}

	namespace CombatBehaviorFindObject
	{
		inline constexpr RE::RuntimeID EvaluateArmor{ 2241004, 1333384 };
	}

	namespace CombatFormulas
	{
		inline constexpr RE::RuntimeID GetWeaponDisplayAccuracy{ 2209049, 1137654 };
		inline constexpr RE::RuntimeID GetWeaponDisplayDamage{ 2209046, 1431014 };
		inline constexpr RE::RuntimeID GetWeaponDisplayRange{ 2209047, 1324037 };
		inline constexpr RE::RuntimeID GetWeaponDisplayRateOfFire{ 2209048, 1403591 };
		inline constexpr RE::RuntimeID CalcTargetedLimbDamage{ 2209033 };
		inline constexpr RE::RuntimeID CalcWeaponDamage{ 2209001, 651643 };
		inline constexpr RE::RuntimeID CalcWeaponSpeedMult{ 2209006, 700855 };
		inline constexpr RE::RuntimeID CalcVATSCriticalCharge{ 2209089, 678135 };
		inline constexpr RE::RuntimeID GetNumCrippledAttackConditions{ 2209041 };
		inline constexpr RE::RuntimeID CalcScopeSteadyActionPointDrain{ 2209045 };
		inline constexpr RE::RuntimeID CalcResistedPercentage{ 2209007 };
		inline constexpr RE::RuntimeID CalcArmorHealthBonus{ 2209088 };
		inline constexpr RE::RuntimeID CalcWeaponAccuracy{ 2209004, 1273713 };
		inline constexpr RE::RuntimeID CalcVATSHitChance{ 2209034, 984570 };
		inline constexpr RE::RuntimeID CalcRangeDamageMult{ 2209044, 394672 };
	}

	namespace CombatUtilities
	{
		inline constexpr RE::RuntimeID CalculateProjectileLOS1{ 2240617, 798616 };
		inline constexpr RE::RuntimeID CalculateProjectileLOS2{ 2240616 };
		inline constexpr RE::RuntimeID CalculateProjectileTrajectory{ 2240611 };
		inline constexpr RE::RuntimeID WorldGravity{ 2700340 };
		inline constexpr RE::RuntimeID IsActorUsingMelee{ 2240626 };
		inline constexpr RE::RuntimeID IsActorUsingUnarmed{ 2240625 };
	}

	namespace ComparisonQualifiers
	{
		inline constexpr RE::RuntimeID ContainerQualifier{ 2190674 };
		inline constexpr RE::RuntimeID UIQualifier{ 2190675 };
	}

	namespace Console
	{
		inline constexpr RE::RuntimeID ExecuteCommand{ 2248537, 1061864 };
		inline constexpr RE::RuntimeID RunQueuedCommands{ 2248538, 675475 };
		inline constexpr RE::RuntimeID GetCurrentPickIndex{ 2701382, 1407033 };
		inline constexpr RE::RuntimeID GetPickRef{ 2701395 };
		inline constexpr RE::RuntimeID GetPickRefs{ 2701391, 875116 };
		inline constexpr RE::RuntimeID SetCurrentPickREFR{ 2248551 };
		inline constexpr RE::RuntimeID DisplayRef{ 2248550 };
	}

	namespace ConsoleLog
	{
		inline constexpr RE::RuntimeID Singleton{ 4797437, 689441 };
		inline constexpr RE::RuntimeID AddString{ 2248593, 764 };
		inline constexpr RE::RuntimeID Print{ 2248591 };
	}

	namespace ContainerMenu
	{
		inline constexpr RE::RuntimeID GetCanEquipItem{ 2248616, 767612 };
		inline constexpr RE::RuntimeID TakeAllItems{ 2248619 };
	}

	namespace ContainerMenuBase
	{
		namespace ItemSorter
		{
			inline constexpr RE::RuntimeID IncrementSort{ 2222848 };
		}

		inline constexpr RE::RuntimeID SetContainerRef{ 2222851, 679538 };
	}

	namespace ControlMap
	{
		inline constexpr RE::RuntimeID Singleton{ 4799307, 325206 };
		inline constexpr RE::RuntimeID PopInputContext{ 2268336 };
		inline constexpr RE::RuntimeID PushInputContext{ 2268335 };
		inline constexpr RE::RuntimeID RemapButton{ 2268330 };
		inline constexpr RE::RuntimeID SaveRemappings{ 2268331 };
		inline constexpr RE::RuntimeID SetTextEntryMode{ 4491359 };
	}

	namespace CookingMenu
	{
		inline constexpr RE::RuntimeID BuildConfirmed{ 2222896, 856717 };
		inline constexpr RE::RuntimeID RegisterMenuComponents{ 2222901, 908748 };
		inline constexpr RE::RuntimeID UpdateModChoiceList{ 2222905, 508147 };
	}

	namespace CurrentRadiationSourceCount
	{
		inline constexpr RE::RuntimeID GetEventSource{ 4803487 };
	}

	namespace DEFAULT_OBJECT_DATA
	{
		inline constexpr RE::RuntimeID GetDefaultObjectData{ 838886 };
	}

	namespace DialogueCameraState
	{
		inline constexpr RE::RuntimeID UpdateActorsAndAction{ 2214898 };
	}

	namespace DialogueMenuUtils
	{
		inline constexpr RE::RuntimeID OpenMenu{ 2249658 };
		inline constexpr RE::RuntimeID CloseMenu{ 2249659 };
		inline constexpr RE::RuntimeID ShowSpeechChallengeAnim{ 2249665 };
	}

	namespace DoBeforeNewOrLoadCompletedEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 4802833 };
	}

	namespace EffectItem
	{
		inline constexpr RE::RuntimeID GetDescription{ 2189612 };
	}

	namespace EquippedWeaponData
	{
		inline constexpr RE::RuntimeID SetupFireSounds{ 2232275 };
	}

	namespace ExamineConfirmMenu
	{
		namespace InitDataBuild
		{
			inline constexpr RE::RuntimeID ctor{ 2222962, 1150315 };
		}
	}

	namespace ExamineMenu
	{
		inline constexpr RE::RuntimeID BuildWeaponScrappingArray{ 2223077 };
		inline constexpr RE::RuntimeID Call{ 2223002, 1461108 };
		inline constexpr RE::RuntimeID GetSelectedIndex{ 2223022, 776503 };
		inline constexpr RE::RuntimeID ShowConfirmMenu{ 2223081, 443081 };
		inline constexpr RE::RuntimeID ConsumeSelectedItems{ 2223052, 686586 };
		inline constexpr RE::RuntimeID BuildConfirmed{ 2223013, 1396668 };
		inline constexpr RE::RuntimeID GetBuildConfirmQuestion{ 2223057 };
		inline constexpr RE::RuntimeID TryCreate{ 2223050, 900294 };
		inline constexpr RE::RuntimeID ConfirmCallback{ 4803830, 1493637 };
		inline constexpr RE::RuntimeID CheckModChoiceRequirements{ 2223051, 1484640 };
		inline constexpr RE::RuntimeID CountComponentHeld{ 2223101, 1437511 };
		inline constexpr RE::RuntimeID ResolveRecipeComponents{ 2223089, 1266109 };
	}

	namespace ExitPowerArmor
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2249039, 198729 };
	}

	namespace Explosion
	{
		inline constexpr RE::RuntimeID GetActorOwner{ 2236659, 551996 };
		inline constexpr RE::RuntimeID GetDamage{ 2236658, 1270292 };
		inline constexpr RE::RuntimeID ProcessTargets{ 2236664, 1146379 };
	}

	namespace ExteriorCellSingleton
	{
		inline constexpr RE::RuntimeID Singleton{ 4796370 };
	}

	namespace ExtraDataList
	{
		inline constexpr RE::RuntimeID CopyList{ 2190094 };
		inline constexpr RE::RuntimeID CreateInstanceData{ 2190185 };
		inline constexpr RE::RuntimeID Ctor{ 2190088 };
		inline constexpr RE::RuntimeID GetLegendaryMod{ 2190180, 178075 };
		inline constexpr RE::RuntimeID SetBendableSplineInfo{ 2190623 };
		inline constexpr RE::RuntimeID SetCount{ 2190125 };
		inline constexpr RE::RuntimeID SetDisplayNameFromInstanceData{ 2190179 };
		inline constexpr RE::RuntimeID SetOverrideName{ 2190167 };
		inline constexpr RE::RuntimeID SetStartingWorldOrCell{ 2190506 };
		inline constexpr RE::RuntimeID GetHealth{ 2190225 };
		inline constexpr RE::RuntimeID GetHealthPerc{ 2190226, 196530 };
		inline constexpr RE::RuntimeID SetHealthPerc{ 2190124, 1208294 };
		inline constexpr RE::RuntimeID ClearFavorite{ 2190191 };
		inline constexpr RE::RuntimeID IsFavorite{ 2190189 };
		inline constexpr RE::RuntimeID IsDamaged{ 2190224 };
		inline constexpr RE::RuntimeID IsItemBroken{ 2190223, 382709 };
		inline constexpr RE::RuntimeID IsQuestObject{ 2190568, 1265713 };
		inline constexpr RE::RuntimeID CompareList{ 2190098 };
		inline constexpr RE::RuntimeID SetFavorite{ 2190188 };
		inline constexpr RE::RuntimeID GetPrimitive{ 2190427 };
		inline constexpr RE::RuntimeID RemoveByType{ 2190971, 76237 };
	}

	namespace ExtraTextDisplayData
	{
		inline constexpr RE::RuntimeID GetDisplayName{ 2191318 };
	}

	namespace FavoritesManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4801690 };
		inline constexpr RE::RuntimeID IsComponentFavorite{ 2248752 };
		inline constexpr RE::RuntimeID UseQuickkeyItem{ 2248744 };
		inline constexpr RE::RuntimeID HandleEvent{ 2248740 };
		inline constexpr RE::RuntimeID Call{ 2248766 };
		inline constexpr RE::RuntimeID ClearCurrentAmmoCount{ 2248745 };
	}

	namespace FlatScreenModel
	{
		inline constexpr RE::RuntimeID Singleton{ 4801718 };
	}

	namespace GameMenuBase
	{
		inline constexpr RE::RuntimeID SetIsTopButtonBar{ 2223204 };
		inline constexpr RE::RuntimeID OnMenuDisplayStateChanged{ 2223205 };
		inline constexpr RE::RuntimeID CacheShaderFXQuadsForRenderer_Impl{ 2223200 };
		inline constexpr RE::RuntimeID TransferCachedShaderFXQuadsForRenderer{ 2223201 };
		inline constexpr RE::RuntimeID SetViewportRect{ 2223202 };
		inline constexpr RE::RuntimeID AppendShaderFXInfos{ 2223203 };
		inline constexpr RE::RuntimeID SetUpButtonBar{ 2223197 };
	}

	namespace GamePlayFormulas
	{
		inline constexpr RE::RuntimeID CanHackGateCheck{ 2209069 };
		inline constexpr RE::RuntimeID CanPickLockGateCheck{ 2209066 };
		inline constexpr RE::RuntimeID GetExperienceReward{ 2209076 };
		inline constexpr RE::RuntimeID GetLockXPReward{ 2209070 };
		inline constexpr RE::RuntimeID CalculateItemHealthDamageBonus{ 2209087 };
		inline constexpr RE::RuntimeID CalcSpringingActionPoints{ 2209071 };
		inline constexpr RE::RuntimeID GetSweetSpotAngle{ 2209082 };
		inline constexpr RE::RuntimeID GetPartialPickAngle{ 2209083 };
		inline constexpr RE::RuntimeID GetPickBreakSeconds{ 2209084 };
		inline constexpr RE::RuntimeID GetHackingWordCount{ 2209067 };
		inline constexpr RE::RuntimeID CalculateItemValue{ 2209074, 960532 };
		inline constexpr RE::RuntimeID GetForceLockChance{ 2209065 };
	}

	namespace GameScript
	{
		namespace HandlePolicy
		{
			inline constexpr RE::RuntimeID DropSaveLoadRemapData{ 2249995 };
			inline constexpr RE::RuntimeID GetInventoryObjFromHandle{ 2249989 };
			inline constexpr RE::RuntimeID UpdatePersistence{ 2249991 };
		}

		namespace ObjectBindPolicy
		{
			inline constexpr RE::RuntimeID EndSaveLoad{ 2250482 };
		}

		namespace GameVM
		{
			inline constexpr RE::RuntimeID Singleton{ 4796420 };
			inline constexpr RE::RuntimeID QueuePostRenderCall{ 2251314 };
			inline constexpr RE::RuntimeID RegisterForAllGameEvents{ 2251353 };
			inline constexpr RE::RuntimeID SendEventToObjectAndRelated{ 2251344 };
		}

		inline constexpr RE::RuntimeID LogFormError{ 2251028 };
		inline constexpr RE::RuntimeID BindCObject{ 2249771 };
	}

	namespace GameUIModel
	{
		inline constexpr RE::RuntimeID Singleton{ 4802814 };
		inline constexpr RE::RuntimeID SetGameColors{ 2220911 };
		inline constexpr RE::RuntimeID UpdateDataModels{ 2220905, 1269653 };
	}

	namespace GridCellArray
	{
		inline constexpr RE::RuntimeID Get{ 2194566, 1330136 };
	}

	namespace HitData
	{
		inline constexpr RE::RuntimeID ApplyDamageTypes{ 2236861, 15680 };
	}

	namespace hkContainerHeapAllocator
	{
		inline constexpr RE::RuntimeID Singleton{ 2665426 };
	}

	namespace hkDisplaySerializeOStream
	{
		inline constexpr RE::RuntimeID ctor{ 2266374 };
	}

	namespace hkHardwareInfo
	{
		inline constexpr RE::RuntimeID CalcNumHardwareThreads{ 2260765 };
	}

	namespace hkIArchive
	{
		inline constexpr RE::RuntimeID ctor2{ RE::NO_ID };
	}

	namespace hkMemoryRouter
	{
		inline constexpr RE::RuntimeID tlsSlotID{ 2787927 };
	}

	namespace hkMonitorStream
	{
		inline constexpr RE::RuntimeID tlsSlotID{ 2702743 };
		inline constexpr RE::RuntimeID Clear{ 2257312 };
		inline constexpr RE::RuntimeID Resize{ 2257310 };
	}

	namespace hknpCapsuleShape
	{
		inline constexpr RE::RuntimeID Init{ 2257217 };
		inline constexpr RE::RuntimeID CreateCapsuleShape{ 2257207 };
	}

	namespace hknpConvexPolytopeShape
	{
		inline constexpr RE::RuntimeID CreateFromVerticesInternal{ 2257201 };
	}

	namespace hknpConvexShape
	{
		inline constexpr RE::RuntimeID CreateFromAabb{ 2257125 };
		inline constexpr RE::RuntimeID CreateFromCylinder{ 2257126 };
		inline constexpr RE::RuntimeID CreateFromHalfExtents{ 2257124 };
		inline constexpr RE::RuntimeID CreateFromIndexedVertices{ 2257123 };
		inline constexpr RE::RuntimeID CreateFromVertices{ 2257122 };
	}

	namespace hknpMotionCinfo
	{
		inline constexpr RE::RuntimeID ctor{ 2258369 };
		inline constexpr RE::RuntimeID InitializeAsKeyFramed{ 2258373 };
	}

	namespace hknpPhysicsSystem
	{
		inline constexpr RE::RuntimeID AddToWorld{ 2255984 };
		inline constexpr RE::RuntimeID RemoveFromWorld{ 2255985 };
	}

	namespace hknpSphereShape
	{
		inline constexpr RE::RuntimeID CreateSphereShape{ 2256377 };
	}

	namespace hknpTriangleShape
	{
		inline constexpr RE::RuntimeID CreateEmptyTriangleShape{ 2256226 };
		inline constexpr RE::RuntimeID SetVertices{ 2256228 };
	}

	namespace hknpBSWorld
	{
		inline constexpr RE::RuntimeID AccessMotion{ 2277680 };
		inline constexpr RE::RuntimeID ActivateBody{ 2277677 };
		inline constexpr RE::RuntimeID SetBodyAngularVelocity{ 2277672 };
		inline constexpr RE::RuntimeID SetBodyKeyframed{ 2277684 };
		inline constexpr RE::RuntimeID SetBodyLinearVelocity{ 2277671 };
		inline constexpr RE::RuntimeID SetBodyStatic{ 2277683 };
		inline constexpr RE::RuntimeID SetBodyVelocity{ 2277670 };
	}

	namespace hknpWorld
	{
		inline constexpr RE::RuntimeID AddBodies{ 2255681 };
		inline constexpr RE::RuntimeID CreateBody{ 2255680 };
		inline constexpr RE::RuntimeID CreateMotion{ 2255688 };
		inline constexpr RE::RuntimeID DisableBodyFlags{ 2255636 };
		inline constexpr RE::RuntimeID EnableBodyFlags{ 2255635 };
		inline constexpr RE::RuntimeID GetActionManager{ 2255709 };
		inline constexpr RE::RuntimeID SetBodyCollisionFilterInfo{ 2255626 };
		inline constexpr RE::RuntimeID SetBodyMotion{ 2255634 };
	}

	namespace hkOArchive
	{
		inline constexpr RE::RuntimeID ctor2{ 2259258 };
	}

	namespace hkProcessFactory
	{
		inline constexpr RE::RuntimeID Singleton{ 2702978 };
		inline constexpr RE::RuntimeID CreateProcess{ 2263377 };
	}

	namespace hkReferencedObject
	{
		inline constexpr RE::RuntimeID AddReference{ 2259213 };
		inline constexpr RE::RuntimeID RemoveReference{ 2195747 };
	}

	namespace hkStringPtr
	{
		inline constexpr RE::RuntimeID ctor{ 2255573 };
	}

	namespace hkVisualDebugger
	{
		inline constexpr RE::RuntimeID ctor{ 2263295 };
		inline constexpr RE::RuntimeID AddContext{ 2263313 };
		inline constexpr RE::RuntimeID AddDefaultProcess{ 2263302 };
		inline constexpr RE::RuntimeID Serve{ 2263296 };
		inline constexpr RE::RuntimeID Shutdown{ 2263300 };
	}

	namespace hkVtableClassRegistry
	{
		inline constexpr RE::RuntimeID Singleton{ 2702926 };
	}

	namespace HolotapeMenu
	{
		inline constexpr RE::RuntimeID ShowHolotapeInPipboy{ 2224028 };
		inline constexpr RE::RuntimeID ShowHolotapeInTerminal{ 2224029 };
	}

	namespace HUDCrosshair
	{
		inline constexpr RE::RuntimeID UpdateComponent{ 2220263, 1525695 };
	}

	namespace HUDExperienceMeter
	{
		inline constexpr RE::RuntimeID UpdateDisplayObject{ 2220382 };
	}

	namespace HUDMenu
	{
		inline constexpr RE::RuntimeID SetHUDColor{ 2248918 };
	}

	namespace HUDMenuUtils
	{
		inline constexpr RE::RuntimeID GetGameplayHUDColor{ 2248840 };
		inline constexpr RE::RuntimeID GetGameplayHUDBackgroundColor{ 2248845 };
		inline constexpr RE::RuntimeID WorldPtToScreenPt3{ 2222464 };
	}

	namespace HUDModeEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 4801988 };
	}

	namespace HUDQuickContainerDataModel
	{
		inline constexpr RE::RuntimeID AddItemRows{ 2221647, 793418 };
	}

	namespace IAnimationGraphManagerHolder
	{
		inline constexpr RE::RuntimeID SetGraphVariableBool{ 2214543 };
		inline constexpr RE::RuntimeID SetGraphVariableFloat{ 2214545 };
		inline constexpr RE::RuntimeID SetGraphVariableInt{ 2214544 };
		inline constexpr RE::RuntimeID RevertAnimationGraphManager{ 2214541 };
	}

	namespace IFormFactory
	{
		inline constexpr RE::RuntimeID Factories{ 4796464, 228366 };
	}

	namespace ImageSpaceEffectFullScreenBlur
	{
		inline constexpr RE::RuntimeID Disable{ 2713225 };
	}

	namespace ImageSpaceEffectGetHit
	{
		inline constexpr RE::RuntimeID Disable{ 2713237 };
	}

	namespace ImageSpaceEffectHDR
	{
		inline constexpr RE::RuntimeID UsePipboyScreenMask{ 4784697 };
	}

	namespace ImageSpaceEffectPipboyScreen
	{
		inline constexpr RE::RuntimeID PowerArmorPipboy{ 2713203 };
	}

	namespace ImageSpaceEffectRadialBlur
	{
		inline constexpr RE::RuntimeID Disable{ 2713225 };
	}

	namespace ImageSpaceEffectTemporalAA
	{
		inline constexpr RE::RuntimeID MaskS{ 2713052 };
	}

	namespace ImageSpaceManager
	{
		inline constexpr RE::RuntimeID Singleton{ 2712627 };
	}

	namespace ImageSpaceModifierInstance
	{
		inline constexpr RE::RuntimeID Stop{ 2199897 };
	}

	namespace ImageSpaceModifierInstanceDOF
	{
		inline constexpr RE::RuntimeID Trigger{ 2199922 };
	}

	namespace ImageSpaceModifierInstanceForm
	{
		inline constexpr RE::RuntimeID Trigger1{ 2199906 };
		inline constexpr RE::RuntimeID Trigger2{ 2199907 };
		inline constexpr RE::RuntimeID Stop1{ 2199909 };
		inline constexpr RE::RuntimeID Stop2{ 2199910 };
	}

	namespace IMenu
	{
		inline constexpr RE::RuntimeID ShouldHandleEvent{ 2287392 };
		inline constexpr RE::RuntimeID PassesRenderConditionText{ 2287379 };
		inline constexpr RE::RuntimeID OnSetSafeRect{ 2287375 };
		inline constexpr RE::RuntimeID ProcessScaleformEvent{ 2287395 };
		inline constexpr RE::RuntimeID RefreshPlatform{ 2287374 };
	}

	namespace Interface3D
	{
		inline constexpr RE::RuntimeID Create{ 2222519 };
		inline constexpr RE::RuntimeID GetByName{ 2222524, 140387 };
		inline constexpr RE::RuntimeID RenderersLock{ 4803745, 778095 };
		inline constexpr RE::RuntimeID MainScreen_AddPointLight{ 2222531 };
		inline constexpr RE::RuntimeID MainScreen_AddSpotLight{ 2222532 };
		inline constexpr RE::RuntimeID MainScreen_ClearLights{ 2222533 };
		inline constexpr RE::RuntimeID MainScreen_SetScreenAttached3D{ 2222528 };
		inline constexpr RE::RuntimeID MainScreen_SetWorldAttached3D{ 2222529 };
		inline constexpr RE::RuntimeID Offscreen_AddLight{ 2222543 };
		inline constexpr RE::RuntimeID Offscreen_Clear3D{ 2222542 };
		inline constexpr RE::RuntimeID Offscreen_ClearLights{ 2222545 };
		inline constexpr RE::RuntimeID Offscreen_GetRenderTargetHeight{ 2222538 };
		inline constexpr RE::RuntimeID Offscreen_GetRenderTargetWidth{ 2222537 };
		inline constexpr RE::RuntimeID Offscreen_Set3D{ 2222541 };
		inline constexpr RE::RuntimeID Offscreen_SetDebugMode{ 2222549 };
		inline constexpr RE::RuntimeID Offscreen_SetDirectionalLight{ 2222544 };
		inline constexpr RE::RuntimeID Enable{ 2222522 };
		inline constexpr RE::RuntimeID Disable{ 2222523 };
		inline constexpr RE::RuntimeID DisableAll{ 2222521 };
		inline constexpr RE::RuntimeID Release{ 2222520 };
		inline constexpr RE::RuntimeID SetViewport{ 2222552 };
	}

	namespace Inventory3DManager
	{
		inline constexpr RE::RuntimeID Begin3D{ 2249084 };
		inline constexpr RE::RuntimeID ClearModel{ 2249113 };
		inline constexpr RE::RuntimeID DisableRendering{ 2249099 };
		inline constexpr RE::RuntimeID EnableRendering{ 2249098 };
		inline constexpr RE::RuntimeID End3D{ 2249086 };
		inline constexpr RE::RuntimeID SetModelScale{ 2249097 };
		inline constexpr RE::RuntimeID SetModelScreenPosition{ 2249096 };
	}

	namespace InventoryItemDisplayData
	{
		inline constexpr RE::RuntimeID ctor{ 2222612, 679373 };
	}

	namespace InventoryUserUIUtils
	{
		inline constexpr RE::RuntimeID AddItemCardInfoEntry{ 2222648, 489521 };
		inline constexpr RE::RuntimeID PopulateItemCardInfo_Helper{ 2222625, 475551 };
		inline constexpr RE::RuntimeID SortCompareItems{ 2222850, 854843 };
	}

	namespace ItemCrafted
	{
		inline constexpr RE::RuntimeID NotifyOfItemCrafted{ 2232809 };
		inline constexpr RE::RuntimeID RegisterSink{ 2232807 };
		inline constexpr RE::RuntimeID UnregisterSink{ 2232808 };
	}

	namespace LevelIncrease
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2233736 };
	}

	namespace LoadingMenu
	{
		inline constexpr RE::RuntimeID StartTestingLoadMenu{ 2249224 };
		inline constexpr RE::RuntimeID PopulateLoadScreens{ 2249232, 316170 };
		inline constexpr RE::RuntimeID CollectLoadScreens{ 2249240, RE::NO_ID };  // none on OG: OG inlines the loop into PopulateLoadScreens 316170
		inline constexpr RE::RuntimeID CollectLoadScreen{ RE::NO_ID, 1161803 };
	}

	namespace LockpickingMenu
	{
		inline constexpr RE::RuntimeID OpenLockpickingMenu{ 2249263 };
		inline constexpr RE::RuntimeID SendLockInfoToMenu{ 2249267 };
		inline constexpr RE::RuntimeID DamageLockpick{ 2249275 };
	}

	namespace LocksPicked
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2249292 };
	}

	namespace MagicCaster
	{
		inline constexpr RE::RuntimeID Cast{ 2226296, 1558908 };
		inline constexpr RE::RuntimeID CastWithCallback{ 2226295, 695344 };
	}

	namespace MagicTarget
	{
		inline constexpr RE::RuntimeID IsTakingHealthDamageFromActiveEffect{ 2226397 };
		inline constexpr RE::RuntimeID IsTakingRadDamageFromActiveEffect{ 2226398 };
		inline constexpr RE::RuntimeID DispelEffectsFromSource{ 2226380 };
	}

	namespace Main
	{
		inline constexpr RE::RuntimeID Singleton{ 2698043, 756304 };
		inline constexpr RE::RuntimeID WorldRootCamera{ 2228956 };
		inline constexpr RE::RuntimeID WorldRootNode{ 2698065 };
		inline constexpr RE::RuntimeID QGameSystemsShouldUpdate{ 2698031 };
		inline constexpr RE::RuntimeID QGameDataLoaded{ 2698032 };
		inline constexpr RE::RuntimeID SetCameraFOV{ 2228973 };
		inline constexpr RE::RuntimeID LandLODRoot{ 2698035 };
		inline constexpr RE::RuntimeID ObjectLODRoot{ 2698036 };
	}

	namespace MapMarkerData
	{
		inline constexpr RE::RuntimeID GetLocationName{ 2191791 };
	}

	namespace MemoryManager
	{
		namespace AutoScrapBuffer
		{
			inline constexpr RE::RuntimeID ctor{ 2267865 };
			inline constexpr RE::RuntimeID dtor{ 2267867 };
		}

		inline constexpr RE::RuntimeID Singleton{ 4471522, 343176 };
		inline constexpr RE::RuntimeID Allocate{ 2267872, 652767 };
		inline constexpr RE::RuntimeID Deallocate{ 2267874, 1582181 };
		inline constexpr RE::RuntimeID GetThreadScrapHeap{ 2267850, 1495205 };
		inline constexpr RE::RuntimeID Reallocate{ 2267873 };
		inline constexpr RE::RuntimeID RegisterMemoryManager{ 2228356 };
	}

	namespace MenuControls
	{
		inline constexpr RE::RuntimeID ForcePauseGame{ 2249384 };
		inline constexpr RE::RuntimeID ForceResumeGame{ 2249385 };
		inline constexpr RE::RuntimeID RegisterHandler{ 2249387 };
		inline constexpr RE::RuntimeID Singleton{ 4796375, 520890 };
		inline constexpr RE::RuntimeID UnregisterHandler{ 2249388 };
	}

	namespace MenuCursor
	{
		inline constexpr RE::RuntimeID Singleton{ 4803837, 695696 };
		inline constexpr RE::RuntimeID CenterCursor{ 2287473 };
		inline constexpr RE::RuntimeID RegisterCursor{ 2287475 };
		inline constexpr RE::RuntimeID SetCursorConstraintsRaw{ 2287480 };
		inline constexpr RE::RuntimeID UnregisterCursor{ 2287486 };
		inline constexpr RE::RuntimeID PipboyConstraintTLX{ 280077 };
		inline constexpr RE::RuntimeID PipboyConstraintTLY{ 938173 };
		inline constexpr RE::RuntimeID PipboyConstraintWidth{ 13663 };
		inline constexpr RE::RuntimeID PipboyConstraintHeight{ 672503 };
		inline constexpr RE::RuntimeID PipboyConstraintTLX_PowerArmor{ 1330184 };
		inline constexpr RE::RuntimeID PipboyConstraintTLY_PowerArmor{ 406096 };
		inline constexpr RE::RuntimeID PipboyConstraintWidth_PowerArmor{ 1064265 };
		inline constexpr RE::RuntimeID PipboyConstraintHeight_PowerArmor{ 140195 };
	}

	namespace MenuTopicManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4796375, 520890 };
	}

	namespace MessageBoxMenu
	{
		inline constexpr RE::RuntimeID ShowMessage{ 2249469, 442479 };
	}

	namespace MessageMenuManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4796373, 959572 };
		inline constexpr RE::RuntimeID Create{ 2249456 };
		inline constexpr RE::RuntimeID QueueMessage{ 2249457, 1191794 };
	}

	namespace Moon
	{
		inline constexpr RE::RuntimeID Init{ 2208804 };
	}

	namespace NiAlphaProperty
	{
		inline constexpr RE::RuntimeID SetDestBlendMode{ RE::NO_ID };  // inlined
		inline constexpr RE::RuntimeID SetSrcBlendMode{ RE::NO_ID };   // inlined
		inline constexpr RE::RuntimeID SetTestMode{ RE::NO_ID };       // inlined
		inline constexpr RE::RuntimeID SetAlphaBlending{ RE::NO_ID };  // inlined
		inline constexpr RE::RuntimeID SetAlphaTesting{ RE::NO_ID };   // inlined
	}

	namespace NiCamera
	{
		inline constexpr RE::RuntimeID BoundInFrustum{ 2194525 };
		inline constexpr RE::RuntimeID WorldPtToScreenPt3{ 2270344, 109441 };
		inline constexpr RE::RuntimeID ViewPointToRay{ 2270338 };
		inline constexpr RE::RuntimeID ctor{ 2270332 };
	}

	namespace NiControllerManager
	{
		inline constexpr RE::RuntimeID GetNiControllerManager{ 2271798 };
		inline constexpr RE::RuntimeID GetSequenceByName{ 2192808 };
	}

	namespace NiControllerSequence
	{
		inline constexpr RE::RuntimeID Activate{ 2271861 };
	}

	namespace NiCullingProcess
	{
		inline constexpr RE::RuntimeID SetFrustum{ 2270782 };
	}

	namespace NiMatrix3
	{
		inline constexpr RE::RuntimeID ToEulerAnglesXYZ{ 2269806 };
		inline constexpr RE::RuntimeID ToEulerAnglesXZY{ 2269807 };
		inline constexpr RE::RuntimeID ToEulerAnglesYXZ{ 2269808 };
		inline constexpr RE::RuntimeID ToEulerAnglesYZX{ 2269809 };
		inline constexpr RE::RuntimeID ToEulerAnglesZYX{ 2269810 };
		inline constexpr RE::RuntimeID ToEulerAnglesZXY{ 2269824 };
		inline constexpr RE::RuntimeID FromEulerAnglesXYZ{ 2269813 };
		inline constexpr RE::RuntimeID FromEulerAnglesXZY{ 2269814 };
		inline constexpr RE::RuntimeID FromEulerAnglesYXZ{ 2269815 };
		inline constexpr RE::RuntimeID FromEulerAnglesYZX{ 2269816 };
		inline constexpr RE::RuntimeID FromEulerAnglesZYX{ 2269817 };
		inline constexpr RE::RuntimeID FromEulerAnglesZXY{ 2269825 };
	}

	namespace NiNode
	{
		inline constexpr RE::RuntimeID ChildrenVTable{ 390064, 390064 };
	}

	namespace NiPoint3
	{
		inline constexpr RE::RuntimeID GetZAngleFromVector{ 2269788 };
	}

	namespace NiRefObject
	{
		inline constexpr RE::RuntimeID Objects{ 2703471 };
	}

	namespace NiTexture
	{
		inline constexpr RE::RuntimeID SetAllowDegrade{ 2270148 };
	}

	namespace nsHUDNotifications
	{
		inline constexpr RE::RuntimeID IsQuestNotification{ 2222465 };
		inline constexpr RE::RuntimeID IsObjectiveNotification{ 2222466 };
		inline constexpr RE::RuntimeID IsLocationDiscoveredNotification{ 2222467 };
	}

	namespace nsHUDTypes
	{
		namespace NotificationInfo
		{
			inline constexpr RE::RuntimeID ctor{ 2223292 };
		}
	}

	namespace nsStatsMenuUtils
	{
		inline constexpr RE::RuntimeID GetEffectDisplayInfo{ 2224586 };
	}

	namespace PerkPointIncreaseEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 4804734 };
	}

	namespace PerkUtilities
	{
		inline constexpr RE::RuntimeID RemoveGrenadeTrajectory{ 2233303 };
	}

	namespace PipboyDataManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4796372, 1178971 };
	}

	namespace PipboyDataGroup
	{
		inline constexpr RE::RuntimeID LockDataGroup{ 2225147, 287528 };
		inline constexpr RE::RuntimeID UnlockDataGroup{ 2225148, 1165260 };
	}

	namespace PipboyInventoryData
	{
		inline constexpr RE::RuntimeID AddItemCardInfoEntry{ 2225267, 1191786 };
		inline constexpr RE::RuntimeID BaseAddItemCardInfoEntry{ 2225270 };
		inline constexpr RE::RuntimeID InitializeItem{ 2225264, 482276 };
		inline constexpr RE::RuntimeID PopulateItemCardInfo{ 2225266, 54211 };
		inline constexpr RE::RuntimeID QueueItemCardRepopulate{ 2225281 };
		inline constexpr RE::RuntimeID RepopulateItemCardOnSection{ 2225279, 892255 };
		inline constexpr RE::RuntimeID UpdateSlotResists{ 2225790, 362497 };
	}

	namespace PipboyInventoryMenu
	{
		inline constexpr RE::RuntimeID UpdateData{ 2224143 };
		inline constexpr RE::RuntimeID SetQuickkey{ 2224159 };
	}

	namespace PipboyInventoryUtils
	{
		inline constexpr RE::RuntimeID DoSlotsOverlap{ 2225230 };
		inline constexpr RE::RuntimeID FillDamageTypeInfo{ 2225234, 928518 };
		inline constexpr RE::RuntimeID FillResistTypeInfo{ 2225235, 1578434 };
	}

	namespace PipboyLightEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 4803571 };
	}

	namespace PipboyLogMenu
	{
		inline constexpr RE::RuntimeID UpdateData{ 2224052 };
	}

	namespace PipboyManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4799238, 553234 };
		inline constexpr RE::RuntimeID AddMenuToPipboy{ 2225453 };
		inline constexpr RE::RuntimeID ClosedownPipboy{ 2225480 };
		inline constexpr RE::RuntimeID EnablePipboyShader{ 2225484 };
		inline constexpr RE::RuntimeID InitPipboy{ 2225479 };
		inline constexpr RE::RuntimeID LowerPipboy{ 2225454, 1444875 };
		inline constexpr RE::RuntimeID OnPipboyCloseAnim{ 2225457 };
		inline constexpr RE::RuntimeID OnPipboyCloseAnimFailed{ 2225459 };
		inline constexpr RE::RuntimeID OnPipboyClosed{ 2225458 };
		inline constexpr RE::RuntimeID OnPipboyOpenAnim{ 2225448 };
		inline constexpr RE::RuntimeID OnPipboyOpenAnimFailed{ 2225449 };
		inline constexpr RE::RuntimeID OnPipboyOpened{ 2225450 };
		inline constexpr RE::RuntimeID PlayItemAnimOnClose{ 2225461 };
		inline constexpr RE::RuntimeID PlayPipboyCloseAnim{ 2225456, 273927 };
		inline constexpr RE::RuntimeID PlayPipboyGenericOpenAnim{ 2225447 };
		inline constexpr RE::RuntimeID PlayPipboyLoadHolotapeAnim{ 2225446 };
		inline constexpr RE::RuntimeID PlayPipboyOpenAnim{ 2225444, 663900 };
		inline constexpr RE::RuntimeID PlayPipboyOpenTerminalAnim{ 2225445 };
		inline constexpr RE::RuntimeID ProcessLoweringReason{ 2225486 };
		inline constexpr RE::RuntimeID QPipboyActive{ 2225460, 470886 };
		inline constexpr RE::RuntimeID RaisePipboy{ 2225455, 726763 };
		inline constexpr RE::RuntimeID RefreshPipboyRenderSurface{ 2225478 };
		inline constexpr RE::RuntimeID StartAnimationGraphListening{ 2225490 };
		inline constexpr RE::RuntimeID StopAnimationGraphListening{ 2225491 };
		inline constexpr RE::RuntimeID UpdateCursorConstraint{ 2225488 };
	}

	namespace PipboyMapData
	{
		inline constexpr RE::RuntimeID GetTravelLocationRefr{ 2225515 };
		inline constexpr RE::RuntimeID UpdateQuestMarkers{ 2225549 };
	}

	namespace PipboyMapMenu
	{
		inline constexpr RE::RuntimeID UpdateData{ 2224074 };
	}

	namespace PipboyMenu
	{
		inline constexpr RE::RuntimeID RefreshMapMarkers{ 2224187 };
	}

	namespace PipboyObject
	{
		inline constexpr RE::RuntimeID AddMember{ 2225699, 1499797 };
	}

	namespace PipboyPerksMenu
	{
		inline constexpr RE::RuntimeID UpdateData{ 2224224 };
	}

	namespace PipboyPlayerInfoData
	{
		inline constexpr RE::RuntimeID UpdateCarryWeightData{ 2225788 };
	}

	namespace PipboyPlayerInfoMenu
	{
		inline constexpr RE::RuntimeID UpdateData{ 2224248 };
	}

	namespace PipboyPrimitiveValue
	{
		namespace uint32
		{
			inline constexpr RE::RuntimeID ctor{ 2225324 };
		}

		namespace boolean
		{
			inline constexpr RE::RuntimeID ctor{ 2225327 };
		}
	}

	namespace PipboyQuestMenu
	{
		inline constexpr RE::RuntimeID UpdateData{ 2224231 };
	}

	namespace PipboyRadioMenu
	{
		inline constexpr RE::RuntimeID UpdateData{ 2224242 };
	}

	namespace PipboySpecialMenu
	{
		inline constexpr RE::RuntimeID UpdateData{ 2224256 };
	}

	namespace PipboyStatsMenu
	{
		inline constexpr RE::RuntimeID UpdateData{ 2224261 };
		inline constexpr RE::RuntimeID UpdateActiveEffects{ 2224262 };
	}

	namespace PipboySubMenu
	{
		inline constexpr RE::RuntimeID ProcessEvent{ 2224270 };
	}

	namespace PipboyValue
	{
		inline constexpr RE::RuntimeID ctor{ 2225915, 531562 };
	}

	namespace PipboyWorkshopMenu
	{
		inline constexpr RE::RuntimeID UpdateData{ 2224273 };
	}

	namespace PlayerCamera
	{
		inline constexpr RE::RuntimeID Singleton{ 4796065, 1171980 };
		inline constexpr RE::RuntimeID GetCameraPosition{ 2248334 };
		inline constexpr RE::RuntimeID PopState{ 2248424 };
		inline constexpr RE::RuntimeID PushState{ 2248422 };
		inline constexpr RE::RuntimeID ToggleFreeCameraMode{ 2248368 };
		inline constexpr RE::RuntimeID SetState{ 2214742 };
		inline constexpr RE::RuntimeID StartFurnitureMode{ 2248373 };
		inline constexpr RE::RuntimeID StartPipboyMode{ 2248358 };
		inline constexpr RE::RuntimeID StopPipboyMode{ 2248359 };
		inline constexpr RE::RuntimeID QCameraEquals{ 2248421, 839543 };
	}

	namespace PlayerCharacter
	{
		namespace ScopedInventoryChangeMessageContext
		{
			inline constexpr RE::RuntimeID ctor{ 2233292, 1512872 };
			inline constexpr RE::RuntimeID dtor{ 2233293, 542100 };
		}

		inline constexpr RE::RuntimeID Singleton{ 4798212, 412034 };
		inline constexpr RE::RuntimeID GetPlayerHandle{ 2698072, 522947 };
		inline constexpr RE::RuntimeID GetDifficultyLevel{ 2233056 };
		inline constexpr RE::RuntimeID IsGodMode{ 2232986 };
		inline constexpr RE::RuntimeID IsHolotapePlaying{ 2233206 };
		inline constexpr RE::RuntimeID IsImmortal{ 2232988 };
		inline constexpr RE::RuntimeID IsPipboyLightOn{ 2233202 };
		inline constexpr RE::RuntimeID PauseHolotape{ 2233208 };
		inline constexpr RE::RuntimeID PlayHolotape{ 2233207 };
		inline constexpr RE::RuntimeID QueueFastTravel{ 2232918 };
		inline constexpr RE::RuntimeID RemoveLastUsedPowerArmor{ 2233024 };
		inline constexpr RE::RuntimeID SelectPerk{ 2232926 };
		inline constexpr RE::RuntimeID SetAIControlledPackage{ 2233087, 1431972 };
		inline constexpr RE::RuntimeID SetEscaping{ 2233142 };
		inline constexpr RE::RuntimeID SetVATSCriticalCount{ 2233219 };
		inline constexpr RE::RuntimeID ShowPipboyLight{ 2233203 };
		inline constexpr RE::RuntimeID SetLastDialogueInput{ 2233190 };
		inline constexpr RE::RuntimeID ClearPrison{ 2233196 };
		inline constexpr RE::RuntimeID ReloadWeapon{ 2232907 };
		inline constexpr RE::RuntimeID SetPerkCount{ 2233187 };
		inline constexpr RE::RuntimeID HasLOSToTarget{ 2233004 };
		inline constexpr RE::RuntimeID TryUnlockObject{ 2233040 };
		inline constexpr RE::RuntimeID EnableRadio{ 2233211 };
		inline constexpr RE::RuntimeID UpdateAnimation{ 2233005 };
		inline constexpr RE::RuntimeID HandlePositionPlayerRequest{ 2232905 };
	}

	namespace PlayerControls
	{
		inline constexpr RE::RuntimeID Singleton{ 4799306, 544871 };
		inline constexpr RE::RuntimeID DoAction{ 2234796 };
		inline constexpr RE::RuntimeID DoRegisterHandler{ 2234822 };
	}

	namespace PlayerCrosshairModeEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 4801808 };
	}

	namespace PowerArmor
	{
		namespace DamagePieceStackFunctor
		{
			inline constexpr RE::RuntimeID _operator{ 2219514 };
		}

		namespace EventHandler
		{
			inline constexpr RE::RuntimeID Singleton{ 992887 };
			inline constexpr RE::RuntimeID ProcessHitEvent{ 2219468, 10023 };
			inline constexpr RE::RuntimeID ProcessTriggerEnterEvent{ 2219469 };
			inline constexpr RE::RuntimeID ProcessTriggerLeaveEvent{ 2219470 };
		}

		inline constexpr RE::RuntimeID ActorInPowerArmor{ 2219437, 1176757 };
		inline constexpr RE::RuntimeID DamagePiecesOrLimb{ 2219520 };
		inline constexpr RE::RuntimeID GetArmorKeyword{ 2194743, 961172 };
		inline constexpr RE::RuntimeID GetBatteryKeyword{ 2194740 };
		inline constexpr RE::RuntimeID GetDefaultBatteryObject{ 2194761 };
		inline constexpr RE::RuntimeID IsPowerArmorBattery{ 2219422 };
		inline constexpr RE::RuntimeID SyncFurnitureVisualsToInventory{ 2219453 };
		inline constexpr RE::RuntimeID fNewBatteryCapacity{ 1353498 };
	}

	namespace PowerArmorGeometry
	{
		inline constexpr RE::RuntimeID Singleton{ 4801732, 1365745 };
		inline constexpr RE::RuntimeID HidePipboyPAGeometry{ 2248877 };
		inline constexpr RE::RuntimeID ShowPipboyPAGeometry{ 2248876 };
	}

	namespace PowerArmorLightData
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2701547 };
	}

	namespace PowerArmorModMenu
	{
		inline constexpr RE::RuntimeID ShowBuildFailureMessage{ 2224322 };
	}

	namespace PowerUtils
	{
		inline constexpr RE::RuntimeID ItemIsPowerConnection{ 2195078 };
		inline constexpr RE::RuntimeID ItemIsPowerReceiver{ 2195060 };
	}

	namespace ProcessLists
	{
		inline constexpr RE::RuntimeID Singleton{ 4796160, 1569706 };
		inline constexpr RE::RuntimeID AreHostileActorsNear{ 2234105, 1053584 };
		inline constexpr RE::RuntimeID IsActorTargetingREFinPackage{ 2234033 };
		inline constexpr RE::RuntimeID RequestHighestDetectionLevelAgainstActor{ 2234111, 1036693 };
	}

	namespace Projectile
	{
		inline constexpr RE::RuntimeID GetRangeMult{ 2236994 };
	}

	namespace RadioManager
	{
		inline constexpr RE::RuntimeID QPlayerRadioEnabled{ 2227674 };
		inline constexpr RE::RuntimeID QCurrentPlayerFreq{ 2227670 };
		inline constexpr RE::RuntimeID EnablePlayerRadio{ 2227673, 653012 };
	}

	namespace REFR_LOCK
	{
		inline constexpr RE::RuntimeID GetLevel{ 2191019 };
		inline constexpr RE::RuntimeID GetLockLevel{ 2191018 };
		inline constexpr RE::RuntimeID SetLocked{ 2191020 };
		inline constexpr RE::RuntimeID IsBroken{ 2191021 };
		inline constexpr RE::RuntimeID NumericValueToEnum{ 2191023 };
		inline constexpr RE::RuntimeID IsInaccessible{ 2191022 };
	}

	namespace SavefileMetadata
	{
		inline constexpr RE::RuntimeID FillDataFromFileName{ 2228156 };
	}

	namespace ScrapHeap
	{
		inline constexpr RE::RuntimeID Allocate{ 2267983, 1085394 };
		inline constexpr RE::RuntimeID Deallocate{ 2267984, 923307 };
	}

	namespace ScreenSplatter
	{
		inline constexpr RE::RuntimeID Clear{ 2194783 };
		inline constexpr RE::RuntimeID Update{ 2194781 };
	}

	namespace SCRIPT_FUNCTION
	{
		inline constexpr RE::RuntimeID ConsoleFunctions{ 901511 };
		inline constexpr RE::RuntimeID ScriptFunctions{ 75173, 75173 };
		inline constexpr RE::RuntimeID CompileFunction{ 2204343 };
	}

	namespace Script
	{
		inline constexpr RE::RuntimeID ParseParameters{ 2204298, 1607 };
		inline constexpr RE::RuntimeID CompileAndRun{ 2204287 };
		inline constexpr RE::RuntimeID GetProcessScripts{ 2204310 };
		inline constexpr RE::RuntimeID SetProcessScripts{ 2204309 };
	}

	namespace SendHUDMessage
	{
		inline constexpr RE::RuntimeID PopHUDMode{ 2222444 };
		inline constexpr RE::RuntimeID PushHUDMode{ 2222443 };
		inline constexpr RE::RuntimeID SetPowerArmorMode{ 2222459 };
		inline constexpr RE::RuntimeID ShowHUDMessage{ 2222440, 1163005 };
	}

	namespace Setting
	{
		namespace INISettingCollection
		{
			inline constexpr RE::RuntimeID Singleton{ 2704108, 791183 };
		}

		namespace INIPrefSettingCollection
		{
			inline constexpr RE::RuntimeID Singleton{ 2703234, 767844 };
		}

		namespace GameSettingCollection
		{
			inline constexpr RE::RuntimeID Singleton{ 4797590, 8308 };
			inline constexpr RE::RuntimeID InitCollection{ 2188690, 948832 };
		}

		inline constexpr RE::RuntimeID sLanguage{ 1527977, 1527977 };
	}

	namespace SitWaitMenu
	{
		inline constexpr RE::RuntimeID OnEnterFurniture{ 2249503 };
		inline constexpr RE::RuntimeID OnExitFurniture{ 2249504 };
	}

	namespace Sky
	{
		inline constexpr RE::RuntimeID Singleton{ 2192448 };
		inline constexpr RE::RuntimeID ForceWeather{ 2208861 };
		inline constexpr RE::RuntimeID ResetWeather{ 2208860 };
	}

	namespace SplineUtils
	{
		inline constexpr RE::RuntimeID DisconnectSpline{ 2195074 };
		inline constexpr RE::RuntimeID ConnectSpline{ 2195073 };
	}

	namespace StartMenuBase
	{
		inline constexpr RE::RuntimeID GetMenuDifficultyLevel{ 2224540 };
	}

	namespace SubtitleManager
	{
		inline constexpr RE::RuntimeID Singleton{ 4796374 };
		inline constexpr RE::RuntimeID RWLock{ 2701704 };
	}

	namespace SWFToCodeFunctionHandler
	{
		inline constexpr RE::RuntimeID MapCodeMethodToASFunction{ 2287419 };
		inline constexpr RE::RuntimeID RegisterCodeObject{ 2287415 };
	}

	namespace TaskQueueInterface
	{
		inline constexpr RE::RuntimeID Singleton{ 2698331 };
		inline constexpr RE::RuntimeID QueueClosePipboy{ 2229289 };
		inline constexpr RE::RuntimeID QueueRebuildBendableSpline{ 2229302 };
		inline constexpr RE::RuntimeID QueueShow1stPerson{ 2229268 };
		inline constexpr RE::RuntimeID QueueShowPipboy{ 2229288 };
		inline constexpr RE::RuntimeID QueueUpdate3D{ 2229234 };
		inline constexpr RE::RuntimeID QueueWeaponFire{ 2229186 };
		inline constexpr RE::RuntimeID TaskUnpackFunc{ 2229323, 1546751 };
	}

	namespace TerminalHacked
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2233751 };
	}

	namespace TES
	{
		inline constexpr RE::RuntimeID Singleton{ 2698044, 1194835 };
		inline constexpr RE::RuntimeID IsCellLoaded{ 2192040, 1566182 };
		inline constexpr RE::RuntimeID UpdateMultiBoundVisibility{ 2192134 };
	}

	namespace TESActivateEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201819 };
	}

	namespace TESActorBaseData
	{
		inline constexpr RE::RuntimeID GetLevel{ 2192891 };
	}

	namespace TESAmmo
	{
		inline constexpr RE::RuntimeID GetReloadsWithAmmoRef{ 2197864 };
	}

	namespace TESAudio
	{
		namespace ScriptedMusicState
		{
			inline constexpr RE::RuntimeID Singleton{ 4799278 };
			inline constexpr RE::RuntimeID Remove{ 2226976 };
		}
	}

	namespace TESBoundObject
	{
		inline constexpr RE::RuntimeID ApplyMods{ 2198325 };
	}

	namespace TESCellAttachDetachEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201823 };
	}

	namespace TESCellFullyLoadedEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201824 };
	}

	namespace TESCondition
	{
		inline constexpr RE::RuntimeID IsTrue{ 2211989 };
		inline constexpr RE::RuntimeID IsTrueForAllButFunction{ RE::NO_ID };  // 1182457 - inlined
		inline constexpr RE::RuntimeID ClearAllConditionItems{ 2211988 };
	}

	namespace TESConditionItem
	{
		inline constexpr RE::RuntimeID GetComparisonValue{ 2212007 };
		inline constexpr RE::RuntimeID IsTrue1{ 2212008 };
		inline constexpr RE::RuntimeID IsTrue2{ 2212009 };
	}

	namespace TESContainerChangedEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201832 };
	}

	namespace TESDataHandler
	{
		inline constexpr RE::RuntimeID Singleton{ 4796135, 711558 };
		inline constexpr RE::RuntimeID BarterContainer{ 4796408, 1276194 };
		inline constexpr RE::RuntimeID AddFormToDataHandler{ 2192271 };
		inline constexpr RE::RuntimeID BuildBarterContainer{ 2192332, 1006600 };
		inline constexpr RE::RuntimeID CheckModsLoaded{ 2192323 };
		inline constexpr RE::RuntimeID CreateReferenceAtLocation{ 2192301, 500304 };
		inline constexpr RE::RuntimeID IsFormIDInuse{ 2192351 };
	}

	namespace TESDeathEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201833, 1465690 };
	}

	namespace TESDescription
	{
		inline constexpr RE::RuntimeID GetDescription{ 2193019, 523613 };
	}

	namespace TESEnterSneakingEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201837 };
	}

	namespace TESEquipEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201838 };
	}

	namespace TESFile
	{
		inline constexpr RE::RuntimeID CloseTES{ 2192491 };
		inline constexpr RE::RuntimeID GetChunkData{ 2192538 };
		inline constexpr RE::RuntimeID GetTESChunk{ 2192536 };
		inline constexpr RE::RuntimeID NextChunk{ 2192537 };
		inline constexpr RE::RuntimeID NextForm{ 2192527 };
		inline constexpr RE::RuntimeID NextGroup{ 2192522 };
		inline constexpr RE::RuntimeID OpenTES{ 2192490 };
	}

	namespace TESForm
	{
		inline constexpr RE::RuntimeID FormSortFunc{ RE::NO_ID };  // 705530 - inlined?
		inline constexpr RE::RuntimeID AddChangeForced{ 2193081, 1448698 };
		inline constexpr RE::RuntimeID AddCompileIndex{ 2193152 };
		inline constexpr RE::RuntimeID AllForms{ 4796465, 422985 };
		inline constexpr RE::RuntimeID AllFormsMapLock{ 4796476, 691815 };
		inline constexpr RE::RuntimeID AllFormsByEditorID{ 4796466, 642758 };
		inline constexpr RE::RuntimeID AllFormsEditorIDMapLock{ 4796477, 910917 };
		inline constexpr RE::RuntimeID GetFile{ 2193103 };
		inline constexpr RE::RuntimeID GetFormByNumericID{ 2193092 };
		inline constexpr RE::RuntimeID GetFormEnumString{ 1309967 };
		inline constexpr RE::RuntimeID GetFormTypeFromString{ 2193108 };
		inline constexpr RE::RuntimeID SetTemporary{ 2193125 };
	}

	namespace TESFormDeleteEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201842 };
	}

	namespace TESFullName
	{
		inline constexpr RE::RuntimeID SparseFullNameMap{ 2661402, 226372 };
	}

	namespace TESFurniture
	{
		inline constexpr RE::RuntimeID GetContainer{ 2198043 };
		inline constexpr RE::RuntimeID Activate{ 2198054 };
	}

	namespace TESFurnitureEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201844 };
	}

	namespace TESHarvestEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2193351 };
	}

	namespace TESHealthForm
	{
		inline constexpr RE::RuntimeID GetFormHealth{ 2193227 };
	}

	namespace TESHitEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201886, 1411899 };
	}

	namespace TESInitScriptEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201846 };
	}

	namespace TESLeveledList
	{
		inline constexpr RE::RuntimeID AddLeveledObject{ 2193258, 1163308 };
		inline constexpr RE::RuntimeID AddScriptAddedLeveledObject{ 2193269, 860553 };
		inline constexpr RE::RuntimeID CalculateCurrentFormList{ 2193259 };
		inline constexpr RE::RuntimeID CalculateCurrentFormListForRef{ 2193260 };
		inline constexpr RE::RuntimeID GetUseAll{ 2193253, 233875 };
	}

	namespace TESLoadGameEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201848 };
	}

	namespace TESLoadScreen
	{
		inline constexpr RE::RuntimeID GetLoadNIFModel{ 2204241, 1394466 };
	}

	namespace TESLocationClearedEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201849 };
	}

	namespace TESMagicEffectApplyEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201851 };
	}

	namespace TESNPC
	{
		inline constexpr RE::RuntimeID AlternateHeadPartListMap{ 2662368 };
		inline constexpr RE::RuntimeID GetSex{ 2207107 };
		inline constexpr RE::RuntimeID GetFacialBoneMorphIntensity{ 2207416 };
		inline constexpr RE::RuntimeID SetHairColor{ 2207426 };
		inline constexpr RE::RuntimeID GetShortName{ 2207405 };
		inline constexpr RE::RuntimeID GetXPValue{ 2207384 };
	}

	namespace TESObjectARMO
	{
		namespace InstanceData
		{
			inline constexpr RE::RuntimeID GetKeywordData{ 2715386 };
			inline constexpr RE::RuntimeID DeleteKeywordData{ 2198505 };
			inline constexpr RE::RuntimeID CreateKeywordData{ 2198504 };
			inline constexpr RE::RuntimeID GetBlockBashData{ 2715387 };
			inline constexpr RE::RuntimeID DeleteBlockBashData{ 2198508 };
			inline constexpr RE::RuntimeID CreateBlockBashData{ 2198507 };
			inline constexpr RE::RuntimeID GetEnchantmentArray{ 2715388 };
			inline constexpr RE::RuntimeID DeleteEnchantmentArray{ 2198511 };
			inline constexpr RE::RuntimeID CreateEnchantmentArray{ 2198510 };
			inline constexpr RE::RuntimeID GetMaterialSwapArray{ 2198512 };
			inline constexpr RE::RuntimeID DeleteMaterialSwapArray{ 2198514 };
			inline constexpr RE::RuntimeID CreateMaterialSwapArray{ 2198513 };
			inline constexpr RE::RuntimeID GetWeight{ 2198515 };
			inline constexpr RE::RuntimeID GetValue{ 2198516 };
			inline constexpr RE::RuntimeID GetHealth{ 2198517 };
			inline constexpr RE::RuntimeID GetColorRemappingIndex{ 2198518 };
		}

		inline constexpr RE::RuntimeID Protects{ 2198535 };
	}

	namespace TESObjectCELL
	{
		inline constexpr RE::RuntimeID GetbhkWorld{ 2200260 };
		inline constexpr RE::RuntimeID GetCantWaitHere{ 2200287 };
		inline constexpr RE::RuntimeID GetDataX{ 2200213 };
		inline constexpr RE::RuntimeID GetDataY{ 2200214 };
		inline constexpr RE::RuntimeID GetEncounterZone{ 2200242 };
		inline constexpr RE::RuntimeID GetLocation{ 2200179 };
		inline constexpr RE::RuntimeID GetOwner{ 2200236 };
		inline constexpr RE::RuntimeID GetRegionList{ 2200265 };
		inline constexpr RE::RuntimeID Pick{ 2200263 };
		inline constexpr RE::RuntimeID SetCullCellMarkers{ 2192259 };
		inline constexpr RE::RuntimeID UpdateAllRefsLoaded{ 2200415 };
		inline constexpr RE::RuntimeID AttatchReference3D{ 2200620 };
		inline constexpr RE::RuntimeID RemoveReference{ 2200299 };
		inline constexpr RE::RuntimeID UpdateAllDecals{ 2200643 };
		inline constexpr RE::RuntimeID DefaultWater{ 4799138 };
	}

	namespace TESObjectCONT
	{
		inline constexpr RE::RuntimeID GetActivateText{ 2198653 };
	}

	namespace TESObjectDOOR
	{
		inline constexpr RE::RuntimeID GetActivateText{ 2198690 };
		inline constexpr RE::RuntimeID CalculateDoFavor{ 2198692 };
	}

	namespace TESObjectLoadedEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201853 };
	}

	namespace TESObjectREFR
	{
		inline constexpr RE::RuntimeID ActivateRef{ 2201147 };
		inline constexpr RE::RuntimeID AddInventoryItem{ 2200949, 78185 };
		inline constexpr RE::RuntimeID AddItemIfContainer{ 2200918, 1129665 };
		inline constexpr RE::RuntimeID AddKeyword{ 2200860 };
		inline constexpr RE::RuntimeID AddLockChange{ 2200731 };
		inline constexpr RE::RuntimeID ApplyArtObject{ 2205200 };
		inline constexpr RE::RuntimeID ApplyEffectShader{ 2205201 };
		inline constexpr RE::RuntimeID Enable{ 2201150, 1396707 };
		inline constexpr RE::RuntimeID FindReferenceFor3D{ 2201082 };
		inline constexpr RE::RuntimeID GetCalcLevel{ 2202630, 1134005 };
		inline constexpr RE::RuntimeID GetCurrentLocation{ 2201163 };
		inline constexpr RE::RuntimeID GetDisplayFullName{ 2201126, 1212056 };
		inline constexpr RE::RuntimeID GetDistanceFromPoint{ 2201172 };
		inline constexpr RE::RuntimeID GetDistanceFromReference{ 2201174 };
		inline constexpr RE::RuntimeID GetDistanceSqFromPoint{ 2201173 };
		inline constexpr RE::RuntimeID GetDistanceSqFromReference{ 2201175 };
		inline constexpr RE::RuntimeID GetEditorDead{ 2200781 };
		inline constexpr RE::RuntimeID GetOwner{ 2202616 };
		inline constexpr RE::RuntimeID GetGoldAmount{ 2200923, 564356 };
		inline constexpr RE::RuntimeID GetHandle{ 2201196, 1573130 };
		inline constexpr RE::RuntimeID GetHasOwner{ 2202622 };
		inline constexpr RE::RuntimeID GetInventoryObjectCount{ 2200939 };
		inline constexpr RE::RuntimeID GetItemHealthPercent{ 2202605, 1499810 };
		inline constexpr RE::RuntimeID GetLinkedRef{ 2202683, 897287 };
		inline constexpr RE::RuntimeID GetLock{ 2202648 };
		inline constexpr RE::RuntimeID GetWeightInContainer{ 2201001 };
		inline constexpr RE::RuntimeID HasContainer{ 2201022, 1213017 };
		inline constexpr RE::RuntimeID IsAnOwner{ 2202635 };
		inline constexpr RE::RuntimeID IsCrimeToActivate{ 2201180 };
		inline constexpr RE::RuntimeID IsLeveledCreature{ 2202655 };
		inline constexpr RE::RuntimeID MarkAsDeleted{ 2201156 };
		inline constexpr RE::RuntimeID MoveRefIntoInventory{ 2200917, 1264370 };
		inline constexpr RE::RuntimeID MoveRefToNewSpace{ 2201149 };
		inline constexpr RE::RuntimeID RemoveKeyword{ 2200861 };
		inline constexpr RE::RuntimeID RerollLeveledItemBase{ 2202658, 185044 };
		inline constexpr RE::RuntimeID ResetUnchangedRefInventory{ 2200547, 819906 };
		inline constexpr RE::RuntimeID SetAngleOnReference{ 2201134 };
		inline constexpr RE::RuntimeID SetLinkedRef{ 2202684 };
		inline constexpr RE::RuntimeID SetLocationOnReference{ 2201138 };
		inline constexpr RE::RuntimeID SetWantsDelete{ 2201199 };
		inline constexpr RE::RuntimeID RebuildBendableSpline{ 2201119 };
		inline constexpr RE::RuntimeID GetItemCount{ 2200996 };
		inline constexpr RE::RuntimeID UpdateReference3D{ 2201071 };
		inline constexpr RE::RuntimeID GetObjectCenter{ 2201092 };
		inline constexpr RE::RuntimeID SetScale{ 2200893 };
		inline constexpr RE::RuntimeID IsMarker{ 2201157 };
		inline constexpr RE::RuntimeID IsDecalRef{ 2200794 };
		inline constexpr RE::RuntimeID UpdateDynamicNavmesh{ 2201206 };
		inline constexpr RE::RuntimeID GetMapMarkerData{ 2202644 };
		inline constexpr RE::RuntimeID GetRelevantWaterHeight{ 2201189 };
		inline constexpr RE::RuntimeID CanBeMoved{ 2200898 };
		inline constexpr RE::RuntimeID HasLocationRefType{ 2202676 };
	}

	namespace TESObjectWEAP
	{
		namespace InstanceData
		{
			inline constexpr RE::RuntimeID GetKeywordData{ 2198893 };
			inline constexpr RE::RuntimeID DeleteKeywordData{ 2198895 };
			inline constexpr RE::RuntimeID CreateKeywordData{ 2198894 };
			inline constexpr RE::RuntimeID GetBlockBashData{ 2198896 };
			inline constexpr RE::RuntimeID DeleteBlockBashData{ 2198898 };
			inline constexpr RE::RuntimeID CreateBlockBashData{ 2198897 };
			inline constexpr RE::RuntimeID GetEnchantmentArray{ 2198899 };
			inline constexpr RE::RuntimeID DeleteEnchantmentArray{ 2198901 };
			inline constexpr RE::RuntimeID CreateEnchantmentArray{ 2198900 };
			inline constexpr RE::RuntimeID GetMaterialSwapArray{ 2198902 };
			inline constexpr RE::RuntimeID DeleteMaterialSwapArray{ 2198904 };
			inline constexpr RE::RuntimeID CreateMaterialSwapArray{ 2198903 };
			inline constexpr RE::RuntimeID GetWeight{ 2198905 };
			inline constexpr RE::RuntimeID GetValue{ 2198906 };
			inline constexpr RE::RuntimeID GetColorRemappingIndex{ 2198907 };
			inline constexpr RE::RuntimeID PostAttach3D{ 2198909 };
			inline constexpr RE::RuntimeID PostApplyMods{ 2198908 };
		}

		inline constexpr RE::RuntimeID GetProjectile{ 2198934, 1379893 };
		inline constexpr RE::RuntimeID GetRateOfFire{ 2198956, 752116 };
		inline constexpr RE::RuntimeID GetMeleeAttackSpeed{ 2198957 };
		inline constexpr RE::RuntimeID GetMeleeAttackSpeedLabel{ 2198959 };
		inline constexpr RE::RuntimeID Fire{ 2198960, 1056037 };
	}

	namespace TESQuest
	{
		inline constexpr RE::RuntimeID SetStage{ 2207743 };
		inline constexpr RE::RuntimeID GetAliasedRef{ 2207810 };
		inline constexpr RE::RuntimeID GetActive{ 2207733 };
	}

	namespace TESResponse
	{
		inline constexpr RE::RuntimeID GetResponseText{ 2208288 };
		inline constexpr RE::RuntimeID GetSpeakerIdle{ 2208293 };
	}

	namespace TESSpellList
	{
		inline constexpr RE::RuntimeID AddSpell{ 2193395 };
	}

	namespace TESSwitchRaceCompleteEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 2201874 };
	}

	namespace TESTopic
	{
		inline constexpr RE::RuntimeID InitDialogueItem{ 2208360 };
	}

	namespace TESTopicInfo
	{
		inline constexpr RE::RuntimeID GetParentInfoGroup{ 2208435 };
		inline constexpr RE::RuntimeID GetChallengeLevel{ 2208441 };
		inline constexpr RE::RuntimeID GetSuccessLevel{ 2208444 };
		inline constexpr RE::RuntimeID StartSceneOnEnd{ 2208466 };
		inline constexpr RE::RuntimeID GetScene{ 2208453 };
		inline constexpr RE::RuntimeID StartScene{ 2208469 };
		inline constexpr RE::RuntimeID GetSpeaker{ 2208449 };
	}

	namespace TESValueForm
	{
		inline constexpr RE::RuntimeID GetFormValue{ 2193435, 885783 };
	}

	namespace TESWaterDisplacement
	{
		inline constexpr RE::RuntimeID SetStencilBit{ 2213923 };
	}

	namespace TESWeightForm
	{
		inline constexpr RE::RuntimeID GetFormWeight{ 2193446 };
	}

	namespace TESWorldSpace
	{
		inline constexpr RE::RuntimeID DefaultWater{ 4799138 };
		inline constexpr RE::RuntimeID GetSkyCell{ 2202924, 903020 };
		inline constexpr RE::RuntimeID AdjustMapMarkerCoord{ 2202880 };
	}

	namespace TLS
	{
		inline constexpr RE::RuntimeID Index{ 2787938, 842564 };
	}

	namespace UI
	{
		inline constexpr RE::RuntimeID Singleton{ 4796314, 548587 };
		inline constexpr RE::RuntimeID CustomRendererHasQuads{ 2284757 };
		inline constexpr RE::RuntimeID GetMenuMapRWLock{ 2707105, 578487 };
		inline constexpr RE::RuntimeID ProcessMessages{ 2284754, 239710 };
		inline constexpr RE::RuntimeID RefreshCursor{ 2284772 };
		inline constexpr RE::RuntimeID RegisterMenu{ 2284766 };
		inline constexpr RE::RuntimeID UpdateControllerType{ 2284768 };
	}

	namespace UIAdvanceMenusFunctionCompleteEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 4801719 };
	}

	namespace UIMessageQueue
	{
		inline constexpr RE::RuntimeID Singleton{ 4796377, 82123 };
		inline constexpr RE::RuntimeID AddMessage{ 2284929, 1182019 };
	}

	namespace UIUtils
	{
		inline constexpr RE::RuntimeID GetComparisonItems{ RE::NO_ID };  // 593818 - inlined?
		inline constexpr RE::RuntimeID PlayPipboySound{ 2249706 };
		inline constexpr RE::RuntimeID PlayMenuSound{ 2249707, 1227993 };
		inline constexpr RE::RuntimeID UpdateGamepadDependentButtonCodes{ 4483350 };
		inline constexpr RE::RuntimeID ShowCraftingMenu{ 2249718 };
		inline constexpr RE::RuntimeID HasRequiredInventoryForCraftingMenu{ 2249717 };
	}

	namespace VATS
	{
		inline constexpr RE::RuntimeID Singleton{ 4797733, 570121 };
		inline constexpr RE::RuntimeID CanActivateCriticals{ 2237208 };
	}

	namespace WeaponFiredEvent
	{
		inline constexpr RE::RuntimeID GetEventSource{ 4797962, 1200049 };
	}

	namespace WorkbenchMenuBase
	{
		inline constexpr RE::RuntimeID UpdateOptimizedAutoBuildInv{ 2224955, 769581 };
		inline constexpr RE::RuntimeID BuildSharedContainers{ 2224943, 589226 };
		inline constexpr RE::RuntimeID ProcessMessage{ 2224938, 1403625 };
		inline constexpr RE::RuntimeID QCurrentModChoiceData{ 2224958 };
		inline constexpr RE::RuntimeID ShowBuildFailureMessage{ 2224959 };
		inline constexpr RE::RuntimeID GetRequiredComponents{ 2224941, 271108 };
		inline constexpr RE::RuntimeID RemoveObjectFromContainers{ 2224960, 1194499 };
		inline constexpr RE::RuntimeID QueueCraftingComponent{ 1324921, 723871 };
		inline constexpr RE::RuntimeID PlayCraftSound{ 2224940, 630508 };
	}

	namespace Workshop
	{
		namespace PlacementItemData
		{
			inline constexpr RE::RuntimeID Set{ 2195643 };
		}

		namespace WorkshopMenuNode
		{
			inline constexpr RE::RuntimeID FindAndSetSelectedNode{ 2195022 };
		}

		inline constexpr RE::RuntimeID FindNearestValidWorkshop{ 2194970 };
		inline constexpr RE::RuntimeID FreeBuild{ 2194924 };
		inline constexpr RE::RuntimeID GetSelectedWorkshopMenuNode{ 2195024 };
		inline constexpr RE::RuntimeID InitializePlacementReference{ RE::NO_ID };  // 1577199 - inlined
		inline constexpr RE::RuntimeID IsLocationWithinBuildableArea{ 2194956 };
		inline constexpr RE::RuntimeID PlaceCurrentReference{ 2195155 };
		inline constexpr RE::RuntimeID RegisterForItemDestroyed{ 2194930 };
		inline constexpr RE::RuntimeID RegisterForItemMoved{ 2194932 };
		inline constexpr RE::RuntimeID RegisterForItemPlaced{ 2194926 };
		inline constexpr RE::RuntimeID RegisterForWorkshopModeEvent{ 2194946 };
		inline constexpr RE::RuntimeID RequestExitWorkshop{ 2195135 };
		inline constexpr RE::RuntimeID ScrapReference{ 2195125 };
		inline constexpr RE::RuntimeID SetSelectedEditItem{ 2195119 };
		inline constexpr RE::RuntimeID StartWorkshop{ 2195134 };
		inline constexpr RE::RuntimeID ToggleEditMode{ 2195130 };
		inline constexpr RE::RuntimeID UnregisterForItemDestroyed{ 2194931 };
		inline constexpr RE::RuntimeID UnregisterForItemMoved{ 2194933 };
		inline constexpr RE::RuntimeID UnregisterForItemPlaced{ 2194927 };
		inline constexpr RE::RuntimeID UnregisterForWorkshopModeEvent{ 2194947 };
		inline constexpr RE::RuntimeID UpdateActiveEdit{ 2195210 };
		inline constexpr RE::RuntimeID WorkshopCanShowRecipe{ 2195115 };
		inline constexpr RE::RuntimeID CurrentPlacementItemData{ 4797261 };
		inline constexpr RE::RuntimeID CurrentRow{ 4797160 };
		inline constexpr RE::RuntimeID PlacementItem{ 4797235 };
	}

	namespace WorkshopMenu
	{
		inline constexpr RE::RuntimeID CheckAndSetItemForPlacement{ 2224991 };
		inline constexpr RE::RuntimeID UpdateButtonText{ 2224992 };
	}

	inline constexpr RE::RuntimeID NiFree{ 2268539 };
	inline constexpr RE::RuntimeID NiMalloc{ 2268535 };
	inline constexpr RE::RuntimeID RTDynamicCast{ 4818455 };
	inline constexpr RE::RuntimeID IsPlayerInDialogue{ 2188686 };
}

namespace Scaleform::ID
{
	namespace GFx::ASStringManager
	{
		inline constexpr RE::RuntimeID CreateStringNode{ 2290014 };
	}

	namespace GFx::Loader
	{
		inline constexpr RE::RuntimeID CreateMovie{ 2284723 };
	}

	namespace GFx::Movie
	{
		inline constexpr RE::RuntimeID Release{ 2287230 };
	}

	namespace GFx::Value
	{
		inline constexpr RE::RuntimeID ObjectAddRef{ 2286228, 244786 };
		inline constexpr RE::RuntimeID ObjectRelease{ 2286229, 856221 };
		inline constexpr RE::RuntimeID HasMember{ 2286078, 788691 };
		inline constexpr RE::RuntimeID GetArraySize{ 2285791, 254218 };
		inline constexpr RE::RuntimeID GetMember{ 4494126, 1517430 };
		inline constexpr RE::RuntimeID GetElement{ 2285881, 827659 };
		inline constexpr RE::RuntimeID SetElement{ 2286575, 433707 };
		inline constexpr RE::RuntimeID SetMember{ 2286589, 1360149 };
		inline constexpr RE::RuntimeID Invoke{ 2286101, 655847 };
		inline constexpr RE::RuntimeID PushBack{ 2286424, 1330475 };
		inline constexpr RE::RuntimeID RemoveElements{ 2286475 };
		inline constexpr RE::RuntimeID VisitMembers{ 2286786, 1276961 };
		inline constexpr RE::RuntimeID GetDisplayInfo{ 2285873 };
	}

	namespace Memory
	{
		inline constexpr RE::RuntimeID SetGlobalHeap{ 2707353, 939898 };
		inline constexpr RE::RuntimeID GetGlobalHeap{ 2707353, 939898 };
	}

	namespace SysAlloc
	{
		inline constexpr RE::RuntimeID InitHeapEngine{ 4493927 };
		inline constexpr RE::RuntimeID ShutdownHeapEngine{ 2284536 };
	}
}
