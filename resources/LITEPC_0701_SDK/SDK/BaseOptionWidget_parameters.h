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

// Function BaseOptionWidget.BaseOptionWidget_C.OnPrevOrNextFocusableWidget
struct UBaseOptionWidget_C_OnPrevOrNextFocusableWidget_Params
{
	bool                                               Next;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     FocusableWidget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseOptionWidget.BaseOptionWidget_C.GetCurrentFocusWidget
struct UBaseOptionWidget_C_GetCurrentFocusWidget_Params
{
	class UWidget*                                     FocusWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseOptionWidget.BaseOptionWidget_C.ProcessKeyUp
struct UBaseOptionWidget_C_ProcessKeyUp_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 EventReplay;                                              // (Parm, OutParm)
};

// Function BaseOptionWidget.BaseOptionWidget_C.ProcessKeyDown
struct UBaseOptionWidget_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 EventReply;                                               // (Parm, OutParm)
};

// Function BaseOptionWidget.BaseOptionWidget_C.OnKeyDown
struct UBaseOptionWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseOptionWidget.BaseOptionWidget_C.OnFocusReceived
struct UBaseOptionWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseOptionWidget.BaseOptionWidget_C.OnKeyUp
struct UBaseOptionWidget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
