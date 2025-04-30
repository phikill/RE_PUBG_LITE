
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

// Function ParachuteShowActor.ParachuteShowActor_C.GetBattleItemFromResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackAvatarHandle*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackAvatarHandle* AParachuteShowActor_C::GetBattleItemFromResID(int RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteShowActor.ParachuteShowActor_C.GetBattleItemFromResID");

	AParachuteShowActor_C_GetBattleItemFromResID_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ParachuteShowActor.ParachuteShowActor_C.GetBPID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AParachuteShowActor_C::GetBPID(int RowName, int* BPID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteShowActor.ParachuteShowActor_C.GetBPID");

	AParachuteShowActor_C_GetBPID_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPID != nullptr)
		*BPID = params.BPID;
}


// Function ParachuteShowActor.ParachuteShowActor_C.ChangeParachute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AParachuteShowActor_C::ChangeParachute(int resID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteShowActor.ParachuteShowActor_C.ChangeParachute");

	AParachuteShowActor_C_ChangeParachute_Params params;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachuteShowActor.ParachuteShowActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AParachuteShowActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteShowActor.ParachuteShowActor_C.UserConstructionScript");

	AParachuteShowActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachuteShowActor.ParachuteShowActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AParachuteShowActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteShowActor.ParachuteShowActor_C.ReceiveBeginPlay");

	AParachuteShowActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachuteShowActor.ParachuteShowActor_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AParachuteShowActor_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteShowActor.ParachuteShowActor_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature");

	AParachuteShowActor_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachuteShowActor.ParachuteShowActor_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AParachuteShowActor_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteShowActor.ParachuteShowActor_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature");

	AParachuteShowActor_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachuteShowActor.ParachuteShowActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AParachuteShowActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteShowActor.ParachuteShowActor_C.ReceiveTick");

	AParachuteShowActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachuteShowActor.ParachuteShowActor_C.ExecuteUbergraph_ParachuteShowActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AParachuteShowActor_C::ExecuteUbergraph_ParachuteShowActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteShowActor.ParachuteShowActor_C.ExecuteUbergraph_ParachuteShowActor");

	AParachuteShowActor_C_ExecuteUbergraph_ParachuteShowActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
