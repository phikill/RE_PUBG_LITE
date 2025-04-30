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

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.IsAtaptation
struct ABP_STExtraPlayerController_C_IsAtaptation_Params
{
	bool                                               adaptation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadAdaptationTable
struct ABP_STExtraPlayerController_C_ReadAdaptationTable_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWeather
struct ABP_STExtraPlayerController_C_InitWeather_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMotionParam
struct ABP_STExtraPlayerController_C_SetMotionParam_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GetStickLeftSize
struct ABP_STExtraPlayerController_C_GetStickLeftSize_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFightingUI
struct ABP_STExtraPlayerController_C_ShowFightingUI_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowAutoSprintBtn
struct ABP_STExtraPlayerController_C_ShowAutoSprintBtn_Params
{
	bool                                               visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   showPos_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               inside;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigCrossHairColor
struct ABP_STExtraPlayerController_C_ReadConfigCrossHairColor_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigMotionControl
struct ABP_STExtraPlayerController_C_ReadConfigMotionControl_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigAutoAim
struct ABP_STExtraPlayerController_C_ReadConfigAutoAim_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReadConfigFromHUD
struct ABP_STExtraPlayerController_C_ReadConfigFromHUD_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MakeFireModeEffect
struct ABP_STExtraPlayerController_C_MakeFireModeEffect_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugNotDrawGuideLine
struct ABP_STExtraPlayerController_C_DebugNotDrawGuideLine_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowBackpackTombBox
struct ABP_STExtraPlayerController_C_ShowBackpackTombBox_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindOrUnBindJoyStickSprint
struct ABP_STExtraPlayerController_C_BindOrUnBindJoyStickSprint_Params
{
	bool                                               IsBind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CreateRank
struct ABP_STExtraPlayerController_C_CreateRank_Params
{
	int                                                Kills;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DisableAimIfUnEquipWeapon
struct ABP_STExtraPlayerController_C_DisableAimIfUnEquipWeapon_Params
{
	ESurviveWeaponPropSlot                             WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SwitchAimMode
struct ABP_STExtraPlayerController_C_SwitchAimMode_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DoInitUI
struct ABP_STExtraPlayerController_C_DoInitUI_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.HandleJumpBtnPressEvent
struct ABP_STExtraPlayerController_C_HandleJumpBtnPressEvent_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.HandleStartBattle
struct ABP_STExtraPlayerController_C_HandleStartBattle_Params
{
	int                                                PlayerNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnRep_bInCar
struct ABP_STExtraPlayerController_C_OnRep_bInCar_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshUI
struct ABP_STExtraPlayerController_C_RefreshUI_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UpdateInputPanel
struct ABP_STExtraPlayerController_C_UpdateInputPanel_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowBackpackIconSplash
struct ABP_STExtraPlayerController_C_ShowBackpackIconSplash_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshWeaponPanel
struct ABP_STExtraPlayerController_C_RefreshWeaponPanel_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetTouchInputEnabled
struct ABP_STExtraPlayerController_C_SetTouchInputEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowMainInputControl
struct ABP_STExtraPlayerController_C_ShowMainInputControl_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowTouchInterface
struct ABP_STExtraPlayerController_C_ShowTouchInterface_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.EnableDeathGray
struct ABP_STExtraPlayerController_C_EnableDeathGray_Params
{
	float                                              BlendWeight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetDeathGrayLerpValue
struct ABP_STExtraPlayerController_C_SetDeathGrayLerpValue_Params
{
	float                                              Lerp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPostProcessVolume
struct ABP_STExtraPlayerController_C_SetPostProcessVolume_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.UserConstructionScript
struct ABP_STExtraPlayerController_C_UserConstructionScript_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__FinishedFunc
struct ABP_STExtraPlayerController_C_GrayToOne__FinishedFunc_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToOne__UpdateFunc
struct ABP_STExtraPlayerController_C_GrayToOne__UpdateFunc_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__FinishedFunc
struct ABP_STExtraPlayerController_C_GrayToZero__FinishedFunc_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GrayToZero__UpdateFunc
struct ABP_STExtraPlayerController_C_GrayToZero__UpdateFunc_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBeginPlay
struct ABP_STExtraPlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSpectatorCameraChange
struct ABP_STExtraPlayerController_C_OnSpectatorCameraChange_Params
{
	bool*                                              bDie;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnStopFireEventHandle
struct ABP_STExtraPlayerController_C_OnStopFireEventHandle_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchCameraSatrtHandle
struct ABP_STExtraPlayerController_C_OnSwitchCameraSatrtHandle_Params
{
	TEnumAsByte<EPlayerCameraMode>                     CameraMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlayerPutDownActorHandle
struct ABP_STExtraPlayerController_C_OnPlayerPutDownActorHandle_Params
{
	class ASTExtraBaseCharacter*                       TargetPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnSwitchWeaponHandle
struct ABP_STExtraPlayerController_C_OnSwitchWeaponHandle_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveTick
struct ABP_STExtraPlayerController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnUseInventoryitemHandle
struct ABP_STExtraPlayerController_C_OnUseInventoryitemHandle_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ServerStartBattle
struct ABP_STExtraPlayerController_C_ServerStartBattle_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ClientPreStartBattle
struct ABP_STExtraPlayerController_C_ClientPreStartBattle_Params
{
	int                                                PlayerNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ServerAfterLand
struct ABP_STExtraPlayerController_C_ServerAfterLand_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ClientAfterLand
struct ABP_STExtraPlayerController_C_ClientAfterLand_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RefreshTopMostUIPanel
struct ABP_STExtraPlayerController_C_RefreshTopMostUIPanel_Params
{
	TEnumAsByte<ETopMostUIPanelType>*                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.GameStart
struct ABP_STExtraPlayerController_C_GameStart_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.RemoveWeaponAim
struct ABP_STExtraPlayerController_C_RemoveWeaponAim_Params
{
	ESurviveWeaponPropSlot                             Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetMoveableAirborne
struct ABP_STExtraPlayerController_C_SetMoveableAirborne_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnLandOnGroundAfterJumpPlaneEnd
struct ABP_STExtraPlayerController_C_OnLandOnGroundAfterJumpPlaneEnd_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.JoystickTriggerSprint
struct ABP_STExtraPlayerController_C_JoystickTriggerSprint_Params
{
	bool*                                              bIsSprint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct ABP_STExtraPlayerController_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
struct ABP_STExtraPlayerController_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnPlane
struct ABP_STExtraPlayerController_C_OnPlane_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OffPlane
struct ABP_STExtraPlayerController_C_OffPlane_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OpenPara
struct ABP_STExtraPlayerController_C_OpenPara_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.Land
struct ABP_STExtraPlayerController_C_Land_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.SetPanels
struct ABP_STExtraPlayerController_C_SetPanels_Params
{
	TArray<class UUAEUserWidget*>*                     panels;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitOprate
struct ABP_STExtraPlayerController_C_InitOprate_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnFiremodeChange
struct ABP_STExtraPlayerController_C_OnFiremodeChange_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DoUITouchMove
struct ABP_STExtraPlayerController_C_DoUITouchMove_Params
{
	struct FVector*                                    Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressFire
struct ABP_STExtraPlayerController_C_PressFire_Params
{
	int*                                               FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ShowFireBtn
struct ABP_STExtraPlayerController_C_ShowFireBtn_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PressGrenade
struct ABP_STExtraPlayerController_C_PressGrenade_Params
{
	bool*                                              isThrow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitJoyStickAfterActivation
struct ABP_STExtraPlayerController_C_InitJoyStickAfterActivation_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MemberVoice
struct ABP_STExtraPlayerController_C_MemberVoice_Params
{
	int*                                               member;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveClientRestart
struct ABP_STExtraPlayerController_C_ReceiveClientRestart_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.OnWeaponEquipAttachment
struct ABP_STExtraPlayerController_C_OnWeaponEquipAttachment_Params
{
	ESurviveWeaponPropSlot*                            WeaponPropSlot;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID*                              DefineID;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bEquip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ResetMissingUIUpdate
struct ABP_STExtraPlayerController_C_ResetMissingUIUpdate_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControliOS
struct ABP_STExtraPlayerController_C_MotionControliOS_Params
{
	struct FVector                                     AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1
struct ABP_STExtraPlayerController_C_InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1_Params
{
	struct FVector                                     AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroidTick
struct ABP_STExtraPlayerController_C_MotionControlAndroidTick_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.MotionControlAndroid
struct ABP_STExtraPlayerController_C_MotionControlAndroid_Params
{
	struct FVector                                     AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReceiveBackpackComponent
struct ABP_STExtraPlayerController_C_ReceiveBackpackComponent_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitWallFeedBack
struct ABP_STExtraPlayerController_C_InitWallFeedBack_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.InitNewbieComponent
struct ABP_STExtraPlayerController_C_InitNewbieComponent_Params
{
	TArray<int>*                                       FinishedGuide;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>*                                       FinishedCounts;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               PlayerLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerExperienceType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.DebugOpenGuide
struct ABP_STExtraPlayerController_C_DebugOpenGuide_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BP_OceanSideDetected
struct ABP_STExtraPlayerController_C_BP_OceanSideDetected_Params
{
	struct FVector*                                    OceansideLocation;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bDetectedRiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.CallShowTouchInterface
struct ABP_STExtraPlayerController_C_CallShowTouchInterface_Params
{
	bool*                                              InShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindEvent_ItemOutline
struct ABP_STExtraPlayerController_C_BindEvent_ItemOutline_Params
{
	struct FSearchedPickUpItemResult                   InteractableItem;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ExecuteUbergraph_BP_STExtraPlayerController
struct ABP_STExtraPlayerController_C_ExecuteUbergraph_BP_STExtraPlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.VaultFailDS__DelegateSignature
struct ABP_STExtraPlayerController_C_VaultFailDS__DelegateSignature_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.BindEventToBackpackComponent__DelegateSignature
struct ABP_STExtraPlayerController_C_BindEventToBackpackComponent__DelegateSignature_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerLeaveWater__DelegateSignature
struct ABP_STExtraPlayerController_C_PlayerLeaveWater__DelegateSignature_Params
{
	bool                                               HideLung;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.PlayerEnterWater__DelegateSignature
struct ABP_STExtraPlayerController_C_PlayerEnterWater__DelegateSignature_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.AirborneLanded__DelegateSignature
struct ABP_STExtraPlayerController_C_AirborneLanded__DelegateSignature_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDEnd__DelegateSignature
struct ABP_STExtraPlayerController_C_ReloadingCDEnd__DelegateSignature_Params
{
};

// Function BP_STExtraPlayerController.BP_STExtraPlayerController_C.ReloadingCDStart__DelegateSignature
struct ABP_STExtraPlayerController_C_ReloadingCDStart__DelegateSignature_Params
{
	float                                              CD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
