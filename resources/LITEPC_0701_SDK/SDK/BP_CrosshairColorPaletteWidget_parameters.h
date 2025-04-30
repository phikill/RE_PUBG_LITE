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

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.OnCrosshairComboBoxChanged
struct UBP_CrosshairColorPaletteWidget_C_OnCrosshairComboBoxChanged_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.SetColorToComboBox
struct UBP_CrosshairColorPaletteWidget_C_SetColorToComboBox_Params
{
	struct FLinearColor                                NextComboBoxColor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.UpdateCrosshairColorUI
struct UBP_CrosshairColorPaletteWidget_C_UpdateCrosshairColorUI_Params
{
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.APPLY
struct UBP_CrosshairColorPaletteWidget_C_APPLY_Params
{
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.Init
struct UBP_CrosshairColorPaletteWidget_C_Init_Params
{
	class UPresetColorComboBoxWidget_C*                PresetColorComboBox;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.SetToDefault
struct UBP_CrosshairColorPaletteWidget_C_SetToDefault_Params
{
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.IsChanged
struct UBP_CrosshairColorPaletteWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.Construct
struct UBP_CrosshairColorPaletteWidget_C_Construct_Params
{
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__R_K2Node_ComponentBoundEvent_0_OnSliderValueChange__DelegateSignature
struct UBP_CrosshairColorPaletteWidget_C_BndEvt__R_K2Node_ComponentBoundEvent_0_OnSliderValueChange__DelegateSignature_Params
{
	float                                              ChangedValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__G_K2Node_ComponentBoundEvent_1_OnSliderValueChange__DelegateSignature
struct UBP_CrosshairColorPaletteWidget_C_BndEvt__G_K2Node_ComponentBoundEvent_1_OnSliderValueChange__DelegateSignature_Params
{
	float                                              ChangedValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__B_K2Node_ComponentBoundEvent_2_OnSliderValueChange__DelegateSignature
struct UBP_CrosshairColorPaletteWidget_C_BndEvt__B_K2Node_ComponentBoundEvent_2_OnSliderValueChange__DelegateSignature_Params
{
	float                                              ChangedValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.BndEvt__A_K2Node_ComponentBoundEvent_3_OnSliderValueChange__DelegateSignature
struct UBP_CrosshairColorPaletteWidget_C_BndEvt__A_K2Node_ComponentBoundEvent_3_OnSliderValueChange__DelegateSignature_Params
{
	float                                              ChangedValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrosshairColorPaletteWidget.BP_CrosshairColorPaletteWidget_C.ExecuteUbergraph_BP_CrosshairColorPaletteWidget
struct UBP_CrosshairColorPaletteWidget_C_ExecuteUbergraph_BP_CrosshairColorPaletteWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
