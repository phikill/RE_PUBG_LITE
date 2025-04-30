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

// Function PopupWidget.PopupWidget_C.Tick
struct UPopupWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupWidget.PopupWidget_C.Construct
struct UPopupWidget_C_Construct_Params
{
};

// Function PopupWidget.PopupWidget_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPopupWidget_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidget.PopupWidget_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UPopupWidget_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidget.PopupWidget_C.SetPopup
struct UPopupWidget_C_SetPopup_Params
{
	EPopupStyle                                        PopupStyle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget
struct UPopupWidget_C_ExecuteUbergraph_PopupWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupWidget.PopupWidget_C.ButtonClickDispatcher__DelegateSignature
struct UPopupWidget_C_ButtonClickDispatcher__DelegateSignature_Params
{
	EPopupButtonID                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
