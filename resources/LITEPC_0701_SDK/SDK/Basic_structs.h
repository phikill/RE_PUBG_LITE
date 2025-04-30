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

// Enum Basic.EAttrVariableType
enum class EAttrVariableType : uint8_t
{
	EAttrVariableType__Int         = 0,
	EAttrVariableType__Float       = 1,
	EAttrVariableType__EAttrVariableType_MAX = 2
};


// Enum Basic.EAttrOperator
enum class EAttrOperator : uint8_t
{
	EAttrOperator__Plus            = 0,
	EAttrOperator__Multiply        = 1,
	EAttrOperator__Set             = 2,
	EAttrOperator__EAttrOperator_MAX = 3
};


// Enum Basic.EBattleItemDisuseReason
enum class EBattleItemDisuseReason : uint8_t
{
	EBattleItemDisuseReason__Manually = 0,
	EBattleItemDisuseReason__Associated = 1,
	EBattleItemDisuseReason__Excluded = 2,
	EBattleItemDisuseReason__Swapped = 3,
	EBattleItemDisuseReason__Dropped = 4,
	EBattleItemDisuseReason__Force = 5,
	EBattleItemDisuseReason__EBattleItemDisuseReason_MAX = 6
};


// Enum Basic.EBattleItemDropReason
enum class EBattleItemDropReason : uint8_t
{
	EBattleItemDropReason__Manually = 0,
	EBattleItemDropReason__Associated = 1,
	EBattleItemDropReason__AutoEquipAndDrop = 2,
	EBattleItemDropReason__AutoEquipFailed = 3,
	EBattleItemDropReason__CapacityExceeded = 4,
	EBattleItemDropReason__UsedUp  = 5,
	EBattleItemDropReason__Force   = 6,
	EBattleItemDropReason__EBattleItemDropReason_MAX = 7
};


// Enum Basic.EBattleItemUseReason
enum class EBattleItemUseReason : uint8_t
{
	EBattleItemUseReason__Manually = 0,
	EBattleItemUseReason__Associated = 1,
	EBattleItemUseReason__AutoEquipAndDrop = 2,
	EBattleItemUseReason__Swapped  = 3,
	EBattleItemUseReason__Initial  = 4,
	EBattleItemUseReason__EBattleItemUseReason_MAX = 5
};


// Enum Basic.EBattleItemPickupReason
enum class EBattleItemPickupReason : uint8_t
{
	EBattleItemPickupReason__Manually = 0,
	EBattleItemPickupReason__Associated = 1,
	EBattleItemPickupReason__AutoPickup = 2,
	EBattleItemPickupReason__Initial = 3,
	EBattleItemPickupReason__EBattleItemPickupReason_MAX = 4
};


// Enum Basic.ESimulateAddBuffRole
enum class ESimulateAddBuffRole : uint8_t
{
	AddBuffRole_None               = 0,
	AddBuffRole_All                = 1,
	AddBuffRole_Self               = 2,
	AddBuffRole_Causer             = 3,
	AddBuffRole_Firend             = 4,
	AddBuffRole_Enermy             = 5,
	AddBuffRole_MAX                = 6
};


// Enum Basic.EAnimBluePrintType
enum class EAnimBluePrintType : uint8_t
{
	AnimBPType_None                = 0,
	AnimBPType_Unarmed             = 1,
	AnimBPType_Melee               = 2,
	AnimBPType_Rifle               = 3,
	AnimBPType_Grenade             = 4,
	AnimBPType_MAX                 = 5
};


// Enum Basic.EClassLoadBeginTime
enum class EClassLoadBeginTime : uint8_t
{
	EClassLoadBeginTime__ELoadBegin_None = 0,
	EClassLoadBeginTime__ELoadBegin_ClientLobby = 1,
	EClassLoadBeginTime__ELoadBegin_StartFight = 2,
	EClassLoadBeginTime__ELoadBegin_MAX = 3
};


// Enum Basic.EClassLoadType
enum class EClassLoadType : uint8_t
{
	EClassLoadType__EClassLoadType_None = 0,
	EClassLoadType__EClassLoadType_Cach = 1,
	EClassLoadType__EClassLoadType_MAX = 2
};


