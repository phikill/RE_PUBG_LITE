
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

// Function MainControlBaseUI.MainControlBaseUI_C.IsCustomUIDataValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SaveDataSize                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDataSize, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.IsCustomUIDataValid");

	UMainControlBaseUI_C_IsCustomUIDataValid_Params params;
	params.Widget = Widget;
	params.SaveDataSize = SaveDataSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_ToggleExtendedMinimap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UIMsg_ToggleExtendedMinimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_ToggleExtendedMinimap");

	UMainControlBaseUI_C_UIMsg_ToggleExtendedMinimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.MapUIHideAirplaneRoute
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::MapUIHideAirplaneRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.MapUIHideAirplaneRoute");

	UMainControlBaseUI_C_MapUIHideAirplaneRoute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideAirplane
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::HideAirplane()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideAirplane");

	UMainControlBaseUI_C_HideAirplane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ShowAirplane
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ShowAirplane()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ShowAirplane");

	UMainControlBaseUI_C_ShowAirplane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.SetSpectatingUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::SetSpectatingUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.SetSpectatingUI");

	UMainControlBaseUI_C_SetSpectatingUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.RemindOnMsgText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainControlBaseUI_C::RemindOnMsgText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.RemindOnMsgText");

	UMainControlBaseUI_C_RemindOnMsgText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.SetAlphaArmorIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsAlpha                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ResultBrush                    (Parm, OutParm)

