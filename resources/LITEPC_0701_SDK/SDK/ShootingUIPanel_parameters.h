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

// Function ShootingUIPanel.ShootingUIPanel_C.IsCustomUIDataValid
struct UShootingUIPanel_C_IsCustomUIDataValid_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveDataSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SetPositionByMinimapExtend
struct UShootingUIPanel_C_SetPositionByMinimapExtend_Params
{
	bool                                               IsExtendMinimap;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SetInteractKeyText
struct UShootingUIPanel_C_SetInteractKeyText_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.RefreshInteractWeaponImage
struct UShootingUIPanel_C_RefreshInteractWeaponImage_Params
{
	class UObject*                                     Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.GetWeaponSlotType
struct UShootingUIPanel_C_GetWeaponSlotType_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponSlotType>                       slotType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.GetAvatarSlotType
struct UShootingUIPanel_C_GetAvatarSlotType_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAvatarSlotType                                    NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.NeedReplacement
struct UShootingUIPanel_C_NeedReplacement_Params
{
	struct FItemDefineID                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bNeed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideInteractMessage
struct UShootingUIPanel_C_HideInteractMessage_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ShowInteractWithGroundItem
struct UShootingUIPanel_C_ShowInteractWithGroundItem_Params
{
	struct FPickUpItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APickUpWrapperActor*                         PickUpWrapperActor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SelectSlot
struct UShootingUIPanel_C_SelectSlot_Params
{
	ESurviveWeaponPropSlot                             Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ToogleThrowMode
struct UShootingUIPanel_C_ToogleThrowMode_Params
{
	TEnumAsByte<EThrowGrenadeMode>                     GrenadeThrowMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_FPPModeChange
struct UShootingUIPanel_C_UIMsg_FPPModeChange_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_ScopeChanged
struct UShootingUIPanel_C_UIMsg_ScopeChanged_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.PersonPerspectiveChanged
struct UShootingUIPanel_C_PersonPerspectiveChanged_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.GetUpdateFireBtnWidget
struct UShootingUIPanel_C_GetUpdateFireBtnWidget_Params
{
	bool                                               IsRightHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FireBtnImage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FireBtnBG;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.On_CancelReleaseFireBtn_MouseButtonDown_1
struct UShootingUIPanel_C_On_CancelReleaseFireBtn_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_ResetCancelFireBtn
struct UShootingUIPanel_C_UIMsg_ResetCancelFireBtn_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_ReloadEnd
struct UShootingUIPanel_C_UIMsg_ReloadEnd_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.CheckAutoScoping
struct UShootingUIPanel_C_CheckAutoScoping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UIMsg_PrefireEnd
struct UShootingUIPanel_C_UIMsg_PrefireEnd_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ReleaseFireScopeOut
struct UShootingUIPanel_C_ReleaseFireScopeOut_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ResetCancelFireBtn
struct UShootingUIPanel_C_ResetCancelFireBtn_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ShowCancelReleaseFireBtn
struct UShootingUIPanel_C_ShowCancelReleaseFireBtn_Params
{
	bool                                               IsRightSidePress;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.IsNeedReleaseFire
struct UShootingUIPanel_C_IsNeedReleaseFire_Params
{
	class ASTExtraShootWeapon*                         shootWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EReleaseToFireType                                 ReleaseFireType;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateCancelShootBtn
struct UShootingUIPanel_C_UpdateCancelShootBtn_Params
{
	TEnumAsByte<ECurPlayerHandStatus>                  status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.CheckX8Slider
struct UShootingUIPanel_C_CheckX8Slider_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.DEBUGFPS
struct UShootingUIPanel_C_DEBUGFPS_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.SetGrenadeCountDownTrue
struct UShootingUIPanel_C_SetGrenadeCountDownTrue_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UIMSG_NormalAimBtn
struct UShootingUIPanel_C_UIMSG_NormalAimBtn_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UIMSG_HightLightAimBtn
struct UShootingUIPanel_C_UIMSG_HightLightAimBtn_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideBareHandUI
struct UShootingUIPanel_C_HideBareHandUI_Params
{
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HighLightJumpBtn
struct UShootingUIPanel_C_HighLightJumpBtn_Params
{
	bool                                               bIsHighLight;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.On_ShootAimBtn2_MouseButtonDown_1
struct UShootingUIPanel_C_On_ShootAimBtn2_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateGunImage
struct UShootingUIPanel_C_UpdateGunImage_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnRightSideOfTheBody
struct UShootingUIPanel_C_OnRightSideOfTheBody_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnLeftSideOfTheBody
struct UShootingUIPanel_C_OnLeftSideOfTheBody_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideAllNewbieGuide
struct UShootingUIPanel_C_HideAllNewbieGuide_Params
{
	bool                                               bIsShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideJumpingMoveCamTips
struct UShootingUIPanel_C_HideJumpingMoveCamTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideConsumeTips
struct UShootingUIPanel_C_HideConsumeTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideGrenadeTips
struct UShootingUIPanel_C_HideGrenadeTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.StartVaultCastUIMsg
struct UShootingUIPanel_C_StartVaultCastUIMsg_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideSearchingHouseTips
struct UShootingUIPanel_C_HideSearchingHouseTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideReloadTips
struct UShootingUIPanel_C_HideReloadTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideLeftFireTips
struct UShootingUIPanel_C_HideLeftFireTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideRightFireTips
struct UShootingUIPanel_C_HideRightFireTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideGlideTips
struct UShootingUIPanel_C_HideGlideTips_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GuideText_type                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateSwimStateCheck
struct UShootingUIPanel_C_UpdateSwimStateCheck_Params
{
	float                                              delttime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SetFireBtnVisible
struct UShootingUIPanel_C_SetFireBtnVisible_Params
{
	ESlateVisibility                                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.Do3DTouch
struct UShootingUIPanel_C_Do3DTouch_Params
{
	class ABP_STExtraPlayerController_C*               Control;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.FireWeapon
struct UShootingUIPanel_C_FireWeapon_Params
{
	TEnumAsByte<ETouchIndex>                           InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SetRightFirebtnAndGrenadeBtnCircularHitTestRadius
struct UShootingUIPanel_C_SetRightFirebtnAndGrenadeBtnCircularHitTestRadius_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.Start ChatCDBarAnim
struct UShootingUIPanel_C_Start_ChatCDBarAnim_Params
{
	float                                              CDTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.RedrawCrouchUI
struct UShootingUIPanel_C_RedrawCrouchUI_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.RedrawProneUI
struct UShootingUIPanel_C_RedrawProneUI_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.RedrawJumpUI
struct UShootingUIPanel_C_RedrawJumpUI_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideLeanIcon
struct UShootingUIPanel_C_HideLeanIcon_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ShowLeanIcon
struct UShootingUIPanel_C_ShowLeanIcon_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.SwimUICheck
struct UShootingUIPanel_C_SwimUICheck_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.EventDriveOutWater
struct UShootingUIPanel_C_EventDriveOutWater_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.EventDriveIntoWater
struct UShootingUIPanel_C_EventDriveIntoWater_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.RefreshPostolIcon
struct UShootingUIPanel_C_RefreshPostolIcon_Params
{
	class UObject*                                     Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.RefreshMeleeIcon
struct UShootingUIPanel_C_RefreshMeleeIcon_Params
{
	class UObject*                                     Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnDisablePeek
struct UShootingUIPanel_C_OnDisablePeek_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnPeekRight
struct UShootingUIPanel_C_OnPeekRight_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnPeekLeft
struct UShootingUIPanel_C_OnPeekLeft_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.CombineKeyDownLogic
struct UShootingUIPanel_C_CombineKeyDownLogic_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.CheckIsKeyDown
struct UShootingUIPanel_C_CheckIsKeyDown_Params
{
	struct FKey                                        KeyCode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsDown;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.VehicleShootingCheckShootingState
struct UShootingUIPanel_C_VehicleShootingCheckShootingState_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandlePlayerEnterVehicle
struct UShootingUIPanel_C_HandlePlayerEnterVehicle_Params
{
	bool                                               IsEnter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ShowWeaponEquipAttachmentAnim
struct UShootingUIPanel_C_ShowWeaponEquipAttachmentAnim_Params
{
	ESurviveWeaponPropSlot                             Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsEquip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideAllMultiLayerUI
struct UShootingUIPanel_C_HideAllMultiLayerUI_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ShowUIByOperation
struct UShootingUIPanel_C_ShowUIByOperation_Params
{
	TEnumAsByte<EOperation>                            Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ThrowingCDBar
struct UShootingUIPanel_C_ThrowingCDBar_Params
{
	float                                              CD_0_1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UIInGameEvent_BackpackOpen_StopFire
struct UShootingUIPanel_C_UIInGameEvent_BackpackOpen_StopFire_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ShouldThrowGrenadeFunc
struct UShootingUIPanel_C_ShouldThrowGrenadeFunc_Params
{
	EUTSkillEntry                                      SkillEntryEvent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideRefreshUI
struct UShootingUIPanel_C_HideRefreshUI_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.Init BG
struct UShootingUIPanel_C_Init_BG_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponImageByDefineID
struct UShootingUIPanel_C_UpdateWeaponImageByDefineID_Params
{
	ESurviveWeaponPropSlot                             Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.GrenadeThrow
struct UShootingUIPanel_C_GrenadeThrow_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.GrenadePrepareToThrow
struct UShootingUIPanel_C_GrenadePrepareToThrow_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.GetBP_PlayerPawn
struct UShootingUIPanel_C_GetBP_PlayerPawn_Params
{
	class ABP_PlayerPawnPC_C*                          PlayerPawn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.Reconnect_ResetUIByPlayerControllerState
struct UShootingUIPanel_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnSprintStateInterrupt
struct UShootingUIPanel_C_OnSprintStateInterrupt_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.GetGrenadeTimerIconByType
struct UShootingUIPanel_C_GetGrenadeTimerIconByType_Params
{
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 GrenadeSlate;                                             // (Parm, OutParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandleReloadFinish
struct UShootingUIPanel_C_HandleReloadFinish_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.StartReloadAnim
struct UShootingUIPanel_C_StartReloadAnim_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.PlayerInfo_UpdatePlayerBreathAmmount
struct UShootingUIPanel_C_PlayerInfo_UpdatePlayerBreathAmmount_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.On_OnFireBtn_Lside_MouseButtonDown_1
struct UShootingUIPanel_C_On_OnFireBtn_Lside_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.Swim_OutWaterShowUI
struct UShootingUIPanel_C_Swim_OutWaterShowUI_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.Swim_EnterWaterHideUI
struct UShootingUIPanel_C_Swim_EnterWaterHideUI_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.Grenade_Cancel
struct UShootingUIPanel_C_Grenade_Cancel_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateItemUsingProgress
struct UShootingUIPanel_C_UpdateItemUsingProgress_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponBulletCount
struct UShootingUIPanel_C_UpdateWeaponBulletCount_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ResetUIOnPlane
struct UShootingUIPanel_C_ResetUIOnPlane_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.CanPlayerAutoSprintOrSwim
struct UShootingUIPanel_C_CanPlayerAutoSprintOrSwim_Params
{
	bool                                               CanAutoSprintOrSwim;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UIChangeWhenPlayerOnPlane
struct UShootingUIPanel_C_UIChangeWhenPlayerOnPlane_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandleCurWeaponFireModeChange
struct UShootingUIPanel_C_HandleCurWeaponFireModeChange_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponImage
struct UShootingUIPanel_C_UpdateWeaponImage_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ActiveSprint
struct UShootingUIPanel_C_ActiveSprint_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.SimSprint
struct UShootingUIPanel_C_SimSprint_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ShowAutoSprintUI
struct UShootingUIPanel_C_ShowAutoSprintUI_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateWeaponBulletOnShoot
struct UShootingUIPanel_C_UpdateWeaponBulletOnShoot_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateTopRightWeaponBulletWhenUsing
struct UShootingUIPanel_C_UpdateTopRightWeaponBulletWhenUsing_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateTopRightWeaponBulletWhenEquipAndUnequip
struct UShootingUIPanel_C_UpdateTopRightWeaponBulletWhenEquipAndUnequip_Params
{
	ESurviveWeaponPropSlot                             WeaponSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandleTopRightWeaponSwitch
struct UShootingUIPanel_C_HandleTopRightWeaponSwitch_Params
{
	ESurviveWeaponPropSlot                             TopRightWeaponSlot;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SimulateStopSprint
struct UShootingUIPanel_C_SimulateStopSprint_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HideAutoSprintUI
struct UShootingUIPanel_C_HideAutoSprintUI_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandleWeaponChange
struct UShootingUIPanel_C_HandleWeaponChange_Params
{
	ESurviveWeaponPropSlot                             Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ChangeFireStatusAndUpdateFireBtn
struct UShootingUIPanel_C_ChangeFireStatusAndUpdateFireBtn_Params
{
	TEnumAsByte<ECurPlayerHandStatus>                  status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.NormalFireBtnByStatus
struct UShootingUIPanel_C_NormalFireBtnByStatus_Params
{
	bool                                               isRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.GetCurMeleeHightLightAndNormalIcon
struct UShootingUIPanel_C_GetCurMeleeHightLightAndNormalIcon_Params
{
	struct FSlateBrush                                 Normal;                                                   // (Parm, OutParm)
	struct FSlateBrush                                 highLight;                                                // (Parm, OutParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HightLightFireBtnByStatus
struct UShootingUIPanel_C_HightLightFireBtnByStatus_Params
{
	bool                                               IsRightHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HightLightCurUseWeapon
struct UShootingUIPanel_C_HightLightCurUseWeapon_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateTopRightWeapnIcon
struct UShootingUIPanel_C_UpdateTopRightWeapnIcon_Params
{
	ESurviveWeaponPropSlot                             SlotName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ImagePath;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SetGrenadeCountDown
struct UShootingUIPanel_C_SetGrenadeCountDown_Params
{
	bool                                               IsBeginThrow;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.DealSwimForce
struct UShootingUIPanel_C_DealSwimForce_Params
{
	float                                              upoffset;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               unswing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ReloadingCDbar
struct UShootingUIPanel_C_ReloadingCDbar_Params
{
	float                                              CdValue_0_1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UseItemCDbar
struct UShootingUIPanel_C_UseItemCDbar_Params
{
	float                                              CdValue_0_1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandleThrowOutGrenade
struct UShootingUIPanel_C_HandleThrowOutGrenade_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandleReadyThrowOutGrenade
struct UShootingUIPanel_C_HandleReadyThrowOutGrenade_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.GetGrenadeIconByType
struct UShootingUIPanel_C_GetGrenadeIconByType_Params
{
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 NormalIcon;                                               // (Parm, OutParm)
	struct FSlateBrush                                 HighLightIcon;                                            // (Parm, OutParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnUseGrenadeChangeUI
struct UShootingUIPanel_C_OnUseGrenadeChangeUI_Params
{
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ResetCustomUIPosition
struct UShootingUIPanel_C_ResetCustomUIPosition_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.SetRenderTransformIfValid
struct UShootingUIPanel_C_SetRenderTransformIfValid_Params
{
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UGridPanel*                                  GridPanel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ApplyCustomUIPosition
struct UShootingUIPanel_C_ApplyCustomUIPosition_Params
{
	TArray<struct FDragableBtnPositionDataStruct>      CustomUI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.RightBtnStatus
struct UShootingUIPanel_C_RightBtnStatus_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateStandCrouchProneAndSprint
struct UShootingUIPanel_C_UpdateStandCrouchProneAndSprint_Params
{
	TEnumAsByte<ESTEPoseState>                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.EnableMovement
struct UShootingUIPanel_C_EnableMovement_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.StopMovementIfProne
struct UShootingUIPanel_C_StopMovementIfProne_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.FireInteruptedIfProne
struct UShootingUIPanel_C_FireInteruptedIfProne_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.AimInterupted
struct UShootingUIPanel_C_AimInterupted_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.SprintInterupted
struct UShootingUIPanel_C_SprintInterupted_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateBulletLeftCountText
struct UShootingUIPanel_C_UpdateBulletLeftCountText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateGunBulletCountText
struct UShootingUIPanel_C_UpdateGunBulletCountText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateReloadCountDownText
struct UShootingUIPanel_C_UpdateReloadCountDownText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SwitchAimMode
struct UShootingUIPanel_C_SwitchAimMode_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateReloadCD
struct UShootingUIPanel_C_UpdateReloadCD_Params
{
	float                                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateData
struct UShootingUIPanel_C_UpdateData_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ShowBackpackIconSplash
struct UShootingUIPanel_C_ShowBackpackIconSplash_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.UpdateInstantPickUpList
struct UShootingUIPanel_C_UpdateInstantPickUpList_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnReleaseFireBtn
struct UShootingUIPanel_C_OnReleaseFireBtn_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HaveBullet
struct UShootingUIPanel_C_HaveBullet_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnPressFireBtn
struct UShootingUIPanel_C_OnPressFireBtn_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETouchFireType>                        FireType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isRightSide;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.On_OnFireBtn_MouseButtonDown_1
struct UShootingUIPanel_C_On_OnFireBtn_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.On_BackpackBtn_MouseButtonDown_1
struct UShootingUIPanel_C_On_BackpackBtn_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.StopToSwitchIfSprint
struct UShootingUIPanel_C_StopToSwitchIfSprint_Params
{
	TEnumAsByte<ESwitchWeaponActionType>               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SimulateSprint
struct UShootingUIPanel_C_SimulateSprint_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_Throw_Mode_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__Button_Throw_Mode_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnReadyToThrowGrenade
struct UShootingUIPanel_C_OnReadyToThrowGrenade_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnEndThrowGrenade
struct UShootingUIPanel_C_OnEndThrowGrenade_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_137_GrenadeTriggerHit__DelegateSignature
struct UShootingUIPanel_C_BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_137_GrenadeTriggerHit__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_143_GrenadeThrown__DelegateSignature
struct UShootingUIPanel_C_BndEvt__GrenadeAimBtn_K2Node_ComponentBoundEvent_143_GrenadeThrown__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.RefreshGrename
struct UShootingUIPanel_C_RefreshGrename_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BeginGrenamdeTimer
struct UShootingUIPanel_C_BeginGrenamdeTimer_Params
{
	float                                              Sum;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimUp_K2Node_ComponentBoundEvent_485_OnButtonPressedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__SwimUp_K2Node_ComponentBoundEvent_485_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimUp_K2Node_ComponentBoundEvent_551_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__SwimUp_K2Node_ComponentBoundEvent_551_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimDown_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__SwimDown_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwimDown_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__SwimDown_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__MeleeBtn_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__MeleeBtn_K2Node_ComponentBoundEvent_111_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__PistolBtn_K2Node_ComponentBoundEvent_168_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__PistolBtn_K2Node_ComponentBoundEvent_168_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_207_OnUseGrenade__DelegateSignature
struct UShootingUIPanel_C_BndEvt__GrenadeList_K2Node_ComponentBoundEvent_207_OnUseGrenade__DelegateSignature_Params
{
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__JumpBtn_K2Node_ComponentBoundEvent_222_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__JumpBtn_K2Node_ComponentBoundEvent_222_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__JumpBtn_K2Node_ComponentBoundEvent_209_OnButtonPressedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__JumpBtn_K2Node_ComponentBoundEvent_209_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BindWeaponChangeDelegate
struct UShootingUIPanel_C_BindWeaponChangeDelegate_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_43_OnGrenadeEmpty__DelegateSignature
struct UShootingUIPanel_C_BndEvt__GrenadeList_K2Node_ComponentBoundEvent_43_OnGrenadeEmpty__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_68_OnUseMelee__DelegateSignature
struct UShootingUIPanel_C_BndEvt__GrenadeList_K2Node_ComponentBoundEvent_68_OnUseMelee__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__GrenadeList_K2Node_ComponentBoundEvent_198_OnUseFist__DelegateSignature
struct UShootingUIPanel_C_BndEvt__GrenadeList_K2Node_ComponentBoundEvent_198_OnUseFist__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwitchWeaponSlot_Mode2_K2Node_ComponentBoundEvent_1500_ClickOnSwitchWeapon__DelegateSignature
struct UShootingUIPanel_C_BndEvt__SwitchWeaponSlot_Mode2_K2Node_ComponentBoundEvent_1500_ClickOnSwitchWeapon__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__SwitchWeaponSlot_Mode2_C_0_K2Node_ComponentBoundEvent_1585_ClickOnSwitchWeapon__DelegateSignature
struct UShootingUIPanel_C_BndEvt__SwitchWeaponSlot_Mode2_C_0_K2Node_ComponentBoundEvent_1585_ClickOnSwitchWeapon__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandleUIWhenPlayerOnPlane
struct UShootingUIPanel_C_HandleUIWhenPlayerOnPlane_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandleChangeInventoryData
struct UShootingUIPanel_C_HandleChangeInventoryData_Params
{
	ESurviveWeaponPropSlot                             TargetChangeSlot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.BindPickupUpdateBullet
struct UShootingUIPanel_C_BindPickupUpdateBullet_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandlePickupUpdateBullet
struct UShootingUIPanel_C_HandlePickupUpdateBullet_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.CustomEvent_1
struct UShootingUIPanel_C_CustomEvent_1_Params
{
	bool                                               IsShowPrompt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PromptText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TotalTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.Tick
struct UShootingUIPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ReceivedInitWidget
struct UShootingUIPanel_C_ReceivedInitWidget_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.HandleUIWhenPlayerLand
struct UShootingUIPanel_C_HandleUIWhenPlayerLand_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.Sjump
struct UShootingUIPanel_C_Sjump_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.SimReload
struct UShootingUIPanel_C_SimReload_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.WeaponChange
struct UShootingUIPanel_C_WeaponChange_Params
{
	ESurviveWeaponPropSlot                             TargetChangeSlot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnReloadCountingDown
struct UShootingUIPanel_C_OnReloadCountingDown_Params
{
	struct FText                                       CountDownValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SetCustomizeUIInfo
struct UShootingUIPanel_C_SetCustomizeUIInfo_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SkillFinishedEvent
struct UShootingUIPanel_C_SkillFinishedEvent_Params
{
	EUTSkillStopReason                                 StopReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.SetSettingControlUI
struct UShootingUIPanel_C_SetSettingControlUI_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.LeftHandFireEvent
struct UShootingUIPanel_C_LeftHandFireEvent_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.CameraModeChange
struct UShootingUIPanel_C_CameraModeChange_Params
{
	TEnumAsByte<EPlayerCameraMode>                     CameraMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.VaultFailFromDS
struct UShootingUIPanel_C_VaultFailFromDS_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__ReloadButton_K2Node_ComponentBoundEvent_158_OnButtonPressedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__ReloadButton_K2Node_ComponentBoundEvent_158_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__RightProne_K2Node_ComponentBoundEvent_308_OnButtonPressedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__RightProne_K2Node_ComponentBoundEvent_308_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__RightCrouch_K2Node_ComponentBoundEvent_473_OnButtonPressedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__RightCrouch_K2Node_ComponentBoundEvent_473_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Sprint_K2Node_ComponentBoundEvent_799_OnButtonPressedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__Sprint_K2Node_ComponentBoundEvent_799_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.ItemUpdated
struct UShootingUIPanel_C_ItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.On3DTouchForceChange
struct UShootingUIPanel_C_On3DTouchForceChange_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_RightSideOfTheBody_K2Node_ComponentBoundEvent_422_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__Button_RightSideOfTheBody_K2Node_ComponentBoundEvent_422_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_LeftSideOfTheBody_K2Node_ComponentBoundEvent_857_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__Button_LeftSideOfTheBody_K2Node_ComponentBoundEvent_857_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_16_K2Node_ComponentBoundEvent_111_OnButtonPressedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__Button_16_K2Node_ComponentBoundEvent_111_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__LeftGrenade_Btn_K2Node_ComponentBoundEvent_199_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__LeftGrenade_Btn_K2Node_ComponentBoundEvent_199_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.Scope
struct UShootingUIPanel_C_Scope_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnDoubleClickCheck
struct UShootingUIPanel_C_OnDoubleClickCheck_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Slider_X8Zoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__Slider_X8Zoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__CancelFireBtn_Rside_K2Node_ComponentBoundEvent_2117_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__CancelFireBtn_Rside_K2Node_ComponentBoundEvent_2117_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__CancelReleaseFireBtn_K2Node_ComponentBoundEvent_261_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__CancelReleaseFireBtn_K2Node_ComponentBoundEvent_261_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_HIdeX8Panel_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__Button_HIdeX8Panel_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_8XBtn_K2Node_ComponentBoundEvent_242_OnButtonClickedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__Button_8XBtn_K2Node_ComponentBoundEvent_242_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__OnFireBtn_ReleaseBtn_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__OnFireBtn_ReleaseBtn_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__OnFireBtn_LReleaseBtn_K2Node_ComponentBoundEvent_283_OnButtonReleasedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__OnFireBtn_LReleaseBtn_K2Node_ComponentBoundEvent_283_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__Button_SwitchPMode_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature
struct UShootingUIPanel_C_BndEvt__Button_SwitchPMode_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__PistolMode_K2Node_ComponentBoundEvent_289_ClickOnSwitchWeapon__DelegateSignature
struct UShootingUIPanel_C_BndEvt__PistolMode_K2Node_ComponentBoundEvent_289_ClickOnSwitchWeapon__DelegateSignature_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.BndEvt__PistolMode_K2Node_ComponentBoundEvent_121_ShowLongGunFireMode__DelegateSignature
struct UShootingUIPanel_C_BndEvt__PistolMode_K2Node_ComponentBoundEvent_121_ShowLongGunFireMode__DelegateSignature_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.refreshfpBtn
struct UShootingUIPanel_C_refreshfpBtn_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.FpViewValueChnanged
struct UShootingUIPanel_C_FpViewValueChnanged_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.CustomEventChangeFOV
struct UShootingUIPanel_C_CustomEventChangeFOV_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ResetUIStateAfterRespawn
struct UShootingUIPanel_C_ResetUIStateAfterRespawn_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.OnUpdateInteractable
struct UShootingUIPanel_C_OnUpdateInteractable_Params
{
	struct FSearchedPickUpItemResult                   InteractableItem;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ItemDelete
struct UShootingUIPanel_C_ItemDelete_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShootingUIPanel.ShootingUIPanel_C.LeaveWater
struct UShootingUIPanel_C_LeaveWater_Params
{
	bool                                               HideLung;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.JumpVault
struct UShootingUIPanel_C_JumpVault_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.EnterWater
struct UShootingUIPanel_C_EnterWater_Params
{
};

// Function ShootingUIPanel.ShootingUIPanel_C.IntelligentSort
struct UShootingUIPanel_C_IntelligentSort_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.LRShootChange
struct UShootingUIPanel_C_LRShootChange_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ReleaseFireSniper
struct UShootingUIPanel_C_ReleaseFireSniper_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ReleaseFireShotGun
struct UShootingUIPanel_C_ReleaseFireShotGun_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.StateLeave
struct UShootingUIPanel_C_StateLeave_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.StateEnter
struct UShootingUIPanel_C_StateEnter_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.StateInterruptedHandlerBP
struct UShootingUIPanel_C_StateInterruptedHandlerBP_Params
{
	EPawnState                                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingUIPanel.ShootingUIPanel_C.ExecuteUbergraph_ShootingUIPanel
struct UShootingUIPanel_C_ExecuteUbergraph_ShootingUIPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