// Enum Basic.ELostConnectionToDSReason
enum class ELostConnectionToDSReason : uint8_t
{
	ELostConnectionToDSReason__LostConnectionToDSReason_None = 0,
	ELostConnectionToDSReason__LostConnectionToDSReason_TravelFailure_Default = 1,
	ELostConnectionToDSReason__LostConnectionToDSReason_LocalConnectionLost = 2,
	ELostConnectionToDSReason__LostConnectionToDSReason_LocalDetectedTimeout = 3,
	ELostConnectionToDSReason__LostConnectionToDSReason_NMTFailure_Default = 4,
	ELostConnectionToDSReason__LostConnectionToDSReason_MAX = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Basic.ItemDefineID
// 0x0018
struct FItemDefineID
{
	int                                                Type;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TypeSpecificID;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AvatarID;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bValidItem;                                               // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bValidInstance;                                           // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	uint64_t                                           InstanceID;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.ItemAssociation
// 0x0028
struct FItemAssociation
{
	struct FName                                       AssociationName;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FItemDefineID                               AssociationTargetDefineID;                                // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UItemHandleBase*                             AssociationTargetHandle;                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.BattleItemAdditionalData
// 0x0020
struct FBattleItemAdditionalData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatData;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     StringData;                                               // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Basic.BattleItemUseTarget
// 0x0020
struct FBattleItemUseTarget
{
	struct FItemDefineID                               TargetDefineID;                                           // 0x0000(0x0018) (BlueprintVisible)
	struct FName                                       TargetAssociationName;                                    // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.BattleItemPickupInfo
// 0x0048
struct FBattleItemPickupInfo
{
	class UObject*                                     Source;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bAutoEquip;                                               // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FBattleItemUseTarget                        AutoEquipTarget;                                          // 0x0028(0x0020) (BlueprintVisible)
};

// ScriptStruct Basic.ItemData
// 0x0058
struct FItemData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FItemDefineID                               DefineID;                                                 // 0x0008(0x0018) (BlueprintVisible)
	struct FString                                     Name;                                                     // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Desc;                                                     // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Icon;                                                     // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor)
	class UItemHandleBase*                             ItemHandle;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.BattleItemFeatureData
// 0x0018
struct FBattleItemFeatureData
{
	float                                              UnitWeight;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnique;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStackable;                                               // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEquippable;                                              // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bConsumable;                                              // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoEquipAndDrop;                                        // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                SortingPriority;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemType;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Basic.BattleItemData
// 0x0040 (0x0098 - 0x0058)
struct FBattleItemData : public FItemData
{
	int                                                Count;                                                    // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEquipping;                                               // 0x005C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FBattleItemFeatureData                      FeatureData;                                              // 0x0070(0x0018) (BlueprintVisible)
	TArray<struct FItemAssociation>                    Associations;                                             // 0x0088(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Basic.ClientBaseInfo
// 0x00C8
struct FClientBaseInfo
{
	struct FString                                     OpenID;                                                   // 0x0000(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameSvrId;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     GameAppID;                                                // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BattleServerIP;                                           // 0x0058(0x0010) (ZeroConstructor)
	uint32_t                                           BattleServerPort;                                         // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     UserName;                                                 // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x0080(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	int8_t                                             WeatherID;                                                // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FString                                     WeatherLevelName;                                         // 0x00A0(0x0010) (ZeroConstructor)
	TArray<int>                                        MrpcsData;                                                // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct Basic.CacheAffactTargetInfo
// 0x000C
struct FCacheAffactTargetInfo
{
	TWeakObjectPtr<class AActor>                       AffectTarget;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FinalAddValue;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.AttrModifyItem
// 0x0040
struct FAttrModifyItem
{
	struct FString                                     AttrModifyItemName;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     AttrName;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	EAttrOperator                                      ModifierOp;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ModifierValue;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClientSimulate;                                           // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	TArray<struct FCacheAffactTargetInfo>              AffectTargetsCachInfo;                                    // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Basic.AttrRegisterItem
// 0x0030
struct FAttrRegisterItem
{
	struct FString                                     AttrName;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	EAttrVariableType                                  AttrVariableType;                                         // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasReplicatedTag;                                         // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x0012(0x001E) MISSED OFFSET
};

// ScriptStruct Basic.AttrAffected
// 0x0018
struct FAttrAffected
{
	struct FString                                     AttrName;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class AActor*                                      AffectedActor;                                            // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.BPClassItem
// 0x0060
struct FBPClassItem
{
	struct FString                                     ClassTagName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftClassProperty Basic.BPClassItem.NativeClass
	unsigned char                                      UnknownData01[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty Basic.BPClassItem.BPClass
};

// ScriptStruct Basic.NetRelevancyGroupID
// 0x0004
struct FNetRelevancyGroupID
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.StatusChange
// 0x0010
struct FStatusChange
{
	class UClass*                                      StatusName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StatusValue;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Basic.BuffActionItem
// 0x0008
struct FBuffActionItem
{
	class UUTSkillAction*                              BuffAction;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Basic.BuffEventActionItem
// 0x0010
struct FBuffEventActionItem
{
	class USTBaseBuffEventType*                        EventType;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUTSkillAction*                              BuffEventAction;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Basic.STBaseBuffTemplateItem
// 0x0010
struct FSTBaseBuffTemplateItem
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTBaseBuff*                                 Buff;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Basic.BuffInstancedItem
// 0x0010
struct FBuffInstancedItem
{
	int                                                BuffID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USTBaseBuff*                                 Buff;                                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Basic.AnimListData
// 0x0010
struct FAnimListData
{
	int                                                LayerID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimationAsset*                             Animation;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Basic.AnimListMapValueData
// 0x0010
struct FAnimListMapValueData
{
	TArray<struct FAnimListData>                       AnimListMapValue;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Basic.AnimSpeedInfo
// 0x0020
struct FAnimSpeedInfo
{
	float                                              F;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              L;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              R;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FL;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FR;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BL;                                                       // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BR;                                                       // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Basic.AnimPoseGroup
// 0x0044
struct FAnimPoseGroup
{
	struct FAnimSpeedInfo                              AnimSpeed_Walk;                                           // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FAnimSpeedInfo                              AnimSpeed_Run;                                            // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              AnimSpeed_Sprint;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Basic.AnimInfo
// 0x00D8
struct FAnimInfo
{
	struct FAnimPoseGroup                              Stand;                                                    // 0x0000(0x0044) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FAnimPoseGroup                              Crouch;                                                   // 0x0044(0x0044) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FAnimPoseGroup                              Prone;                                                    // 0x0088(0x0044) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              BlendSpaceSpeed_Walk;                                     // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendSpaceSpeed_Run;                                      // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendSpaceSpeed_Sprint;                                   // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Basic.AnimInfoMapValue
// 0x00D8
struct FAnimInfoMapValue
{
	struct FAnimInfo                                   AnimInfoMapValue;                                         // 0x0000(0x00D8)
};

// ScriptStruct Basic.BPTableItem
// 0x0048
struct FBPTableItem
{
	int                                                ID;                                                       // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Path;                                                     // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SkinPath;                                                 // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     ParentID;                                                 // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Basic.UAEResList
// 0x0020
struct FUAEResList
{
	int                                                ResIndex;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ResPathName;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ServerNeedLoad;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ClientNeedLoad;                                           // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               iEditorLoadType;                                          // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BuildClientNeed;                                          // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BuildServerNeed;                                          // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsResident;                                               // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Basic.PickupProposeData
// 0x0078
struct FPickupProposeData
{
	int                                                closeSubType;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                crossbowSubType;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                panID;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                pistolSubType;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lens4ID;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lens8ID;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ID2Type;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                pistolClipSubType;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SubMachineGunClipSubType;                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SniperClipSubType;                                        // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RifleClipSubType;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                gasSubID;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                backSubType;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BandageID;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EnergyDrinksID;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AdrenalineID;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AnodyneID;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Medical1ID;                                               // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Medical2ID;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultMedicineNum;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Bullet9mmID;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                koujing45ID;                                              // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Bullet7_62mmID;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Bullet5_56ID;                                             // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                koujing12ID;                                              // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                magenandanyao300ID;                                       // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                boltID;                                                   // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultBulletNum;                                         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                helmetSubType;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                armorSubType;                                             // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Basic.PickupSetting
// 0x0040
struct FPickupSetting
{
	int                                                LimitBandage;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitMedical;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitAnodyne;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitEnergyDrinks;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitAdrenaline;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitShouliudan;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitYanwudan;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitZhenbaodan;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitRanshaodan;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitBullet9mm;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitBullet7_62mm;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Limit12koujing;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Limit45koujing;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Limit300magenandanyao;                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Limitbolt;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LimitBullet5_57;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Basic.ItemRecordData
// 0x0038
struct FItemRecordData
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemType;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemSubType;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeightforOrder;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        Attach;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                BulletID;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProposeBulletNum;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Durability;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AIFullVaule;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              weight;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Basic.RecordItemID
// 0x0018
struct FRecordItemID
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Basic.LogItem
// 0x0038
struct FLogItem
{
	struct FString                                     ItemID;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                StackCount;                                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Category;                                                 // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SubCategory;                                              // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Basic.NetRelevancyGroupManager
// 0x0050
struct FNetRelevancyGroupManager
{
	TMap<struct FNetRelevancyGroupID, class UNetRelevancyGroup*> RelevancyGroups;                                          // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Basic.TravelFailureInfo
// 0x0020
struct FTravelFailureInfo
{
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FString                                     ErrorMessage;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Basic.NetworkFailureInfo
// 0x0028
struct FNetworkFailureInfo
{
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	struct FString                                     ErrorMessage;                                             // 0x0018(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
