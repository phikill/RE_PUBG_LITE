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

// Enum Skill.UTSkillStopReason
enum class EUTSkillStopReason : uint8_t
{
	UTSkillStopReason__SkillStopReason_UnKown = 0,
	UTSkillStopReason__SkillStopReason_Finished = 1,
	UTSkillStopReason__SkillStopReason_Failed = 2,
	UTSkillStopReason__SkillStopReason_Interrupted = 3,
	UTSkillStopReason__SkillStopReason_MAX = 4
};


// Enum Skill.ESkillAddForceDirection
enum class ESkillAddForceDirection : uint8_t
{
	ESkillAddForceDirection__ESkillDir_SelfToTarget = 0,
	ESkillAddForceDirection__ESkillDir_TargetToSelf = 1,
	ESkillAddForceDirection__ESkillDir_SelfDir = 2,
	ESkillAddForceDirection__ESkillDir_TargetDir = 3,
	ESkillAddForceDirection__ESkillDir_TargetZ = 4,
	ESkillAddForceDirection__ESkillDir_SelfZ = 5,
	ESkillAddForceDirection__ESkillDir_MAX = 6
};


// Enum Skill.UTPickerTargetType
enum class EUTPickerTargetType : uint8_t
{
	UTPickerTargetType__PTT_FRIEND = 0,
	UTPickerTargetType__PTT_ENEMY  = 1,
	UTPickerTargetType__PTT_ALL    = 2,
	UTPickerTargetType__PTT_Self   = 3,
	UTPickerTargetType__PTT_MAX    = 4
};


// Enum Skill.UTSkillEventType
enum class EUTSkillEventType : uint8_t
{
	SET_KEY_DOWN                   = 0,
	SET_KEY_UP                     = 1,
	SET_COLLIDE_TARGET             = 2,
	SET_MISS_TARGET                = 3,
	SET_HIT_TARGET                 = 4,
	SET_KILL_TARGET                = 5,
	SET_COLLIDE_ACTOR              = 6,
	SET_FINDPATH_FINISH            = 7,
	SET_PHASE_START                = 8,
	SET_PHASE_FINISH               = 9,
	SET_SKILL_FINISH               = 10,
	SET_SKILL_CANCEL               = 11,
	SET_NO_TARGET                  = 12,
	SET_MAX                        = 13
};


// Enum Skill.ESkillEndConditionType
enum class ESkillEndConditionType : uint8_t
{
	ESECT_MyHP                     = 0,
	ESECT_MyHPAndSD                = 1,
	ESECT_FrinedHP                 = 2,
	ESECT_ExistsEnemy              = 3,
	ESECT_ExistsEnemy2             = 4,
	ESECT_ExistsEnemyAndFriends    = 5,
	ESECT_AnyTime                  = 6,
	ESECT_None                     = 7,
	ESECT_MAX                      = 8
};


// Enum Skill.ESkillConditionType
enum class ESkillConditionType : uint8_t
{
	ESCT_MyHP                      = 0,
	ESCT_MyHPAndSD                 = 1,
	ESCT_MyHPAndSDNoEmeny          = 2,
	ESCT_FrinedHP                  = 3,
	ESCT_ExistsEnemy               = 4,
	ESCT_ExistsEnemy2              = 5,
	ESCT_ExistsEnemyAndFriends     = 6,
	ESCT_AnyTime                   = 7,
	ESCT_None                      = 8,
	ESCT_MAX                       = 9
};


// Enum Skill.UTSkillPhaseType
enum class EUTSkillPhaseType : uint8_t
{
	UTSkillPhaseType__SPT_SEQUENCE = 0,
	UTSkillPhaseType__SPT_WAIT     = 1,
	UTSkillPhaseType__SPT_CHARGE   = 2,
	UTSkillPhaseType__SPT_Repeat   = 3,
	UTSkillPhaseType__SPT_FINAL_SKILL_PHASE = 4,
	UTSkillPhaseType__SPT_Keep     = 5,
	UTSkillPhaseType__SPT_MAX      = 6
};


