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

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.IsCustomUIDataValid
struct UMainControlPanelTochButton_C_IsCustomUIDataValid_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveDataSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseEnergyDrinkItem
struct UMainControlPanelTochButton_C_UIMSG_UseEnergyDrinkItem_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UsePainkillertItem
struct UMainControlPanelTochButton_C_UIMSG_UsePainkillertItem_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseAdrenalineItem
struct UMainControlPanelTochButton_C_UIMSG_UseAdrenalineItem_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseHealItem
struct UMainControlPanelTochButton_C_UIMSG_UseHealItem_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UseItem
struct UMainControlPanelTochButton_C_UseItem_Params
{
	int                                                ItemDefineID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseBoostItem
struct UMainControlPanelTochButton_C_UIMSG_UseBoostItem_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseBandage
struct UMainControlPanelTochButton_C_UIMSG_UseBandage_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseFirstAid
struct UMainControlPanelTochButton_C_UIMSG_UseFirstAid_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_UseMedKit
struct UMainControlPanelTochButton_C_UIMSG_UseMedKit_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowHideKeyHintWidget
struct UMainControlPanelTochButton_C_UIMsg_ShowHideKeyHintWidget_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_MoveToSelfPosition
struct UMainControlPanelTochButton_C_UIMsg_MoveToSelfPosition_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetMarkerAtCurrentPosition
struct UMainControlPanelTochButton_C_UIMsg_SetMarkerAtCurrentPosition_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_DeleteMyMarker
struct UMainControlPanelTochButton_C_UIMsg_DeleteMyMarker_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ToggleUI
struct UMainControlPanelTochButton_C_UIMsg_ToggleUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetVoiceMute
struct UMainControlPanelTochButton_C_UIMsg_SetVoiceMute_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetMasterSoundMute
struct UMainControlPanelTochButton_C_UIMsg_SetMasterSoundMute_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetChangeVoiceChannel
struct UMainControlPanelTochButton_C_UIMsg_SetChangeVoiceChannel_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowTeamUI
struct UMainControlPanelTochButton_C_ShowTeamUI_Params
{
	int                                                TeamNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_RespawnSetUI
struct UMainControlPanelTochButton_C_UIMsg_RespawnSetUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.NotHideUIAfterDead
struct UMainControlPanelTochButton_C_NotHideUIAfterDead_Params
{
	bool                                               IsHide;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_WarModeRespawnShowUI
struct UMainControlPanelTochButton_C_UIMsg_WarModeRespawnShowUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.InitSpecialUI
struct UMainControlPanelTochButton_C_InitSpecialUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.LeaveSpectatingStatus
struct UMainControlPanelTochButton_C_LeaveSpectatingStatus_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchCameraModeScope_Aim
struct UMainControlPanelTochButton_C_SwitchCameraModeScope_Aim_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_TakeDamageUpdateEquipmentDurability
struct UMainControlPanelTochButton_C_UIMsg_TakeDamageUpdateEquipmentDurability_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_NormalAimBtn
struct UMainControlPanelTochButton_C_UIMSG_NormalAimBtn_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_HightLightAimBtn
struct UMainControlPanelTochButton_C_UIMSG_HightLightAimBtn_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NormalRightFire
struct UMainControlPanelTochButton_C_UIMsg_NormalRightFire_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NormalLeftFire
struct UMainControlPanelTochButton_C_UIMsg_NormalLeftFire_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.FingWidget
struct UMainControlPanelTochButton_C_FingWidget_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     foundW;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_GuideByStep
struct UMainControlPanelTochButton_C_UIMsg_GuideByStep_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_HideOBAirDropBox
struct UMainControlPanelTochButton_C_UIMsg_HideOBAirDropBox_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowOBAirDropBox
struct UMainControlPanelTochButton_C_UIMsg_ShowOBAirDropBox_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_EnterTrainingMode
struct UMainControlPanelTochButton_C_UIMsg_EnterTrainingMode_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_FPPModeChange
struct UMainControlPanelTochButton_C_UIMsg_FPPModeChange_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_InitUIGuide
struct UMainControlPanelTochButton_C_UIMsg_InitUIGuide_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowBattleUI
struct UMainControlPanelTochButton_C_ShowBattleUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetGuideFromGuideComponent
struct UMainControlPanelTochButton_C_UIMsg_SetGuideFromGuideComponent_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleStopPlayerAutoSprint
struct UMainControlPanelTochButton_C_UIMsg_VehicleStopPlayerAutoSprint_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehiclePanelHide
struct UMainControlPanelTochButton_C_UIMsg_VehiclePanelHide_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleSeatChanged
struct UMainControlPanelTochButton_C_UIMsg_VehicleSeatChanged_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleInputAxisMoveRight
struct UMainControlPanelTochButton_C_UIMsg_VehicleInputAxisMoveRight_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleUpdateSpped
struct UMainControlPanelTochButton_C_UIMsg_VehicleUpdateSpped_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleUpdateSeatUI
struct UMainControlPanelTochButton_C_UIMsg_VehicleUpdateSeatUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleMotorcycleContactChanged
struct UMainControlPanelTochButton_C_UIMsg_VehicleMotorcycleContactChanged_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleWheelsHPChanged
struct UMainControlPanelTochButton_C_UIMsg_VehicleWheelsHPChanged_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleFuelChanged
struct UMainControlPanelTochButton_C_UIMsg_VehicleFuelChanged_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_VehicleHPChanged
struct UMainControlPanelTochButton_C_UIMsg_VehicleHPChanged_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_AddOneMsgtoUIInner
struct UMainControlPanelTochButton_C_UIMsg_AddOneMsgtoUIInner_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NotifyFriendReply
struct UMainControlPanelTochButton_C_UIMsg_NotifyFriendReply_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NotifyFriendInvite
struct UMainControlPanelTochButton_C_UIMsg_NotifyFriendInvite_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_AddFriendChat
struct UMainControlPanelTochButton_C_UIMsg_AddFriendChat_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_CloseChatHistoryList
struct UMainControlPanelTochButton_C_UIMsg_CloseChatHistoryList_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_UpdateStandCrouchAndSprint
struct UMainControlPanelTochButton_C_UIMsg_UpdateStandCrouchAndSprint_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_MakeFireModeEffect
struct UMainControlPanelTochButton_C_UIMsg_MakeFireModeEffect_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SetAutoNavigateTranslation
struct UMainControlPanelTochButton_C_UIMsg_SetAutoNavigateTranslation_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideSelf
struct UMainControlPanelTochButton_C_HideSelf_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_NotifyPickup
struct UMainControlPanelTochButton_C_UIMsg_NotifyPickup_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_UpdatePickUpList
struct UMainControlPanelTochButton_C_UIMsg_UpdatePickUpList_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SwitchAimMode
struct UMainControlPanelTochButton_C_UIMsg_SwitchAimMode_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_DisableAimIfUnEquipWeapon
struct UMainControlPanelTochButton_C_UIMsg_DisableAimIfUnEquipWeapon_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_BindOrUnBindJoyStickSprint
struct UMainControlPanelTochButton_C_UIMsg_BindOrUnBindJoyStickSprint_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowBackpackTombBox
struct UMainControlPanelTochButton_C_UIMsg_ShowBackpackTombBox_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ShowAutoSprintIcon
struct UMainControlPanelTochButton_C_UIMsg_ShowAutoSprintIcon_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_WeaponEquipAttachment
struct UMainControlPanelTochButton_C_UIMsg_WeaponEquipAttachment_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_MemberVoice
struct UMainControlPanelTochButton_C_UIMsg_MemberVoice_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_PlayerControllerPressGrenade
struct UMainControlPanelTochButton_C_UIMsg_PlayerControllerPressGrenade_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideFireBtn
struct UMainControlPanelTochButton_C_HideFireBtn_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_PlayerControllerPressFire
struct UMainControlPanelTochButton_C_UIMsg_PlayerControllerPressFire_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_SwitchCameraSatrtHandle
struct UMainControlPanelTochButton_C_UIMsg_SwitchCameraSatrtHandle_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_DoUITouchMove
struct UMainControlPanelTochButton_C_UIMsg_DoUITouchMove_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_OnPlaneUpdatePickUpList
struct UMainControlPanelTochButton_C_UIMsg_OnPlaneUpdatePickUpList_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_JoyStickTriggerSprint
struct UMainControlPanelTochButton_C_UIMsg_JoyStickTriggerSprint_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_HideJoinGameUI
struct UMainControlPanelTochButton_C_UIMsg_HideJoinGameUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ReleaseFireBtn
struct UMainControlPanelTochButton_C_UIMsg_ReleaseFireBtn_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMsg_ScopeChanged
struct UMainControlPanelTochButton_C_UIMsg_ScopeChanged_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.EnterObserverStatus
struct UMainControlPanelTochButton_C_EnterObserverStatus_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIMSG_PlayerControllerStateChange
struct UMainControlPanelTochButton_C_UIMSG_PlayerControllerStateChange_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReceiveParachuteFollowRequst
struct UMainControlPanelTochButton_C_ReceiveParachuteFollowRequst_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadyToSendFinishedGuideToServer
struct UMainControlPanelTochButton_C_ReadyToSendFinishedGuideToServer_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewBieGuide_FinishedCurGuide
struct UMainControlPanelTochButton_C_NewBieGuide_FinishedCurGuide_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.HandlNewbieGuideUpdate
struct UMainControlPanelTochButton_C_HandlNewbieGuideUpdate_Params
{
	int                                                guideID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewbieGuide_HideCurNewbieGuide
struct UMainControlPanelTochButton_C_NewbieGuide_HideCurNewbieGuide_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.NewbieGuide_ShowCurNewbieGuide
struct UMainControlPanelTochButton_C_NewbieGuide_ShowCurNewbieGuide_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadyToRetriveBeginnerFinishedGuide
struct UMainControlPanelTochButton_C_ReadyToRetriveBeginnerFinishedGuide_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.GameAssistantShowUI
struct UMainControlPanelTochButton_C_GameAssistantShowUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ApplyUserSettingInfo
struct UMainControlPanelTochButton_C_ApplyUserSettingInfo_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ResetCustomUIForAssistant
struct UMainControlPanelTochButton_C_ResetCustomUIForAssistant_Params
{
	bool                                               IsTransparent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.GetUIElementSetting
struct UMainControlPanelTochButton_C_GetUIElementSetting_Params
{
	int                                                FireMode;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 UIElemSaveGame;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.GameAssistantHideUI
struct UMainControlPanelTochButton_C_GameAssistantHideUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReadAdaptationTable
struct UMainControlPanelTochButton_C_ReadAdaptationTable_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UIElemLayoutApplyCustomSetting
struct UMainControlPanelTochButton_C_UIElemLayoutApplyCustomSetting_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchOperationByPlayerControllerState
struct UMainControlPanelTochButton_C_SwitchOperationByPlayerControllerState_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowSpectatingUI
struct UMainControlPanelTochButton_C_ShowSpectatingUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.EnterSpectatingStatus
struct UMainControlPanelTochButton_C_EnterSpectatingStatus_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.HideAllUIAfterDeadTipsShow
struct UMainControlPanelTochButton_C_HideAllUIAfterDeadTipsShow_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.Reconnect_ResetUIByPlayerControllerState
struct UMainControlPanelTochButton_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ApplyCustomUI
struct UMainControlPanelTochButton_C_ApplyCustomUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.MainControlPanel_HideAllUI
struct UMainControlPanelTochButton_C_MainControlPanel_HideAllUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.IngameUIAdaptation
struct UMainControlPanelTochButton_C_IngameUIAdaptation_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.DebugSetAllUIVisibility
struct UMainControlPanelTochButton_C_DebugSetAllUIVisibility_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowDriveUI
struct UMainControlPanelTochButton_C_ShowDriveUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.OperatingRules2
struct UMainControlPanelTochButton_C_OperatingRules2_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.GetCustomUIPosition
struct UMainControlPanelTochButton_C_GetCustomUIPosition_Params
{
	TArray<struct FDragableBtnPositionDataStruct>      Custom;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SwitchOperationUI
struct UMainControlPanelTochButton_C_SwitchOperationUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowShooterUI
struct UMainControlPanelTochButton_C_ShowShooterUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowFreeFallUI
struct UMainControlPanelTochButton_C_ShowFreeFallUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ShowAirborneUI
struct UMainControlPanelTochButton_C_ShowAirborneUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.Construct
struct UMainControlPanelTochButton_C_Construct_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ReceivedInitWidget
struct UMainControlPanelTochButton_C_ReceivedInitWidget_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.OnHideUIAfterPlayerDeadDelegate
struct UMainControlPanelTochButton_C_OnHideUIAfterPlayerDeadDelegate_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.OnRankChange
struct UMainControlPanelTochButton_C_OnRankChange_Params
{
	int                                                Kills;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SetCustomizeUIInfo
struct UMainControlPanelTochButton_C_SetCustomizeUIInfo_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.OnEnterSpectatinStatus
struct UMainControlPanelTochButton_C_OnEnterSpectatinStatus_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SetSettingControlUI
struct UMainControlPanelTochButton_C_SetSettingControlUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ChangeFireMode
struct UMainControlPanelTochButton_C_ChangeFireMode_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ResetUIStateAfterRespawn
struct UMainControlPanelTochButton_C_ResetUIStateAfterRespawn_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.UpdateTeamMemberUI
struct UMainControlPanelTochButton_C_UpdateTeamMemberUI_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ApplyCustomUIPosition
struct UMainControlPanelTochButton_C_ApplyCustomUIPosition_Params
{
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.Tick
struct UMainControlPanelTochButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.ExecuteUbergraph_MainControlPanelTochButton
struct UMainControlPanelTochButton_C_ExecuteUbergraph_MainControlPanelTochButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainControlPanelTochButton.MainControlPanelTochButton_C.SetCustomUIPosition__DelegateSignature
struct UMainControlPanelTochButton_C_SetCustomUIPosition__DelegateSignature_Params
{
	TArray<struct FDragableBtnPositionDataStruct>      CustomUIPosition;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
