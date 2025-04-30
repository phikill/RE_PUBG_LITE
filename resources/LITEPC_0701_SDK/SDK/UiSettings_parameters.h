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

// Function UiSettings.UiSettings_C.ResetCrosshairColorComboBoxElements
struct UUiSettings_C_ResetCrosshairColorComboBoxElements_Params
{
};

// Function UiSettings.UiSettings_C.Get_CrosshairPalette_Visibility_2
struct UUiSettings_C_Get_CrosshairPalette_Visibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UiSettings.UiSettings_C.GetSelectUseCharacterCapture
struct UUiSettings_C_GetSelectUseCharacterCapture_Params
{
	bool                                               UseCharacterCapture;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UiSettings.UiSettings_C.ApplyByCurrentSelectedSettings
struct UUiSettings_C_ApplyByCurrentSelectedSettings_Params
{
};

// Function UiSettings.UiSettings_C.SetToDefault
struct UUiSettings_C_SetToDefault_Params
{
};

// Function UiSettings.UiSettings_C.InitUiSetting
struct UUiSettings_C_InitUiSetting_Params
{
};

// Function UiSettings.UiSettings_C.IsChanged
struct UUiSettings_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UiSettings.UiSettings_C.IsEnableApply
struct UUiSettings_C_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UiSettings.UiSettings_C.Construct
struct UUiSettings_C_Construct_Params
{
};

// Function UiSettings.UiSettings_C.OnDefault
struct UUiSettings_C_OnDefault_Params
{
};

// Function UiSettings.UiSettings_C.OnApply
struct UUiSettings_C_OnApply_Params
{
};

// Function UiSettings.UiSettings_C.BndEvt__CrosshairColorComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
struct UUiSettings_C_BndEvt__CrosshairColorComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UiSettings.UiSettings_C.ExecuteUbergraph_UiSettings
struct UUiSettings_C_ExecuteUbergraph_UiSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
