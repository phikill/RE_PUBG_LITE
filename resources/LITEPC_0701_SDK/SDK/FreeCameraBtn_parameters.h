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

// Function FreeCameraBtn.FreeCameraBtn_C.UIMsg_ScopeChanged
struct UFreeCameraBtn_C_UIMsg_ScopeChanged_Params
{
};

// Function FreeCameraBtn.FreeCameraBtn_C.FreeCamBtn_UpdateIconPosition
struct UFreeCameraBtn_C_FreeCamBtn_UpdateIconPosition_Params
{
};

// Function FreeCameraBtn.FreeCameraBtn_C.OnTouchMoved
struct UFreeCameraBtn_C_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FreeCameraBtn.FreeCameraBtn_C.TouchStartLogic
struct UFreeCameraBtn_C_TouchStartLogic_Params
{
	TEnumAsByte<ETouchIndex>                           TouchIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FreeCameraBtn.FreeCameraBtn_C.UIInGameEvent_BackpackOpen_StopFreeLook
struct UFreeCameraBtn_C_UIInGameEvent_BackpackOpen_StopFreeLook_Params
{
};

// Function FreeCameraBtn.FreeCameraBtn_C.StopFreeCamera
struct UFreeCameraBtn_C_StopFreeCamera_Params
{
};

// Function FreeCameraBtn.FreeCameraBtn_C.SwitchCameraModeScope_Aim
struct UFreeCameraBtn_C_SwitchCameraModeScope_Aim_Params
{
};

// Function FreeCameraBtn.FreeCameraBtn_C.OnTouchEnded
struct UFreeCameraBtn_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FreeCameraBtn.FreeCameraBtn_C.OnTouchStarted
struct UFreeCameraBtn_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FreeCameraBtn.FreeCameraBtn_C.Tick
struct UFreeCameraBtn_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FreeCameraBtn.FreeCameraBtn_C.ReceivedInitWidget
struct UFreeCameraBtn_C_ReceivedInitWidget_Params
{
};

// Function FreeCameraBtn.FreeCameraBtn_C.CustomEvent_1
struct UFreeCameraBtn_C_CustomEvent_1_Params
{
};

// Function FreeCameraBtn.FreeCameraBtn_C.ExecuteUbergraph_FreeCameraBtn
struct UFreeCameraBtn_C_ExecuteUbergraph_FreeCameraBtn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
