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

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseWheel
struct UMapCircleAndLineBlackboard_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.UIToWorldPosition
struct UMapCircleAndLineBlackboard_C_UIToWorldPosition_Params
{
	struct FVector2D                                   InPos;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   OutPos;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseMove
struct UMapCircleAndLineBlackboard_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseButtonUp
struct UMapCircleAndLineBlackboard_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseButtonDown
struct UMapCircleAndLineBlackboard_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.DrawPlaneRoute
struct UMapCircleAndLineBlackboard_C_DrawPlaneRoute_Params
{
	bool                                               IsDraw;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MiniMapImageExtent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimapWindowExtent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.DrawSelfMarkGuideLine
struct UMapCircleAndLineBlackboard_C_DrawSelfMarkGuideLine_Params
{
	bool                                               bIsDraw;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     LevelLandScapeCenter;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              CorrectLevelToMapScale;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Aligment;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              LevelLanscapeExtent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.GetAnotherFingerIndex
struct UMapCircleAndLineBlackboard_C_GetAnotherFingerIndex_Params
{
	int                                                CurIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AnotherIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.RemoveArrayItemByIndex
struct UMapCircleAndLineBlackboard_C_RemoveArrayItemByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.GetPlayerController
struct UMapCircleAndLineBlackboard_C_GetPlayerController_Params
{
	class ASTExtraPlayerController*                    NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchEnded
struct UMapCircleAndLineBlackboard_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchMoved
struct UMapCircleAndLineBlackboard_C_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchGesture
struct UMapCircleAndLineBlackboard_C_OnTouchGesture_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               GestureEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchStarted
struct UMapCircleAndLineBlackboard_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnPaint
struct UMapCircleAndLineBlackboard_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseLeave
struct UMapCircleAndLineBlackboard_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ReceivedInitWidget
struct UMapCircleAndLineBlackboard_C_ReceivedInitWidget_Params
{
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ExecuteUbergraph_MapCircleAndLineBlackboard
struct UMapCircleAndLineBlackboard_C_ExecuteUbergraph_MapCircleAndLineBlackboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.WheelEvent__DelegateSignature
struct UMapCircleAndLineBlackboard_C_WheelEvent__DelegateSignature_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OperateBegin__DelegateSignature
struct UMapCircleAndLineBlackboard_C_OperateBegin__DelegateSignature_Params
{
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OperateEnd__DelegateSignature
struct UMapCircleAndLineBlackboard_C_OperateEnd__DelegateSignature_Params
{
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ScaleMap__DelegateSignature
struct UMapCircleAndLineBlackboard_C_ScaleMap__DelegateSignature_Params
{
	float                                              ScaleValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.SetMarker__DelegateSignature
struct UMapCircleAndLineBlackboard_C_SetMarker__DelegateSignature_Params
{
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.MoveMap__DelegateSignature
struct UMapCircleAndLineBlackboard_C_MoveMap__DelegateSignature_Params
{
	struct FVector2D                                   Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
