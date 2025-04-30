
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

// Function PistolMode.PistolMode_C.GetAttachmentImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ImagePath                      (Parm, OutParm, ZeroConstructor)

void UPistolMode_C::GetAttachmentImage(const struct FItemDefineID& DefineID, struct FString* ImagePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.GetAttachmentImage");

	UPistolMode_C_GetAttachmentImage_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImagePath != nullptr)
		*ImagePath = params.ImagePath;
}


// Function PistolMode.PistolMode_C.AddAttachmentAnimationToQuere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           ID                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UPistolMode_C::AddAttachmentAnimationToQuere(const struct FItemDefineID& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.AddAttachmentAnimationToQuere");

	UPistolMode_C_AddAttachmentAnimationToQuere_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.AddAttachmentAnimationToQuereAsync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::AddAttachmentAnimationToQuereAsync(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.AddAttachmentAnimationToQuereAsync");

	UPistolMode_C_AddAttachmentAnimationToQuereAsync_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.PlayAnimationInQueue
// (Public, BlueprintCallable, BlueprintEvent)

void UPistolMode_C::PlayAnimationInQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.PlayAnimationInQueue");

	UPistolMode_C_PlayAnimationInQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPistolMode_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.OnMouseButtonDown");

	UPistolMode_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function PistolMode.PistolMode_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPistolMode_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.OnTouchEnded");

	UPistolMode_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function PistolMode.PistolMode_C.GetWeaponMgr
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponManagerComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWeaponManagerComponent* UPistolMode_C::GetWeaponMgr()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.GetWeaponMgr");

	UPistolMode_C_GetWeaponMgr_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PistolMode.PistolMode_C.GetCurrWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraShootWeapon*     AsSTExtra_Shoot_Weapon         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::GetCurrWeapon(class ASTExtraShootWeapon** AsSTExtra_Shoot_Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.GetCurrWeapon");

	UPistolMode_C_GetCurrWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsSTExtra_Shoot_Weapon != nullptr)
		*AsSTExtra_Shoot_Weapon = params.AsSTExtra_Shoot_Weapon;
}


// Function PistolMode.PistolMode_C.CanShowFireModeSwitchBtn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSwitch                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::CanShowFireModeSwitchBtn(class ASTExtraShootWeapon* Weapon, bool* CanSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.CanShowFireModeSwitchBtn");

	UPistolMode_C_CanShowFireModeSwitchBtn_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSwitch != nullptr)
		*CanSwitch = params.CanSwitch;
}


// Function PistolMode.PistolMode_C.SetFireModeText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraShootWeapon*     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::SetFireModeText(class ASTExtraShootWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.SetFireModeText");

	UPistolMode_C_SetFireModeText_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.HideFireMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::HideFireMode(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.HideFireMode");

	UPistolMode_C_HideFireMode_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.GetNextFireMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGunFireMode                   FireMode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::GetNextFireMode(class ASTExtraShootWeapon* InputPin, EGunFireMode* FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.GetNextFireMode");

	UPistolMode_C_GetNextFireMode_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FireMode != nullptr)
		*FireMode = params.FireMode;
}


// Function PistolMode.PistolMode_C.UpdatePistol
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPistolMode_C::UpdatePistol()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.UpdatePistol");

	UPistolMode_C_UpdatePistol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.SetBorderOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::SetBorderOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.SetBorderOpacity");

	UPistolMode_C_SetBorderOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.GetBackPackBulletNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           BulletType                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::GetBackPackBulletNum(const struct FItemDefineID& BulletType, int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.GetBackPackBulletNum");

	UPistolMode_C_GetBackPackBulletNum_Params params;
	params.BulletType = BulletType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function PistolMode.PistolMode_C.UpdateBulletCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BulletInWeapon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BulletInBackpack               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           BulletType                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UPistolMode_C::UpdateBulletCounts(int BulletInWeapon, int BulletInBackpack, const struct FItemDefineID& BulletType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.UpdateBulletCounts");

	UPistolMode_C_UpdateBulletCounts_Params params;
	params.BulletInWeapon = BulletInWeapon;
	params.BulletInBackpack = BulletInBackpack;
	params.BulletType = BulletType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.RefreshWeaponImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::RefreshWeaponImage(class UObject* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.RefreshWeaponImage");

	UPistolMode_C_RefreshWeaponImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.ChangeImageAndTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsGunRunOutOfAmmo              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::ChangeImageAndTextColor(bool IsGunRunOutOfAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.ChangeImageAndTextColor");

	UPistolMode_C_ChangeImageAndTextColor_Params params;
	params.IsGunRunOutOfAmmo = IsGunRunOutOfAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.ClearWeaponSlotData
// (Public, BlueprintCallable, BlueprintEvent)

void UPistolMode_C::ClearWeaponSlotData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.ClearWeaponSlotData");

	UPistolMode_C_ClearWeaponSlotData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.ChangeWeaponImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPistolMode_C::ChangeWeaponImage(const struct FString& IconPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.ChangeWeaponImage");

	UPistolMode_C_ChangeWeaponImage_Params params;
	params.IconPath = IconPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.BndEvt__Button_Pisto_Exp_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPistolMode_C::BndEvt__Button_Pisto_Exp_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.BndEvt__Button_Pisto_Exp_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature");

	UPistolMode_C_BndEvt__Button_Pisto_Exp_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.BndEvt__Button_ChangeShootingType_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPistolMode_C::BndEvt__Button_ChangeShootingType_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.BndEvt__Button_ChangeShootingType_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature");

	UPistolMode_C_BndEvt__Button_ChangeShootingType_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UPistolMode_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.ReceivedInitWidget");

	UPistolMode_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.BndEvt__Button_UnSelect_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPistolMode_C::BndEvt__Button_UnSelect_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.BndEvt__Button_UnSelect_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature");

	UPistolMode_C_BndEvt__Button_UnSelect_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.GetItemAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UPistolMode_C::GetItemAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.GetItemAnimFinished");

	UPistolMode_C_GetItemAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.ExecuteUbergraph_PistolMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::ExecuteUbergraph_PistolMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.ExecuteUbergraph_PistolMode");

	UPistolMode_C_ExecuteUbergraph_PistolMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.ShowLongGunFireMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistolMode_C::ShowLongGunFireMode__DelegateSignature(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.ShowLongGunFireMode__DelegateSignature");

	UPistolMode_C_ShowLongGunFireMode__DelegateSignature_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PistolMode.PistolMode_C.ClickOnSwitchWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPistolMode_C::ClickOnSwitchWeapon__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolMode.PistolMode_C.ClickOnSwitchWeapon__DelegateSignature");

	UPistolMode_C_ClickOnSwitchWeapon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
