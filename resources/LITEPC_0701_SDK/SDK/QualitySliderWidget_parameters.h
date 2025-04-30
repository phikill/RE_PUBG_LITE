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

// Function QualitySliderWidget.QualitySliderWidget_C.GetValueText
struct UQualitySliderWidget_C_GetValueText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.OnMouseButtonDown_1
struct UQualitySliderWidget_C_OnMouseButtonDown_1_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.ProcessKeyDown
struct UQualitySliderWidget_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.OnPrepass_1
struct UQualitySliderWidget_C_OnPrepass_1_Params
{
};

// Function QualitySliderWidget.QualitySliderWidget_C.SetValue
struct UQualitySliderWidget_C_SetValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySliderWidget.QualitySliderWidget_C.GetQualityName
struct UQualitySliderWidget_C_GetQualityName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.OnKeyDown
struct UQualitySliderWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.OnKeyUp
struct UQualitySliderWidget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.GetValueByRange
struct UQualitySliderWidget_C_GetValueByRange_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__RightButotn_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UQualitySliderWidget_C_BndEvt__RightButotn_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
struct UQualitySliderWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_55_OnEditableTextChangedEvent__DelegateSignature
struct UQualitySliderWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_55_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__QualitySlider_K2Node_ComponentBoundEvent_274_OnFloatValueChangedEvent__DelegateSignature
struct UQualitySliderWidget_C_BndEvt__QualitySlider_K2Node_ComponentBoundEvent_274_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySliderWidget.QualitySliderWidget_C.Destruct
struct UQualitySliderWidget_C_Destruct_Params
{
};

// Function QualitySliderWidget.QualitySliderWidget_C.ExecuteUbergraph_QualitySliderWidget
struct UQualitySliderWidget_C_ExecuteUbergraph_QualitySliderWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QualitySliderWidget.QualitySliderWidget_C.OnSliderValueChange__DelegateSignature
struct UQualitySliderWidget_C_OnSliderValueChange__DelegateSignature_Params
{
	float                                              ChangedValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
