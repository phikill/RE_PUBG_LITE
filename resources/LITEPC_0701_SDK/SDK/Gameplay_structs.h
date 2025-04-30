#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Gameplay.EBattleItemOperationType
enum class EBattleItemOperationType : uint8_t
{
	EBattleItemOperationType__Pickup = 0,
	EBattleItemOperationType__Drop = 1,
	EBattleItemOperationType__Use  = 2,
	EBattleItemOperationType__Disuse = 3,
	EBattleItemOperationType__EBattleItemOperationType_MAX = 4
};


// Enum Gameplay.EBattleItemOperationFailedReason
enum class EBattleItemOperationFailedReason : uint8_t
{
	EBattleItemOperationFailedReason__PickupFailed_Default = 0,
	EBattleItemOperationFailedReason__PickupFailed_CapacityExceeded = 1,
	EBattleItemOperationFailedReason__DropFailed_Default = 2,
	EBattleItemOperationFailedReason__UseFailed_Default = 3,
	EBattleItemOperationFailedReason__UseFailed_CapacityExceeded = 4,
	EBattleItemOperationFailedReason__DisuseFailed_Default = 5,
	EBattleItemOperationFailedReason__DisuseFailed_CapacityExceeded = 6,
	EBattleItemOperationFailedReason__EBattleItemOperationFailedReason_MAX = 7
};


// Enum Gameplay.ECharacterGender
enum class ECharacterGender : uint8_t
{
	ECharacterGender__Male         = 0,
	ECharacterGender__Female       = 1,
	ECharacterGender__ECharacterGender_MAX = 2
};


// Enum Gameplay.ECharacterPoseType
enum class ECharacterPoseType : uint8_t
{
	ECharacterPoseType__ECharPose_Stand = 0,
	ECharacterPoseType__ECharPose_Crouch = 1,
	ECharacterPoseType__ECharPose_Prone = 2,
	ECharacterPoseType__ECharPose_Max = 3
};


// Enum Gameplay.ECharacterAnimType
enum class ECharacterAnimType : uint8_t
{
	ECharacterAnimType__ECharAnim_Move = 0,
	ECharacterAnimType__ECharAnim_Aim = 1,
	ECharacterAnimType__ECharAnim_ToStand = 2,
	ECharacterAnimType__ECharAnim_ToCrouch = 3,
	ECharacterAnimType__ECharAnim_ToProne = 4,
	ECharacterAnimType__ECharAnim_PickM = 5,
	ECharacterAnimType__ECharAnim_PickL = 6,
	ECharacterAnimType__ECharAnim_Equip_Primary = 7,
	ECharacterAnimType__ECharAnim_Equip_Secondary = 8,
	ECharacterAnimType__ECharAnim_Equip_Pistol = 9,
	ECharacterAnimType__ECharAnim_Equip_Melee = 10,
	ECharacterAnimType__ECharAnim_Equip_Thrown = 11,
	ECharacterAnimType__ECharAnim_Hurt = 12,
	ECharacterAnimType__ECharAnim_Reload = 13,
	ECharacterAnimType__ECharAnim_TacticsReload = 14,
	ECharacterAnimType__ECharAnim_Fire_Single = 15,
	ECharacterAnimType__ECharAnim_Fire_Burst = 16,
	ECharacterAnimType__ECharAnim_Fire_Auto = 17,
	ECharacterAnimType__ECharAnim_ToggleFiringMode_Single = 18,
	ECharacterAnimType__ECharAnim_ToggleFiringMode_Burst = 19,
	ECharacterAnimType__ECharAnim_ToggleFiringMode_Auto = 20,
	ECharacterAnimType__ECharAnim_Turn_L = 21,
	ECharacterAnimType__ECharAnim_Turn_R = 22,
	ECharacterAnimType__ECharAnim_PullingPlug = 23,
	ECharacterAnimType__ECharAnim_PutDownWeapon = 24,
	ECharacterAnimType__ECharAnim_WeaponIdle = 25,
	ECharacterAnimType__ECharAnim_VehWeaponIdle = 26,
	ECharacterAnimType__ECharAnim_VehWeaponAim = 27,
	ECharacterAnimType__ECharAnim_VehWeaponReload = 28,
	ECharacterAnimType__ECharAnim_Peek = 29,
	ECharacterAnimType__ECharAnim_PeekLeftAim = 30,
	ECharacterAnimType__ECharAnim_PeekRightAim = 31,
	ECharacterAnimType__ECharAnim_ForegripAnim = 32,
	ECharacterAnimType__ECharAnim_Move_FPP = 33,
	ECharacterAnimType__ECharAnim_Max = 34
};


// Enum Gameplay.ECharAnimEventType
enum class ECharAnimEventType : uint8_t
{
	ECharAnimEvent_PoseChange      = 0,
	ECharAnimEvent_PickUp          = 1,
	ECharAnimEvent_Fire            = 2,
	ECharAnimEvent_Reload          = 3,
	ECharAnimEvent_Switch          = 4,
	ECharAnimEvent_Peek            = 5,
	ECharAnimEvent_PeekAim         = 6,
	ECharAnimEvent_Bolt            = 7,
	ECharAnimEvent_ToggleFiringMode = 8,
	ECharAnimEvent_Max             = 9
};


