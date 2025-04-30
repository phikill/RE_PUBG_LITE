
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

// Function FireMode.FireMode_C.RefreshBulletImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFireMode_C::RefreshBulletImage(class UObject* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.RefreshBulletImage");

	UFireMode_C_RefreshBulletImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.UpdateBulletCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BulletInWeapon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BulletInBackpack               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           BulletType                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class USwitchWeaponSlot_Mode2_C* WeaponSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFireMode_C::UpdateBulletCounts(int BulletInWeapon, int BulletInBackpack, const struct FItemDefineID& BulletType, class USwitchWeaponSlot_Mode2_C* WeaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.UpdateBulletCounts");

	UFireMode_C_UpdateBulletCounts_Params params;
	params.BulletInWeapon = BulletInWeapon;
	params.BulletInBackpack = BulletInBackpack;
	params.BulletType = BulletType;
	params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.GetAttachmentImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ImagePath                      (Parm, OutParm, ZeroConstructor)

void UFireMode_C::GetAttachmentImage(const struct FItemDefineID& DefineID, struct FString* ImagePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.GetAttachmentImage");

	UFireMode_C_GetAttachmentImage_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImagePath != nullptr)
		*ImagePath = params.ImagePath;
}


// Function FireMode.FireMode_C.SetFireModeText
// (Public, BlueprintCallable, BlueprintEvent)

void UFireMode_C::SetFireModeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.SetFireModeText");

	UFireMode_C_SetFireModeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.CanShowFireModeSwitchBtn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSwitch                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFireMode_C::CanShowFireModeSwitchBtn(class ASTExtraShootWeapon* Weapon, bool* CanSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.CanShowFireModeSwitchBtn");

	UFireMode_C_CanShowFireModeSwitchBtn_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSwitch != nullptr)
		*CanSwitch = params.CanSwitch;
}


// Function FireMode.FireMode_C.GetNextFireMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGunFireMode                   FireMode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFireMode_C::GetNextFireMode(class ASTExtraShootWeapon* InputPin, EGunFireMode* FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.GetNextFireMode");

	UFireMode_C_GetNextFireMode_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FireMode != nullptr)
		*FireMode = params.FireMode;
}


// Function FireMode.FireMode_C.HideFireMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraShootWeapon*     shootWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFireMode_C::HideFireMode(bool bIsShow, class ASTExtraShootWeapon* shootWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.HideFireMode");

	UFireMode_C_HideFireMode_Params params;
	params.bIsShow = bIsShow;
	params.shootWeapon = shootWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFireMode_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.OnTouchEnded");

	UFireMode_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function FireMode.FireMode_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFireMode_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.OnMouseButtonDown");

	UFireMode_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function FireMode.FireMode_C.StopToSwitchIfSprint
// (BlueprintCallable, BlueprintEvent)

void UFireMode_C::StopToSwitchIfSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.StopToSwitchIfSprint");

	UFireMode_C_StopToSwitchIfSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFireMode_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	UFireMode_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UFireMode_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.ReceivedInitWidget");

	UFireMode_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFireMode_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature");

	UFireMode_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFireMode_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature");

	UFireMode_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.ExecuteUbergraph_FireMode
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFireMode_C::ExecuteUbergraph_FireMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.ExecuteUbergraph_FireMode");

	UFireMode_C_ExecuteUbergraph_FireMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.ClickOnChangeWeaponFireMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFireMode_C::ClickOnChangeWeaponFireMode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.ClickOnChangeWeaponFireMode__DelegateSignature");

	UFireMode_C_ClickOnChangeWeaponFireMode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireMode.FireMode_C.ClickOnSwitchWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFireMode_C::ClickOnSwitchWeapon__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireMode.FireMode_C.ClickOnSwitchWeapon__DelegateSignature");

	UFireMode_C_ClickOnSwitchWeapon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
