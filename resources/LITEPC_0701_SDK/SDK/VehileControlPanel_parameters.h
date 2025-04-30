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

// Function VehileControlPanel.VehileControlPanel_C.IsCustomUIDataValid
struct UVehileControlPanel_C_IsCustomUIDataValid_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveDataSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.On_BtnLeaveVehicle_MouseButtonDown_1
struct UVehileControlPanel_C_On_BtnLeaveVehicle_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VehileControlPanel.VehileControlPanel_C.SWModeSetSideArrowLight
struct UVehileControlPanel_C_SWModeSetSideArrowLight_Params
{
	class UImage*                                      Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      LeftLight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      RightLight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.SetSpeedBoostBtn
struct UVehileControlPanel_C_SetSpeedBoostBtn_Params
{
	class UButton*                                     Btn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.SetMotorcycleAirControlBtns
struct UVehileControlPanel_C_SetMotorcycleAirControlBtns_Params
{
	class UCanvasPanel*                                BtnF;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                BtnB;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.RefreshMotorcycleAirControlBtns
struct UVehileControlPanel_C_RefreshMotorcycleAirControlBtns_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.UpdateGUISeats
struct UVehileControlPanel_C_UpdateGUISeats_Params
{
	TArray<TEnumAsByte<EVHSeatGUIType>>                SeatGUITypes;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                MaxInUseGUIIdx;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.LeanOutVehicleChanged
struct UVehileControlPanel_C_LeanOutVehicleChanged_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.CheckVehicleShootingState
struct UVehileControlPanel_C_CheckVehicleShootingState_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.RefreshWheelsInfo
struct UVehileControlPanel_C_RefreshWheelsInfo_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.InitWheelsInfo
struct UVehileControlPanel_C_InitWheelsInfo_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.PlayBtnAnim
struct UVehileControlPanel_C_PlayBtnAnim_Params
{
	class UWidgetAnimation*                            AnimToPlay;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            AnimToStop;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.Reconnect_ResetUIByPlayerControllerState
struct UVehileControlPanel_C_Reconnect_ResetUIByPlayerControllerState_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.SetSliderPercent
struct UVehileControlPanel_C_SetSliderPercent_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.UpdateGUISpeed
struct UVehileControlPanel_C_UpdateGUISpeed_Params
{
	float                                              RawSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.UpdateGUIFuel
struct UVehileControlPanel_C_UpdateGUIFuel_Params
{
	float                                              Fuel;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FuelMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.UpdateGUIHP
struct UVehileControlPanel_C_UpdateGUIHP_Params
{
	float                                              HP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HPMax;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.GetVehicleUser
struct UVehileControlPanel_C_GetVehicleUser_Params
{
	class UBP_VehicleUser_C*                           NewParam1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.HideEnterVehiclePanel
struct UVehileControlPanel_C_HideEnterVehiclePanel_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.ShowEnterVehiclePanel
struct UVehileControlPanel_C_ShowEnterVehiclePanel_Params
{
	bool                                               CanDrive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanRide;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.HideVehicleControlGUI
struct UVehileControlPanel_C_HideVehicleControlGUI_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.ShowVehicleControlGUI
struct UVehileControlPanel_C_ShowVehicleControlGUI_Params
{
	bool                                               IsDriving;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.SetThrottleValue
struct UVehileControlPanel_C_SetThrottleValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.SetSteeringValue
struct UVehileControlPanel_C_SetSteeringValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.OnVehicleChange
struct UVehileControlPanel_C_OnVehicleChange_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.OnVehicleHPChange
struct UVehileControlPanel_C_OnVehicleHPChange_Params
{
	float                                              Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RatioHealth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__BtnPassengerEnter_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__BtnPassengerEnter_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__BtnDriverEnter_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__BtnDriverEnter_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__BtnChangeSeat_K2Node_ComponentBoundEvent_335_OnButtonClickedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__BtnChangeSeat_K2Node_ComponentBoundEvent_335_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.Destruct
struct UVehileControlPanel_C_Destruct_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.ReceivedInitWidget
struct UVehileControlPanel_C_ReceivedInitWidget_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__RightCarSpeaker_K2Node_ComponentBoundEvent_55_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__RightCarSpeaker_K2Node_ComponentBoundEvent_55_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__RightCarSpeaker_K2Node_ComponentBoundEvent_68_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__RightCarSpeaker_K2Node_ComponentBoundEvent_68_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.DriveTypeChanged
struct UVehileControlPanel_C_DriveTypeChanged_Params
{
	int                                                IntValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.JoystickLRChanged
struct UVehileControlPanel_C_JoystickLRChanged_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.ButtonLRChanged
struct UVehileControlPanel_C_ButtonLRChanged_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Rside_SliderThrottle_K2Node_ComponentBoundEvent_100_OnMouseCaptureEndEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Rside_SliderThrottle_K2Node_ComponentBoundEvent_100_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Rside_SliderThrottle_K2Node_ComponentBoundEvent_43_OnFloatValueChangedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Rside_SliderThrottle_K2Node_ComponentBoundEvent_43_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__DriveRight_K2Node_ComponentBoundEvent_577_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__DriveRight_K2Node_ComponentBoundEvent_577_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__RsideDriveUp_K2Node_ComponentBoundEvent_334_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__RsideDriveUp_K2Node_ComponentBoundEvent_334_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__RsideDriveUp_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__RsideDriveUp_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__RsideDriveDown_K2Node_ComponentBoundEvent_378_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__RsideDriveDown_K2Node_ComponentBoundEvent_378_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__RsideDriveDown_K2Node_ComponentBoundEvent_410_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__RsideDriveDown_K2Node_ComponentBoundEvent_410_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__LsideDriveLeft_K2Node_ComponentBoundEvent_444_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__LsideDriveLeft_K2Node_ComponentBoundEvent_444_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__LsideDriveLeft_K2Node_ComponentBoundEvent_479_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__LsideDriveLeft_K2Node_ComponentBoundEvent_479_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__LsideDriveRight_K2Node_ComponentBoundEvent_515_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__LsideDriveRight_K2Node_ComponentBoundEvent_515_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__LsideDriveRight_K2Node_ComponentBoundEvent_552_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__LsideDriveRight_K2Node_ComponentBoundEvent_552_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__DriveRight_K2Node_ComponentBoundEvent_555_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__DriveRight_K2Node_ComponentBoundEvent_555_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__DriveLeft_K2Node_ComponentBoundEvent_534_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__DriveLeft_K2Node_ComponentBoundEvent_534_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__DriveLeft_K2Node_ComponentBoundEvent_514_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__DriveLeft_K2Node_ComponentBoundEvent_514_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__DriveDown_K2Node_ComponentBoundEvent_495_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__DriveDown_K2Node_ComponentBoundEvent_495_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Lside_SliderThrottle_K2Node_ComponentBoundEvent_137_OnFloatValueChangedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Lside_SliderThrottle_K2Node_ComponentBoundEvent_137_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Lside_SliderThrottle_K2Node_ComponentBoundEvent_147_OnMouseCaptureEndEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Lside_SliderThrottle_K2Node_ComponentBoundEvent_147_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Right_Up_K2Node_ComponentBoundEvent_677_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Right_Up_K2Node_ComponentBoundEvent_677_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Right_Down_K2Node_ComponentBoundEvent_747_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Right_Down_K2Node_ComponentBoundEvent_747_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Right_Up_K2Node_ComponentBoundEvent_791_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Right_Up_K2Node_ComponentBoundEvent_791_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Right_Down_K2Node_ComponentBoundEvent_832_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Right_Down_K2Node_ComponentBoundEvent_832_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Left_Up_K2Node_ComponentBoundEvent_874_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Left_Up_K2Node_ComponentBoundEvent_874_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Left_Up_K2Node_ComponentBoundEvent_917_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Left_Up_K2Node_ComponentBoundEvent_917_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Left_Down_K2Node_ComponentBoundEvent_961_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Left_Down_K2Node_ComponentBoundEvent_961_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Left_Down_K2Node_ComponentBoundEvent_1006_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Left_Down_K2Node_ComponentBoundEvent_1006_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__DriveDown_K2Node_ComponentBoundEvent_477_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__DriveDown_K2Node_ComponentBoundEvent_477_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__DriveUp_K2Node_ComponentBoundEvent_460_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__DriveUp_K2Node_ComponentBoundEvent_460_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__DriveUp_K2Node_ComponentBoundEvent_447_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__DriveUp_K2Node_ComponentBoundEvent_447_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_ShootingOnTheVehile_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_ShootingOnTheVehile_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.SetSettingControlUI
struct UVehileControlPanel_C_SetSettingControlUI_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.ChangeCurrentUsingWeaponDelegate_Event_1
struct UVehileControlPanel_C_ChangeCurrentUsingWeaponDelegate_Event_1_Params
{
	ESurviveWeaponPropSlot                             TargetChangeSlot;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.SetCustomizeUIInfo
struct UVehileControlPanel_C_SetCustomizeUIInfo_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehileControlPanel.VehileControlPanel_C.Construct
struct UVehileControlPanel_C_Construct_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_Right_Braking_K2Node_ComponentBoundEvent_77_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_Right_Braking_K2Node_ComponentBoundEvent_77_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_Right_Braking_K2Node_ComponentBoundEvent_130_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_Right_Braking_K2Node_ComponentBoundEvent_130_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_Left_Braking_K2Node_ComponentBoundEvent_89_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_Left_Braking_K2Node_ComponentBoundEvent_89_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_Left_Braking_K2Node_ComponentBoundEvent_142_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_Left_Braking_K2Node_ComponentBoundEvent_142_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Left_Liftup_K2Node_ComponentBoundEvent_581_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Left_Liftup_K2Node_ComponentBoundEvent_581_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Left_Liftup_K2Node_ComponentBoundEvent_633_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Left_Liftup_K2Node_ComponentBoundEvent_633_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWmode_Left_Pushdown_K2Node_ComponentBoundEvent_686_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWmode_Left_Pushdown_K2Node_ComponentBoundEvent_686_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWmode_Left_Pushdown_K2Node_ComponentBoundEvent_740_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWmode_Left_Pushdown_K2Node_ComponentBoundEvent_740_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Right_Liftup_K2Node_ComponentBoundEvent_808_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Right_Liftup_K2Node_ComponentBoundEvent_808_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Right_Liftup_K2Node_ComponentBoundEvent_865_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Right_Liftup_K2Node_ComponentBoundEvent_865_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWmode_Right_Pushdown_K2Node_ComponentBoundEvent_923_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWmode_Right_Pushdown_K2Node_ComponentBoundEvent_923_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWmode_Right_Pushdown_K2Node_ComponentBoundEvent_982_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWmode_Right_Pushdown_K2Node_ComponentBoundEvent_982_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_Mode2_Right_Liftup_K2Node_ComponentBoundEvent_1050_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_Mode2_Right_Liftup_K2Node_ComponentBoundEvent_1050_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_Mode2_Right_Liftup_K2Node_ComponentBoundEvent_1110_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_Mode2_Right_Liftup_K2Node_ComponentBoundEvent_1110_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_Mode2_Right_Pushdown_K2Node_ComponentBoundEvent_1179_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_Mode2_Right_Pushdown_K2Node_ComponentBoundEvent_1179_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_Mode2_Right_Pushdown_K2Node_ComponentBoundEvent_1241_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_Mode2_Right_Pushdown_K2Node_ComponentBoundEvent_1241_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Right_Liftup_K2Node_ComponentBoundEvent_1309_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Right_Liftup_K2Node_ComponentBoundEvent_1309_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Right_Liftup_K2Node_ComponentBoundEvent_1373_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Right_Liftup_K2Node_ComponentBoundEvent_1373_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Right_Pushdown_K2Node_ComponentBoundEvent_1441_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Right_Pushdown_K2Node_ComponentBoundEvent_1441_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Right_Pushdown_K2Node_ComponentBoundEvent_1507_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Right_Pushdown_K2Node_ComponentBoundEvent_1507_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Left_Liftup_K2Node_ComponentBoundEvent_1580_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Left_Liftup_K2Node_ComponentBoundEvent_1580_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Left_Liftup_K2Node_ComponentBoundEvent_1648_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Left_Liftup_K2Node_ComponentBoundEvent_1648_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Left_Pushdown_K2Node_ComponentBoundEvent_1717_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Left_Pushdown_K2Node_ComponentBoundEvent_1717_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Left_Pushdown_K2Node_ComponentBoundEvent_1787_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Left_Pushdown_K2Node_ComponentBoundEvent_1787_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_Mode2_Right_Speedup_K2Node_ComponentBoundEvent_287_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_Mode2_Right_Speedup_K2Node_ComponentBoundEvent_287_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_Mode2_Right_Speedup_K2Node_ComponentBoundEvent_362_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_Mode2_Right_Speedup_K2Node_ComponentBoundEvent_362_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Left_Speedup_K2Node_ComponentBoundEvent_728_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Left_Speedup_K2Node_ComponentBoundEvent_728_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Left_Speedup_K2Node_ComponentBoundEvent_807_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Left_Speedup_K2Node_ComponentBoundEvent_807_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Left_Speedup_K2Node_ComponentBoundEvent_884_OnButtonHoverEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Left_Speedup_K2Node_ComponentBoundEvent_884_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Left_Speedup_K2Node_ComponentBoundEvent_958_OnButtonHoverEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Left_Speedup_K2Node_ComponentBoundEvent_958_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Right_Speedup_K2Node_ComponentBoundEvent_1032_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Right_Speedup_K2Node_ComponentBoundEvent_1032_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Right_Speedup_K2Node_ComponentBoundEvent_1113_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Right_Speedup_K2Node_ComponentBoundEvent_1113_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Right_Speedup_K2Node_ComponentBoundEvent_1192_OnButtonHoverEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Right_Speedup_K2Node_ComponentBoundEvent_1192_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_SWMode_Right_Speedup_K2Node_ComponentBoundEvent_1269_OnButtonHoverEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_SWMode_Right_Speedup_K2Node_ComponentBoundEvent_1269_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Left_Speedup_K2Node_ComponentBoundEvent_1345_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Left_Speedup_K2Node_ComponentBoundEvent_1345_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Left_Speedup_K2Node_ComponentBoundEvent_1430_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Left_Speedup_K2Node_ComponentBoundEvent_1430_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Left_Speedup_K2Node_ComponentBoundEvent_1513_OnButtonHoverEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Left_Speedup_K2Node_ComponentBoundEvent_1513_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Left_Speedup_K2Node_ComponentBoundEvent_1594_OnButtonHoverEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Left_Speedup_K2Node_ComponentBoundEvent_1594_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Right_Speedup_K2Node_ComponentBoundEvent_1674_OnButtonPressedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Right_Speedup_K2Node_ComponentBoundEvent_1674_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Right_Speedup_K2Node_ComponentBoundEvent_1763_OnButtonReleasedEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Right_Speedup_K2Node_ComponentBoundEvent_1763_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Right_Speedup_K2Node_ComponentBoundEvent_1850_OnButtonHoverEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Right_Speedup_K2Node_ComponentBoundEvent_1850_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.BndEvt__Button_BtnMode_Right_Speedup_K2Node_ComponentBoundEvent_1934_OnButtonHoverEvent__DelegateSignature
struct UVehileControlPanel_C_BndEvt__Button_BtnMode_Right_Speedup_K2Node_ComponentBoundEvent_1934_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function VehileControlPanel.VehileControlPanel_C.ExecuteUbergraph_VehileControlPanel
struct UVehileControlPanel_C_ExecuteUbergraph_VehileControlPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
