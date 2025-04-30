
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

// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.RegisterSettingChanged
// (Public, BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::RegisterSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.RegisterSettingChanged");

	USwitchWeaponSlot_Mode2_C_RegisterSettingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetSlotNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::SetSlotNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetSlotNumber");

	USwitchWeaponSlot_Mode2_C_SetSlotNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetWeaponMgr
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponManagerComponent* weaponComp                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::GetWeaponMgr(class UWeaponManagerComponent** weaponComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetWeaponMgr");

	USwitchWeaponSlot_Mode2_C_GetWeaponMgr_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (weaponComp != nullptr)
		*weaponComp = params.weaponComp;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateFireModeShape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::UpdateFireModeShape(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateFireModeShape");

	USwitchWeaponSlot_Mode2_C_UpdateFireModeShape_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.HideSwitchWeaponTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm)

void USwitchWeaponSlot_Mode2_C::HideSwitchWeaponTips(bool NewParam, const struct FBP_STRUCT_GuideText_type& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.HideSwitchWeaponTips");

	USwitchWeaponSlot_Mode2_C_HideSwitchWeaponTips_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.AddAttachmentAnimationToQuereAsync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::AddAttachmentAnimationToQuereAsync(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.AddAttachmentAnimationToQuereAsync");

	USwitchWeaponSlot_Mode2_C_AddAttachmentAnimationToQuereAsync_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.RefreshWeaponImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::RefreshWeaponImage(class UObject* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.RefreshWeaponImage");

	USwitchWeaponSlot_Mode2_C_RefreshWeaponImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetAttachmentImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ImagePath                      (Parm, OutParm, ZeroConstructor)

void USwitchWeaponSlot_Mode2_C::GetAttachmentImage(const struct FItemDefineID& DefineID, struct FString* ImagePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetAttachmentImage");

	USwitchWeaponSlot_Mode2_C_GetAttachmentImage_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImagePath != nullptr)
		*ImagePath = params.ImagePath;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.AddAttachmentAnimationToQuere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           ID                             (BlueprintVisible, BlueprintReadOnly, Parm)

void USwitchWeaponSlot_Mode2_C::AddAttachmentAnimationToQuere(const struct FItemDefineID& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.AddAttachmentAnimationToQuere");

	USwitchWeaponSlot_Mode2_C_AddAttachmentAnimationToQuere_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.PlayAnimationInQueue
// (Public, BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::PlayAnimationInQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.PlayAnimationInQueue");

	USwitchWeaponSlot_Mode2_C_PlayAnimationInQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UnSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::UnSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UnSelected");

	USwitchWeaponSlot_Mode2_C_UnSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ChangeImageAndTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsGunRunOutOfAmmo              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::ChangeImageAndTextColor(bool IsGunRunOutOfAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ChangeImageAndTextColor");

	USwitchWeaponSlot_Mode2_C_ChangeImageAndTextColor_Params params;
	params.IsGunRunOutOfAmmo = IsGunRunOutOfAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateBulletCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BulletInWeapon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BulletInBackpack               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           BulletType                     (BlueprintVisible, BlueprintReadOnly, Parm)

void USwitchWeaponSlot_Mode2_C::UpdateBulletCounts(int BulletInWeapon, int BulletInBackpack, const struct FItemDefineID& BulletType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateBulletCounts");

	USwitchWeaponSlot_Mode2_C_UpdateBulletCounts_Params params;
	params.BulletInWeapon = BulletInWeapon;
	params.BulletInBackpack = BulletInBackpack;
	params.BulletType = BulletType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClearWeaponSlotData
// (Public, BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::ClearWeaponSlotData()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClearWeaponSlotData");

	USwitchWeaponSlot_Mode2_C_ClearWeaponSlotData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetBorderOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::SetBorderOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetBorderOpacity");

	USwitchWeaponSlot_Mode2_C_SetBorderOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetFireModeText
// (Public, BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::SetFireModeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetFireModeText");

	USwitchWeaponSlot_Mode2_C_SetFireModeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.CanShowFireModeSwitchBtn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSwitch                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::CanShowFireModeSwitchBtn(class ASTExtraShootWeapon* Weapon, bool* CanSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.CanShowFireModeSwitchBtn");

	USwitchWeaponSlot_Mode2_C_CanShowFireModeSwitchBtn_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSwitch != nullptr)
		*CanSwitch = params.CanSwitch;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetNextFireMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGunFireMode                   FireMode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::GetNextFireMode(class ASTExtraShootWeapon* InputPin, EGunFireMode* FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetNextFireMode");

	USwitchWeaponSlot_Mode2_C_GetNextFireMode_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FireMode != nullptr)
		*FireMode = params.FireMode;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.HideFireMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraShootWeapon*     shootWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::HideFireMode(bool bIsShow, class ASTExtraShootWeapon* shootWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.HideFireMode");

	USwitchWeaponSlot_Mode2_C_HideFireMode_Params params;
	params.bIsShow = bIsShow;
	params.shootWeapon = shootWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ChangeWeaponImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void USwitchWeaponSlot_Mode2_C::ChangeWeaponImage(const struct FString& IconPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ChangeWeaponImage");

	USwitchWeaponSlot_Mode2_C_ChangeWeaponImage_Params params;
	params.IconPath = IconPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USwitchWeaponSlot_Mode2_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.OnTouchEnded");

	USwitchWeaponSlot_Mode2_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USwitchWeaponSlot_Mode2_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.OnMouseButtonDown");

	USwitchWeaponSlot_Mode2_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// ESlateVisibility               visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::UpdateImage(const struct FSlateBrush& Brush, ESlateVisibility visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateImage");

	USwitchWeaponSlot_Mode2_C_UpdateImage_Params params;
	params.Brush = Brush;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.StopToSwitchIfSprint
// (BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::StopToSwitchIfSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.StopToSwitchIfSprint");

	USwitchWeaponSlot_Mode2_C_StopToSwitchIfSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	USwitchWeaponSlot_Mode2_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ReceivedInitWidget");

	USwitchWeaponSlot_Mode2_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetItemAnimFinished
// (BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::GetItemAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetItemAnimFinished");

	USwitchWeaponSlot_Mode2_C_GetItemAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature");

	USwitchWeaponSlot_Mode2_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature");

	USwitchWeaponSlot_Mode2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_Pistol_Fire_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::BndEvt__Button_Pistol_Fire_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_Pistol_Fire_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature");

	USwitchWeaponSlot_Mode2_C_BndEvt__Button_Pistol_Fire_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ExecuteUbergraph_SwitchWeaponSlot_Mode2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwitchWeaponSlot_Mode2_C::ExecuteUbergraph_SwitchWeaponSlot_Mode2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ExecuteUbergraph_SwitchWeaponSlot_Mode2");

	USwitchWeaponSlot_Mode2_C_ExecuteUbergraph_SwitchWeaponSlot_Mode2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClickOnChangeWeaponFireMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::ClickOnChangeWeaponFireMode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClickOnChangeWeaponFireMode__DelegateSignature");

	USwitchWeaponSlot_Mode2_C_ClickOnChangeWeaponFireMode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClickOnSwitchWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USwitchWeaponSlot_Mode2_C::ClickOnSwitchWeapon__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClickOnSwitchWeapon__DelegateSignature");

	USwitchWeaponSlot_Mode2_C_ClickOnSwitchWeapon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
