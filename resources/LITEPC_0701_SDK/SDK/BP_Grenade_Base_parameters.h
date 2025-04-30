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

// Function BP_Grenade_Base.BP_Grenade_Base_C.SetProjectileProperties
struct ABP_Grenade_Base_C_SetProjectileProperties_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.StopSkill
struct ABP_Grenade_Base_C_StopSkill_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.SwitchWeapon
struct ABP_Grenade_Base_C_SwitchWeapon_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.ThrowGrenade
struct ABP_Grenade_Base_C_ThrowGrenade_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.callvoicecheck
struct ABP_Grenade_Base_C_callvoicecheck_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.GetRandomStartAngle
struct ABP_Grenade_Base_C_GetRandomStartAngle_Params
{
	int                                                Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.GetCurRotation
struct ABP_Grenade_Base_C_GetCurRotation_Params
{
	struct FRotator                                    Ret;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.HandleLifeEnd
struct ABP_Grenade_Base_C_HandleLifeEnd_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.InitLifeSpan
struct ABP_Grenade_Base_C_InitLifeSpan_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.StartFly
struct ABP_Grenade_Base_C_StartFly_Params
{
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               isThrowHigh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.UserConstructionScript
struct ABP_Grenade_Base_C_UserConstructionScript_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.HandleSkillEnd
struct ABP_Grenade_Base_C_HandleSkillEnd_Params
{
	int                                                SkillID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.HandleSkillStart
struct ABP_Grenade_Base_C_HandleSkillStart_Params
{
	int                                                SkillID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerEvent
struct ABP_Grenade_Base_C_TriggerEvent_Params
{
	int                                                SkillID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerCustomEvent
struct ABP_Grenade_Base_C_TriggerCustomEvent_Params
{
	TEnumAsByte<EUAESkillEvent>                        EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.TriggerEntryEvent
struct ABP_Grenade_Base_C_TriggerEntryEvent_Params
{
	EUTSkillEntry                                      EntryEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveBeginPlay
struct ABP_Grenade_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.ReceiveTick
struct ABP_Grenade_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.InitFromSkill
struct ABP_Grenade_Base_C_InitFromSkill_Params
{
	class AUAESkill*                                   SkillOwner;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.SkillEvent
struct ABP_Grenade_Base_C_SkillEvent_Params
{
	TEnumAsByte<EUAESkillEvent>                        SkillEventType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.StartFlyMulticast
struct ABP_Grenade_Base_C_StartFlyMulticast_Params
{
	struct FVector                                     InitVelocity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               isThrowHigh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
struct ABP_Grenade_Base_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
struct ABP_Grenade_Base_C_BndEvt__DelayFlyProjMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.DettachFromOwner
struct ABP_Grenade_Base_C_DettachFromOwner_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.AlignToSurface
struct ABP_Grenade_Base_C_AlignToSurface_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.HandleOnOverlap
struct ABP_Grenade_Base_C_HandleOnOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.DelayedOverlapCheck
struct ABP_Grenade_Base_C_DelayedOverlapCheck_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.CheckCapsuleOverlap
struct ABP_Grenade_Base_C_CheckCapsuleOverlap_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.OnSkillEvent_Remote
struct ABP_Grenade_Base_C_OnSkillEvent_Remote_Params
{
	TEnumAsByte<EUAESkillEvent>                        SkillEventType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.Timeout
struct ABP_Grenade_Base_C_Timeout_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.OnTimeoutRemote
struct ABP_Grenade_Base_C_OnTimeoutRemote_Params
{
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.ExecuteUbergraph_BP_Grenade_Base
struct ABP_Grenade_Base_C_ExecuteUbergraph_BP_Grenade_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Grenade_Base.BP_Grenade_Base_C.OnTimeout__DelegateSignature
struct ABP_Grenade_Base_C_OnTimeout__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
