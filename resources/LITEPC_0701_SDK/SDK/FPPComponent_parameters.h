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

// Function FPPComponent.FPPComponent_C.GetScopeCameraAttachTarget
struct UFPPComponent_C_GetScopeCameraAttachTarget_Params
{
	class UMeshComponent*                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.GetScopeFov
struct UFPPComponent_C_GetScopeFov_Params
{
	class ASTExtraShootWeapon**                        shootWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.GetScopeFovBP
struct UFPPComponent_C_GetScopeFovBP_Params
{
	class ASTExtraShootWeapon*                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.SetTagCullingBP
struct UFPPComponent_C_SetTagCullingBP_Params
{
	bool                                               IsUse;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.requestResourceGuarantee
struct UFPPComponent_C_requestResourceGuarantee_Params
{
	int                                                InOrOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELoadMode>                             loadMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EApplyStatus>                          applyStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.ReloadEvent
struct UFPPComponent_C_ReloadEvent_Params
{
};

// Function FPPComponent.FPPComponent_C.SetTagCulling
struct UFPPComponent_C_SetTagCulling_Params
{
	bool*                                              IsUse;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.PlayScopeInTimeline
struct UFPPComponent_C_PlayScopeInTimeline_Params
{
};

// Function FPPComponent.FPPComponent_C.ScopeInEnd
struct UFPPComponent_C_ScopeInEnd_Params
{
};

// Function FPPComponent.FPPComponent_C.ScopeOutEnd
struct UFPPComponent_C_ScopeOutEnd_Params
{
};

// Function FPPComponent.FPPComponent_C.ReceiveTick
struct UFPPComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.StopScopeIn
struct UFPPComponent_C_StopScopeIn_Params
{
};

// Function FPPComponent.FPPComponent_C.AttachToSight
struct UFPPComponent_C_AttachToSight_Params
{
};

// Function FPPComponent.FPPComponent_C.AttachTo
struct UFPPComponent_C_AttachTo_Params
{
	class USceneComponent*                             NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.Detach
struct UFPPComponent_C_Detach_Params
{
	class USceneComponent*                             NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FPPComponent.FPPComponent_C.StopScopeOut
struct UFPPComponent_C_StopScopeOut_Params
{
};

// Function FPPComponent.FPPComponent_C.ExecuteUbergraph_FPPComponent
struct UFPPComponent_C_ExecuteUbergraph_FPPComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
