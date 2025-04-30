
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

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.IsCustomUIDataValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SaveDataSize                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDataSize, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.IsCustomUIDataValid");

	UMainControlPanelTochButton_C_IsCustomUIDataValid_Params params;
	params.Widget = Widget;
	params.SaveDataSize = SaveDataSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseEnergyDrinkItem
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_UseEnergyDrinkItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseEnergyDrinkItem");

	UMainControlPanelTochButton_C_UIMSG_UseEnergyDrinkItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UsePainkillertItem
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_UsePainkillertItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UsePainkillertItem");

	UMainControlPanelTochButton_C_UIMSG_UsePainkillertItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseAdrenalineItem
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_UseAdrenalineItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseAdrenalineItem");

	UMainControlPanelTochButton_C_UIMSG_UseAdrenalineItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseHealItem
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_UseHealItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseHealItem");

	UMainControlPanelTochButton_C_UIMSG_UseHealItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UseItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::UseItem(int ItemDefineID, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UseItem");

	UMainControlPanelTochButton_C_UseItem_Params params;
	params.ItemDefineID = ItemDefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseBoostItem
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_UseBoostItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseBoostItem");

	UMainControlPanelTochButton_C_UIMSG_UseBoostItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseBandage
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_UseBandage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseBandage");

	UMainControlPanelTochButton_C_UIMSG_UseBandage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseFirstAid
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_UseFirstAid()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseFirstAid");

	UMainControlPanelTochButton_C_UIMSG_UseFirstAid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseMedKit
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_UseMedKit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseMedKit");

	UMainControlPanelTochButton_C_UIMSG_UseMedKit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowHideKeyHintWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_ShowHideKeyHintWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowHideKeyHintWidget");

	UMainControlPanelTochButton_C_UIMsg_ShowHideKeyHintWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_MoveToSelfPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_MoveToSelfPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_MoveToSelfPosition");

	UMainControlPanelTochButton_C_UIMsg_MoveToSelfPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetMarkerAtCurrentPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_SetMarkerAtCurrentPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetMarkerAtCurrentPosition");

	UMainControlPanelTochButton_C_UIMsg_SetMarkerAtCurrentPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_DeleteMyMarker
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_DeleteMyMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_DeleteMyMarker");

	UMainControlPanelTochButton_C_UIMsg_DeleteMyMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ToggleUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_ToggleUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ToggleUI");

	UMainControlPanelTochButton_C_UIMsg_ToggleUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetVoiceMute
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_SetVoiceMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetVoiceMute");

	UMainControlPanelTochButton_C_UIMsg_SetVoiceMute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetMasterSoundMute
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_SetMasterSoundMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetMasterSoundMute");

	UMainControlPanelTochButton_C_UIMsg_SetMasterSoundMute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetChangeVoiceChannel
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_SetChangeVoiceChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetChangeVoiceChannel");

	UMainControlPanelTochButton_C_UIMsg_SetChangeVoiceChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowTeamUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::ShowTeamUI(int TeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowTeamUI");

	UMainControlPanelTochButton_C_ShowTeamUI_Params params;
	params.TeamNumber = TeamNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_RespawnSetUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_RespawnSetUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_RespawnSetUI");

	UMainControlPanelTochButton_C_UIMsg_RespawnSetUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.NotHideUIAfterDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHide                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::NotHideUIAfterDead(bool* IsHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.NotHideUIAfterDead");

	UMainControlPanelTochButton_C_NotHideUIAfterDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHide != nullptr)
		*IsHide = params.IsHide;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_WarModeRespawnShowUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_WarModeRespawnShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_WarModeRespawnShowUI");

	UMainControlPanelTochButton_C_UIMsg_WarModeRespawnShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.InitSpecialUI
// (Private, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::InitSpecialUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.InitSpecialUI");

	UMainControlPanelTochButton_C_InitSpecialUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.LeaveSpectatingStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::LeaveSpectatingStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.LeaveSpectatingStatus");

	UMainControlPanelTochButton_C_LeaveSpectatingStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchCameraModeScope_Aim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::SwitchCameraModeScope_Aim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchCameraModeScope_Aim");

	UMainControlPanelTochButton_C_SwitchCameraModeScope_Aim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_TakeDamageUpdateEquipmentDurability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_TakeDamageUpdateEquipmentDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_TakeDamageUpdateEquipmentDurability");

	UMainControlPanelTochButton_C_UIMsg_TakeDamageUpdateEquipmentDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_NormalAimBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_NormalAimBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_NormalAimBtn");

	UMainControlPanelTochButton_C_UIMSG_NormalAimBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_HightLightAimBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_HightLightAimBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_HightLightAimBtn");

	UMainControlPanelTochButton_C_UIMSG_HightLightAimBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NormalRightFire
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_NormalRightFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NormalRightFire");

	UMainControlPanelTochButton_C_UIMsg_NormalRightFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NormalLeftFire
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_NormalLeftFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NormalLeftFire");

	UMainControlPanelTochButton_C_UIMsg_NormalLeftFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.FingWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 foundW                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::FingWidget(class UWidget* Widget, int Data, class UWidget** foundW, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.FingWidget");

	UMainControlPanelTochButton_C_FingWidget_Params params;
	params.Widget = Widget;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundW != nullptr)
		*foundW = params.foundW;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_GuideByStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_GuideByStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_GuideByStep");

	UMainControlPanelTochButton_C_UIMsg_GuideByStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_HideOBAirDropBox
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_HideOBAirDropBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_HideOBAirDropBox");

	UMainControlPanelTochButton_C_UIMsg_HideOBAirDropBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowOBAirDropBox
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_ShowOBAirDropBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowOBAirDropBox");

	UMainControlPanelTochButton_C_UIMsg_ShowOBAirDropBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_EnterTrainingMode
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_EnterTrainingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_EnterTrainingMode");

	UMainControlPanelTochButton_C_UIMsg_EnterTrainingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_FPPModeChange
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_FPPModeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_FPPModeChange");

	UMainControlPanelTochButton_C_UIMsg_FPPModeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_InitUIGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_InitUIGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_InitUIGuide");

	UMainControlPanelTochButton_C_UIMsg_InitUIGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowBattleUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ShowBattleUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowBattleUI");

	UMainControlPanelTochButton_C_ShowBattleUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetGuideFromGuideComponent
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_SetGuideFromGuideComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetGuideFromGuideComponent");

	UMainControlPanelTochButton_C_UIMsg_SetGuideFromGuideComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleStopPlayerAutoSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_VehicleStopPlayerAutoSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleStopPlayerAutoSprint");

	UMainControlPanelTochButton_C_UIMsg_VehicleStopPlayerAutoSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehiclePanelHide
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_VehiclePanelHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehiclePanelHide");

	UMainControlPanelTochButton_C_UIMsg_VehiclePanelHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleSeatChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_VehicleSeatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleSeatChanged");

	UMainControlPanelTochButton_C_UIMsg_VehicleSeatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleInputAxisMoveRight
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_VehicleInputAxisMoveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleInputAxisMoveRight");

	UMainControlPanelTochButton_C_UIMsg_VehicleInputAxisMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleUpdateSpped
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_VehicleUpdateSpped()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleUpdateSpped");

	UMainControlPanelTochButton_C_UIMsg_VehicleUpdateSpped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleUpdateSeatUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_VehicleUpdateSeatUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleUpdateSeatUI");

	UMainControlPanelTochButton_C_UIMsg_VehicleUpdateSeatUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleMotorcycleContactChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_VehicleMotorcycleContactChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleMotorcycleContactChanged");

	UMainControlPanelTochButton_C_UIMsg_VehicleMotorcycleContactChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleWheelsHPChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_VehicleWheelsHPChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleWheelsHPChanged");

	UMainControlPanelTochButton_C_UIMsg_VehicleWheelsHPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleFuelChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_VehicleFuelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleFuelChanged");

	UMainControlPanelTochButton_C_UIMsg_VehicleFuelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleHPChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_VehicleHPChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleHPChanged");

	UMainControlPanelTochButton_C_UIMsg_VehicleHPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_AddOneMsgtoUIInner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_AddOneMsgtoUIInner()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_AddOneMsgtoUIInner");

	UMainControlPanelTochButton_C_UIMsg_AddOneMsgtoUIInner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NotifyFriendReply
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_NotifyFriendReply()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NotifyFriendReply");

	UMainControlPanelTochButton_C_UIMsg_NotifyFriendReply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NotifyFriendInvite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_NotifyFriendInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NotifyFriendInvite");

	UMainControlPanelTochButton_C_UIMsg_NotifyFriendInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_AddFriendChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_AddFriendChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_AddFriendChat");

	UMainControlPanelTochButton_C_UIMsg_AddFriendChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_CloseChatHistoryList
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_CloseChatHistoryList()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_CloseChatHistoryList");

	UMainControlPanelTochButton_C_UIMsg_CloseChatHistoryList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_UpdateStandCrouchAndSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_UpdateStandCrouchAndSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_UpdateStandCrouchAndSprint");

	UMainControlPanelTochButton_C_UIMsg_UpdateStandCrouchAndSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_MakeFireModeEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_MakeFireModeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_MakeFireModeEffect");

	UMainControlPanelTochButton_C_UIMsg_MakeFireModeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetAutoNavigateTranslation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_SetAutoNavigateTranslation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetAutoNavigateTranslation");

	UMainControlPanelTochButton_C_UIMsg_SetAutoNavigateTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideSelf
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::HideSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideSelf");

	UMainControlPanelTochButton_C_HideSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NotifyPickup
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_NotifyPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NotifyPickup");

	UMainControlPanelTochButton_C_UIMsg_NotifyPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_UpdatePickUpList
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_UpdatePickUpList()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_UpdatePickUpList");

	UMainControlPanelTochButton_C_UIMsg_UpdatePickUpList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SwitchAimMode
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_SwitchAimMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SwitchAimMode");

	UMainControlPanelTochButton_C_UIMsg_SwitchAimMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_DisableAimIfUnEquipWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_DisableAimIfUnEquipWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_DisableAimIfUnEquipWeapon");

	UMainControlPanelTochButton_C_UIMsg_DisableAimIfUnEquipWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_BindOrUnBindJoyStickSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_BindOrUnBindJoyStickSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_BindOrUnBindJoyStickSprint");

	UMainControlPanelTochButton_C_UIMsg_BindOrUnBindJoyStickSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowBackpackTombBox
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_ShowBackpackTombBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowBackpackTombBox");

	UMainControlPanelTochButton_C_UIMsg_ShowBackpackTombBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowAutoSprintIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_ShowAutoSprintIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowAutoSprintIcon");

	UMainControlPanelTochButton_C_UIMsg_ShowAutoSprintIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_WeaponEquipAttachment
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_WeaponEquipAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_WeaponEquipAttachment");

	UMainControlPanelTochButton_C_UIMsg_WeaponEquipAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_MemberVoice
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_MemberVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_MemberVoice");

	UMainControlPanelTochButton_C_UIMsg_MemberVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_PlayerControllerPressGrenade
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_PlayerControllerPressGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_PlayerControllerPressGrenade");

	UMainControlPanelTochButton_C_UIMsg_PlayerControllerPressGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideFireBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::HideFireBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideFireBtn");

	UMainControlPanelTochButton_C_HideFireBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_PlayerControllerPressFire
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_PlayerControllerPressFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_PlayerControllerPressFire");

	UMainControlPanelTochButton_C_UIMsg_PlayerControllerPressFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SwitchCameraSatrtHandle
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_SwitchCameraSatrtHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SwitchCameraSatrtHandle");

	UMainControlPanelTochButton_C_UIMsg_SwitchCameraSatrtHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_DoUITouchMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_DoUITouchMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_DoUITouchMove");

	UMainControlPanelTochButton_C_UIMsg_DoUITouchMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_OnPlaneUpdatePickUpList
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_OnPlaneUpdatePickUpList()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_OnPlaneUpdatePickUpList");

	UMainControlPanelTochButton_C_UIMsg_OnPlaneUpdatePickUpList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_JoyStickTriggerSprint
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_JoyStickTriggerSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_JoyStickTriggerSprint");

	UMainControlPanelTochButton_C_UIMsg_JoyStickTriggerSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_HideJoinGameUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_HideJoinGameUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_HideJoinGameUI");

	UMainControlPanelTochButton_C_UIMsg_HideJoinGameUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ReleaseFireBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_ReleaseFireBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ReleaseFireBtn");

	UMainControlPanelTochButton_C_UIMsg_ReleaseFireBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ScopeChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMsg_ScopeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ScopeChanged");

	UMainControlPanelTochButton_C_UIMsg_ScopeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.EnterObserverStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::EnterObserverStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.EnterObserverStatus");

	UMainControlPanelTochButton_C_EnterObserverStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_PlayerControllerStateChange
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIMSG_PlayerControllerStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_PlayerControllerStateChange");

	UMainControlPanelTochButton_C_UIMSG_PlayerControllerStateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReceiveParachuteFollowRequst
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ReceiveParachuteFollowRequst()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReceiveParachuteFollowRequst");

	UMainControlPanelTochButton_C_ReceiveParachuteFollowRequst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadyToSendFinishedGuideToServer
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ReadyToSendFinishedGuideToServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadyToSendFinishedGuideToServer");

	UMainControlPanelTochButton_C_ReadyToSendFinishedGuideToServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewBieGuide_FinishedCurGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::NewBieGuide_FinishedCurGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewBieGuide_FinishedCurGuide");

	UMainControlPanelTochButton_C_NewBieGuide_FinishedCurGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.HandlNewbieGuideUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            guideID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::HandlNewbieGuideUpdate(int guideID, bool bIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.HandlNewbieGuideUpdate");

	UMainControlPanelTochButton_C_HandlNewbieGuideUpdate_Params params;
	params.guideID = guideID;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewbieGuide_HideCurNewbieGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::NewbieGuide_HideCurNewbieGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewbieGuide_HideCurNewbieGuide");

	UMainControlPanelTochButton_C_NewbieGuide_HideCurNewbieGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewbieGuide_ShowCurNewbieGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::NewbieGuide_ShowCurNewbieGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewbieGuide_ShowCurNewbieGuide");

	UMainControlPanelTochButton_C_NewbieGuide_ShowCurNewbieGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadyToRetriveBeginnerFinishedGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ReadyToRetriveBeginnerFinishedGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadyToRetriveBeginnerFinishedGuide");

	UMainControlPanelTochButton_C_ReadyToRetriveBeginnerFinishedGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.GameAssistantShowUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::GameAssistantShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.GameAssistantShowUI");

	UMainControlPanelTochButton_C_GameAssistantShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ApplyUserSettingInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ApplyUserSettingInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ApplyUserSettingInfo");

	UMainControlPanelTochButton_C_ApplyUserSettingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ResetCustomUIForAssistant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTransparent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::ResetCustomUIForAssistant(bool IsTransparent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ResetCustomUIForAssistant");

	UMainControlPanelTochButton_C_ResetCustomUIForAssistant_Params params;
	params.IsTransparent = IsTransparent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.GetUIElementSetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            FireMode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* UIElemSaveGame                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::GetUIElementSetting(int* FireMode, class UBP_SAVEGAME_UIElemLayout_C** UIElemSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.GetUIElementSetting");

	UMainControlPanelTochButton_C_GetUIElementSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FireMode != nullptr)
		*FireMode = params.FireMode;
	if (UIElemSaveGame != nullptr)
		*UIElemSaveGame = params.UIElemSaveGame;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.GameAssistantHideUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::GameAssistantHideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.GameAssistantHideUI");

	UMainControlPanelTochButton_C_GameAssistantHideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadAdaptationTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ReadAdaptationTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadAdaptationTable");

	UMainControlPanelTochButton_C_ReadAdaptationTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIElemLayoutApplyCustomSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UIElemLayoutApplyCustomSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIElemLayoutApplyCustomSetting");

	UMainControlPanelTochButton_C_UIElemLayoutApplyCustomSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchOperationByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::SwitchOperationByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchOperationByPlayerControllerState");

	UMainControlPanelTochButton_C_SwitchOperationByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowSpectatingUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ShowSpectatingUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowSpectatingUI");

	UMainControlPanelTochButton_C_ShowSpectatingUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.EnterSpectatingStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::EnterSpectatingStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.EnterSpectatingStatus");

	UMainControlPanelTochButton_C_EnterSpectatingStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideAllUIAfterDeadTipsShow
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::HideAllUIAfterDeadTipsShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideAllUIAfterDeadTipsShow");

	UMainControlPanelTochButton_C_HideAllUIAfterDeadTipsShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.Reconnect_ResetUIByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.Reconnect_ResetUIByPlayerControllerState");

	UMainControlPanelTochButton_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ApplyCustomUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ApplyCustomUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ApplyCustomUI");

	UMainControlPanelTochButton_C_ApplyCustomUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.MainControlPanel_HideAllUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::MainControlPanel_HideAllUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.MainControlPanel_HideAllUI");

	UMainControlPanelTochButton_C_MainControlPanel_HideAllUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.IngameUIAdaptation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::IngameUIAdaptation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.IngameUIAdaptation");

	UMainControlPanelTochButton_C_IngameUIAdaptation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.DebugSetAllUIVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::DebugSetAllUIVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.DebugSetAllUIVisibility");

	UMainControlPanelTochButton_C_DebugSetAllUIVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowDriveUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ShowDriveUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowDriveUI");

	UMainControlPanelTochButton_C_ShowDriveUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.OperatingRules2
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::OperatingRules2()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.OperatingRules2");

	UMainControlPanelTochButton_C_OperatingRules2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.GetCustomUIPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDragableBtnPositionDataStruct> Custom                         (Parm, OutParm, ZeroConstructor)

void UMainControlPanelTochButton_C::GetCustomUIPosition(TArray<struct FDragableBtnPositionDataStruct>* Custom)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.GetCustomUIPosition");

	UMainControlPanelTochButton_C_GetCustomUIPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Custom != nullptr)
		*Custom = params.Custom;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchOperationUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::SwitchOperationUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchOperationUI");

	UMainControlPanelTochButton_C_SwitchOperationUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowShooterUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ShowShooterUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowShooterUI");

	UMainControlPanelTochButton_C_ShowShooterUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowFreeFallUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ShowFreeFallUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowFreeFallUI");

	UMainControlPanelTochButton_C_ShowFreeFallUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowAirborneUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ShowAirborneUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowAirborneUI");

	UMainControlPanelTochButton_C_ShowAirborneUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainControlPanelTochButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.Construct");

	UMainControlPanelTochButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UMainControlPanelTochButton_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReceivedInitWidget");

	UMainControlPanelTochButton_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.OnHideUIAfterPlayerDeadDelegate
// (BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::OnHideUIAfterPlayerDeadDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.OnHideUIAfterPlayerDeadDelegate");

	UMainControlPanelTochButton_C_OnHideUIAfterPlayerDeadDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.OnRankChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Kills                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::OnRankChange(int Kills, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.OnRankChange");

	UMainControlPanelTochButton_C_OnRankChange_Params params;
	params.Kills = Kills;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SetCustomizeUIInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::SetCustomizeUIInfo(class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.SetCustomizeUIInfo");

	UMainControlPanelTochButton_C_SetCustomizeUIInfo_Params params;
	params.SaveGame = SaveGame;
	params.LayoutIndex = LayoutIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.OnEnterSpectatinStatus
// (BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::OnEnterSpectatinStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.OnEnterSpectatinStatus");

	UMainControlPanelTochButton_C_OnEnterSpectatinStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SetSettingControlUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::SetSettingControlUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.SetSettingControlUI");

	UMainControlPanelTochButton_C_SetSettingControlUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ChangeFireMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IntValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::ChangeFireMode(int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ChangeFireMode");

	UMainControlPanelTochButton_C_ChangeFireMode_Params params;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ResetUIStateAfterRespawn
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ResetUIStateAfterRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ResetUIStateAfterRespawn");

	UMainControlPanelTochButton_C_ResetUIStateAfterRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UpdateTeamMemberUI
// (BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::UpdateTeamMemberUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.UpdateTeamMemberUI");

	UMainControlPanelTochButton_C_UpdateTeamMemberUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ApplyCustomUIPosition
// (BlueprintCallable, BlueprintEvent)

void UMainControlPanelTochButton_C::ApplyCustomUIPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ApplyCustomUIPosition");

	UMainControlPanelTochButton_C_ApplyCustomUIPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.Tick");

	UMainControlPanelTochButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ExecuteUbergraph_MainControlPanelTochButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlPanelTochButton_C::ExecuteUbergraph_MainControlPanelTochButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.ExecuteUbergraph_MainControlPanelTochButton");

	UMainControlPanelTochButton_C_ExecuteUbergraph_MainControlPanelTochButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SetCustomUIPosition__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDragableBtnPositionDataStruct> CustomUIPosition               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainControlPanelTochButton_C::SetCustomUIPosition__DelegateSignature(TArray<struct FDragableBtnPositionDataStruct>* CustomUIPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlPanelTochButton.MainControlPanelTochButton_C.SetCustomUIPosition__DelegateSignature");

	UMainControlPanelTochButton_C_SetCustomUIPosition__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomUIPosition != nullptr)
		*CustomUIPosition = params.CustomUIPosition;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
