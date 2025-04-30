
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

// Function SwitchWeaponSlot.SwitchWeaponSlot_C.SetFireModeText
// (Public, BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_C::SetFireModeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.SetFireModeText");

	USwitchWeaponSlot_C_SetFireModeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.CanShowFireModeSwitchBtn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSwitch                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_C::CanShowFireModeSwitchBtn(class ASTExtraShootWeapon* Weapon, bool* CanSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.CanShowFireModeSwitchBtn");

	USwitchWeaponSlot_C_CanShowFireModeSwitchBtn_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSwitch != nullptr)
		*CanSwitch = params.CanSwitch;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.GetNextFireMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGunFireMode                   FireMode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_C::GetNextFireMode(class ASTExtraShootWeapon* InputPin, EGunFireMode* FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.GetNextFireMode");

	USwitchWeaponSlot_C_GetNextFireMode_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FireMode != nullptr)
		*FireMode = params.FireMode;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.HideFireMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraShootWeapon*     shootWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_C::HideFireMode(bool bIsShow, class ASTExtraShootWeapon* shootWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.HideFireMode");

	USwitchWeaponSlot_C_HideFireMode_Params params;
	params.bIsShow = bIsShow;
	params.shootWeapon = shootWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.ChangeWeaponImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_C::ChangeWeaponImage(class UObject* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.ChangeWeaponImage");

	USwitchWeaponSlot_C_ChangeWeaponImage_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USwitchWeaponSlot_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.OnTouchEnded");

	USwitchWeaponSlot_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USwitchWeaponSlot_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.OnMouseButtonDown");

	USwitchWeaponSlot_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.UpdateImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// ESlateVisibility               visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_C::UpdateImage(const struct FSlateBrush& Brush, ESlateVisibility visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.UpdateImage");

	USwitchWeaponSlot_C_UpdateImage_Params params;
	params.Brush = Brush;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USwitchWeaponSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.Construct");

	USwitchWeaponSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.StopToSwitchIfSprint
// (BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_C::StopToSwitchIfSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.StopToSwitchIfSprint");

	USwitchWeaponSlot_C_StopToSwitchIfSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USwitchWeaponSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	USwitchWeaponSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USwitchWeaponSlot_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	USwitchWeaponSlot_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USwitchWeaponSlot_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	USwitchWeaponSlot_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void USwitchWeaponSlot_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.ReceivedInitWidget");

	USwitchWeaponSlot_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.ExecuteUbergraph_SwitchWeaponSlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_C::ExecuteUbergraph_SwitchWeaponSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.ExecuteUbergraph_SwitchWeaponSlot");

	USwitchWeaponSlot_C_ExecuteUbergraph_SwitchWeaponSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.ClickOnChangeWeaponFireMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_C::ClickOnChangeWeaponFireMode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.ClickOnChangeWeaponFireMode__DelegateSignature");

	USwitchWeaponSlot_C_ClickOnChangeWeaponFireMode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot.SwitchWeaponSlot_C.ClickOnSwitchWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_C::ClickOnSwitchWeapon__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot.SwitchWeaponSlot_C.ClickOnSwitchWeapon__DelegateSignature");

	USwitchWeaponSlot_C_ClickOnSwitchWeapon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