// Enum Gameplay.ECharacterJumpType
enum class ECharacterJumpType : uint8_t
{
	ECharJump_InPlace              = 0,
	ECharJump_Forward              = 1,
	ECharJump_Max                  = 2
};


// Enum Gameplay.ETLog_BackpackEquipmentSlotType
enum class ETLog_BackpackEquipmentSlotType : uint8_t
{
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_None = 0,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_WeaponSlot1 = 1,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_WeaponSlot2 = 2,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_HelmetSlot = 3,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_ArmorSlot = 4,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_BagSlot = 5,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1GunPoint = 6,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Grip = 7,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Magazine = 8,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Gunstock = 9,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1OpticalSight = 10,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2GunPoint = 11,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Grip = 12,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Magazine = 13,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Gunstock = 14,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2OpticalSight = 15,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_MAX = 16
};


// Enum Gameplay.EVehicleSpotRandomType
enum class EVehicleSpotRandomType : uint8_t
{
	Vehicle_TotalCount             = 0,
	Vehicle_Probability            = 1,
	Vehicle_MAX                    = 2
};


// Enum Gameplay.ESpotType
enum class ESpotType : uint8_t
{
	ESpotType_A                    = 0,
	ESpotType_B                    = 1,
	ESpotType_C                    = 2,
	ESpotType_D                    = 3,
	ESpotType_E                    = 4,
	ESpotType_F                    = 5,
	ESpotType_G                    = 6,
	ESpotType_H                    = 7,
	ESpotType_I                    = 8,
	ESpotType_J                    = 9,
	ESpotType_K                    = 10,
	ESpotType_L                    = 11,
	ESpotType_M                    = 12,
	ESpotType_N                    = 13,
	ESpotType_MAX                  = 14
};


// Enum Gameplay.ESpotGroupType
enum class ESpotGroupType : uint8_t
{
	ESpotGroup_A                   = 0,
	ESpotGroup_B                   = 1,
	ESpotGroup_C                   = 2,
	ESpotGroup_D                   = 3,
	ESpotGroup_E                   = 4,
	ESpotGroup_F                   = 5,
	ESpotGroup_G                   = 6,
	ESpotGroup_H                   = 7,
	ESpotGroup_I                   = 8,
	ESpotGroup_J                   = 9,
	ESpotGroup_K                   = 10,
	ESpotGroup_L                   = 11,
	ESpotGroup_M                   = 12,
	ESpotGroup_N                   = 13,
	ESpotGroup_MAX                 = 14
};


// Enum Gameplay.EVehicleSeatType
enum class EVehicleSeatType : uint8_t
{
	EVehSeatType_Driver            = 0,
	EVehSeatType_Left              = 1,
	EVehSeatType_Right             = 2,
	EVehSeatType_Max               = 3
};


// Enum Gameplay.EVehicleType
enum class EVehicleType : uint8_t
{
	EVehType_Buggy                 = 0,
	EVehType_UAZ                   = 1,
	EVehType_Motorcycle            = 2,
	EVehType_Dacia                 = 3,
	EVehType_PG                    = 4,
	EVehType_Max                   = 5
};


// Enum Gameplay.ECharacterJumpPhase
enum class ECharacterJumpPhase : uint8_t
{
	EJumpPhase_PreJump             = 0,
	EJumpPhase_FallLoop0           = 1,
	EJumpPhase_FallLoop1           = 2,
	EJumpPhase_Land0               = 3,
	EJumpPhase_Land1               = 4,
	EJumpPhase_Max                 = 5
};


// Enum Gameplay.ECharaAnimListType
enum class ECharaAnimListType : uint8_t
{
	ECharaAnimListType_TPP         = 0,
	ECharaAnimListType_FPP         = 1,
	ECharaAnimListType_Jump        = 2,
	ECharaAnimListType_JumpFPP     = 3,
	ECharaAnimListType_Max         = 4
};


// Enum Gameplay.ECharacterVehicleAnimType
enum class ECharacterVehicleAnimType : uint8_t
{
	ECharacterVehicleAnimType__ECharVehAnim_Idle = 0,
	ECharacterVehicleAnimType__ECharVehAnim_IdleWithWeapon = 1,
	ECharacterVehicleAnimType__ECharVehAnim_LeanOut = 2,
	ECharacterVehicleAnimType__ECharVehAnim_LeanIn = 3,
	ECharacterVehicleAnimType__ECharVehAnim_Aim = 4,
	ECharacterVehicleAnimType__ECharVehAnim_AimFPP = 5,
	ECharacterVehicleAnimType__ECharVehAnim_NoDriver_Idle = 6,
	ECharacterVehicleAnimType__ECharVehAnim_NoDriver_IdleWithWeapon = 7,
	ECharacterVehicleAnimType__ECharVehAnim_NoDriver_Aim = 8,
	ECharacterVehicleAnimType__ECharVehAnim_NoDriver_AimFPP = 9,
	ECharacterVehicleAnimType__ECharVehAnim_Max = 10
};


