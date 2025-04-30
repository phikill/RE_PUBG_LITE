
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

// Function FreeCameraBtn.FreeCameraBtn_C.UIMsg_ScopeChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UFreeCameraBtn_C::UIMsg_ScopeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.UIMsg_ScopeChanged");

	UFreeCameraBtn_C_UIMsg_ScopeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreeCameraBtn.FreeCameraBtn_C.FreeCamBtn_UpdateIconPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFreeCameraBtn_C::FreeCamBtn_UpdateIconPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.FreeCamBtn_UpdateIconPosition");

	UFreeCameraBtn_C_FreeCamBtn_UpdateIconPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreeCameraBtn.FreeCameraBtn_C.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFreeCameraBtn_C::OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.OnTouchMoved");

	UFreeCameraBtn_C_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function FreeCameraBtn.FreeCameraBtn_C.TouchStartLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       TouchIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFreeCameraBtn_C::TouchStartLogic(TEnumAsByte<ETouchIndex> TouchIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.TouchStartLogic");

	UFreeCameraBtn_C_TouchStartLogic_Params params;
	params.TouchIndex = TouchIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreeCameraBtn.FreeCameraBtn_C.UIInGameEvent_BackpackOpen_StopFreeLook
// (Public, BlueprintCallable, BlueprintEvent)

void UFreeCameraBtn_C::UIInGameEvent_BackpackOpen_StopFreeLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.UIInGameEvent_BackpackOpen_StopFreeLook");

	UFreeCameraBtn_C_UIInGameEvent_BackpackOpen_StopFreeLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreeCameraBtn.FreeCameraBtn_C.StopFreeCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UFreeCameraBtn_C::StopFreeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.StopFreeCamera");

	UFreeCameraBtn_C_StopFreeCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreeCameraBtn.FreeCameraBtn_C.SwitchCameraModeScope_Aim
// (Public, BlueprintCallable, BlueprintEvent)

void UFreeCameraBtn_C::SwitchCameraModeScope_Aim()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.SwitchCameraModeScope_Aim");

	UFreeCameraBtn_C_SwitchCameraModeScope_Aim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreeCameraBtn.FreeCameraBtn_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFreeCameraBtn_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.OnTouchEnded");

	UFreeCameraBtn_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function FreeCameraBtn.FreeCameraBtn_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFreeCameraBtn_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.OnTouchStarted");

	UFreeCameraBtn_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function FreeCameraBtn.FreeCameraBtn_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFreeCameraBtn_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.Tick");

	UFreeCameraBtn_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreeCameraBtn.FreeCameraBtn_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UFreeCameraBtn_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.ReceivedInitWidget");

	UFreeCameraBtn_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreeCameraBtn.FreeCameraBtn_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UFreeCameraBtn_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.CustomEvent_1");

	UFreeCameraBtn_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreeCameraBtn.FreeCameraBtn_C.ExecuteUbergraph_FreeCameraBtn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFreeCameraBtn_C::ExecuteUbergraph_FreeCameraBtn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreeCameraBtn.FreeCameraBtn_C.ExecuteUbergraph_FreeCameraBtn");

	UFreeCameraBtn_C_ExecuteUbergraph_FreeCameraBtn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
