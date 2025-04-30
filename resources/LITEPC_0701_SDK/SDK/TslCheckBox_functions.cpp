
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

// Function TslCheckBox.TslCheckBox_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTslCheckBox_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.OnMouseButtonDown_1");

	UTslCheckBox_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function TslCheckBox.TslCheckBox_C.Toggle
// (Public, BlueprintCallable, BlueprintEvent)

void UTslCheckBox_C::Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.Toggle");

	UTslCheckBox_C_Toggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslCheckBox.TslCheckBox_C.ProcessKeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             Reply                          (Parm, OutParm)

void UTslCheckBox_C::ProcessKeyDown(const struct FKey& Key, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.ProcessKeyDown");

	UTslCheckBox_C_ProcessKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;
}


// Function TslCheckBox.TslCheckBox_C.OnPrepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTslCheckBox_C::OnPrepass_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.OnPrepass_1");

	UTslCheckBox_C_OnPrepass_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslCheckBox.TslCheckBox_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UTslCheckBox_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.GetBrush_1");

	UTslCheckBox_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslCheckBox.TslCheckBox_C.IsChecked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bChecked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslCheckBox_C::IsChecked(bool* bChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.IsChecked");

	UTslCheckBox_C_IsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bChecked != nullptr)
		*bChecked = params.bChecked;
}


// Function TslCheckBox.TslCheckBox_C.SetCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTslCheckBox_C::SetCheck(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.SetCheck");

	UTslCheckBox_C_SetCheck_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslCheckBox.TslCheckBox_C.GetDisplayName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTslCheckBox_C::GetDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.GetDisplayName");

	UTslCheckBox_C_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslCheckBox.TslCheckBox_C.IsToggleKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsToggle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTslCheckBox_C::IsToggleKey(const struct FKey& Key, bool* IsToggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.IsToggleKey");

	UTslCheckBox_C_IsToggleKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsToggle != nullptr)
		*IsToggle = params.IsToggle;
}


// Function TslCheckBox.TslCheckBox_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTslCheckBox_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.OnKeyDown");

	UTslCheckBox_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslCheckBox.TslCheckBox_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTslCheckBox_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.OnKeyUp");

	UTslCheckBox_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslCheckBox.TslCheckBox_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTslCheckBox_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.OnFocusReceived");

	UTslCheckBox_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslCheckBox.TslCheckBox_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UTslCheckBox_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UTslCheckBox_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslCheckBox.TslCheckBox_C.ExecuteUbergraph_TslCheckBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTslCheckBox_C::ExecuteUbergraph_TslCheckBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.ExecuteUbergraph_TslCheckBox");

	UTslCheckBox_C_ExecuteUbergraph_TslCheckBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslCheckBox.TslCheckBox_C.OnCheckedSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTslCheckBox_C::OnCheckedSet__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslCheckBox.TslCheckBox_C.OnCheckedSet__DelegateSignature");

	UTslCheckBox_C_OnCheckedSet__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
