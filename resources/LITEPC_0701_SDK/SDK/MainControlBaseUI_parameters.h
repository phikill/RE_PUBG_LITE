#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MainControlBaseUI.MainControlBaseUI_C.IsCustomUIDataValid
struct UMainControlBaseUI_C_IsCustomUIDataValid_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveDataSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_ToggleExtendedMinimap
struct UMainControlBaseUI_C_UIMsg_ToggleExtendedMinimap_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.MapUIHideAirplaneRoute
struct UMainControlBaseUI_C_MapUIHideAirplaneRoute_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideAirplane
struct UMainControlBaseUI_C_HideAirplane_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ShowAirplane
struct UMainControlBaseUI_C_ShowAirplane_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.SetSpectatingUI
struct UMainControlBaseUI_C_SetSpectatingUI_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.RemindOnMsgText
struct UMainControlBaseUI_C_RemindOnMsgText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.SetAlphaArmorIcon
struct UMainControlBaseUI_C_SetAlphaArmorIcon_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsAlpha;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ResultBrush;                                              // (Parm, OutParm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideChasingBar
struct UMainControlBaseUI_C_HideChasingBar_Params
{
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideAllMicFx
struct UMainControlBaseUI_C_HideAllMicFx_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_EnterTrainingMode
struct UMainControlBaseUI_C_UIMsg_EnterTrainingMode_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.GetKillInfoPanel
struct UMainControlBaseUI_C_GetKillInfoPanel_Params
{
	class UKillInfoItem_BP_C*                          Output_Get;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.InitKillInfoPanel
struct UMainControlBaseUI_C_InitKillInfoPanel_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.RefreshWhenEnterTeamRoom
struct UMainControlBaseUI_C_RefreshWhenEnterTeamRoom_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.SetForbidInfoToPlayerController
struct UMainControlBaseUI_C_SetForbidInfoToPlayerController_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.InitMemberVoiceList
struct UMainControlBaseUI_C_InitMemberVoiceList_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideMicphoneFx
struct UMainControlBaseUI_C_HideMicphoneFx_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.GetDayTimeStr
struct UMainControlBaseUI_C_GetDayTimeStr_Params
{
	int                                                curDay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.RefreshVoiceSpecialImage
struct UMainControlBaseUI_C_RefreshVoiceSpecialImage_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateVoiceCheckByGameState
struct UMainControlBaseUI_C_UpdateVoiceCheckByGameState_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.SwitchMemberVoiceStateByIdx
struct UMainControlBaseUI_C_SwitchMemberVoiceStateByIdx_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.RefreshForbidedTeammateInfo
struct UMainControlBaseUI_C_RefreshForbidedTeammateInfo_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.InitVoiceRelatedFx
struct UMainControlBaseUI_C_InitVoiceRelatedFx_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.IsShowHit
struct UMainControlBaseUI_C_IsShowHit_Params
{
	bool                                               showHit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.ForceEndConsumeItemUI
struct UMainControlBaseUI_C_ForceEndConsumeItemUI_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UIMSG_GameModeDisplayNameChanged
struct UMainControlBaseUI_C_UIMSG_GameModeDisplayNameChanged_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ReceivedTranningFieldID
struct UMainControlBaseUI_C_ReceivedTranningFieldID_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.NavigateJoystickTips
struct UMainControlBaseUI_C_NavigateJoystickTips_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideMoveAimTips
struct UMainControlBaseUI_C_HideMoveAimTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideHaveDeadBoxNearbyTips
struct UMainControlBaseUI_C_HideHaveDeadBoxNearbyTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideKillZoneCountDownTips
struct UMainControlBaseUI_C_HideKillZoneCountDownTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideKillZoneAndSafeZoneTips
struct UMainControlBaseUI_C_HideKillZoneAndSafeZoneTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateTraining
struct UMainControlBaseUI_C_UpdateTraining_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideGameTipForLowFPSWarning
struct UMainControlBaseUI_C_HideGameTipForLowFPSWarning_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.DisplayLowFPSCountingDown
struct UMainControlBaseUI_C_DisplayLowFPSCountingDown_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.DisplayGameTipForLowFPSWarning
struct UMainControlBaseUI_C_DisplayGameTipForLowFPSWarning_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.Start Chat Bar anima
struct UMainControlBaseUI_C_Start_Chat_Bar_anima_Params
{
	float                                              CDTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.RemindOneMsg
struct UMainControlBaseUI_C_RemindOneMsg_Params
{
	int                                                inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InString2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainControlBaseUI.MainControlBaseUI_C.RedrawBackpackUI
struct UMainControlBaseUI_C_RedrawBackpackUI_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideFreeCam
struct UMainControlBaseUI_C_HideFreeCam_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UIInGameEvent_HideQuickChatMenu
struct UMainControlBaseUI_C_UIInGameEvent_HideQuickChatMenu_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideQuickChatMenu
struct UMainControlBaseUI_C_HideQuickChatMenu_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.RemindQuickChatBtn
struct UMainControlBaseUI_C_RemindQuickChatBtn_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ShowQuickChatMenu
struct UMainControlBaseUI_C_ShowQuickChatMenu_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.RedrawInvalidationImage
struct UMainControlBaseUI_C_RedrawInvalidationImage_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideRoute
struct UMainControlBaseUI_C_HideRoute_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.MapUIDrawAirplaneRoute
struct UMainControlBaseUI_C_MapUIDrawAirplaneRoute_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnGameJoyRecordingStart
struct UMainControlBaseUI_C_OnGameJoyRecordingStart_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.GetTargetAvatarCurDurability
struct UMainControlBaseUI_C_GetTargetAvatarCurDurability_Params
{
	TArray<struct FBattleItemAdditionalData>           Arrary;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                CurDurability;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.GetTargetAvatarBySpecificID
struct UMainControlBaseUI_C_GetTargetAvatarBySpecificID_Params
{
	int                                                Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandle_AvatarBP_C*                TargetAvatar;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateEquipmentDurability
struct UMainControlBaseUI_C_UpdateEquipmentDurability_Params
{
	float                                              CurHP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ratioHP;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateHelmetAndArmorLevel
struct UMainControlBaseUI_C_UpdateHelmetAndArmorLevel_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateBagLevel
struct UMainControlBaseUI_C_UpdateBagLevel_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.GetEquipItemDataTableRowMap
struct UMainControlBaseUI_C_GetEquipItemDataTableRowMap_Params
{
	TMap<int, struct FBP_STRUCT_Item_type>             DataMap;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function MainControlBaseUI.MainControlBaseUI_C.DisplayGameTipWithMsgIDAndParam
struct UMainControlBaseUI_C_DisplayGameTipWithMsgIDAndParam_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateInspectatTargetHealth
struct UMainControlBaseUI_C_UpdateInspectatTargetHealth_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ongamemodestatechanged
struct UMainControlBaseUI_C_ongamemodestatechanged_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.HandleDetailDisplayKillOrPutDownMessageNew
struct UMainControlBaseUI_C_HandleDetailDisplayKillOrPutDownMessageNew_Params
{
	class UUTRichTextBlock*                            TextBox;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKillOrPutDownMessage                       MsgData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.InitVoiceStatus
struct UMainControlBaseUI_C_InitVoiceStatus_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.Reconnect_ResetUIByPlayerControllerState
struct UMainControlBaseUI_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ShowFlyingInfo
struct UMainControlBaseUI_C_ShowFlyingInfo_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.RefreshFlyNum
struct UMainControlBaseUI_C_RefreshFlyNum_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateSignalByPing
struct UMainControlBaseUI_C_UpdateSignalByPing_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateBatteryLevelAndSignal
struct UMainControlBaseUI_C_UpdateBatteryLevelAndSignal_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UseItemCDbar
struct UMainControlBaseUI_C_UseItemCDbar_Params
{
	float                                              CdValue_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateItemUsingProgress
struct UMainControlBaseUI_C_UpdateItemUsingProgress_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.AlivePlayerNumForMainUI
struct UMainControlBaseUI_C_AlivePlayerNumForMainUI_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.MessageBoxBackToLobby
struct UMainControlBaseUI_C_MessageBoxBackToLobby_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.MessageBoxCencel
struct UMainControlBaseUI_C_MessageBoxCencel_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.onplayercontrollerstatechanged
struct UMainControlBaseUI_C_onplayercontrollerstatechanged_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.On_Image_SettingConsoleBtn_MouseButtonDown_1
struct UMainControlBaseUI_C_On_Image_SettingConsoleBtn_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.DisplayGameTipWithMsgID
struct UMainControlBaseUI_C_DisplayGameTipWithMsgID_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.DisplayAirAttackTip
struct UMainControlBaseUI_C_DisplayAirAttackTip_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.DidplayCircleTip
struct UMainControlBaseUI_C_DidplayCircleTip_Params
{
	struct FText                                       Msg;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateSignal
struct UMainControlBaseUI_C_UpdateSignal_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.EnterFightingSetUI
struct UMainControlBaseUI_C_EnterFightingSetUI_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.EnterJumpingSetUI
struct UMainControlBaseUI_C_EnterJumpingSetUI_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.DisplayKillOrPutDownMessage
struct UMainControlBaseUI_C_DisplayKillOrPutDownMessage_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.AddNewFatalDamageInfo
struct UMainControlBaseUI_C_AddNewFatalDamageInfo_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.GetFatalDamageWidget
struct UMainControlBaseUI_C_GetFatalDamageWidget_Params
{
	class UKillInfoItem_BP_C*                          KillInfoItem_BP;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.BackPackCDBar
struct UMainControlBaseUI_C_BackPackCDBar_Params
{
	float                                              CD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.Parachuting_HeightBarMoveBack
struct UMainControlBaseUI_C_Parachuting_HeightBarMoveBack_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.Parachuting_HeightBarMoveLeft
struct UMainControlBaseUI_C_Parachuting_HeightBarMoveLeft_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ShowCountDown
struct UMainControlBaseUI_C_ShowCountDown_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.InitPlayerState
struct UMainControlBaseUI_C_InitPlayerState_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.SetAutoSprintUI
struct UMainControlBaseUI_C_SetAutoSprintUI_Params
{
	bool                                               AutoSprint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdatePickupList
struct UMainControlBaseUI_C_UpdatePickupList_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateCommonBtn
struct UMainControlBaseUI_C_UpdateCommonBtn_Params
{
	TEnumAsByte<ECommonBtn>                            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.On_CommonBG_MouseButtonDown_1
struct UMainControlBaseUI_C_On_CommonBG_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.RedrawMinimapAndSettingUI
struct UMainControlBaseUI_C_RedrawMinimapAndSettingUI_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.SetRenderTransformIfValid
struct UMainControlBaseUI_C_SetRenderTransformIfValid_Params
{
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UPanelWidget*                                GridPanel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.ApplyCustomUIPosition
struct UMainControlBaseUI_C_ApplyCustomUIPosition_Params
{
	TArray<struct FDragableBtnPositionDataStruct>      CustomUI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.On_EntireMapTrigger_MouseButtonDown_1
struct UMainControlBaseUI_C_On_EntireMapTrigger_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.InitJoinGameUIVisible
struct UMainControlBaseUI_C_InitJoinGameUIVisible_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideJoinGameUI
struct UMainControlBaseUI_C_HideJoinGameUI_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateStartButtonVisible
struct UMainControlBaseUI_C_UpdateStartButtonVisible_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateJoinPlayerNum
struct UMainControlBaseUI_C_UpdateJoinPlayerNum_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.GetMainControl
struct UMainControlBaseUI_C_GetMainControl_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.On_BackpackBtn_MouseButtonDown_1
struct UMainControlBaseUI_C_On_BackpackBtn_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.On_GetOutCarBG_MouseButtonDown_1
struct UMainControlBaseUI_C_On_GetOutCarBG_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.On_GetInCarBG_MouseButtonDown_1
struct UMainControlBaseUI_C_On_GetInCarBG_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnCircleBlueCircleRun
struct UMainControlBaseUI_C_OnCircleBlueCircleRun_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnCircleBlueCirclePreWarning
struct UMainControlBaseUI_C_OnCircleBlueCirclePreWarning_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnCircleSafeZoneTips
struct UMainControlBaseUI_C_OnCircleSafeZoneTips_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.InitCircleInfo
struct UMainControlBaseUI_C_InitCircleInfo_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnKillTips
struct UMainControlBaseUI_C_OnKillTips_Params
{
	struct FKilledTipsBlock                            TipsBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.On_GMConsole_MouseButtonDown_1
struct UMainControlBaseUI_C_On_GMConsole_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UnInitDelegate
struct UMainControlBaseUI_C_UnInitDelegate_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.InitDelegate
struct UMainControlBaseUI_C_InitDelegate_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.InitPlayerInfo
struct UMainControlBaseUI_C_InitPlayerInfo_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateMarker
struct UMainControlBaseUI_C_UpdateMarker_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnClickMapMarker
struct UMainControlBaseUI_C_OnClickMapMarker_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.InitMap
struct UMainControlBaseUI_C_InitMap_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnReceiveAirAttackBroadcast
struct UMainControlBaseUI_C_OnReceiveAirAttackBroadcast_Params
{
	TEnumAsByte<EAirAttackInfo>                        airattacktype;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                waveindex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.HnadleReceivePlayerState
struct UMainControlBaseUI_C_HnadleReceivePlayerState_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.StartAutoSprintCountDown
struct UMainControlBaseUI_C_StartAutoSprintCountDown_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.InterruptAutoSprintCountDown
struct UMainControlBaseUI_C_InterruptAutoSprintCountDown_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.AutoSprintActive
struct UMainControlBaseUI_C_AutoSprintActive_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ReceivedInitWidget
struct UMainControlBaseUI_C_ReceivedInitWidget_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.Construct
struct UMainControlBaseUI_C_Construct_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ReUpdateJoinPlayer
struct UMainControlBaseUI_C_ReUpdateJoinPlayer_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnPlayerNumChange
struct UMainControlBaseUI_C_OnPlayerNumChange_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnTakeDamage
struct UMainControlBaseUI_C_OnTakeDamage_Params
{
	float                                              DamageAngel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.GameStartCountDown
struct UMainControlBaseUI_C_GameStartCountDown_Params
{
	float                                              CountDownTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.HideParachuteUI
struct UMainControlBaseUI_C_HideParachuteUI_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BindBackpackUpdate
struct UMainControlBaseUI_C_BindBackpackUpdate_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateBackPackCapacity
struct UMainControlBaseUI_C_UpdateBackPackCapacity_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UpdateFatalDamageUI
struct UMainControlBaseUI_C_UpdateFatalDamageUI_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.AddOneNewItem
struct UMainControlBaseUI_C_AddOneNewItem_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ClearCurFatalDamagetWidget
struct UMainControlBaseUI_C_ClearCurFatalDamagetWidget_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.EnterJumping
struct UMainControlBaseUI_C_EnterJumping_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.SprintAnimFinished
struct UMainControlBaseUI_C_SprintAnimFinished_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.CustomEvent_1
struct UMainControlBaseUI_C_CustomEvent_1_Params
{
	bool                                               IsShowPrompt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PromptText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TotalTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_21_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_21_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_ReportBug_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_ReportBug_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.SetCustomizeUIInfo
struct UMainControlBaseUI_C_SetCustomizeUIInfo_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.HandleItemListUpdate
struct UMainControlBaseUI_C_HandleItemListUpdate_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ForceUpdateHelmetAndArmorState
struct UMainControlBaseUI_C_ForceUpdateHelmetAndArmorState_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnBindEventToBackpackComponent
struct UMainControlBaseUI_C_OnBindEventToBackpackComponent_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.OnDamageToOther
struct UMainControlBaseUI_C_OnDamageToOther_Params
{
	float                                              damageToOther;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__EntireMapTrigger_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__EntireMapTrigger_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_B_Sigh_yellow_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_B_Sigh_yellow_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_Border_close_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_Border_close_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ShowCircleInfoTips
struct UMainControlBaseUI_C_ShowCircleInfoTips_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ItemUpdated
struct UMainControlBaseUI_C_ItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.DisplayNextTips
struct UMainControlBaseUI_C_DisplayNextTips_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.DelayHideChatCD
struct UMainControlBaseUI_C_DelayHideChatCD_Params
{
	float                                              CDTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_tipsRefuse_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_tipsRefuse_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_tipsDetermine_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_tipsDetermine_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ForceEndConsumeItemUIEvent
struct UMainControlBaseUI_C_ForceEndConsumeItemUIEvent_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_speakerAll_K2Node_ComponentBoundEvent_1349_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__button_speakerAll_K2Node_ComponentBoundEvent_1349_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_Voice_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_Voice_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_Microphone_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_Microphone_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.Destruct
struct UMainControlBaseUI_C_Destruct_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_speakerteamonly_K2Node_ComponentBoundEvent_1402_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__button_speakerteamonly_K2Node_ComponentBoundEvent_1402_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_speakerclose_K2Node_ComponentBoundEvent_1431_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__button_speakerclose_K2Node_ComponentBoundEvent_1431_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_micphoneallchannel_K2Node_ComponentBoundEvent_1576_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__button_micphoneallchannel_K2Node_ComponentBoundEvent_1576_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_micphoneteamonly_K2Node_ComponentBoundEvent_1593_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__button_micphoneteamonly_K2Node_ComponentBoundEvent_1593_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__button_micphoneclose_K2Node_ComponentBoundEvent_1625_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__button_micphoneclose_K2Node_ComponentBoundEvent_1625_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice1_K2Node_ComponentBoundEvent_806_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__btn_forbidteamvoice1_K2Node_ComponentBoundEvent_806_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice2_K2Node_ComponentBoundEvent_823_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__btn_forbidteamvoice2_K2Node_ComponentBoundEvent_823_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice3_K2Node_ComponentBoundEvent_858_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__btn_forbidteamvoice3_K2Node_ComponentBoundEvent_858_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__btn_forbidteamvoice4_K2Node_ComponentBoundEvent_359_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__btn_forbidteamvoice4_K2Node_ComponentBoundEvent_359_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.O_1
struct UMainControlBaseUI_C_O_1_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.BndEvt__Button_ExitTraining_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
struct UMainControlBaseUI_C_BndEvt__Button_ExitTraining_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.EnterFlying
struct UMainControlBaseUI_C_EnterFlying_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ResetUIStateAfterRespawn
struct UMainControlBaseUI_C_ResetUIStateAfterRespawn_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ShowFeedBackInfo
struct UMainControlBaseUI_C_ShowFeedBackInfo_Params
{
	struct FText                                       InfoText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainControlBaseUI.MainControlBaseUI_C.ShowFeedBackInfoFinished
struct UMainControlBaseUI_C_ShowFeedBackInfoFinished_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_FragGrenadeNotFound
struct UMainControlBaseUI_C_UIMsg_FragGrenadeNotFound_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_SturnNotFound
struct UMainControlBaseUI_C_UIMsg_SturnNotFound_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_SmokeNotFound
struct UMainControlBaseUI_C_UIMsg_SmokeNotFound_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_MolotovNotFound
struct UMainControlBaseUI_C_UIMsg_MolotovNotFound_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.Tick
struct UMainControlBaseUI_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.SetSettingControlUI
struct UMainControlBaseUI_C_SetSettingControlUI_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.FailUseItem
struct UMainControlBaseUI_C_FailUseItem_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsCompleteMsg;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.UIMsg_ToggleFireMode
struct UMainControlBaseUI_C_UIMsg_ToggleFireMode_Params
{
};

// Function MainControlBaseUI.MainControlBaseUI_C.ExecuteUbergraph_MainControlBaseUI
struct UMainControlBaseUI_C_ExecuteUbergraph_MainControlBaseUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.ED_CommonBtn__DelegateSignature
struct UMainControlBaseUI_C_ED_CommonBtn__DelegateSignature_Params
{
	unsigned char                                      commontype;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.ED_DriveCar__DelegateSignature
struct UMainControlBaseUI_C_ED_DriveCar__DelegateSignature_Params
{
	int                                                Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlBaseUI.MainControlBaseUI_C.ED_EnterExitCar__DelegateSignature
struct UMainControlBaseUI_C_ED_EnterExitCar__DelegateSignature_Params
{
	bool                                               IsIn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
