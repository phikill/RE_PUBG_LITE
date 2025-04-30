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

// Function GMUI.GMUI_C.SetCircleTime
struct UGMUI_C_SetCircleTime_Params
{
	float                                              CDTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GMUI.GMUI_C.PrintNearestPlayerLocation
struct UGMUI_C_PrintNearestPlayerLocation_Params
{
	bool                                               bIsAI;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            TextBox;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GMUI.GMUI_C.ReadMotionConfig
struct UGMUI_C_ReadMotionConfig_Params
{
	class UEditableTextBox*                            NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GMUI.GMUI_C.SetMotionConfig
struct UGMUI_C_SetMotionConfig_Params
{
	class UEditableTextBox*                            TextBox;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GMUI.GMUI_C.InitScreenVars
struct UGMUI_C_InitScreenVars_Params
{
};

// Function GMUI.GMUI_C.UpdateGrassText
struct UGMUI_C_UpdateGrassText_Params
{
	bool                                               bInverse;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GMUI.GMUI_C.Construct
struct UGMUI_C_Construct_Params
{
};

// Function GMUI.GMUI_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_467_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_467_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Tab1Button_K2Node_ComponentBoundEvent_503_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Tab1Button_K2Node_ComponentBoundEvent_503_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Tab1Button_K2Node_ComponentBoundEvent_569_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Tab1Button_K2Node_ComponentBoundEvent_569_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__TenPercentDamage_K2Node_ComponentBoundEvent_661_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__TenPercentDamage_K2Node_ComponentBoundEvent_661_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Mortal_K2Node_ComponentBoundEvent_698_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Mortal_K2Node_ComponentBoundEvent_698_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Suicide_K2Node_ComponentBoundEvent_729_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Suicide_K2Node_ComponentBoundEvent_729_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__SpeedUp_K2Node_ComponentBoundEvent_762_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__SpeedUp_K2Node_ComponentBoundEvent_762_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Restart_K2Node_ComponentBoundEvent_797_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Restart_K2Node_ComponentBoundEvent_797_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_200_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_200_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_7_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__TouchYawButton_13_K2Node_ComponentBoundEvent_1141_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__TouchYawButton_13_K2Node_ComponentBoundEvent_1141_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__TouchPitchButton_14_K2Node_ComponentBoundEvent_1194_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__TouchPitchButton_14_K2Node_ComponentBoundEvent_1194_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__TouchAimYawButton_19_K2Node_ComponentBoundEvent_1248_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__TouchAimYawButton_19_K2Node_ComponentBoundEvent_1248_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__TouchAimPitchButton_20_K2Node_ComponentBoundEvent_1305_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__TouchAimPitchButton_20_K2Node_ComponentBoundEvent_1305_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__MoveCameraMinDistanceThresholdBtn_K2Node_ComponentBoundEvent_1050_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__MoveCameraMinDistanceThresholdBtn_K2Node_ComponentBoundEvent_1050_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__MoveCameraMinTimeThresholdBtn_K2Node_ComponentBoundEvent_1302_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__MoveCameraMinTimeThresholdBtn_K2Node_ComponentBoundEvent_1302_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_183_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_183_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_184_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_184_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Tab2Button_K2Node_ComponentBoundEvent_2348_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Tab2Button_K2Node_ComponentBoundEvent_2348_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Tab3Button_K2Node_ComponentBoundEvent_2457_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Tab3Button_K2Node_ComponentBoundEvent_2457_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Tab4Button_K2Node_ComponentBoundEvent_2618_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Tab4Button_K2Node_ComponentBoundEvent_2618_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__GrassButton_K2Node_ComponentBoundEvent_3427_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__GrassButton_K2Node_ComponentBoundEvent_3427_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__BaseScreenMoveXSpeedBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__BaseScreenMoveXSpeedBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__BaseScreenMoveYSpeedBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__BaseScreenMoveYSpeedBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__AimScreenMoveXAdditionalSpeedBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__AimScreenMoveXAdditionalSpeedBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__AimScreenMoveYAdditionalSpeedBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__AimScreenMoveYAdditionalSpeedBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__SwitchScreenMoveSpeedUpMode_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__SwitchScreenMoveSpeedUpMode_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__PitchThButton_14_K2Node_ComponentBoundEvent_1132_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__PitchThButton_14_K2Node_ComponentBoundEvent_1132_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__YawThButton_13_K2Node_ComponentBoundEvent_1183_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__YawThButton_13_K2Node_ComponentBoundEvent_1183_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_183_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_183_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_438_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_438_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__PitchRateButton_K2Node_ComponentBoundEvent_260_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__PitchRateButton_K2Node_ComponentBoundEvent_260_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_106_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_106_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_277_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_7_K2Node_ComponentBoundEvent_277_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_1088_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_1088_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.ApplyCustomUI
struct UGMUI_C_ApplyCustomUI_Params
{
};

// Function GMUI.GMUI_C.OperatingRule1
struct UGMUI_C_OperatingRule1_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_768_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_768_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_691_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_13_K2Node_ComponentBoundEvent_691_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_17_K2Node_ComponentBoundEvent_500_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_17_K2Node_ComponentBoundEvent_500_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_16_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_16_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_256_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_15_K2Node_ComponentBoundEvent_256_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_18_K2Node_ComponentBoundEvent_767_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_18_K2Node_ComponentBoundEvent_767_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_20_K2Node_ComponentBoundEvent_1006_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_20_K2Node_ComponentBoundEvent_1006_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_21_K2Node_ComponentBoundEvent_1261_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_21_K2Node_ComponentBoundEvent_1261_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_1913_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_1913_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_22_K2Node_ComponentBoundEvent_2170_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_22_K2Node_ComponentBoundEvent_2170_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_2658_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_45_K2Node_ComponentBoundEvent_2658_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_19_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_19_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_27_K2Node_ComponentBoundEvent_520_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_27_K2Node_ComponentBoundEvent_520_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_720_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_720_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.UpdateIndoorTabData
struct UGMUI_C_UpdateIndoorTabData_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_1392_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_1392_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.UpdateAITabData
struct UGMUI_C_UpdateAITabData_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_29_K2Node_ComponentBoundEvent_2319_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_29_K2Node_ComponentBoundEvent_2319_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2671_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_2671_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_287_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_287_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_499_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_31_K2Node_ComponentBoundEvent_499_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_718_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_718_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.UpdateManipulatingTab2Data
struct UGMUI_C_UpdateManipulatingTab2Data_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_Position_K2Node_ComponentBoundEvent_1000_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_Position_K2Node_ComponentBoundEvent_1000_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_Positin_End_K2Node_ComponentBoundEvent_455_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_Positin_End_K2Node_ComponentBoundEvent_455_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_25_K2Node_ComponentBoundEvent_469_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_25_K2Node_ComponentBoundEvent_469_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_33_K2Node_ComponentBoundEvent_569_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_33_K2Node_ComponentBoundEvent_569_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_24_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_186_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_186_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_35_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_35_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_34_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_34_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__AutoAimOnlyInTouchBtn_K2Node_ComponentBoundEvent_324_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__AutoAimOnlyInTouchBtn_K2Node_ComponentBoundEvent_324_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_384_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_384_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__AutoAimTypeBtn_K2Node_ComponentBoundEvent_841_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__AutoAimTypeBtn_K2Node_ComponentBoundEvent_841_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_1138_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_1138_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_38_K2Node_ComponentBoundEvent_880_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_38_K2Node_ComponentBoundEvent_880_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_AILocation_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_AILocation_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_PlayerLocation_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_PlayerLocation_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_CircleTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_CircleTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_CircleCDTime_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_CircleCDTime_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_GetPlayer_K2Node_ComponentBoundEvent_665_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_GetPlayer_K2Node_ComponentBoundEvent_665_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_GetVehicleHealth_K2Node_ComponentBoundEvent_1222_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_GetVehicleHealth_K2Node_ComponentBoundEvent_1222_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_Result_K2Node_ComponentBoundEvent_1691_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_Result_K2Node_ComponentBoundEvent_1691_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_OpenMapLocation_K2Node_ComponentBoundEvent_2139_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_OpenMapLocation_K2Node_ComponentBoundEvent_2139_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_37_K2Node_ComponentBoundEvent_644_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_37_K2Node_ComponentBoundEvent_644_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_SpawnVehicle_K2Node_ComponentBoundEvent_548_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_SpawnVehicle_K2Node_ComponentBoundEvent_548_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_SetHealth_K2Node_ComponentBoundEvent_831_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_SetHealth_K2Node_ComponentBoundEvent_831_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_40_K2Node_ComponentBoundEvent_286_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_40_K2Node_ComponentBoundEvent_286_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_42_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_379_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_41_K2Node_ComponentBoundEvent_379_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_44_K2Node_ComponentBoundEvent_488_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_44_K2Node_ComponentBoundEvent_488_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_513_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_46_K2Node_ComponentBoundEvent_513_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_47_K2Node_ComponentBoundEvent_626_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_47_K2Node_ComponentBoundEvent_626_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Tab5Button_K2Node_ComponentBoundEvent_1531_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Tab5Button_K2Node_ComponentBoundEvent_1531_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_48_K2Node_ComponentBoundEvent_202_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_48_K2Node_ComponentBoundEvent_202_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_50_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_50_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_49_K2Node_ComponentBoundEvent_517_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_49_K2Node_ComponentBoundEvent_517_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_51_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_51_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_53_K2Node_ComponentBoundEvent_543_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_53_K2Node_ComponentBoundEvent_543_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_52_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_52_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_219_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_54_K2Node_ComponentBoundEvent_219_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__BtnDebugVehicle_K2Node_ComponentBoundEvent_348_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__BtnDebugVehicle_K2Node_ComponentBoundEvent_348_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_EarlyZ_K2Node_ComponentBoundEvent_3261_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_EarlyZ_K2Node_ComponentBoundEvent_3261_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_56_K2Node_ComponentBoundEvent_4316_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_56_K2Node_ComponentBoundEvent_4316_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.BndEvt__Button_LowFrame_K2Node_ComponentBoundEvent_1185_OnButtonClickedEvent__DelegateSignature
struct UGMUI_C_BndEvt__Button_LowFrame_K2Node_ComponentBoundEvent_1185_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GMUI.GMUI_C.ExecuteUbergraph_GMUI
struct UGMUI_C_ExecuteUbergraph_GMUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
