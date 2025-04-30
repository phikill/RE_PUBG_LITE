
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

// Function ShootingUIPanel.ShootingUIPanel_C.IsCustomUIDataValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SaveDataSize                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDataSize, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.IsCustomUIDataValid");

	UShootingUIPanel_C_IsCustomUIDataValid_Params params;
	params.Widget = Widget;
	params.SaveDataSize = SaveDataSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SetPositionByMinimapExtend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsExtendMinimap                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::SetPositionByMinimapExtend(bool IsExtendMinimap)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SetPositionByMinimapExtend");

	UShootingUIPanel_C_SetPositionByMinimapExtend_Params params;
	params.IsExtendMinimap = IsExtendMinimap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SetInteractKeyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::SetInteractKeyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SetInteractKeyText");

	UShootingUIPanel_C_SetInteractKeyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.RefreshInteractWeaponImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::RefreshInteractWeaponImage(class UObject* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.RefreshInteractWeaponImage");

	UShootingUIPanel_C_RefreshInteractWeaponImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.GetWeaponSlotType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWeaponSlotType>   slotType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::GetWeaponSlotType(int ItemID, TEnumAsByte<EWeaponSlotType>* slotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.GetWeaponSlotType");

	UShootingUIPanel_C_GetWeaponSlotType_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (slotType != nullptr)
		*slotType = params.slotType;
}


// Function ShootingUIPanel.ShootingUIPanel_C.GetAvatarSlotType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAvatarSlotType                NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::GetAvatarSlotType(int ItemID, EAvatarSlotType* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.GetAvatarSlotType");

	UShootingUIPanel_C_GetAvatarSlotType_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ShootingUIPanel.ShootingUIPanel_C.NeedReplacement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDefineID           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bNeed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::NeedReplacement(const struct FItemDefineID& ItemID, bool* bNeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.NeedReplacement");

	UShootingUIPanel_C_NeedReplacement_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNeed != nullptr)
		*bNeed = params.bNeed;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideInteractMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HideInteractMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideInteractMessage");

	UShootingUIPanel_C_HideInteractMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ShowInteractWithGroundItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPickUpItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class APickUpWrapperActor*     PickUpWrapperActor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ShowInteractWithGroundItem(const struct FPickUpItemData& ItemData, class APickUpWrapperActor* PickUpWrapperActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ShowInteractWithGroundItem");

	UShootingUIPanel_C_ShowInteractWithGroundItem_Params params;
	params.ItemData = ItemData;
	params.PickUpWrapperActor = PickUpWrapperActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SelectSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::SelectSlot(ESurviveWeaponPropSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SelectSlot");

	UShootingUIPanel_C_SelectSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ToogleThrowMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EThrowGrenadeMode> GrenadeThrowMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ToogleThrowMode(TEnumAsByte<EThrowGrenadeMode> GrenadeThrowMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ToogleThrowMode");

	UShootingUIPanel_C_ToogleThrowMode_Params params;
	params.GrenadeThrowMode = GrenadeThrowMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_FPPModeChange
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UIMsg_FPPModeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_FPPModeChange");

	UShootingUIPanel_C_UIMsg_FPPModeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_ScopeChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UIMsg_ScopeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_ScopeChanged");

	UShootingUIPanel_C_UIMsg_ScopeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.PersonPerspectiveChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::PersonPerspectiveChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.PersonPerspectiveChanged");

	UShootingUIPanel_C_PersonPerspectiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.GetUpdateFireBtnWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsRightHand                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  FireBtnImage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UImage*                  FireBtnBG                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::GetUpdateFireBtnWidget(bool IsRightHand, class UImage** FireBtnImage, class UImage** FireBtnBG)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.GetUpdateFireBtnWidget");

	UShootingUIPanel_C_GetUpdateFireBtnWidget_Params params;
	params.IsRightHand = IsRightHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FireBtnImage != nullptr)
		*FireBtnImage = params.FireBtnImage;
	if (FireBtnBG != nullptr)
		*FireBtnBG = params.FireBtnBG;
}


// Function ShootingUIPanel.ShootingUIPanel_C.On_CancelReleaseFireBtn_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShootingUIPanel_C::On_CancelReleaseFireBtn_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.On_CancelReleaseFireBtn_MouseButtonDown_1");

	UShootingUIPanel_C_On_CancelReleaseFireBtn_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_ResetCancelFireBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UIMsg_ResetCancelFireBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_ResetCancelFireBtn");

	UShootingUIPanel_C_UIMsg_ResetCancelFireBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_ReloadEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UIMsg_ReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_ReloadEnd");

	UShootingUIPanel_C_UIMsg_ReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.CheckAutoScoping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShootingUIPanel_C::CheckAutoScoping()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.CheckAutoScoping");

	UShootingUIPanel_C_CheckAutoScoping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_PrefireEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UIMsg_PrefireEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_PrefireEnd");

	UShootingUIPanel_C_UIMsg_PrefireEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ReleaseFireScopeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::ReleaseFireScopeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ReleaseFireScopeOut");

	UShootingUIPanel_C_ReleaseFireScopeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ResetCancelFireBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::ResetCancelFireBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ResetCancelFireBtn");

	UShootingUIPanel_C_ResetCancelFireBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ShowCancelReleaseFireBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRightSidePress               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ShowCancelReleaseFireBtn(bool IsRightSidePress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ShowCancelReleaseFireBtn");

	UShootingUIPanel_C_ShowCancelReleaseFireBtn_Params params;
	params.IsRightSidePress = IsRightSidePress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.IsNeedReleaseFire
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraShootWeapon*     shootWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EReleaseToFireType             ReleaseFireType                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::IsNeedReleaseFire(class ASTExtraShootWeapon* shootWeapon, bool* Result, EReleaseToFireType* ReleaseFireType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.IsNeedReleaseFire");

	UShootingUIPanel_C_IsNeedReleaseFire_Params params;
	params.shootWeapon = shootWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (ReleaseFireType != nullptr)
		*ReleaseFireType = params.ReleaseFireType;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateCancelShootBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECurPlayerHandStatus> status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::UpdateCancelShootBtn(TEnumAsByte<ECurPlayerHandStatus> status)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateCancelShootBtn");

	UShootingUIPanel_C_UpdateCancelShootBtn_Params params;
	params.status = status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.CheckX8Slider
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::CheckX8Slider()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.CheckX8Slider");

	UShootingUIPanel_C_CheckX8Slider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.DEBUGFPS
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::DEBUGFPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.DEBUGFPS");

	UShootingUIPanel_C_DEBUGFPS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SetGrenadeCountDownTrue
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::SetGrenadeCountDownTrue()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SetGrenadeCountDownTrue");

	UShootingUIPanel_C_SetGrenadeCountDownTrue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UIMSG_NormalAimBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UIMSG_NormalAimBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UIMSG_NormalAimBtn");

	UShootingUIPanel_C_UIMSG_NormalAimBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UIMSG_HightLightAimBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UIMSG_HightLightAimBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UIMSG_HightLightAimBtn");

	UShootingUIPanel_C_UIMSG_HightLightAimBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideBareHandUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::HideBareHandUI(bool bIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideBareHandUI");

	UShootingUIPanel_C_HideBareHandUI_Params params;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HighLightJumpBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHighLight                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::HighLightJumpBtn(bool bIsHighLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HighLightJumpBtn");

	UShootingUIPanel_C_HighLightJumpBtn_Params params;
	params.bIsHighLight = bIsHighLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.On_ShootAimBtn2_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShootingUIPanel_C::On_ShootAimBtn2_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.On_ShootAimBtn2_MouseButtonDown_1");

	UShootingUIPanel_C_On_ShootAimBtn2_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateGunImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UpdateGunImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateGunImage");

	UShootingUIPanel_C_UpdateGunImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnRightSideOfTheBody
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShootingUIPanel_C::OnRightSideOfTheBody(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnRightSideOfTheBody");

	UShootingUIPanel_C_OnRightSideOfTheBody_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnLeftSideOfTheBody
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShootingUIPanel_C::OnLeftSideOfTheBody(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnLeftSideOfTheBody");

	UShootingUIPanel_C_OnLeftSideOfTheBody_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideAllNewbieGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::HideAllNewbieGuide(bool bIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideAllNewbieGuide");

	UShootingUIPanel_C_HideAllNewbieGuide_Params params;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideJumpingMoveCamTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::HideJumpingMoveCamTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideJumpingMoveCamTips");

	UShootingUIPanel_C_HideJumpingMoveCamTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideConsumeTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::HideConsumeTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideConsumeTips");

	UShootingUIPanel_C_HideConsumeTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideGrenadeTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::HideGrenadeTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideGrenadeTips");

	UShootingUIPanel_C_HideGrenadeTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.StartVaultCastUIMsg
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::StartVaultCastUIMsg()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.StartVaultCastUIMsg");

	UShootingUIPanel_C_StartVaultCastUIMsg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideSearchingHouseTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::HideSearchingHouseTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideSearchingHouseTips");

	UShootingUIPanel_C_HideSearchingHouseTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideReloadTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::HideReloadTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideReloadTips");

	UShootingUIPanel_C_HideReloadTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideLeftFireTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::HideLeftFireTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideLeftFireTips");

	UShootingUIPanel_C_HideLeftFireTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideRightFireTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::HideRightFireTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideRightFireTips");

	UShootingUIPanel_C_HideRightFireTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideGlideTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::HideGlideTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideGlideTips");

	UShootingUIPanel_C_HideGlideTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateSwimStateCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          delttime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::UpdateSwimStateCheck(float delttime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateSwimStateCheck");

	UShootingUIPanel_C_UpdateSwimStateCheck_Params params;
	params.delttime = delttime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SetFireBtnVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::SetFireBtnVisible(ESlateVisibility NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SetFireBtnVisible");

	UShootingUIPanel_C_SetFireBtnVisible_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.Do3DTouch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_STExtraPlayerController_C* Control                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::Do3DTouch(class ABP_STExtraPlayerController_C* Control)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.Do3DTouch");

	UShootingUIPanel_C_Do3DTouch_Params params;
	params.Control = Control;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.FireWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::FireWeapon(TEnumAsByte<ETouchIndex> InputPin, float force)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.FireWeapon");

	UShootingUIPanel_C_FireWeapon_Params params;
	params.InputPin = InputPin;
	params.force = force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SetRightFirebtnAndGrenadeBtnCircularHitTestRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::SetRightFirebtnAndGrenadeBtnCircularHitTestRadius(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SetRightFirebtnAndGrenadeBtnCircularHitTestRadius");

	UShootingUIPanel_C_SetRightFirebtnAndGrenadeBtnCircularHitTestRadius_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.Start ChatCDBarAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CDTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::Start_ChatCDBarAnim(float CDTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.Start ChatCDBarAnim");

	UShootingUIPanel_C_Start_ChatCDBarAnim_Params params;
	params.CDTime = CDTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.RedrawCrouchUI
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::RedrawCrouchUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.RedrawCrouchUI");

	UShootingUIPanel_C_RedrawCrouchUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.RedrawProneUI
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::RedrawProneUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.RedrawProneUI");

	UShootingUIPanel_C_RedrawProneUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.RedrawJumpUI
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::RedrawJumpUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.RedrawJumpUI");

	UShootingUIPanel_C_RedrawJumpUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideLeanIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HideLeanIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideLeanIcon");

	UShootingUIPanel_C_HideLeanIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ShowLeanIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::ShowLeanIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ShowLeanIcon");

	UShootingUIPanel_C_ShowLeanIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SwimUICheck
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::SwimUICheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SwimUICheck");

	UShootingUIPanel_C_SwimUICheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.EventDriveOutWater
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::EventDriveOutWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.EventDriveOutWater");

	UShootingUIPanel_C_EventDriveOutWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.EventDriveIntoWater
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::EventDriveIntoWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.EventDriveIntoWater");

	UShootingUIPanel_C_EventDriveIntoWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.RefreshPostolIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::RefreshPostolIcon(class UObject* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.RefreshPostolIcon");

	UShootingUIPanel_C_RefreshPostolIcon_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.RefreshMeleeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::RefreshMeleeIcon(class UObject* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.RefreshMeleeIcon");

	UShootingUIPanel_C_RefreshMeleeIcon_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnDisablePeek
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::OnDisablePeek()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnDisablePeek");

	UShootingUIPanel_C_OnDisablePeek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnPeekRight
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::OnPeekRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnPeekRight");

	UShootingUIPanel_C_OnPeekRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnPeekLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::OnPeekLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnPeekLeft");

	UShootingUIPanel_C_OnPeekLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.CombineKeyDownLogic
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::CombineKeyDownLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.CombineKeyDownLogic");

	UShootingUIPanel_C_CombineKeyDownLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.CheckIsKeyDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    KeyCode                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsDown                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::CheckIsKeyDown(const struct FKey& KeyCode, bool* IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.CheckIsKeyDown");

	UShootingUIPanel_C_CheckIsKeyDown_Params params;
	params.KeyCode = KeyCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDown != nullptr)
		*IsDown = params.IsDown;
}


// Function ShootingUIPanel.ShootingUIPanel_C.VehicleShootingCheckShootingState
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::VehicleShootingCheckShootingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.VehicleShootingCheckShootingState");

	UShootingUIPanel_C_VehicleShootingCheckShootingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandlePlayerEnterVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::HandlePlayerEnterVehicle(bool IsEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandlePlayerEnterVehicle");

	UShootingUIPanel_C_HandlePlayerEnterVehicle_Params params;
	params.IsEnter = IsEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ShowWeaponEquipAttachmentAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsEquip                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ShowWeaponEquipAttachmentAnim(ESurviveWeaponPropSlot Slot, const struct FItemDefineID& DefineID, bool IsEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ShowWeaponEquipAttachmentAnim");

	UShootingUIPanel_C_ShowWeaponEquipAttachmentAnim_Params params;
	params.Slot = Slot;
	params.DefineID = DefineID;
	params.IsEquip = IsEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideAllMultiLayerUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::HideAllMultiLayerUI(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideAllMultiLayerUI");

	UShootingUIPanel_C_HideAllMultiLayerUI_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ShowUIByOperation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperation>        Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ShowUIByOperation(TEnumAsByte<EOperation> Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ShowUIByOperation");

	UShootingUIPanel_C_ShowUIByOperation_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ThrowingCDBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CD_0_1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ThrowingCDBar(float CD_0_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ThrowingCDBar");

	UShootingUIPanel_C_ThrowingCDBar_Params params;
	params.CD_0_1 = CD_0_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UIInGameEvent_BackpackOpen_StopFire
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UIInGameEvent_BackpackOpen_StopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UIInGameEvent_BackpackOpen_StopFire");

	UShootingUIPanel_C_UIInGameEvent_BackpackOpen_StopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ShouldThrowGrenadeFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUTSkillEntry                  SkillEntryEvent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ShouldThrowGrenadeFunc(EUTSkillEntry SkillEntryEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ShouldThrowGrenadeFunc");

	UShootingUIPanel_C_ShouldThrowGrenadeFunc_Params params;
	params.SkillEntryEvent = SkillEntryEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideRefreshUI
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HideRefreshUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideRefreshUI");

	UShootingUIPanel_C_HideRefreshUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.Init BG
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::Init_BG()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.Init BG");

	UShootingUIPanel_C_Init_BG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponImageByDefineID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::UpdateWeaponImageByDefineID(ESurviveWeaponPropSlot Slot, const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponImageByDefineID");

	UShootingUIPanel_C_UpdateWeaponImageByDefineID_Params params;
	params.Slot = Slot;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.GrenadeThrow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::GrenadeThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.GrenadeThrow");

	UShootingUIPanel_C_GrenadeThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.GrenadePrepareToThrow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::GrenadePrepareToThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.GrenadePrepareToThrow");

	UShootingUIPanel_C_GrenadePrepareToThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.GetBP_PlayerPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerPawnPC_C*      PlayerPawn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::GetBP_PlayerPawn(class ABP_PlayerPawnPC_C** PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.GetBP_PlayerPawn");

	UShootingUIPanel_C_GetBP_PlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerPawn != nullptr)
		*PlayerPawn = params.PlayerPawn;
}


// Function ShootingUIPanel.ShootingUIPanel_C.Reconnect_ResetUIByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.Reconnect_ResetUIByPlayerControllerState");

	UShootingUIPanel_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnSprintStateInterrupt
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::OnSprintStateInterrupt()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnSprintStateInterrupt");

	UShootingUIPanel_C_OnSprintStateInterrupt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.GetGrenadeTimerIconByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGrenadeType>      grenadeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             GrenadeSlate                   (Parm, OutParm)

void UShootingUIPanel_C::GetGrenadeTimerIconByType(TEnumAsByte<EGrenadeType> grenadeType, struct FSlateBrush* GrenadeSlate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.GetGrenadeTimerIconByType");

	UShootingUIPanel_C_GetGrenadeTimerIconByType_Params params;
	params.grenadeType = grenadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrenadeSlate != nullptr)
		*GrenadeSlate = params.GrenadeSlate;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandleReloadFinish
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HandleReloadFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandleReloadFinish");

	UShootingUIPanel_C_HandleReloadFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.StartReloadAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::StartReloadAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.StartReloadAnim");

	UShootingUIPanel_C_StartReloadAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.PlayerInfo_UpdatePlayerBreathAmmount
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::PlayerInfo_UpdatePlayerBreathAmmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.PlayerInfo_UpdatePlayerBreathAmmount");

	UShootingUIPanel_C_PlayerInfo_UpdatePlayerBreathAmmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.On_OnFireBtn_Lside_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShootingUIPanel_C::On_OnFireBtn_Lside_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.On_OnFireBtn_Lside_MouseButtonDown_1");

	UShootingUIPanel_C_On_OnFireBtn_Lside_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function ShootingUIPanel.ShootingUIPanel_C.Swim_OutWaterShowUI
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::Swim_OutWaterShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.Swim_OutWaterShowUI");

	UShootingUIPanel_C_Swim_OutWaterShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.Swim_EnterWaterHideUI
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::Swim_EnterWaterHideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.Swim_EnterWaterHideUI");

	UShootingUIPanel_C_Swim_EnterWaterHideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.Grenade_Cancel
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::Grenade_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.Grenade_Cancel");

	UShootingUIPanel_C_Grenade_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateItemUsingProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UpdateItemUsingProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateItemUsingProgress");

	UShootingUIPanel_C_UpdateItemUsingProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponBulletCount
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UpdateWeaponBulletCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponBulletCount");

	UShootingUIPanel_C_UpdateWeaponBulletCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ResetUIOnPlane
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::ResetUIOnPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ResetUIOnPlane");

	UShootingUIPanel_C_ResetUIOnPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.CanPlayerAutoSprintOrSwim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanAutoSprintOrSwim            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::CanPlayerAutoSprintOrSwim(bool* CanAutoSprintOrSwim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.CanPlayerAutoSprintOrSwim");

	UShootingUIPanel_C_CanPlayerAutoSprintOrSwim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAutoSprintOrSwim != nullptr)
		*CanAutoSprintOrSwim = params.CanAutoSprintOrSwim;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UIChangeWhenPlayerOnPlane
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UIChangeWhenPlayerOnPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UIChangeWhenPlayerOnPlane");

	UShootingUIPanel_C_UIChangeWhenPlayerOnPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandleCurWeaponFireModeChange
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HandleCurWeaponFireModeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandleCurWeaponFireModeChange");

	UShootingUIPanel_C_HandleCurWeaponFireModeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponImage
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UpdateWeaponImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponImage");

	UShootingUIPanel_C_UpdateWeaponImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ActiveSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::ActiveSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ActiveSprint");

	UShootingUIPanel_C_ActiveSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SimSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::SimSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SimSprint");

	UShootingUIPanel_C_SimSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ShowAutoSprintUI
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::ShowAutoSprintUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ShowAutoSprintUI");

	UShootingUIPanel_C_ShowAutoSprintUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponBulletOnShoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UpdateWeaponBulletOnShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponBulletOnShoot");

	UShootingUIPanel_C_UpdateWeaponBulletOnShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateTopRightWeaponBulletWhenUsing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::UpdateTopRightWeaponBulletWhenUsing(class ASTExtraWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateTopRightWeaponBulletWhenUsing");

	UShootingUIPanel_C_UpdateTopRightWeaponBulletWhenUsing_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateTopRightWeaponBulletWhenEquipAndUnequip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         WeaponSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::UpdateTopRightWeaponBulletWhenEquipAndUnequip(ESurviveWeaponPropSlot WeaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateTopRightWeaponBulletWhenEquipAndUnequip");

	UShootingUIPanel_C_UpdateTopRightWeaponBulletWhenEquipAndUnequip_Params params;
	params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandleTopRightWeaponSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         TopRightWeaponSlot             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::HandleTopRightWeaponSwitch(ESurviveWeaponPropSlot TopRightWeaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandleTopRightWeaponSwitch");

	UShootingUIPanel_C_HandleTopRightWeaponSwitch_Params params;
	params.TopRightWeaponSlot = TopRightWeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SimulateStopSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::SimulateStopSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SimulateStopSprint");

	UShootingUIPanel_C_SimulateStopSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HideAutoSprintUI
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HideAutoSprintUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HideAutoSprintUI");

	UShootingUIPanel_C_HideAutoSprintUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandleWeaponChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::HandleWeaponChange(ESurviveWeaponPropSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandleWeaponChange");

	UShootingUIPanel_C_HandleWeaponChange_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ChangeFireStatusAndUpdateFireBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECurPlayerHandStatus> status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ChangeFireStatusAndUpdateFireBtn(TEnumAsByte<ECurPlayerHandStatus> status)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ChangeFireStatusAndUpdateFireBtn");

	UShootingUIPanel_C_ChangeFireStatusAndUpdateFireBtn_Params params;
	params.status = status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.NormalFireBtnByStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::NormalFireBtnByStatus(bool isRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.NormalFireBtnByStatus");

	UShootingUIPanel_C_NormalFireBtnByStatus_Params params;
	params.isRight = isRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.GetCurMeleeHightLightAndNormalIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             Normal                         (Parm, OutParm)
// struct FSlateBrush             highLight                      (Parm, OutParm)

void UShootingUIPanel_C::GetCurMeleeHightLightAndNormalIcon(struct FSlateBrush* Normal, struct FSlateBrush* highLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.GetCurMeleeHightLightAndNormalIcon");

	UShootingUIPanel_C_GetCurMeleeHightLightAndNormalIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normal != nullptr)
		*Normal = params.Normal;
	if (highLight != nullptr)
		*highLight = params.highLight;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HightLightFireBtnByStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRightHand                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::HightLightFireBtnByStatus(bool IsRightHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HightLightFireBtnByStatus");

	UShootingUIPanel_C_HightLightFireBtnByStatus_Params params;
	params.IsRightHand = IsRightHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HightLightCurUseWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HightLightCurUseWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HightLightCurUseWeapon");

	UShootingUIPanel_C_HightLightCurUseWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateTopRightWeapnIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ImagePath                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UShootingUIPanel_C::UpdateTopRightWeapnIcon(ESurviveWeaponPropSlot SlotName, const struct FString& ImagePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateTopRightWeapnIcon");

	UShootingUIPanel_C_UpdateTopRightWeapnIcon_Params params;
	params.SlotName = SlotName;
	params.ImagePath = ImagePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SetGrenadeCountDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBeginThrow                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::SetGrenadeCountDown(bool IsBeginThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SetGrenadeCountDown");

	UShootingUIPanel_C_SetGrenadeCountDown_Params params;
	params.IsBeginThrow = IsBeginThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.DealSwimForce
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          upoffset                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           unswing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::DealSwimForce(float upoffset, class AActor* Player, bool* unswing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.DealSwimForce");

	UShootingUIPanel_C_DealSwimForce_Params params;
	params.upoffset = upoffset;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (unswing != nullptr)
		*unswing = params.unswing;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ReloadingCDbar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CdValue_0_1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ReloadingCDbar(float CdValue_0_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ReloadingCDbar");

	UShootingUIPanel_C_ReloadingCDbar_Params params;
	params.CdValue_0_1 = CdValue_0_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UseItemCDbar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CdValue_0_1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::UseItemCDbar(float CdValue_0_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UseItemCDbar");

	UShootingUIPanel_C_UseItemCDbar_Params params;
	params.CdValue_0_1 = CdValue_0_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandleThrowOutGrenade
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HandleThrowOutGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandleThrowOutGrenade");

	UShootingUIPanel_C_HandleThrowOutGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandleReadyThrowOutGrenade
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HandleReadyThrowOutGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandleReadyThrowOutGrenade");

	UShootingUIPanel_C_HandleReadyThrowOutGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.GetGrenadeIconByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGrenadeType>      grenadeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             NormalIcon                     (Parm, OutParm)
// struct FSlateBrush             HighLightIcon                  (Parm, OutParm)

void UShootingUIPanel_C::GetGrenadeIconByType(TEnumAsByte<EGrenadeType> grenadeType, struct FSlateBrush* NormalIcon, struct FSlateBrush* HighLightIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.GetGrenadeIconByType");

	UShootingUIPanel_C_GetGrenadeIconByType_Params params;
	params.grenadeType = grenadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalIcon != nullptr)
		*NormalIcon = params.NormalIcon;
	if (HighLightIcon != nullptr)
		*HighLightIcon = params.HighLightIcon;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnUseGrenadeChangeUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGrenadeType>      grenadeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::OnUseGrenadeChangeUI(TEnumAsByte<EGrenadeType> grenadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnUseGrenadeChangeUI");

	UShootingUIPanel_C_OnUseGrenadeChangeUI_Params params;
	params.grenadeType = grenadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ResetCustomUIPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::ResetCustomUIPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ResetCustomUIPosition");

	UShootingUIPanel_C_ResetCustomUIPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SetRenderTransformIfValid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UGridPanel*              GridPanel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::SetRenderTransformIfValid(const struct FVector2D& Position, class UGridPanel* GridPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SetRenderTransformIfValid");

	UShootingUIPanel_C_SetRenderTransformIfValid_Params params;
	params.Position = Position;
	params.GridPanel = GridPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ApplyCustomUIPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDragableBtnPositionDataStruct> CustomUI                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UShootingUIPanel_C::ApplyCustomUIPosition(TArray<struct FDragableBtnPositionDataStruct>* CustomUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ApplyCustomUIPosition");

	UShootingUIPanel_C_ApplyCustomUIPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomUI != nullptr)
		*CustomUI = params.CustomUI;
}


// Function ShootingUIPanel.ShootingUIPanel_C.RightBtnStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::RightBtnStatus(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.RightBtnStatus");

	UShootingUIPanel_C_RightBtnStatus_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateStandCrouchProneAndSprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESTEPoseState>     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::UpdateStandCrouchProneAndSprint(TEnumAsByte<ESTEPoseState> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateStandCrouchProneAndSprint");

	UShootingUIPanel_C_UpdateStandCrouchProneAndSprint_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.EnableMovement
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::EnableMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.EnableMovement");

	UShootingUIPanel_C_EnableMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.StopMovementIfProne
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::StopMovementIfProne()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.StopMovementIfProne");

	UShootingUIPanel_C_StopMovementIfProne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.FireInteruptedIfProne
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::FireInteruptedIfProne()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.FireInteruptedIfProne");

	UShootingUIPanel_C_FireInteruptedIfProne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.AimInterupted
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::AimInterupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.AimInterupted");

	UShootingUIPanel_C_AimInterupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SprintInterupted
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::SprintInterupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SprintInterupted");

	UShootingUIPanel_C_SprintInterupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateBulletLeftCountText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::UpdateBulletLeftCountText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateBulletLeftCountText");

	UShootingUIPanel_C_UpdateBulletLeftCountText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateGunBulletCountText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::UpdateGunBulletCountText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateGunBulletCountText");

	UShootingUIPanel_C_UpdateGunBulletCountText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateReloadCountDownText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::UpdateReloadCountDownText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateReloadCountDownText");

	UShootingUIPanel_C_UpdateReloadCountDownText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SwitchAimMode
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::SwitchAimMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SwitchAimMode");

	UShootingUIPanel_C_SwitchAimMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateReloadCD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::UpdateReloadCD(float NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateReloadCD");

	UShootingUIPanel_C_UpdateReloadCD_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateData
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UpdateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateData");

	UShootingUIPanel_C_UpdateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ShowBackpackIconSplash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ShowBackpackIconSplash(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ShowBackpackIconSplash");

	UShootingUIPanel_C_ShowBackpackIconSplash_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.UpdateInstantPickUpList
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::UpdateInstantPickUpList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.UpdateInstantPickUpList");

	UShootingUIPanel_C_UpdateInstantPickUpList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnReleaseFireBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::OnReleaseFireBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnReleaseFireBtn");

	UShootingUIPanel_C_OnReleaseFireBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HaveBullet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::HaveBullet(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HaveBullet");

	UShootingUIPanel_C_HaveBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnPressFireBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETouchFireType>    FireType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isRightSide                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::OnPressFireBtn(TEnumAsByte<ETouchIndex> FingerIndex, float force, TEnumAsByte<ETouchFireType> FireType, bool isRightSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnPressFireBtn");

	UShootingUIPanel_C_OnPressFireBtn_Params params;
	params.FingerIndex = FingerIndex;
	params.force = force;
	params.FireType = FireType;
	params.isRightSide = isRightSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.On_OnFireBtn_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShootingUIPanel_C::On_OnFireBtn_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.On_OnFireBtn_MouseButtonDown_1");

	UShootingUIPanel_C_On_OnFireBtn_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function ShootingUIPanel.ShootingUIPanel_C.On_BackpackBtn_MouseButtonDown_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShootingUIPanel_C::On_BackpackBtn_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.On_BackpackBtn_MouseButtonDown_1");

	UShootingUIPanel_C_On_BackpackBtn_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;
}


// Function ShootingUIPanel.ShootingUIPanel_C.StopToSwitchIfSprint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESwitchWeaponActionType> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::StopToSwitchIfSprint(TEnumAsByte<ESwitchWeaponActionType> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.StopToSwitchIfSprint");

	UShootingUIPanel_C_StopToSwitchIfSprint_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SimulateSprint
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::SimulateSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SimulateSprint");

	UShootingUIPanel_C_SimulateSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_Throw_Mode_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__Button_Throw_Mode_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_Throw_Mode_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__Button_Throw_Mode_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnReadyToThrowGrenade
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::OnReadyToThrowGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnReadyToThrowGrenade");

	UShootingUIPanel_C_OnReadyToThrowGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnEndThrowGrenade
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::OnEndThrowGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnEndThrowGrenade");

	UShootingUIPanel_C_OnEndThrowGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_137_GrenadeTriggerHit__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_137_GrenadeTriggerHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_137_GrenadeTriggerHit__DelegateSignature");

	UShootingUIPanel_C_BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_137_GrenadeTriggerHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_143_GrenadeThrown__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_143_GrenadeThrown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_143_GrenadeThrown__DelegateSignature");

	UShootingUIPanel_C_BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_143_GrenadeThrown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.RefreshGrename
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::RefreshGrename()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.RefreshGrename");

	UShootingUIPanel_C_RefreshGrename_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BeginGrenamdeTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Sum                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::BeginGrenamdeTimer(float Sum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BeginGrenamdeTimer");

	UShootingUIPanel_C_BeginGrenamdeTimer_Params params;
	params.Sum = Sum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimUp_K2Node_ComponentBoundEvent_485_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__SwimUp_K2Node_ComponentBoundEvent_485_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimUp_K2Node_ComponentBoundEvent_485_OnButtonPressedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__SwimUp_K2Node_ComponentBoundEvent_485_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimUp_K2Node_ComponentBoundEvent_551_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__SwimUp_K2Node_ComponentBoundEvent_551_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimUp_K2Node_ComponentBoundEvent_551_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__SwimUp_K2Node_ComponentBoundEvent_551_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimDown_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__SwimDown_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimDown_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__SwimDown_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimDown_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__SwimDown_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimDown_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__SwimDown_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__MeleeBtn_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__MeleeBtn_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__MeleeBtn_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__MeleeBtn_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__PistolBtn_K2Node_ComponentBoundEvent_168_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__PistolBtn_K2Node_ComponentBoundEvent_168_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__PistolBtn_K2Node_ComponentBoundEvent_168_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__PistolBtn_K2Node_ComponentBoundEvent_168_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_207_OnUseGrenade__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EGrenadeType>      grenadeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::BndEvt__GrenadeList_K2Node_ComponentBoundEvent_207_OnUseGrenade__DelegateSignature(TEnumAsByte<EGrenadeType> grenadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_207_OnUseGrenade__DelegateSignature");

	UShootingUIPanel_C_BndEvt__GrenadeList_K2Node_ComponentBoundEvent_207_OnUseGrenade__DelegateSignature_Params params;
	params.grenadeType = grenadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__JumpBtn_K2Node_ComponentBoundEvent_222_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__JumpBtn_K2Node_ComponentBoundEvent_222_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__JumpBtn_K2Node_ComponentBoundEvent_222_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__JumpBtn_K2Node_ComponentBoundEvent_222_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__JumpBtn_K2Node_ComponentBoundEvent_209_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__JumpBtn_K2Node_ComponentBoundEvent_209_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__JumpBtn_K2Node_ComponentBoundEvent_209_OnButtonPressedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__JumpBtn_K2Node_ComponentBoundEvent_209_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BindWeaponChangeDelegate
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::BindWeaponChangeDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BindWeaponChangeDelegate");

	UShootingUIPanel_C_BindWeaponChangeDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_43_OnGrenadeEmpty__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__GrenadeList_K2Node_ComponentBoundEvent_43_OnGrenadeEmpty__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_43_OnGrenadeEmpty__DelegateSignature");

	UShootingUIPanel_C_BndEvt__GrenadeList_K2Node_ComponentBoundEvent_43_OnGrenadeEmpty__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_68_OnUseMelee__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__GrenadeList_K2Node_ComponentBoundEvent_68_OnUseMelee__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_68_OnUseMelee__DelegateSignature");

	UShootingUIPanel_C_BndEvt__GrenadeList_K2Node_ComponentBoundEvent_68_OnUseMelee__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_198_OnUseFist__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__GrenadeList_K2Node_ComponentBoundEvent_198_OnUseFist__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_198_OnUseFist__DelegateSignature");

	UShootingUIPanel_C_BndEvt__GrenadeList_K2Node_ComponentBoundEvent_198_OnUseFist__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwitchWeaponSlot_Mode2_K2Node_ComponentBoundEvent_1500_ClickOnSwitchWeapon__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__SwitchWeaponSlot_Mode2_K2Node_ComponentBoundEvent_1500_ClickOnSwitchWeapon__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwitchWeaponSlot_Mode2_K2Node_ComponentBoundEvent_1500_ClickOnSwitchWeapon__DelegateSignature");

	UShootingUIPanel_C_BndEvt__SwitchWeaponSlot_Mode2_K2Node_ComponentBoundEvent_1500_ClickOnSwitchWeapon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwitchWeaponSlot_Mode2_C_0_K2Node_ComponentBoundEvent_1585_ClickOnSwitchWeapon__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__SwitchWeaponSlot_Mode2_C_0_K2Node_ComponentBoundEvent_1585_ClickOnSwitchWeapon__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwitchWeaponSlot_Mode2_C_0_K2Node_ComponentBoundEvent_1585_ClickOnSwitchWeapon__DelegateSignature");

	UShootingUIPanel_C_BndEvt__SwitchWeaponSlot_Mode2_C_0_K2Node_ComponentBoundEvent_1585_ClickOnSwitchWeapon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandleUIWhenPlayerOnPlane
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HandleUIWhenPlayerOnPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandleUIWhenPlayerOnPlane");

	UShootingUIPanel_C_HandleUIWhenPlayerOnPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandleChangeInventoryData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         TargetChangeSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::HandleChangeInventoryData(ESurviveWeaponPropSlot TargetChangeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandleChangeInventoryData");

	UShootingUIPanel_C_HandleChangeInventoryData_Params params;
	params.TargetChangeSlot = TargetChangeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BindPickupUpdateBullet
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::BindPickupUpdateBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BindPickupUpdateBullet");

	UShootingUIPanel_C_BindPickupUpdateBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandlePickupUpdateBullet
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HandlePickupUpdateBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandlePickupUpdateBullet");

	UShootingUIPanel_C_HandlePickupUpdateBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShowPrompt                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LastTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PromptText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TotalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::CustomEvent_1(bool IsShowPrompt, float LastTime, const struct FString& PromptText, float TotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.CustomEvent_1");

	UShootingUIPanel_C_CustomEvent_1_Params params;
	params.IsShowPrompt = IsShowPrompt;
	params.LastTime = LastTime;
	params.PromptText = PromptText;
	params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.Tick");

	UShootingUIPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UShootingUIPanel_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ReceivedInitWidget");

	UShootingUIPanel_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.HandleUIWhenPlayerLand
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::HandleUIWhenPlayerLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.HandleUIWhenPlayerLand");

	UShootingUIPanel_C_HandleUIWhenPlayerLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.Sjump
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::Sjump()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.Sjump");

	UShootingUIPanel_C_Sjump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SimReload
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::SimReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SimReload");

	UShootingUIPanel_C_SimReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.WeaponChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         TargetChangeSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::WeaponChange(ESurviveWeaponPropSlot TargetChangeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.WeaponChange");

	UShootingUIPanel_C_WeaponChange_Params params;
	params.TargetChangeSlot = TargetChangeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnReloadCountingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   CountDownValue                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::OnReloadCountingDown(const struct FText& CountDownValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnReloadCountingDown");

	UShootingUIPanel_C_OnReloadCountingDown_Params params;
	params.CountDownValue = CountDownValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SetCustomizeUIInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::SetCustomizeUIInfo(class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SetCustomizeUIInfo");

	UShootingUIPanel_C_SetCustomizeUIInfo_Params params;
	params.SaveGame = SaveGame;
	params.LayoutIndex = LayoutIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SkillFinishedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EUTSkillStopReason             StopReason                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::SkillFinishedEvent(EUTSkillStopReason StopReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SkillFinishedEvent");

	UShootingUIPanel_C_SkillFinishedEvent_Params params;
	params.StopReason = StopReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.SetSettingControlUI
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::SetSettingControlUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.SetSettingControlUI");

	UShootingUIPanel_C_SetSettingControlUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.LeftHandFireEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::LeftHandFireEvent(int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.LeftHandFireEvent");

	UShootingUIPanel_C_LeftHandFireEvent_Params params;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.CameraModeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerCameraMode> CameraMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::CameraModeChange(TEnumAsByte<EPlayerCameraMode> CameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.CameraModeChange");

	UShootingUIPanel_C_CameraModeChange_Params params;
	params.CameraMode = CameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.VaultFailFromDS
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::VaultFailFromDS()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.VaultFailFromDS");

	UShootingUIPanel_C_VaultFailFromDS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__ReloadButton_K2Node_ComponentBoundEvent_158_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__ReloadButton_K2Node_ComponentBoundEvent_158_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__ReloadButton_K2Node_ComponentBoundEvent_158_OnButtonPressedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__ReloadButton_K2Node_ComponentBoundEvent_158_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__RightProne_K2Node_ComponentBoundEvent_308_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__RightProne_K2Node_ComponentBoundEvent_308_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__RightProne_K2Node_ComponentBoundEvent_308_OnButtonPressedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__RightProne_K2Node_ComponentBoundEvent_308_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__RightCrouch_K2Node_ComponentBoundEvent_473_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__RightCrouch_K2Node_ComponentBoundEvent_473_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__RightCrouch_K2Node_ComponentBoundEvent_473_OnButtonPressedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__RightCrouch_K2Node_ComponentBoundEvent_473_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Sprint_K2Node_ComponentBoundEvent_799_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__Sprint_K2Node_ComponentBoundEvent_799_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Sprint_K2Node_ComponentBoundEvent_799_OnButtonPressedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__Sprint_K2Node_ComponentBoundEvent_799_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ItemUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::ItemUpdated(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ItemUpdated");

	UShootingUIPanel_C_ItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.On3DTouchForceChange
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::On3DTouchForceChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.On3DTouchForceChange");

	UShootingUIPanel_C_On3DTouchForceChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_RightSideOfTheBody_K2Node_ComponentBoundEvent_422_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__Button_RightSideOfTheBody_K2Node_ComponentBoundEvent_422_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_RightSideOfTheBody_K2Node_ComponentBoundEvent_422_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__Button_RightSideOfTheBody_K2Node_ComponentBoundEvent_422_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_LeftSideOfTheBody_K2Node_ComponentBoundEvent_857_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__Button_LeftSideOfTheBody_K2Node_ComponentBoundEvent_857_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_LeftSideOfTheBody_K2Node_ComponentBoundEvent_857_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__Button_LeftSideOfTheBody_K2Node_ComponentBoundEvent_857_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_16_K2Node_ComponentBoundEvent_111_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__Button_16_K2Node_ComponentBoundEvent_111_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_16_K2Node_ComponentBoundEvent_111_OnButtonPressedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__Button_16_K2Node_ComponentBoundEvent_111_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__LeftGrenade_Btn_K2Node_ComponentBoundEvent_199_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__LeftGrenade_Btn_K2Node_ComponentBoundEvent_199_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__LeftGrenade_Btn_K2Node_ComponentBoundEvent_199_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__LeftGrenade_Btn_K2Node_ComponentBoundEvent_199_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.Scope
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::Scope()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.Scope");

	UShootingUIPanel_C_Scope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnDoubleClickCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::OnDoubleClickCheck(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnDoubleClickCheck");

	UShootingUIPanel_C_OnDoubleClickCheck_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Slider_X8Zoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::BndEvt__Slider_X8Zoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Slider_X8Zoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__Slider_X8Zoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__CancelFireBtn_Rside_K2Node_ComponentBoundEvent_2117_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__CancelFireBtn_Rside_K2Node_ComponentBoundEvent_2117_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__CancelFireBtn_Rside_K2Node_ComponentBoundEvent_2117_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__CancelFireBtn_Rside_K2Node_ComponentBoundEvent_2117_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__CancelReleaseFireBtn_K2Node_ComponentBoundEvent_261_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__CancelReleaseFireBtn_K2Node_ComponentBoundEvent_261_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__CancelReleaseFireBtn_K2Node_ComponentBoundEvent_261_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__CancelReleaseFireBtn_K2Node_ComponentBoundEvent_261_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_HIdeX8Panel_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__Button_HIdeX8Panel_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_HIdeX8Panel_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__Button_HIdeX8Panel_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_8XBtn_K2Node_ComponentBoundEvent_242_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__Button_8XBtn_K2Node_ComponentBoundEvent_242_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_8XBtn_K2Node_ComponentBoundEvent_242_OnButtonClickedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__Button_8XBtn_K2Node_ComponentBoundEvent_242_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__OnFireBtn_ReleaseBtn_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__OnFireBtn_ReleaseBtn_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__OnFireBtn_ReleaseBtn_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__OnFireBtn_ReleaseBtn_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__OnFireBtn_LReleaseBtn_K2Node_ComponentBoundEvent_283_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__OnFireBtn_LReleaseBtn_K2Node_ComponentBoundEvent_283_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__OnFireBtn_LReleaseBtn_K2Node_ComponentBoundEvent_283_OnButtonReleasedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__OnFireBtn_LReleaseBtn_K2Node_ComponentBoundEvent_283_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_SwitchPMode_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__Button_SwitchPMode_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_SwitchPMode_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature");

	UShootingUIPanel_C_BndEvt__Button_SwitchPMode_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__PistolMode_K2Node_ComponentBoundEvent_289_ClickOnSwitchWeapon__DelegateSignature
// (BlueprintEvent)

void UShootingUIPanel_C::BndEvt__PistolMode_K2Node_ComponentBoundEvent_289_ClickOnSwitchWeapon__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__PistolMode_K2Node_ComponentBoundEvent_289_ClickOnSwitchWeapon__DelegateSignature");

	UShootingUIPanel_C_BndEvt__PistolMode_K2Node_ComponentBoundEvent_289_ClickOnSwitchWeapon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__PistolMode_K2Node_ComponentBoundEvent_121_ShowLongGunFireMode__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::BndEvt__PistolMode_K2Node_ComponentBoundEvent_121_ShowLongGunFireMode__DelegateSignature(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__PistolMode_K2Node_ComponentBoundEvent_121_ShowLongGunFireMode__DelegateSignature");

	UShootingUIPanel_C_BndEvt__PistolMode_K2Node_ComponentBoundEvent_121_ShowLongGunFireMode__DelegateSignature_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.refreshfpBtn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::refreshfpBtn(bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.refreshfpBtn");

	UShootingUIPanel_C_refreshfpBtn_Params params;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.FpViewValueChnanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::FpViewValueChnanged(int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.FpViewValueChnanged");

	UShootingUIPanel_C_FpViewValueChnanged_Params params;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.CustomEventChangeFOV
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::CustomEventChangeFOV(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.CustomEventChangeFOV");

	UShootingUIPanel_C_CustomEventChangeFOV_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ResetUIStateAfterRespawn
// (Public, BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::ResetUIStateAfterRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ResetUIStateAfterRespawn");

	UShootingUIPanel_C_ResetUIStateAfterRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.OnUpdateInteractable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSearchedPickUpItemResult InteractableItem               (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::OnUpdateInteractable(const struct FSearchedPickUpItemResult& InteractableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.OnUpdateInteractable");

	UShootingUIPanel_C_OnUpdateInteractable_Params params;
	params.InteractableItem = InteractableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ItemDelete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UShootingUIPanel_C::ItemDelete(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ItemDelete");

	UShootingUIPanel_C_ItemDelete_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.LeaveWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideLung                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::LeaveWater(bool HideLung)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.LeaveWater");

	UShootingUIPanel_C_LeaveWater_Params params;
	params.HideLung = HideLung;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.JumpVault
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::JumpVault()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.JumpVault");

	UShootingUIPanel_C_JumpVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.EnterWater
// (BlueprintCallable, BlueprintEvent)

void UShootingUIPanel_C::EnterWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.EnterWater");

	UShootingUIPanel_C_EnterWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.IntelligentSort
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::IntelligentSort(bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.IntelligentSort");

	UShootingUIPanel_C_IntelligentSort_Params params;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.LRShootChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::LRShootChange(int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.LRShootChange");

	UShootingUIPanel_C_LRShootChange_Params params;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ReleaseFireSniper
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ReleaseFireSniper(int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ReleaseFireSniper");

	UShootingUIPanel_C_ReleaseFireSniper_Params params;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ReleaseFireShotGun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ReleaseFireShotGun(int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ReleaseFireShotGun");

	UShootingUIPanel_C_ReleaseFireShotGun_Params params;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.StateLeave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::StateLeave(EPawnState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.StateLeave");

	UShootingUIPanel_C_StateLeave_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.StateEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::StateEnter(EPawnState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.StateEnter");

	UShootingUIPanel_C_StateEnter_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.StateInterruptedHandlerBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::StateInterruptedHandlerBP(EPawnState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.StateInterruptedHandlerBP");

	UShootingUIPanel_C_StateInterruptedHandlerBP_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingUIPanel.ShootingUIPanel_C.ExecuteUbergraph_ShootingUIPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShootingUIPanel_C::ExecuteUbergraph_ShootingUIPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingUIPanel.ShootingUIPanel_C.ExecuteUbergraph_ShootingUIPanel");

	UShootingUIPanel_C_ExecuteUbergraph_ShootingUIPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
