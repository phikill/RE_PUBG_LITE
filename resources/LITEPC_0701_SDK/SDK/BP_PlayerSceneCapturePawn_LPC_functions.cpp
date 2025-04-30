
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobby_AnimBP_C*         AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerSceneCapturePawn_LPC_C::GetAnimInstance(class ULobby_AnimBP_C** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetAnimInstance");

	ABP_PlayerSceneCapturePawn_LPC_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetBattleItemFromResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackAvatarHandle*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackAvatarHandle* ABP_PlayerSceneCapturePawn_LPC_C::GetBattleItemFromResID(int RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetBattleItemFromResID");

	ABP_PlayerSceneCapturePawn_LPC_C_GetBattleItemFromResID_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetBPID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerSceneCapturePawn_LPC_C::GetBPID(int RowName, int* BPID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetBPID");

	ABP_PlayerSceneCapturePawn_LPC_C_GetBPID_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPID != nullptr)
		*BPID = params.BPID;
}


// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetHiddenFlags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EAvatarSlotType>        hiddenFlags                    (Parm, OutParm, ZeroConstructor)

void ABP_PlayerSceneCapturePawn_LPC_C::GetHiddenFlags(int resID, TArray<EAvatarSlotType>* hiddenFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.GetHiddenFlags");

	ABP_PlayerSceneCapturePawn_LPC_C_GetHiddenFlags_Params params;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hiddenFlags != nullptr)
		*hiddenFlags = params.hiddenFlags;
}


// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapturePawn_LPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.UserConstructionScript");

	ABP_PlayerSceneCapturePawn_LPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerSceneCapturePawn_LPC_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature");

	ABP_PlayerSceneCapturePawn_LPC_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerSceneCapturePawn_LPC_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature");

	ABP_PlayerSceneCapturePawn_LPC_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerSceneCapturePawn_LPC_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.ReceiveTick");

	ABP_PlayerSceneCapturePawn_LPC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.ExecuteUbergraph_BP_PlayerSceneCapturePawn_LPC
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerSceneCapturePawn_LPC_C::ExecuteUbergraph_BP_PlayerSceneCapturePawn_LPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C.ExecuteUbergraph_BP_PlayerSceneCapturePawn_LPC");

	ABP_PlayerSceneCapturePawn_LPC_C_ExecuteUbergraph_BP_PlayerSceneCapturePawn_LPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
