#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Skill.UTSkillEffect.UpdateAction
struct UUTSkillEffect_UpdateAction_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.UndoAction
struct UUTSkillEffect_UndoAction_Params
{
};

// Function Skill.UTSkillEffect.DoHurtAppearance
struct UUTSkillEffect_DoHurtAppearance_Params
{
	class APawn*                                       Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.DoAction
struct UUTSkillEffect_DoAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.UpdateAction
struct UUTSkillAction_UpdateAction_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.UndoAction
struct UUTSkillAction_UndoAction_Params
{
};

// Function Skill.UTSkillAction.Reset
struct UUTSkillAction_Reset_Params
{
};

// Function Skill.UTSkillAction.RealDoAction
struct UUTSkillAction_RealDoAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.JudgeNeedPhaseWait
struct UUTSkillAction_JudgeNeedPhaseWait_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.DoAction
struct UUTSkillAction_DoAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.SetSkillPhasePercentage
struct AUTSkill_SetSkillPhasePercentage_Params
{
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkill.OnEvent
struct AUTSkill_OnEvent_Params
{
	TEnumAsByte<EUTSkillEventType>                     TheEventType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillPhasePercentage
struct AUTSkill_GetSkillPhasePercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillPhase
struct AUTSkill_GetSkillPhase_Params
{
	int                                                PhaseIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTSkillPhase*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkill.DoSkillCoolDown
struct AUTSkill_DoSkillCoolDown_Params
{
};

// Function Skill.UTSkill.CanBePlayed
struct AUTSkill_CanBePlayed_Params
{
	bool                                               bShowErrorMsg;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCondition.IsTargetOK
struct UUTSkillCondition_IsTargetOK_Params
{
	class APawn*                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCondition.IsOK
struct UUTSkillCondition_IsOK_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillInterface.TriggerEvent
struct UUTSkillInterface_TriggerEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillInterface.HandleSkillStart
struct UUTSkillInterface_HandleSkillStart_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillInterface.HandleSkillEnd
struct UUTSkillInterface_HandleSkillEnd_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillPhase.TryJumpToPhase
struct UUTSkillPhase_TryJumpToPhase_Params
{
	int                                                PhaseID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.StopPhase
struct UUTSkillPhase_StopPhase_Params
{
};

// Function Skill.UTSkillPhase.StartPhase
struct UUTSkillPhase_StartPhase_Params
{
};

// Function Skill.UTSkillPhase.RepeatPhase
struct UUTSkillPhase_RepeatPhase_Params
{
};

// Function Skill.UTSkillPhase.PlaySkillHurtEffect
struct UUTSkillPhase_PlaySkillHurtEffect_Params
{
	class APawn*                                       Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.PlaySkillHurtAppearances
struct UUTSkillPhase_PlaySkillHurtAppearances_Params
{
	class APawn*                                       Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.PickTargets
struct UUTSkillPhase_PickTargets_Params
{
};

// Function Skill.UTSkillPhase.OnEvent
struct UUTSkillPhase_OnEvent_Params
{
	TEnumAsByte<EUTSkillEventType>                     TheEventType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.OnCustomEvent
struct UUTSkillPhase_OnCustomEvent_Params
{
	TEnumAsByte<EUTSkillEventType>                     TheEventType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.GetChargePhaseRate
struct UUTSkillPhase_GetChargePhaseRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.ForceStopPhase
struct UUTSkillPhase_ForceStopPhase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.ClearAttachments
struct UUTSkillPhase_ClearAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TraceTarget
struct UUTSkillManagerComponent_TraceTarget_Params
{
	struct FVector                                     StartTrace;                                               // (Parm, IsPlainOldData)
	struct FVector                                     EndTrace;                                                 // (Parm, IsPlainOldData)
	EUTPickerTargetType                                TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       TargetActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SwitchSkill
struct UUTSkillManagerComponent_SwitchSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.StopSkill
struct UUTSkillManagerComponent_StopSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ShouldTriggerEvent
struct UUTSkillManagerComponent_ShouldTriggerEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetCurSkill
struct UUTSkillManagerComponent_SetCurSkill_Params
{
	int                                                SkillIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerTriggerEvent
struct UUTSkillManagerComponent_ServerTriggerEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerStartSkill
struct UUTSkillManagerComponent_ServerStartSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed
struct UUTSkillManagerComponent_ServerNotifyRandomSeed_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.RepSkillSynData
struct UUTSkillManagerComponent_RepSkillSynData_Params
{
};

// Function Skill.UTSkillManagerComponent.RepSkillHitInfo
struct UUTSkillManagerComponent_RepSkillHitInfo_Params
{
};

// Function Skill.UTSkillManagerComponent.RandRangeSyn
struct UUTSkillManagerComponent_RandRangeSyn_Params
{
	int                                                StartIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.PreCheckNewSkill
struct UUTSkillManagerComponent_PreCheckNewSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect
struct UUTSkillManagerComponent_PlayHurtSkillEffect_Params
{
	struct FUTSkillHitInfo                             TheSkillHitInfo;                                          // (Parm)
};

// Function Skill.UTSkillManagerComponent.OnSameTeam
struct UUTSkillManagerComponent_OnSameTeam_Params
{
	class AActor*                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo
struct UUTSkillManagerComponent_OnRep_SkillHitInfo_Params
{
};

// Function Skill.UTSkillManagerComponent.IsReadyToCastSkill
struct UUTSkillManagerComponent_IsReadyToCastSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsCastingSkill
struct UUTSkillManagerComponent_IsCastingSkill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.InitSkillSystem
struct UUTSkillManagerComponent_InitSkillSystem_Params
{
};

// Function Skill.UTSkillManagerComponent.GetSkillByName
struct UUTSkillManagerComponent_GetSkillByName_Params
{
	struct FString                                     SkillName;                                                // (Parm, ZeroConstructor)
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkill
struct UUTSkillManagerComponent_GetSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurSkillPhase
struct UUTSkillManagerComponent_GetCurSkillPhase_Params
{
	class UUTSkillPhase*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurSkill
struct UUTSkillManagerComponent_GetCurSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ClearSkill
struct UUTSkillManagerComponent_ClearSkill_Params
{
};

// Function Skill.UTSkillManagerComponent.CheckNewSkill
struct UUTSkillManagerComponent_CheckNewSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.CheckAutoSkill
struct UUTSkillManagerComponent_CheckAutoSkill_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
