
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

// Function GrenadeAimBtn.GrenadeAimBtn_C.SwitchCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeAimBtn_C::SwitchCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeAimBtn.GrenadeAimBtn_C.SwitchCamera");

	UGrenadeAimBtn_C_SwitchCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeAimBtn.GrenadeAimBtn_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGrenadeAimBtn_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeAimBtn.GrenadeAimBtn_C.OnTouchEnded");

	UGrenadeAimBtn_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function GrenadeAimBtn.GrenadeAimBtn_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGrenadeAimBtn_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeAimBtn.GrenadeAimBtn_C.OnTouchStarted");

	UGrenadeAimBtn_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function GrenadeAimBtn.GrenadeAimBtn_C.GrenadeThrown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeAimBtn_C::GrenadeThrown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeAimBtn.GrenadeAimBtn_C.GrenadeThrown__DelegateSignature");

	UGrenadeAimBtn_C_GrenadeThrown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeAimBtn.GrenadeAimBtn_C.GrenadeTriggerHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeAimBtn_C::GrenadeTriggerHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeAimBtn.GrenadeAimBtn_C.GrenadeTriggerHit__DelegateSignature");

	UGrenadeAimBtn_C_GrenadeTriggerHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
