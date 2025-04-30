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

// Function QualitySettingsWidget.QualitySettingsWidget_C.IsChanged
struct UQualitySettingsWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetbIsEnabled_1
struct UQualitySettingsWidget_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.SettingDefault
struct UQualitySettingsWidget_C_SettingDefault_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.UpdateOptionStringByUserSetting
struct UQualitySettingsWidget_C_UpdateOptionStringByUserSetting_Params
{
	EQualityType                                       Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.UpdateMainOptionStringByComboBox
struct UQualitySettingsWidget_C_UpdateMainOptionStringByComboBox_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetComboBox
struct UQualitySettingsWidget_C_GetComboBox_Params
{
	EQualityType                                       Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UQualityComboBox_C*                          ComboBox;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.SetQualityLevelByComboBox
struct UQualitySettingsWidget_C_SetQualityLevelByComboBox_Params
{
	EQualityType                                       QualityType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetQualityLevelByComboBox
struct UQualitySettingsWidget_C_GetQualityLevelByComboBox_Params
{
	EQualityType                                       QualityType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                QualityLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetScreenScaleValue_Slider
struct UQualitySettingsWidget_C_GetScreenScaleValue_Slider_Params
{
	float                                              ScreenScale;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.InitQualitySettingsWidget
struct UQualitySettingsWidget_C_InitQualitySettingsWidget_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.Construct
struct UQualitySettingsWidget_C_Construct_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__MainQualityComboBox_K2Node_ComponentBoundEvent_56_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__MainQualityComboBox_K2Node_ComponentBoundEvent_56_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_57_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_57_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__PostProcessComboBox_K2Node_ComponentBoundEvent_60_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__PostProcessComboBox_K2Node_ComponentBoundEvent_60_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_63_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_63_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__TextureComboBox_K2Node_ComponentBoundEvent_67_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__TextureComboBox_K2Node_ComponentBoundEvent_67_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__EffectComboBox_K2Node_ComponentBoundEvent_72_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__EffectComboBox_K2Node_ComponentBoundEvent_72_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__FoliageComboBox_K2Node_ComponentBoundEvent_78_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__FoliageComboBox_K2Node_ComponentBoundEvent_78_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_85_OnSelectionChanged__DelegateSignature
struct UQualitySettingsWidget_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_85_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.OnReset
struct UQualitySettingsWidget_C_OnReset_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.OnApply
struct UQualitySettingsWidget_C_OnApply_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.OnDefault
struct UQualitySettingsWidget_C_OnDefault_Params
{
};

// Function QualitySettingsWidget.QualitySettingsWidget_C.ExecuteUbergraph_QualitySettingsWidget
struct UQualitySettingsWidget_C_ExecuteUbergraph_QualitySettingsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
