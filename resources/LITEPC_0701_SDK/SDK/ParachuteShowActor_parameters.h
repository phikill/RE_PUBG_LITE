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

// Function ParachuteShowActor.ParachuteShowActor_C.GetBattleItemFromResID
struct AParachuteShowActor_C_GetBattleItemFromResID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackAvatarHandle*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ParachuteShowActor.ParachuteShowActor_C.GetBPID
struct AParachuteShowActor_C_GetBPID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ParachuteShowActor.ParachuteShowActor_C.ChangeParachute
struct AParachuteShowActor_C_ChangeParachute_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachuteShowActor.ParachuteShowActor_C.UserConstructionScript
struct AParachuteShowActor_C_UserConstructionScript_Params
{
};

// Function ParachuteShowActor.ParachuteShowActor_C.ReceiveBeginPlay
struct AParachuteShowActor_C_ReceiveBeginPlay_Params
{
};

// Function ParachuteShowActor.ParachuteShowActor_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature
struct AParachuteShowActor_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachuteShowActor.ParachuteShowActor_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
struct AParachuteShowActor_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachuteShowActor.ParachuteShowActor_C.ReceiveTick
struct AParachuteShowActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParachuteShowActor.ParachuteShowActor_C.ExecuteUbergraph_ParachuteShowActor
struct AParachuteShowActor_C_ExecuteUbergraph_ParachuteShowActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