// Enum Skill.UTSkillPickerType
enum class EUTSkillPickerType : uint8_t
{
	UTSkillPickerType__SPT_SELF    = 0,
	UTSkillPickerType__SPT_TARGET  = 1,
	UTSkillPickerType__SPT_VIEWPOINT = 2,
	UTSkillPickerType__SPT_VIEWPOINT_STATIC = 3,
	UTSkillPickerType__SPT_RECT    = 4,
	UTSkillPickerType__SPT_CIRCLE  = 5,
	UTSkillPickerType__SPT_FAN     = 6,
	UTSkillPickerType__SPT_CROSSHAIR = 7,
	UTSkillPickerType__SPT_CUSTOM  = 8,
	UTSkillPickerType__SPT_DESTINATION = 9,
	UTSkillPickerType__SPT_VIEWPOINT_NORMAL = 10,
	UTSkillPickerType__SPT_DEFAULT = 11,
	UTSkillPickerType__SPT_MAX     = 12
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Skill.UTSkillActionCreateData
// 0x0004
struct FUTSkillActionCreateData
{
	float                                              DelayTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Skill.UTSkillCreateData
// 0x0040
struct FUTSkillCreateData
{
	int                                                SkillGroupIndex;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IntervalSincePrevFinish;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     CoolDownMessage;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Range;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<class UUTSkillPhase*>                       Phases;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	bool                                               bIgnoreDamage;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Skill.SkillConditionWarpper
// 0x0008
struct FSkillConditionWarpper
{
	class UUTSkillCondition*                           SkillCondition;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Skill.UTSkillPhaseCreateData
// 0x0070
struct FUTSkillPhaseCreateData
{
	float                                              PhaseDuration;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AltPhaseDuration;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CacheMouseInputTime;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMustHasTarget;                                           // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCoolDown;                                                // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<class UUTSkillCondition*>                   PhaseConditions;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class UUTSkillPicker*                              Picker;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UUTSkillEffect*>                      Actions;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class UUTSkillEffect*>                      HurtAppearances;                                          // 0x0038(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	EUTSkillPhaseType                                  PhaseType;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     EnterPhaseTipString;                                      // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UUTSkillEventEffectMapForEditor*>     EditorEventEffectMap;                                     // 0x0060(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct Skill.UTSkillPickerCreateData
// 0x000C
struct FUTSkillPickerCreateData
{
	EUTSkillPickerType                                 PickerType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EUTPickerTargetType                                PickerTargetType;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                PickerMaxCount;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeOwner;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyHero;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTrace;                                             // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUsingViewRotation;                                     // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Skill.UTSkillPickedTarget
// 0x0030
struct FUTSkillPickedTarget
{
	TWeakObjectPtr<class AActor>                       Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          TargetComponent;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      HitPos;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitEnvLocation;                                           // 0x0020(0x000C) (IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      hitPhysMatType;                                           // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreTakeDamage;                                         // 0x002D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
};

// ScriptStruct Skill.UTSkillSynData
// 0x0008
struct FUTSkillSynData
{
	int                                                CurSkillIndex;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurSkillPhase;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Skill.UTSkillHitInfo
// 0x0030
struct FUTSkillHitInfo
{
	TArray<class APawn*>                               ToPawn;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class APawn*                                       FromPawn;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SkillID;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SkillPhaseID;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               Flag;                                                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadshot;                                               // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      HitSurfaceType;                                           // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	struct FVector                                     HitEnvLocation;                                           // 0x0024(0x000C) (IsPlainOldData)
};

// ScriptStruct Skill.UTSkillAutoTriggerCondition
// 0x0028
struct FUTSkillAutoTriggerCondition
{
	TEnumAsByte<ESkillConditionType>                   Condition;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Param_W;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_X;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_Y;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_Z;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESkillEndConditionType>                EndCondition;                                             // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                Param_A;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_B;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_C;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Param_D;                                                  // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Skill.UTSkillEventActionMap
// 0x0030
struct FUTSkillEventActionMap
{
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UUTSkillEffect*                              Action;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UUTSkillCondition*>                   Conditions;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UUTSkillCondition*>                   TargetConditions;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
