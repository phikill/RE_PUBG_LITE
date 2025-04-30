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

// Function TslCheckBox.TslCheckBox_C.OnMouseButtonDown_1
struct UTslCheckBox_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.Toggle
struct UTslCheckBox_C_Toggle_Params
{
};

// Function TslCheckBox.TslCheckBox_C.ProcessKeyDown
struct UTslCheckBox_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm)
};

// Function TslCheckBox.TslCheckBox_C.OnPrepass_1
struct UTslCheckBox_C_OnPrepass_1_Params
{
};

// Function TslCheckBox.TslCheckBox_C.GetBrush_1
struct UTslCheckBox_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.IsChecked
struct UTslCheckBox_C_IsChecked_Params
{
	bool                                               bChecked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.SetCheck
struct UTslCheckBox_C_SetCheck_Params
{
	bool                                               Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.GetDisplayName
struct UTslCheckBox_C_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.IsToggleKey
struct UTslCheckBox_C_IsToggleKey_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsToggle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.OnKeyDown
struct UTslCheckBox_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.OnKeyUp
struct UTslCheckBox_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.OnFocusReceived
struct UTslCheckBox_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UTslCheckBox_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function TslCheckBox.TslCheckBox_C.ExecuteUbergraph_TslCheckBox
struct UTslCheckBox_C_ExecuteUbergraph_TslCheckBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.OnCheckedSet__DelegateSignature
struct UTslCheckBox_C_OnCheckedSet__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