void UMainControlBaseUI_C::SetAlphaArmorIcon(const struct FSlateBrush& Brush, bool IsAlpha, struct FSlateBrush* ResultBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.SetAlphaArmorIcon");

	UMainControlBaseUI_C_SetAlphaArmorIcon_Params params;
	params.Brush = Brush;
	params.IsAlpha = IsAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultBrush != nullptr)
		*ResultBrush = params.ResultBrush;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideChasingBar
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::HideChasingBar(bool bIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideChasingBar");

	UMainControlBaseUI_C_HideChasingBar_Params params;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideAllMicFx
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::HideAllMicFx()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideAllMicFx");

	UMainControlBaseUI_C_HideAllMicFx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_EnterTrainingMode
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UIMsg_EnterTrainingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_EnterTrainingMode");

	UMainControlBaseUI_C_UIMsg_EnterTrainingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.GetKillInfoPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKillInfoItem_BP_C*      Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::GetKillInfoPanel(class UKillInfoItem_BP_C** Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.GetKillInfoPanel");

	UMainControlBaseUI_C_GetKillInfoPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InitKillInfoPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InitKillInfoPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InitKillInfoPanel");

	UMainControlBaseUI_C_InitKillInfoPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.RefreshWhenEnterTeamRoom
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::RefreshWhenEnterTeamRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.RefreshWhenEnterTeamRoom");

	UMainControlBaseUI_C_RefreshWhenEnterTeamRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.SetForbidInfoToPlayerController
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::SetForbidInfoToPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.SetForbidInfoToPlayerController");

	UMainControlBaseUI_C_SetForbidInfoToPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InitMemberVoiceList
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InitMemberVoiceList()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InitMemberVoiceList");

	UMainControlBaseUI_C_InitMemberVoiceList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideMicphoneFx
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::HideMicphoneFx()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideMicphoneFx");

	UMainControlBaseUI_C_HideMicphoneFx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.GetDayTimeStr
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            curDay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::GetDayTimeStr(int* curDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.GetDayTimeStr");

	UMainControlBaseUI_C_GetDayTimeStr_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (curDay != nullptr)
		*curDay = params.curDay;
}


// Function MainControlBaseUI.MainControlBaseUI_C.RefreshVoiceSpecialImage
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::RefreshVoiceSpecialImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.RefreshVoiceSpecialImage");

	UMainControlBaseUI_C_RefreshVoiceSpecialImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateVoiceCheckByGameState
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UpdateVoiceCheckByGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateVoiceCheckByGameState");

	UMainControlBaseUI_C_UpdateVoiceCheckByGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.SwitchMemberVoiceStateByIdx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::SwitchMemberVoiceStateByIdx(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.SwitchMemberVoiceStateByIdx");

	UMainControlBaseUI_C_SwitchMemberVoiceStateByIdx_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.RefreshForbidedTeammateInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::RefreshForbidedTeammateInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.RefreshForbidedTeammateInfo");

	UMainControlBaseUI_C_RefreshForbidedTeammateInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InitVoiceRelatedFx
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InitVoiceRelatedFx()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InitVoiceRelatedFx");

	UMainControlBaseUI_C_InitVoiceRelatedFx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.IsShowHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           showHit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::IsShowHit(bool* showHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.IsShowHit");

	UMainControlBaseUI_C_IsShowHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (showHit != nullptr)
		*showHit = params.showHit;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ForceEndConsumeItemUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ForceEndConsumeItemUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ForceEndConsumeItemUI");

	UMainControlBaseUI_C_ForceEndConsumeItemUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UIMSG_GameModeDisplayNameChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UIMSG_GameModeDisplayNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UIMSG_GameModeDisplayNameChanged");

	UMainControlBaseUI_C_UIMSG_GameModeDisplayNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ReceivedTranningFieldID
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ReceivedTranningFieldID()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ReceivedTranningFieldID");

	UMainControlBaseUI_C_ReceivedTranningFieldID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.NavigateJoystickTips
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::NavigateJoystickTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.NavigateJoystickTips");

	UMainControlBaseUI_C_NavigateJoystickTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideMoveAimTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainControlBaseUI_C::HideMoveAimTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideMoveAimTips");

	UMainControlBaseUI_C_HideMoveAimTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideHaveDeadBoxNearbyTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainControlBaseUI_C::HideHaveDeadBoxNearbyTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideHaveDeadBoxNearbyTips");

	UMainControlBaseUI_C_HideHaveDeadBoxNearbyTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideKillZoneCountDownTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainControlBaseUI_C::HideKillZoneCountDownTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideKillZoneCountDownTips");

	UMainControlBaseUI_C_HideKillZoneCountDownTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideKillZoneAndSafeZoneTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuideText_type NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainControlBaseUI_C::HideKillZoneAndSafeZoneTips(bool isShow, const struct FBP_STRUCT_GuideText_type& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideKillZoneAndSafeZoneTips");

	UMainControlBaseUI_C_HideKillZoneAndSafeZoneTips_Params params;
	params.isShow = isShow;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateTraining
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UpdateTraining()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateTraining");

	UMainControlBaseUI_C_UpdateTraining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideGameTipForLowFPSWarning
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::HideGameTipForLowFPSWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideGameTipForLowFPSWarning");

	UMainControlBaseUI_C_HideGameTipForLowFPSWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.DisplayLowFPSCountingDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::DisplayLowFPSCountingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.DisplayLowFPSCountingDown");

	UMainControlBaseUI_C_DisplayLowFPSCountingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.DisplayGameTipForLowFPSWarning
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::DisplayGameTipForLowFPSWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.DisplayGameTipForLowFPSWarning");

	UMainControlBaseUI_C_DisplayGameTipForLowFPSWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.Start Chat Bar anima
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CDTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::Start_Chat_Bar_anima(float CDTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.Start Chat Bar anima");

	UMainControlBaseUI_C_Start_Chat_Bar_anima_Params params;
	params.CDTime = CDTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.RemindOneMsg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 InString2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainControlBaseUI_C::RemindOneMsg(int inInt, const struct FString& inString, const struct FString& InString2)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.RemindOneMsg");

	UMainControlBaseUI_C_RemindOneMsg_Params params;
	params.inInt = inInt;
	params.inString = inString;
	params.InString2 = InString2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.RedrawBackpackUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::RedrawBackpackUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.RedrawBackpackUI");

	UMainControlBaseUI_C_RedrawBackpackUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideFreeCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::HideFreeCam(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideFreeCam");

	UMainControlBaseUI_C_HideFreeCam_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UIInGameEvent_HideQuickChatMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UIInGameEvent_HideQuickChatMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UIInGameEvent_HideQuickChatMenu");

	UMainControlBaseUI_C_UIInGameEvent_HideQuickChatMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideQuickChatMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::HideQuickChatMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideQuickChatMenu");

	UMainControlBaseUI_C_HideQuickChatMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.RemindQuickChatBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::RemindQuickChatBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.RemindQuickChatBtn");

	UMainControlBaseUI_C_RemindQuickChatBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ShowQuickChatMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ShowQuickChatMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ShowQuickChatMenu");

	UMainControlBaseUI_C_ShowQuickChatMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.RedrawInvalidationImage
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::RedrawInvalidationImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.RedrawInvalidationImage");

	UMainControlBaseUI_C_RedrawInvalidationImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideRoute
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::HideRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideRoute");

	UMainControlBaseUI_C_HideRoute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.MapUIDrawAirplaneRoute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::MapUIDrawAirplaneRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.MapUIDrawAirplaneRoute");

	UMainControlBaseUI_C_MapUIDrawAirplaneRoute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnGameJoyRecordingStart
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::OnGameJoyRecordingStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnGameJoyRecordingStart");

	UMainControlBaseUI_C_OnGameJoyRecordingStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.GetTargetAvatarCurDurability
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleItemAdditionalData> Arrary                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            CurDurability                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::GetTargetAvatarCurDurability(TArray<struct FBattleItemAdditionalData>* Arrary, int* CurDurability)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.GetTargetAvatarCurDurability");

	UMainControlBaseUI_C_GetTargetAvatarCurDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arrary != nullptr)
		*Arrary = params.Arrary;
	if (CurDurability != nullptr)
		*CurDurability = params.CurDurability;
}


// Function MainControlBaseUI.MainControlBaseUI_C.GetTargetAvatarBySpecificID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandle_AvatarBP_C* TargetAvatar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::GetTargetAvatarBySpecificID(int Key, class UBattleItemHandle_AvatarBP_C** TargetAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.GetTargetAvatarBySpecificID");

	UMainControlBaseUI_C_GetTargetAvatarBySpecificID_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetAvatar != nullptr)
		*TargetAvatar = params.TargetAvatar;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateEquipmentDurability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurHP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ratioHP                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::UpdateEquipmentDurability(float CurHP, float ratioHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateEquipmentDurability");

	UMainControlBaseUI_C_UpdateEquipmentDurability_Params params;
	params.CurHP = CurHP;
	params.ratioHP = ratioHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateHelmetAndArmorLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackComponent*      BackpackComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::UpdateHelmetAndArmorLevel(class UBackpackComponent* BackpackComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateHelmetAndArmorLevel");

	UMainControlBaseUI_C_UpdateHelmetAndArmorLevel_Params params;
	params.BackpackComponent = BackpackComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateBagLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackComponent*      BackpackComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::UpdateBagLevel(class UBackpackComponent* BackpackComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateBagLevel");

	UMainControlBaseUI_C_UpdateBagLevel_Params params;
	params.BackpackComponent = BackpackComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.GetEquipItemDataTableRowMap
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<int, struct FBP_STRUCT_Item_type> DataMap                        (Parm, OutParm, ZeroConstructor)

void UMainControlBaseUI_C::GetEquipItemDataTableRowMap(TMap<int, struct FBP_STRUCT_Item_type>* DataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.GetEquipItemDataTableRowMap");

	UMainControlBaseUI_C_GetEquipItemDataTableRowMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataMap != nullptr)
		*DataMap = params.DataMap;
}


// Function MainControlBaseUI.MainControlBaseUI_C.DisplayGameTipWithMsgIDAndParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::DisplayGameTipWithMsgIDAndParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.DisplayGameTipWithMsgIDAndParam");

	UMainControlBaseUI_C_DisplayGameTipWithMsgIDAndParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateInspectatTargetHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UpdateInspectatTargetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateInspectatTargetHealth");

	UMainControlBaseUI_C_UpdateInspectatTargetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ongamemodestatechanged
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ongamemodestatechanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ongamemodestatechanged");

	UMainControlBaseUI_C_ongamemodestatechanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HandleDetailDisplayKillOrPutDownMessageNew
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUTRichTextBlock*        TextBox                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKillOrPutDownMessage   MsgData                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainControlBaseUI_C::HandleDetailDisplayKillOrPutDownMessageNew(class UUTRichTextBlock* TextBox, const struct FKillOrPutDownMessage& MsgData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HandleDetailDisplayKillOrPutDownMessageNew");

	UMainControlBaseUI_C_HandleDetailDisplayKillOrPutDownMessageNew_Params params;
	params.TextBox = TextBox;
	params.MsgData = MsgData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InitVoiceStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InitVoiceStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InitVoiceStatus");

	UMainControlBaseUI_C_InitVoiceStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.Reconnect_ResetUIByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.Reconnect_ResetUIByPlayerControllerState");

	UMainControlBaseUI_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ShowFlyingInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::ShowFlyingInfo(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ShowFlyingInfo");

	UMainControlBaseUI_C_ShowFlyingInfo_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.RefreshFlyNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::RefreshFlyNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.RefreshFlyNum");

	UMainControlBaseUI_C_RefreshFlyNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateSignalByPing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UpdateSignalByPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateSignalByPing");

	UMainControlBaseUI_C_UpdateSignalByPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateBatteryLevelAndSignal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::UpdateBatteryLevelAndSignal(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateBatteryLevelAndSignal");

	UMainControlBaseUI_C_UpdateBatteryLevelAndSignal_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UseItemCDbar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CdValue_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::UseItemCDbar(float CdValue_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UseItemCDbar");

	UMainControlBaseUI_C_UseItemCDbar_Params params;
	params.CdValue_ = CdValue_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateItemUsingProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UpdateItemUsingProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateItemUsingProgress");

	UMainControlBaseUI_C_UpdateItemUsingProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.AlivePlayerNumForMainUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::AlivePlayerNumForMainUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.AlivePlayerNumForMainUI");

	UMainControlBaseUI_C_AlivePlayerNumForMainUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.MessageBoxBackToLobby
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::MessageBoxBackToLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.MessageBoxBackToLobby");

	UMainControlBaseUI_C_MessageBoxBackToLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.MessageBoxCencel
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::MessageBoxCencel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.MessageBoxCencel");

	UMainControlBaseUI_C_MessageBoxCencel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.onplayercontrollerstatechanged
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::onplayercontrollerstatechanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.onplayercontrollerstatechanged");

	UMainControlBaseUI_C_onplayercontrollerstatechanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.On_Image_SettingConsoleBtn_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainControlBaseUI_C::On_Image_SettingConsoleBtn_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.On_Image_SettingConsoleBtn_MouseButtonDown_1");

	UMainControlBaseUI_C_On_Image_SettingConsoleBtn_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MainControlBaseUI.MainControlBaseUI_C.DisplayGameTipWithMsgID
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::DisplayGameTipWithMsgID()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.DisplayGameTipWithMsgID");

	UMainControlBaseUI_C_DisplayGameTipWithMsgID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.DisplayAirAttackTip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::DisplayAirAttackTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.DisplayAirAttackTip");

	UMainControlBaseUI_C_DisplayAirAttackTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.DidplayCircleTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Msg                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainControlBaseUI_C::DidplayCircleTip(const struct FText& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.DidplayCircleTip");

	UMainControlBaseUI_C_DidplayCircleTip_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateSignal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::UpdateSignal(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateSignal");

	UMainControlBaseUI_C_UpdateSignal_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.EnterFightingSetUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::EnterFightingSetUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.EnterFightingSetUI");

	UMainControlBaseUI_C_EnterFightingSetUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.EnterJumpingSetUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::EnterJumpingSetUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.EnterJumpingSetUI");

	UMainControlBaseUI_C_EnterJumpingSetUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.DisplayKillOrPutDownMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::DisplayKillOrPutDownMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.DisplayKillOrPutDownMessage");

	UMainControlBaseUI_C_DisplayKillOrPutDownMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.AddNewFatalDamageInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::AddNewFatalDamageInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.AddNewFatalDamageInfo");

	UMainControlBaseUI_C_AddNewFatalDamageInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.GetFatalDamageWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKillInfoItem_BP_C*      KillInfoItem_BP                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::GetFatalDamageWidget(class UKillInfoItem_BP_C** KillInfoItem_BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.GetFatalDamageWidget");

	UMainControlBaseUI_C_GetFatalDamageWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KillInfoItem_BP != nullptr)
		*KillInfoItem_BP = params.KillInfoItem_BP;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BackPackCDBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CD                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::BackPackCDBar(float CD)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BackPackCDBar");

	UMainControlBaseUI_C_BackPackCDBar_Params params;
	params.CD = CD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.Parachuting_HeightBarMoveBack
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::Parachuting_HeightBarMoveBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.Parachuting_HeightBarMoveBack");

	UMainControlBaseUI_C_Parachuting_HeightBarMoveBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.Parachuting_HeightBarMoveLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::Parachuting_HeightBarMoveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.Parachuting_HeightBarMoveLeft");

	UMainControlBaseUI_C_Parachuting_HeightBarMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ShowCountDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::ShowCountDown(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ShowCountDown");

	UMainControlBaseUI_C_ShowCountDown_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InitPlayerState
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InitPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InitPlayerState");

	UMainControlBaseUI_C_InitPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.SetAutoSprintUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutoSprint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::SetAutoSprintUI(bool AutoSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.SetAutoSprintUI");

	UMainControlBaseUI_C_SetAutoSprintUI_Params params;
	params.AutoSprint = AutoSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdatePickupList
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UpdatePickupList()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdatePickupList");

	UMainControlBaseUI_C_UpdatePickupList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateCommonBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECommonBtn>        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::UpdateCommonBtn(TEnumAsByte<ECommonBtn> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateCommonBtn");

	UMainControlBaseUI_C_UpdateCommonBtn_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.On_CommonBG_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainControlBaseUI_C::On_CommonBG_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.On_CommonBG_MouseButtonDown_1");

	UMainControlBaseUI_C_On_CommonBG_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MainControlBaseUI.MainControlBaseUI_C.RedrawMinimapAndSettingUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::RedrawMinimapAndSettingUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.RedrawMinimapAndSettingUI");

	UMainControlBaseUI_C_RedrawMinimapAndSettingUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.SetRenderTransformIfValid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPanelWidget*            GridPanel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::SetRenderTransformIfValid(const struct FVector2D& Position, class UPanelWidget* GridPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.SetRenderTransformIfValid");

	UMainControlBaseUI_C_SetRenderTransformIfValid_Params params;
	params.Position = Position;
	params.GridPanel = GridPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ApplyCustomUIPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDragableBtnPositionDataStruct> CustomUI                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainControlBaseUI_C::ApplyCustomUIPosition(TArray<struct FDragableBtnPositionDataStruct>* CustomUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ApplyCustomUIPosition");

	UMainControlBaseUI_C_ApplyCustomUIPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomUI != nullptr)
		*CustomUI = params.CustomUI;
}


// Function MainControlBaseUI.MainControlBaseUI_C.On_EntireMapTrigger_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainControlBaseUI_C::On_EntireMapTrigger_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.On_EntireMapTrigger_MouseButtonDown_1");

	UMainControlBaseUI_C_On_EntireMapTrigger_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InitJoinGameUIVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InitJoinGameUIVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InitJoinGameUIVisible");

	UMainControlBaseUI_C_InitJoinGameUIVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideJoinGameUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::HideJoinGameUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideJoinGameUI");

	UMainControlBaseUI_C_HideJoinGameUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateStartButtonVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UpdateStartButtonVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateStartButtonVisible");

	UMainControlBaseUI_C_UpdateStartButtonVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateJoinPlayerNum
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UpdateJoinPlayerNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateJoinPlayerNum");

	UMainControlBaseUI_C_UpdateJoinPlayerNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.GetMainControl
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::GetMainControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.GetMainControl");

	UMainControlBaseUI_C_GetMainControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.On_BackpackBtn_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainControlBaseUI_C::On_BackpackBtn_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.On_BackpackBtn_MouseButtonDown_1");

	UMainControlBaseUI_C_On_BackpackBtn_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MainControlBaseUI.MainControlBaseUI_C.On_GetOutCarBG_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainControlBaseUI_C::On_GetOutCarBG_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.On_GetOutCarBG_MouseButtonDown_1");

	UMainControlBaseUI_C_On_GetOutCarBG_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MainControlBaseUI.MainControlBaseUI_C.On_GetInCarBG_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainControlBaseUI_C::On_GetInCarBG_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.On_GetInCarBG_MouseButtonDown_1");

	UMainControlBaseUI_C_On_GetInCarBG_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnCircleBlueCircleRun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::OnCircleBlueCircleRun(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnCircleBlueCircleRun");

	UMainControlBaseUI_C_OnCircleBlueCircleRun_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnCircleBlueCirclePreWarning
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::OnCircleBlueCirclePreWarning(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnCircleBlueCirclePreWarning");

	UMainControlBaseUI_C_OnCircleBlueCirclePreWarning_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnCircleSafeZoneTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::OnCircleSafeZoneTips(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnCircleSafeZoneTips");

	UMainControlBaseUI_C_OnCircleSafeZoneTips_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InitCircleInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InitCircleInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InitCircleInfo");

	UMainControlBaseUI_C_InitCircleInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnKillTips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKilledTipsBlock        TipsBlock                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainControlBaseUI_C::OnKillTips(const struct FKilledTipsBlock& TipsBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnKillTips");

	UMainControlBaseUI_C_OnKillTips_Params params;
	params.TipsBlock = TipsBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.On_GMConsole_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainControlBaseUI_C::On_GMConsole_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.On_GMConsole_MouseButtonDown_1");

	UMainControlBaseUI_C_On_GMConsole_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UnInitDelegate
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UnInitDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UnInitDelegate");

	UMainControlBaseUI_C_UnInitDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InitDelegate
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InitDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InitDelegate");

	UMainControlBaseUI_C_InitDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InitPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InitPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InitPlayerInfo");

	UMainControlBaseUI_C_InitPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UpdateMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateMarker");

	UMainControlBaseUI_C_UpdateMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnClickMapMarker
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::OnClickMapMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnClickMapMarker");

	UMainControlBaseUI_C_OnClickMapMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InitMap
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InitMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InitMap");

	UMainControlBaseUI_C_InitMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnReceiveAirAttackBroadcast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAirAttackInfo>    airattacktype                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            waveindex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::OnReceiveAirAttackBroadcast(TEnumAsByte<EAirAttackInfo> airattacktype, int waveindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnReceiveAirAttackBroadcast");

	UMainControlBaseUI_C_OnReceiveAirAttackBroadcast_Params params;
	params.airattacktype = airattacktype;
	params.waveindex = waveindex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HnadleReceivePlayerState
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::HnadleReceivePlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HnadleReceivePlayerState");

	UMainControlBaseUI_C_HnadleReceivePlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.StartAutoSprintCountDown
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::StartAutoSprintCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.StartAutoSprintCountDown");

	UMainControlBaseUI_C_StartAutoSprintCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.InterruptAutoSprintCountDown
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::InterruptAutoSprintCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.InterruptAutoSprintCountDown");

	UMainControlBaseUI_C_InterruptAutoSprintCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.AutoSprintActive
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::AutoSprintActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.AutoSprintActive");

	UMainControlBaseUI_C_AutoSprintActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UMainControlBaseUI_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ReceivedInitWidget");

	UMainControlBaseUI_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainControlBaseUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.Construct");

	UMainControlBaseUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ReUpdateJoinPlayer
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ReUpdateJoinPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ReUpdateJoinPlayer");

	UMainControlBaseUI_C_ReUpdateJoinPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnPlayerNumChange
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::OnPlayerNumChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnPlayerNumChange");

	UMainControlBaseUI_C_OnPlayerNumChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnTakeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageAngel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::OnTakeDamage(float DamageAngel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnTakeDamage");

	UMainControlBaseUI_C_OnTakeDamage_Params params;
	params.DamageAngel = DamageAngel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.GameStartCountDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CountDownTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::GameStartCountDown(float CountDownTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.GameStartCountDown");

	UMainControlBaseUI_C_GameStartCountDown_Params params;
	params.CountDownTime = CountDownTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HideParachuteUI
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::HideParachuteUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HideParachuteUI");

	UMainControlBaseUI_C_HideParachuteUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BindBackpackUpdate
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::BindBackpackUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BindBackpackUpdate");

	UMainControlBaseUI_C_BindBackpackUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateBackPackCapacity
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UpdateBackPackCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateBackPackCapacity");

	UMainControlBaseUI_C_UpdateBackPackCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UpdateFatalDamageUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::UpdateFatalDamageUI(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UpdateFatalDamageUI");

	UMainControlBaseUI_C_UpdateFatalDamageUI_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.AddOneNewItem
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::AddOneNewItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.AddOneNewItem");

	UMainControlBaseUI_C_AddOneNewItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ClearCurFatalDamagetWidget
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ClearCurFatalDamagetWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ClearCurFatalDamagetWidget");

	UMainControlBaseUI_C_ClearCurFatalDamagetWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.EnterJumping
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::EnterJumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.EnterJumping");

	UMainControlBaseUI_C_EnterJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.SprintAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::SprintAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.SprintAnimFinished");

	UMainControlBaseUI_C_SprintAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShowPrompt                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LastTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PromptText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TotalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::CustomEvent_1(bool IsShowPrompt, float LastTime, const struct FString& PromptText, float TotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.CustomEvent_1");

	UMainControlBaseUI_C_CustomEvent_1_Params params;
	params.IsShowPrompt = IsShowPrompt;
	params.LastTime = LastTime;
	params.PromptText = PromptText;
	params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_21_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_21_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_21_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_21_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_ReportBug_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_ReportBug_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_ReportBug_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_ReportBug_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.SetCustomizeUIInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::SetCustomizeUIInfo(class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.SetCustomizeUIInfo");

	UMainControlBaseUI_C_SetCustomizeUIInfo_Params params;
	params.SaveGame = SaveGame;
	params.LayoutIndex = LayoutIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.HandleItemListUpdate
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::HandleItemListUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.HandleItemListUpdate");

	UMainControlBaseUI_C_HandleItemListUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ForceUpdateHelmetAndArmorState
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ForceUpdateHelmetAndArmorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ForceUpdateHelmetAndArmorState");

	UMainControlBaseUI_C_ForceUpdateHelmetAndArmorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnBindEventToBackpackComponent
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::OnBindEventToBackpackComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnBindEventToBackpackComponent");

	UMainControlBaseUI_C_OnBindEventToBackpackComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.OnDamageToOther
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          damageToOther                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::OnDamageToOther(float damageToOther)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.OnDamageToOther");

	UMainControlBaseUI_C_OnDamageToOther_Params params;
	params.damageToOther = damageToOther;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__EntireMapTrigger_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__EntireMapTrigger_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__EntireMapTrigger_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__EntireMapTrigger_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_B_Sigh_yellow_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_B_Sigh_yellow_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_B_Sigh_yellow_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_B_Sigh_yellow_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_Border_close_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_Border_close_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_Border_close_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_Border_close_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ShowCircleInfoTips
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ShowCircleInfoTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ShowCircleInfoTips");

	UMainControlBaseUI_C_ShowCircleInfoTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ItemUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainControlBaseUI_C::ItemUpdated(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ItemUpdated");

	UMainControlBaseUI_C_ItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.DisplayNextTips
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::DisplayNextTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.DisplayNextTips");

	UMainControlBaseUI_C_DisplayNextTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.DelayHideChatCD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CDTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::DelayHideChatCD(float CDTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.DelayHideChatCD");

	UMainControlBaseUI_C_DelayHideChatCD_Params params;
	params.CDTime = CDTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_tipsRefuse_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_tipsRefuse_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_tipsRefuse_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_tipsRefuse_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_tipsDetermine_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_tipsDetermine_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_tipsDetermine_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_tipsDetermine_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ForceEndConsumeItemUIEvent
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ForceEndConsumeItemUIEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ForceEndConsumeItemUIEvent");

	UMainControlBaseUI_C_ForceEndConsumeItemUIEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_speakerAll_K2Node_ComponentBoundEvent_1349_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__button_speakerAll_K2Node_ComponentBoundEvent_1349_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_speakerAll_K2Node_ComponentBoundEvent_1349_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__button_speakerAll_K2Node_ComponentBoundEvent_1349_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_Voice_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_Voice_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_Voice_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_Voice_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_Microphone_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_Microphone_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_Microphone_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_Microphone_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainControlBaseUI_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.Destruct");

	UMainControlBaseUI_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_speakerteamonly_K2Node_ComponentBoundEvent_1402_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__button_speakerteamonly_K2Node_ComponentBoundEvent_1402_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_speakerteamonly_K2Node_ComponentBoundEvent_1402_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__button_speakerteamonly_K2Node_ComponentBoundEvent_1402_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_speakerclose_K2Node_ComponentBoundEvent_1431_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__button_speakerclose_K2Node_ComponentBoundEvent_1431_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_speakerclose_K2Node_ComponentBoundEvent_1431_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__button_speakerclose_K2Node_ComponentBoundEvent_1431_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_micphoneallchannel_K2Node_ComponentBoundEvent_1576_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__button_micphoneallchannel_K2Node_ComponentBoundEvent_1576_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_micphoneallchannel_K2Node_ComponentBoundEvent_1576_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__button_micphoneallchannel_K2Node_ComponentBoundEvent_1576_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_micphoneteamonly_K2Node_ComponentBoundEvent_1593_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__button_micphoneteamonly_K2Node_ComponentBoundEvent_1593_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_micphoneteamonly_K2Node_ComponentBoundEvent_1593_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__button_micphoneteamonly_K2Node_ComponentBoundEvent_1593_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_micphoneclose_K2Node_ComponentBoundEvent_1625_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__button_micphoneclose_K2Node_ComponentBoundEvent_1625_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_micphoneclose_K2Node_ComponentBoundEvent_1625_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__button_micphoneclose_K2Node_ComponentBoundEvent_1625_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice1_K2Node_ComponentBoundEvent_806_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__btn_forbidteamvoice1_K2Node_ComponentBoundEvent_806_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice1_K2Node_ComponentBoundEvent_806_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__btn_forbidteamvoice1_K2Node_ComponentBoundEvent_806_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice2_K2Node_ComponentBoundEvent_823_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__btn_forbidteamvoice2_K2Node_ComponentBoundEvent_823_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice2_K2Node_ComponentBoundEvent_823_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__btn_forbidteamvoice2_K2Node_ComponentBoundEvent_823_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice3_K2Node_ComponentBoundEvent_858_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__btn_forbidteamvoice3_K2Node_ComponentBoundEvent_858_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice3_K2Node_ComponentBoundEvent_858_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__btn_forbidteamvoice3_K2Node_ComponentBoundEvent_858_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice4_K2Node_ComponentBoundEvent_359_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__btn_forbidteamvoice4_K2Node_ComponentBoundEvent_359_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice4_K2Node_ComponentBoundEvent_359_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__btn_forbidteamvoice4_K2Node_ComponentBoundEvent_359_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.O_1
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::O_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.O_1");

	UMainControlBaseUI_C_O_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_ExitTraining_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainControlBaseUI_C::BndEvt__Button_ExitTraining_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_ExitTraining_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature");

	UMainControlBaseUI_C_BndEvt__Button_ExitTraining_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.EnterFlying
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::EnterFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.EnterFlying");

	UMainControlBaseUI_C_EnterFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ResetUIStateAfterRespawn
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ResetUIStateAfterRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ResetUIStateAfterRespawn");

	UMainControlBaseUI_C_ResetUIStateAfterRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ShowFeedBackInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InfoText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainControlBaseUI_C::ShowFeedBackInfo(const struct FText& InfoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ShowFeedBackInfo");

	UMainControlBaseUI_C_ShowFeedBackInfo_Params params;
	params.InfoText = InfoText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ShowFeedBackInfoFinished
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::ShowFeedBackInfoFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ShowFeedBackInfoFinished");

	UMainControlBaseUI_C_ShowFeedBackInfoFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_FragGrenadeNotFound
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UIMsg_FragGrenadeNotFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_FragGrenadeNotFound");

	UMainControlBaseUI_C_UIMsg_FragGrenadeNotFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_SturnNotFound
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UIMsg_SturnNotFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_SturnNotFound");

	UMainControlBaseUI_C_UIMsg_SturnNotFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_SmokeNotFound
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UIMsg_SmokeNotFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_SmokeNotFound");

	UMainControlBaseUI_C_UIMsg_SmokeNotFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_MolotovNotFound
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UIMsg_MolotovNotFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_MolotovNotFound");

	UMainControlBaseUI_C_UIMsg_MolotovNotFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.Tick");

	UMainControlBaseUI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.SetSettingControlUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::SetSettingControlUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.SetSettingControlUI");

	UMainControlBaseUI_C_SetSettingControlUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.FailUseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsCompleteMsg                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::FailUseItem(const struct FText& Name, bool IsCompleteMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.FailUseItem");

	UMainControlBaseUI_C_FailUseItem_Params params;
	params.Name = Name;
	params.IsCompleteMsg = IsCompleteMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_ToggleFireMode
// (BlueprintCallable, BlueprintEvent)

void UMainControlBaseUI_C::UIMsg_ToggleFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_ToggleFireMode");

	UMainControlBaseUI_C_UIMsg_ToggleFireMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ExecuteUbergraph_MainControlBaseUI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::ExecuteUbergraph_MainControlBaseUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ExecuteUbergraph_MainControlBaseUI");

	UMainControlBaseUI_C_ExecuteUbergraph_MainControlBaseUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ED_CommonBtn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  commontype                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::ED_CommonBtn__DelegateSignature(unsigned char commontype)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ED_CommonBtn__DelegateSignature");

	UMainControlBaseUI_C_ED_CommonBtn__DelegateSignature_Params params;
	params.commontype = commontype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ED_DriveCar__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::ED_DriveCar__DelegateSignature(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ED_DriveCar__DelegateSignature");

	UMainControlBaseUI_C_ED_DriveCar__DelegateSignature_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainControlBaseUI.MainControlBaseUI_C.ED_EnterExitCar__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsIn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainControlBaseUI_C::ED_EnterExitCar__DelegateSignature(bool IsIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainControlBaseUI.MainControlBaseUI_C.ED_EnterExitCar__DelegateSignature");

	UMainControlBaseUI_C_ED_EnterExitCar__DelegateSignature_Params params;
	params.IsIn = IsIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