// Enum Gameplay.EWeatherType
enum class EWeatherType : uint8_t
{
	EWeatherType_None              = 0,
	EWeatherType_Sunday            = 1,
	EWeatherType_Rainy             = 2,
	EWeatherType_Foggy             = 3,
	EWeatherType_Sunset            = 4,
	EWeatherType_MAX               = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Gameplay.PlayerNetStats
// 0x0040
struct FPlayerNetStats
{
	struct FString                                     ClientAddr;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     LocalAddr;                                                // 0x0010(0x0010) (ZeroConstructor)
	float                                              AvgPing;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxPing;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HighPingPercent;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x002C(0x0014) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModePlayerItem
// 0x0008
struct FGameModePlayerItem
{
	int                                                ItemTableID;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerBanChat
// 0x0018
struct FGameModePlayerBanChat
{
	int                                                end_time;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Reason;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerParams
// 0x00A0
struct FGameModePlayerParams
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGM;                                                    // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      gender;                                                   // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAIPlayer;                                                // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x001B(0x0005) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 ItemList;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        WeaponAvatarList;                                         // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        EquipmentAvatarList;                                      // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Emotes;                                                   // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FGameModePlayerBanChat                      banChat;                                                  // 0x0060(0x0018) (Edit)
	struct FName                                       CurrentPlayerState;                                       // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrentCharacterState;                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SyncedTimestamp;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DestinyValue;                                             // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmScore;                                                // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RatingScore;                                              // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsObserver;                                              // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlatformGender;                                           // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
};

// ScriptStruct Gameplay.UAEWindowRepData
// 0x0050
struct FUAEWindowRepData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	struct FString                                     PathToLoad;                                               // 0x0030(0x0010) (ZeroConstructor)
	int                                                ID;                                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBroken;                                                  // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class APawn*                                       LastInstigatorPawn;                                       // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TLog_PickUpItemFlow
// 0x0028
struct FTLog_PickUpItemFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     TimeStr;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Gameplay.TLog_PropEquipUnequipFlow
// 0x0018
struct FTLog_PropEquipUnequipFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETLog_BackpackEquipmentSlotType                    slotType;                                                 // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FString                                     TimeStr;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Gameplay.GameModeTeammateBattleResultData
// 0x0058
struct FGameModeTeammateBattleResultData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	uint64_t                                           UID;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Kill;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     State;                                                    // 0x0020(0x0010) (ZeroConstructor)
	float                                              travelDistance;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              marchDistance;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              driveDistance;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AssistNum;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              surviveTime;                                              // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DestroyVehicles;                                          // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerBattleResultData
// 0x00E0
struct FGameModePlayerBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                RemainingPlayerCount;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPlayerCount;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RemainingTeamCount;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalTeamCount;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSolo;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	uint64_t                                           Killer;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotNum;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum;                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HealTimes;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FString>                             KillFlow;                                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  // 0x0050(0x0010) (ZeroConstructor)
	int                                                destroyVehicleNum;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                is_escape;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameModeTeammateBattleResultData>   TeammateList;                                             // 0x0068(0x0010) (ZeroConstructor)
	struct FVector                                     LandLocation;                                             // 0x0078(0x000C) (IsPlainOldData)
	struct FVector                                     DeadLocation;                                             // 0x0084(0x000C) (IsPlainOldData)
	struct FString                                     DeadDamangeType;                                          // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     DeadTimeStr;                                              // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     logoutime;                                                // 0x00B0(0x0010) (ZeroConstructor)
	float                                              Pronetime;                                                // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BeInWaterTime;                                            // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwimmingDistance;                                         // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeDownTimes;                                              // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PickUpAirDrops;                                           // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalScore;                                               // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GroupSpotComponentArray
// 0x0018
struct FGroupSpotComponentArray
{
	TEnumAsByte<ESpotGroupType>                        GroupType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UGroupSpotSceneComponent*>            AllGroupComponents;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.WorldTileSpotArray
// 0x0018
struct FWorldTileSpotArray
{
	int                                                WorldCompositionID;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class USpotSceneComponent*>                 AllSpotComponents;                                        // 0x0008(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemSpawnData
// 0x0070
struct FItemSpawnData
{
	struct FName                                       RowName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KeyID;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ItemValue;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemCategory;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemWeight;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     ItemPath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemStackCount;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     ItemTogetherPath;                                         // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemTogetherStackCount;                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMin;                                     // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMax;                                     // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GroupTypeSceneComponents
// 0x0018
struct FGroupTypeSceneComponents
{
	int                                                GroupType;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class USceneComponent*>                     SceneComponents;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemSpawnClass
// 0x0010
struct FItemSpawnClass
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemGroupStatisticsData
// 0x0018 (0x0020 - 0x0008)
struct FItemGroupStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                AllGroupSpotCount;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemSpotStatisticsData
// 0x0010 (0x0018 - 0x0008)
struct FItemSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                AllSpotCount;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.BuildingStatisticsData
// 0x0078 (0x0080 - 0x0008)
struct FBuildingStatisticsData : public FTableRowBase
{
	struct FString                                     BuildingName;                                             // 0x0008(0x0010) (ZeroConstructor)
	float                                              BuildingLocationX;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildingLocationY;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllGroupSpotCount;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<ESpotType>, struct FItemSpotStatisticsData> SpotStatisticsData;                                       // 0x0030(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.ItemClassStatisticsData
// 0x0030 (0x0038 - 0x0008)
struct FItemClassStatisticsData : public FTableRowBase
{
	struct FString                                     ItemPath;                                                 // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bValidPath;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                ItemCount;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTogetherPath;                                         // 0x0020(0x0010) (ZeroConstructor)
	int                                                ItemTogetherCount;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bValidTogetherPath;                                       // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemGenerateStatisticsData
// 0x0100
struct FItemGenerateStatisticsData
{
	int                                                AllGroupSpotCount;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<ESpotGroupType>, struct FItemGroupStatisticsData> GroupStatisticsData;                                      // 0x0010(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FBuildingStatisticsData> BuildingStatisticsData;                                   // 0x0060(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FItemClassStatisticsData> ItemStatisticsData;                                       // 0x00B0(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.SpotWeight
// 0x0018
struct FSpotWeight
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.SpotTypeProperty
// 0x0038
struct FSpotTypeProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SpotPercentMin;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpotPercentMax;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpotPercentDot;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerSpotMin;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerSpotMax;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpotWeight>                         WeightsPerValue;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.SpotGroupProperty
// 0x0018
struct FSpotGroupProperty
{
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SpotGroupPercent;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpotTypeProperty>                   SpotTypeProperties;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemGenerateSpawnData
// 0x0068
struct FItemGenerateSpawnData
{
	int                                                KeyID;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ItemValue;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemCategory;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemWeight;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     ItemPath;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemStackCount;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     ItemTogetherPath;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemTogetherStackCount;                                   // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMin;                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMax;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemGenerateSpawnDataArray
// 0x0020
struct FItemGenerateSpawnDataArray
{
	struct FString                                     ValueCatetory;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemGenerateSpawnData>              AllGenerateSpawnDatas;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemGenerateSpawnClass
// 0x0010
struct FItemGenerateSpawnClass
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ChararacterPoseAnimData
// 0x0040
struct FChararacterPoseAnimData
{
	ECharacterPoseType                                 PoseType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     PoseName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.ChararacterPoseAnimData.PoseAnimSoftPtr
};

// ScriptStruct Gameplay.CharacterMovementAnimData
// 0x0028
struct FCharacterMovementAnimData
{
	ECharacterAnimType                                 AnimType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     AnimTypeName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FChararacterPoseAnimData>            PoseAnimList;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Gameplay.ChararacterJumpPhaseData
// 0x0040
struct FChararacterJumpPhaseData
{
	TEnumAsByte<ECharacterJumpPhase>                   JumpPhase;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     JumpPhaseName;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.ChararacterJumpPhaseData.PhaseAnimSoftPtr
};

// ScriptStruct Gameplay.CharacterJumpAnimData
// 0x0028
struct FCharacterJumpAnimData
{
	TEnumAsByte<ECharacterJumpType>                    JumpType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     JumpTypeName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FChararacterJumpPhaseData>           JumpPhaseList;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Gameplay.AsyncLoadCharAnimParams
// 0x0050
struct FAsyncLoadCharAnimParams
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Gameplay.PlayerAnimData
// 0x0010
struct FPlayerAnimData
{
	class UAnimationAsset*                             Animation;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PoseType;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.VehCharAnimData
// 0x0040
struct FVehCharAnimData
{
	ECharacterVehicleAnimType                          VehAnimType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.VehCharAnimData.VehAnimSoftPtr
	unsigned char                                      UnknownData02[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Gameplay.VehicleSpotProperty
// 0x0038
struct FVehicleSpotProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                FuelPercentMin;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FuelPercentMax;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveByStartVolume;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVehicleSpotRandomType>                RandomType;                                               // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              TotalCountMultiplierWithPalyerCount;                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMin;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMax;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProbabilityPersent;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProbabilityPersentWithPalyerCount;                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleSpotComponentArray
// 0x0018
struct FVehicleSpotComponentArray
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleGenerateSpawnData
// 0x0030
struct FVehicleGenerateSpawnData
{
	int                                                KeyID;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     VehicleType;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     VehiclePath;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                VehicleWeight;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapFloor;                                                // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.VehicleGenerateSpawnDataArray
// 0x0020
struct FVehicleGenerateSpawnDataArray
{
	struct FString                                     Catetory;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVehicleGenerateSpawnData>           AllGenerateSpawnDatas;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleSpotStatisticsData
// 0x0028 (0x0030 - 0x0008)
struct FVehicleSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     VehiclePath;                                              // 0x0010(0x0010) (ZeroConstructor)
	float                                              VehicleLocationX;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleLocationY;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleLocationZ;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.VehicleClassStatisticsData
// 0x0018 (0x0020 - 0x0008)
struct FVehicleClassStatisticsData : public FTableRowBase
{
	struct FString                                     VehiclePath;                                              // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bValidPath;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                AllVehicleCount;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleGenerateStatisticsData
// 0x0060
struct FVehicleGenerateStatisticsData
{
	TArray<struct FVehicleSpotStatisticsData>          VehicleSpotStatisticsData;                                // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FVehicleClassStatisticsData> VehicleClassStatisticsData;                               // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.PlayerAnimList
// 0x00F0
struct FPlayerAnimList
{
	struct FPlayerAnimData                             MovementAnim;                                             // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             AimAnim;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             ReloadAnim;                                               // 0x0020(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             EquipWeaponAnim;                                          // 0x0030(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             ChangePoseAnim;                                           // 0x0040(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             PickUpAnim;                                               // 0x0050(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             FireAnim;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             HurtAnim;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             TurnAnim;                                                 // 0x0080(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             PullingPlugAnim;                                          // 0x0090(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             PutDownWeaponAnim;                                        // 0x00A0(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             WeaponIdle;                                               // 0x00B0(0x0010) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             ForegripAnim;                                             // 0x00C0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FPlayerAnimData>                     JumpAnimList;                                             // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayerAnimData>                     ExtraAnimList;                                            // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.PlayerVehAnimList
// 0x0040
struct FPlayerVehAnimList
{
	class UAnimationAsset*                             IdleAnim;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             LeanOutAnim;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             LeanInAnim;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             AimAnim;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             ScopeAnim;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             WeaponIdleAddition;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             WeaponAimAddition;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             WeaponReloadAddition;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerBaseInfoInOB
// 0x0020
struct FPlayerBaseInfoInOB
{
	int                                                PosX;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PosY;                                                     // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PosZ;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Health;                                                   // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HealthMax;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LiveState;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillNum;                                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerInfoInOB
// 0x0020 (0x0040 - 0x0020)
struct FPlayerInfoInOB : public FPlayerBaseInfoInOB
{
	struct FString                                     PlayerName;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        Character;                                                // 0x0034(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.AirDropBoxInOb
// 0x0014
struct FAirDropBoxInOb
{
	int                                                boxId;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Flying;                                                   // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsEmpty;                                                  // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FVector                                     Pos;                                                      // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct Gameplay.ItemGenerateTableRow
// 0x0038 (0x0040 - 0x0008)
struct FItemGenerateTableRow : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Catetory;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemGenerateSpawnData>              AllGenerateSpawnDatas;                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemSpotSceneComponentArray
// 0x0018
struct FItemSpotSceneComponentArray
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UItemSpotSceneComponent*>             AllSpots;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.PosAndTime
// 0x0010
struct FPosAndTime
{
	int                                                LocationX;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerRouteFlow
// 0x0060
struct FPlayerRouteFlow
{
	struct FString                                     GameAppID;                                                // 0x0000(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     OpenID;                                                   // 0x0018(0x0010) (ZeroConstructor)
	uint64_t                                           UID;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           BattleID;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SeasonID;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FPosAndTime>                         Route;                                                    // 0x0040(0x0010) (ZeroConstructor)
	struct FPosAndTime                                 End;                                                      // 0x0050(0x0010)
};

// ScriptStruct Gameplay.PlayerBehaviorFlow
// 0x0098
struct FPlayerBehaviorFlow
{
	uint64_t                                           FrameCounter;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           BattleID;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsTargetPlayer;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RelevantPlayerKey;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationX;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationP;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationY;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationR;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Stats;                                                    // 0x0048(0x0010) (ZeroConstructor)
	bool                                               IsDying;                                                  // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              Breath;                                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedX;                                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedY;                                                   // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedZ;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentWeaponID;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ammo;                                                     // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SightId;                                                  // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsBeAttacking;                                            // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                BeAttackDirX;                                             // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeAttackDirY;                                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeAttackDirZ;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MedicineId;                                               // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHaveSound;                                              // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.MemBTResultData
// 0x0058
struct FMemBTResultData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           Kill;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     State;                                                    // 0x0018(0x0010) (ZeroConstructor)
	float                                              travelDistance;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              surviveTime;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AssistNum;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HeadShotNum;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           rescueTimes;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           UID;                                                      // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             ShouldShowAddFriendBtn;                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.ResultRatingData
// 0x0018
struct FResultRatingData
{
	int                                                rank_rating;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_rating;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                win_rating;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                change_rank_rating;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                change_kill_rating;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                change_win_rating;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.BattleResultData
// 0x0088
struct FBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           RemainingPlayerCount;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalPlayerCount;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RemainingTeamCount;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalTeamCount;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSolo;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	uint32_t                                           ShootWeaponShotNum;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShootWeaponShotAndHitPlayerNum;                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HealTimes;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              marchDistance;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              driveDistance;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           destroyVehicleNum;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           add_exp;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           add_gold;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           battle_id;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           max_game_num;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           person_rank;                                              // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           team_rank;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FMemBTResultData>                    BP_ARRAY_TeammateList;                                    // 0x0060(0x0010) (ZeroConstructor)
	struct FResultRatingData                           BP_STRUCT_BTRating;                                       // 0x0070(0x0018)
};

// ScriptStruct Gameplay.HurtFlow
// 0x0120
struct FHurtFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             AreaID;                                                   // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     EnemyOpenID;                                              // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     EnemyUserName;                                            // 0x00A8(0x0010) (ZeroConstructor)
	uint64_t                                           EnemyRoleID;                                              // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EnemyRoleType;                                            // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HurtTime;                                                 // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HurtType;                                                 // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageStart;                                              // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageReduce;                                             // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorDef;                                                 // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPstart;                                                  // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPEnd;                                                    // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart1;                                            // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd1;                                              // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart2;                                            // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd2;                                              // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPStart;                                               // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPEnd;                                                 // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FallHeight;                                               // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HypoxiaTime;                                              // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HypoxiaHurtTotal;                                         // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKilled;                                             // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorKill;                                                // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarKill;                                                  // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IfIsAI;                                                   // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HurtFlowID;                                               // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.AttackFlow
// 0x01D0
struct FAttackFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     TargetOpenID;                                             // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     TargetUserName;                                           // 0x00A8(0x0010) (ZeroConstructor)
	uint64_t                                           TargetRoleID;                                             // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             TargetRoleType;                                           // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FString                                     GunName;                                                  // 0x00C8(0x0010) (ZeroConstructor)
	struct FString                                     GunPartsType;                                             // 0x00D8(0x0010) (ZeroConstructor)
	int8_t                                             SightType;                                                // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	int                                                BulletSpeed;                                              // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             MagazineMax;                                              // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             MagazineLeft;                                             // 0x00F1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	int                                                ShotFrequency;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamage;                                             // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            BulletDown;                                               // 0x00FC(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BulletDamageReduce;                                       // 0x00FE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x00FF(0x0001) MISSED OFFSET
	int                                                Recoil;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReloadTime;                                               // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerState;                                              // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      ShotPose;                                                 // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireType;                                                 // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x011A(0x0002) MISSED OFFSET
	unsigned char                                      bHoldBreath : 1;                                          // 0x011C(0x0001)
	unsigned char                                      UnknownData08[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	unsigned char                                      Sideways;                                                 // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int                                                ShootingDeviationX;                                       // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootingDeviationY;                                       // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ZeroDistance;                                             // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShotTime;                                                 // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitTime;                                                  // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionX;                                          // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionY;                                          // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionZ;                                          // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionX;                                             // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionY;                                             // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionZ;                                             // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionX;                                     // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionY;                                     // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionZ;                                     // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           LastHitTime;                                              // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BulletFlyDistance;                                        // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BulletFlyTime;                                            // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionX;                                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionY;                                             // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionZ;                                             // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitPart;                                                  // 0x0174(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	unsigned char                                      bHitCar : 1;                                              // 0x0178(0x0001)
	unsigned char                                      bTireOut : 1;                                             // 0x0178(0x0001)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	unsigned char                                      BulletCost;                                               // 0x017C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	int                                                HPstart;                                                  // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPEnd;                                                    // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart;                                             // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd;                                               // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPStart;                                               // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPEnd;                                                 // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerKill;                                               // 0x0198(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	unsigned char                                      bArmorKill : 1;                                           // 0x019C(0x0001)
	unsigned char                                      bCarKill : 1;                                             // 0x019C(0x0001)
	unsigned char                                      UnknownData14[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	int                                                RecoilMoveX;                                              // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoilMoveY;                                              // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponAimFOV;                                             // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamageDebuff;                                       // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamageBuff;                                         // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AtackFlowID;                                              // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimSpeed;                                             // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimSpeedRateMax;                                      // 0x01BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeMax;                                          // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeRateMax;                                      // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunID;                                                    // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.AimFlow
// 0x0130
struct FAimFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                AimTime;                                                  // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ShotCDTime;                                               // 0x0098(0x0010) (ZeroConstructor)
	int                                                ShotCount;                                                // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotHitCount;                                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotHeadHitCount;                                         // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotPersonHitCount;                                       // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotPersonKillCount;                                      // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FString                                     HitDistance;                                              // 0x00C0(0x0010) (ZeroConstructor)
	struct FString                                     HitEachDistance;                                          // 0x00D0(0x0010) (ZeroConstructor)
	struct FString                                     HitAngle;                                                 // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     HitEachCdTime;                                            // 0x00F0(0x0010) (ZeroConstructor)
	struct FString                                     HitPartInfo;                                              // 0x0100(0x0010) (ZeroConstructor)
	struct FString                                     PlayerState;                                              // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      bHoldBreath : 1;                                          // 0x0120(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int8_t                                             SightType;                                                // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	uint32_t                                           AimFlowID;                                                // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameEndFlow
// 0x0110
struct FGameEndFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     ClientVersion;                                            // 0x0098(0x0010) (ZeroConstructor)
	uint32_t                                           OverTime;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             EndType;                                                  // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillCount;                                                // 0x00AD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AssistsCount;                                             // 0x00AE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DropCount;                                                // 0x00AF(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveCount;                                                // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RebornCount;                                              // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AliveType : 1;                                            // 0x00B2(0x0001)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00B3(0x0001) MISSED OFFSET
	int                                                GoldGet;                                                  // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DiamondGet;                                               // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpGet;                                                   // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WinRank;                                                  // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TotalPlayers;                                             // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	int                                                PlayerRank;                                               // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankEnd;                                                  // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x00D0(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      TeamPlayer1AliveType : 1;                                 // 0x0100(0x0001)
	unsigned char                                      TeamPlayer2AliveType : 1;                                 // 0x0100(0x0001)
	unsigned char                                      TeamPlayer3AliveType : 1;                                 // 0x0100(0x0001)
	unsigned char                                      TeamPlayer1Kill;                                          // 0x0101(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer2Kill;                                          // 0x0102(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer3Kill;                                          // 0x0103(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GameEndFlowID;                                            // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AIKillCount;                                              // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillHeadShotCount;                                        // 0x0109(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RoundCircleCount;                                         // 0x010A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x010B(0x0005) MISSED OFFSET
};

// ScriptStruct Gameplay.ClientGameEndFlow
// 0x0090
struct FClientGameEndFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ClientVersion;                                            // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           OverTime;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             EndType;                                                  // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillCount;                                                // 0x002D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AssistsCount;                                             // 0x002E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DropCount;                                                // 0x002F(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveCount;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RebornCount;                                              // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AliveType : 1;                                            // 0x0032(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	int                                                GoldGet;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DiamondGet;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpGet;                                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WinRank;                                                  // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TotalPlayers;                                             // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	int                                                PlayerRank;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankEnd;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      TeamPlayer1AliveType : 1;                                 // 0x0080(0x0001)
	unsigned char                                      TeamPlayer2AliveType : 1;                                 // 0x0080(0x0001)
	unsigned char                                      TeamPlayer3AliveType : 1;                                 // 0x0080(0x0001)
	unsigned char                                      TeamPlayer1Kill;                                          // 0x0081(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer2Kill;                                          // 0x0082(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer3Kill;                                          // 0x0083(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GameEndFlowID;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RoundCircleCount;                                         // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.CircleFlow
// 0x01B8
struct FCircleFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x0088(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	uint32_t                                           GameStartTime;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NewCircleBornTime;                                        // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionX;                                       // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionY;                                       // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionRadius;                                  // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCircleCount;                                           // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionX;                                          // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionY;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionZ;                                          // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHP;                                                 // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveTime;                                        // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveEndTime;                                     // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerOutTime;                                            // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonCount;                                        // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMin;                                          // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMax;                                          // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonAvg;                                          // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonTotal;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDrop;                                         // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDead;                                         // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryCount;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMin;                                              // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMax;                                              // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryTotal;                                            // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryCount;                                      // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMin;                                        // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMax;                                        // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryTotal;                                      // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartLv;                                            // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartTime;                                          // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FString                                     EnergyItemUse;                                            // 0x0120(0x0010) (ZeroConstructor)
	int                                                EnergyLvTimeInfo;                                         // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FString                                     EnergyRunFastTime;                                        // 0x0138(0x0010) (ZeroConstructor)
	struct FString                                     EnergyRecoveryLvTimeInfo;                                 // 0x0148(0x0010) (ZeroConstructor)
	int                                                EnergyEndLv;                                              // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyEndTime;                                            // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerMoveDis;                                            // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedMax;                                           // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedAvg;                                           // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedMax;                                        // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedAvg;                                        // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveDis;                                       // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveTime;                                      // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveDis;                                       // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveTime;                                      // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveDis;                                         // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveTime;                                        // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveDis;                                       // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveTime;                                      // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCar;                                                // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCameraDistanceMax;                                  // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SecCircleFlowID;                                          // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoAimType;                                              // 0x01A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	int                                                AutoAimTime;                                              // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillCount;                                          // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillAICount;                                        // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHeadKillCount;                                      // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ClientCircleFlow
// 0x0128
struct FClientCircleFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           GameStartTime;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NewCircleBornTime;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionX;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionY;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionRadius;                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCircleCount;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionX;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionY;                                          // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionZ;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHP;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveTime;                                        // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveEndTime;                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerOutTime;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonCount;                                        // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMin;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMax;                                          // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonAvg;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonTotal;                                        // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDrop;                                         // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDead;                                         // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryCount;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMin;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMax;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryTotal;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryCount;                                      // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMin;                                        // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMax;                                        // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryTotal;                                      // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartLv;                                            // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartTime;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     EnergyItemUse;                                            // 0x00A0(0x0010) (ZeroConstructor)
	int                                                EnergyLvTimeInfo;                                         // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FString                                     EnergyRunFastTime;                                        // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     EnergyRecoveryLvTimeInfo;                                 // 0x00C8(0x0010) (ZeroConstructor)
	int                                                EnergyEndLv;                                              // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyEndTime;                                            // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerMoveDis;                                            // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedMax;                                           // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedAvg;                                           // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedMax;                                        // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedAvg;                                        // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveDis;                                       // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveTime;                                      // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveDis;                                       // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveTime;                                      // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveDis;                                         // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveTime;                                        // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveDis;                                       // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveTime;                                      // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCar;                                                // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCameraDistanceMax;                                  // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SecCircleFlowID;                                          // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoAimType;                                              // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int                                                AutoAimTime;                                              // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.JumpFlow
// 0x0110
struct FJumpFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     PicUrl;                                                   // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x00A8(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	int64_t                                            GameStartTime;                                            // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           StartJumpTime;                                            // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EndJumpTime;                                              // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerJumpTime;                                           // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerOpenTime;                                           // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandTime;                                           // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionX;                                      // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionY;                                      // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionZ;                                      // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionX;                                       // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionY;                                       // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionZ;                                       // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionX;                                      // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionY;                                      // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionZ;                                      // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandDistance;                                       // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax1;                                          // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax2;                                          // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ClientJumpFlow
// 0x0080
struct FClientJumpFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0018(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	int64_t                                            GameStartTime;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           StartJumpTime;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EndJumpTime;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerJumpTime;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerOpenTime;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandTime;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionX;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionY;                                      // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionZ;                                      // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionX;                                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionY;                                       // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionZ;                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionX;                                      // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionY;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionZ;                                      // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandDistance;                                       // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax1;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax2;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameStartFlow
// 0x0180
struct FGameStartFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     PicUrl;                                                   // 0x0098(0x0010) (ZeroConstructor)
	uint32_t                                           SvrUserMoney1;                                            // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SvrUserMoney2;                                            // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SvrUserMoney3;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank1;                                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank2;                                            // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank3;                                            // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	uint64_t                                           SvrRoleID;                                                // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SvrRoleType;                                              // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FString                                     SvrMapName;                                               // 0x00D8(0x0010) (ZeroConstructor)
	int8_t                                             SvrWeatherid;                                             // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FString                                     SvrItemList;                                              // 0x00F0(0x0010) (ZeroConstructor)
	int64_t                                            WaitStartTime;                                            // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            WaitEndTime;                                              // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x0110(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FString                                     ItemList;                                                 // 0x0128(0x0010) (ZeroConstructor)
	int8_t                                             GameType;                                                 // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             TeamType;                                                 // 0x0139(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoMatch;                                                // 0x013A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerCount;                                              // 0x013B(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0140(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0150(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0160(0x0010) (ZeroConstructor)
	int                                                TeamPlayer1Rank;                                          // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamPlayer2Rank;                                          // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamPlayer3Rank;                                          // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SecGameStartFlowFlowID;                                   // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ClientGameStartFlow
// 0x0080
struct FClientGameStartFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0018(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     ItemList;                                                 // 0x0030(0x0010) (ZeroConstructor)
	int8_t                                             TeamType;                                                 // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0068(0x0010) (ZeroConstructor)
	uint32_t                                           SecGameStartFlowFlowID;                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameBaseInfo
// 0x0080
struct FGameBaseInfo
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GameAppID;                                                // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0020(0x0010) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0038(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0050(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     PicUrl;                                                   // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.CircleDataMining
// 0x0014
struct FCircleDataMining
{
	struct FVector                                     WhiteCircleCenter;                                        // 0x0000(0x000C) (IsPlainOldData)
	bool                                               bDestinyCircle;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                LeftPlayerNum;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameDataMining
// 0x0038
struct FGameDataMining
{
	struct FString                                     BattleID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     PlaneStartPoint;                                          // 0x0010(0x000C) (IsPlainOldData)
	struct FVector                                     PlaneEndPoint;                                            // 0x001C(0x000C) (IsPlainOldData)
	TArray<struct FCircleDataMining>                   CircleDataMining;                                         // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameModeGameOverData
// 0x0001
struct FGameModeGameOverData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModeTeamBattleResultData
// 0x0068
struct FGameModeTeamBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                RemainTeamCount;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RemainAlivePlayerCount;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               PlayersLogoutTime;                                        // 0x0018(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameModeParams
// 0x0008
struct FGameModeParams
{
	struct FName                                       CurrentGameModeState;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModeAIPlayerParams
// 0x0000 (0x00A0 - 0x00A0)
struct FGameModeAIPlayerParams : public FGameModePlayerParams
{

};

// ScriptStruct Gameplay.CharacterStateChangedParams
// 0x0020
struct FCharacterStateChangedParams
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       CharacterState;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModeStateChangedParams
// 0x0008
struct FGameModeStateChangedParams
{
	struct FName                                       GameModeState;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerStateChangedParams
// 0x0020
struct FPlayerStateChangedParams
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       PlayerState;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerStaticInfoInOB
// 0x0018
struct FPlayerStaticInfoInOB
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                TeamID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.HitFlow
// 0x0030
struct FHitFlow
{
	int                                                AimType;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Distance;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IsKill;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damage;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFallOnGround;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<unsigned char>                              PlayerStates;                                             // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      HitPos;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.WeaponReport
// 0x0030
struct FWeaponReport
{
	int                                                WeaponId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FireCount;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalDamage;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalOwnTime;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalUseTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FHitFlow>                            HitFlow;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.OnePlayerWeapon
// 0x0020
struct FOnePlayerWeapon
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FWeaponReport>                       Weapons;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.TotalWeaponReport
// 0x0028
struct FTotalWeaponReport
{
	struct FString                                     BattleID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                BattleMode;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FOnePlayerWeapon>                    TotalWeaponRecord;                                        // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Gameplay.WeatherLevelInfo
// 0x0018
struct FWeatherLevelInfo
{
	int                                                WeatherID;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     WeatherLevel;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
