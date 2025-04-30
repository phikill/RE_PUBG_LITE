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

// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetAnimInstance
struct ABP_PlayerSceneCapturePawn_LPC_C_GetAnimInstance_Params
{
	class ULobby_AnimBP_C*                             AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetBattleItemFromResID
struct ABP_PlayerSceneCapturePawn_LPC_C_GetBattleItemFromResID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackAvatarHandle*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetBPID
struct ABP_PlayerSceneCapturePawn_LPC_C_GetBPID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetHiddenFlags
struct ABP_PlayerSceneCapturePawn_LPC_C_GetHiddenFlags_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EAvatarSlotType>                            hiddenFlags;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.UserConstructionScript
struct ABP_PlayerSceneCapturePawn_LPC_C_UserConstructionScript_Params
{
};

// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
struct ABP_PlayerSceneCapturePawn_LPC_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature
struct ABP_PlayerSceneCapturePawn_LPC_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.ReceiveTick
struct ABP_PlayerSceneCapturePawn_LPC_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.ExecuteUbergraph_BP_PlayerSceneCapturePawn_LPC
struct ABP_PlayerSceneCapturePawn_LPC_C_ExecuteUbergraph_BP_PlayerSceneCapturePawn_LPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
