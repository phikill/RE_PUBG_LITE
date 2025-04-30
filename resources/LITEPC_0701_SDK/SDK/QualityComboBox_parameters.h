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

// Function QualityComboBox.QualityComboBox_C.Get_ComboBox_bIsEnabled_1
struct UQualityComboBox_C_Get_ComboBox_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QualityComboBox.QualityComboBox_C.GetDisplayTextByOption
struct UQualityComboBox_C_GetDisplayTextByOption_Params
{
	struct FText                                       DisplayText;                                              // (Parm, OutParm)
};

// Function QualityComboBox.QualityComboBox_C.On_ComboBox_GenerateWidget_1
struct UQualityComboBox_C_On_ComboBox_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QualityComboBox.QualityComboBox_C.RemoveOption
struct UQualityComboBox_C_RemoveOption_Params
{
	struct FString                                     Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function QualityComboBox.QualityComboBox_C.GetSelectedOption
struct UQualityComboBox_C_GetSelectedOption_Params
{
	struct FString                                     SelectedOption;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function QualityComboBox.QualityComboBox_C.SetSelectedOption
struct UQualityComboBox_C_SetSelectedOption_Params
{
	struct FString                                     Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function QualityComboBox.QualityComboBox_C.ClearOptions
struct UQualityComboBox_C_ClearOptions_Params
{
};

// Function QualityComboBox.QualityComboBox_C.AddOption
struct UQualityComboBox_C_AddOption_Params
{
	struct FString                                     OptionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       DisplayOptionName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function QualityComboBox.QualityComboBox_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UQualityComboBox_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualityComboBox.QualityComboBox_C.ExecuteUbergraph_QualityComboBox
struct UQualityComboBox_C_ExecuteUbergraph_QualityComboBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualityComboBox.QualityComboBox_C.OnSelectionChanged__DelegateSignature
struct UQualityComboBox_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
