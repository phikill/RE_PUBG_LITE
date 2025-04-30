
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMapCircleAndLineBlackboard_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseWheel");

	UMapCircleAndLineBlackboard_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.UIToWorldPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InPos                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               OutPos                         (Parm, OutParm, IsPlainOldData)

void UMapCircleAndLineBlackboard_C::UIToWorldPosition(const struct FVector2D& InPos, struct FVector2D* OutPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.UIToWorldPosition");

	UMapCircleAndLineBlackboard_C_UIToWorldPosition_Params params;
	params.InPos = InPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPos != nullptr)
		*OutPos = params.OutPos;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMapCircleAndLineBlackboard_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseMove");

	UMapCircleAndLineBlackboard_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMapCircleAndLineBlackboard_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseButtonUp");

	UMapCircleAndLineBlackboard_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMapCircleAndLineBlackboard_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseButtonDown");

	UMapCircleAndLineBlackboard_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.DrawPlaneRoute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDraw                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               End                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MiniMapImageExtent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimapWindowExtent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMapCircleAndLineBlackboard_C::DrawPlaneRoute(bool IsDraw, const struct FVector2D& Start, const struct FVector2D& End, float MiniMapImageExtent, float MinimapWindowExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.DrawPlaneRoute");

	UMapCircleAndLineBlackboard_C_DrawPlaneRoute_Params params;
	params.IsDraw = IsDraw;
	params.Start = Start;
	params.End = End;
	params.MiniMapImageExtent = MiniMapImageExtent;
	params.MinimapWindowExtent = MinimapWindowExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.DrawSelfMarkGuideLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDraw                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 LevelLandScapeCenter           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          CorrectLevelToMapScale         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Aligment                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          LevelLanscapeExtent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMapCircleAndLineBlackboard_C::DrawSelfMarkGuideLine(bool bIsDraw, const struct FLinearColor& LineColor, const struct FVector& LevelLandScapeCenter, float CorrectLevelToMapScale, const struct FVector2D& Aligment, float LevelLanscapeExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.DrawSelfMarkGuideLine");

	UMapCircleAndLineBlackboard_C_DrawSelfMarkGuideLine_Params params;
	params.bIsDraw = bIsDraw;
	params.LineColor = LineColor;
	params.LevelLandScapeCenter = LevelLandScapeCenter;
	params.CorrectLevelToMapScale = CorrectLevelToMapScale;
	params.Aligment = Aligment;
	params.LevelLanscapeExtent = LevelLanscapeExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.GetAnotherFingerIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AnotherIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMapCircleAndLineBlackboard_C::GetAnotherFingerIndex(int CurIndex, int* AnotherIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.GetAnotherFingerIndex");

	UMapCircleAndLineBlackboard_C_GetAnotherFingerIndex_Params params;
	params.CurIndex = CurIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnotherIndex != nullptr)
		*AnotherIndex = params.AnotherIndex;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.RemoveArrayItemByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMapCircleAndLineBlackboard_C::RemoveArrayItemByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.RemoveArrayItemByIndex");

	UMapCircleAndLineBlackboard_C_RemoveArrayItemByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.GetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASTExtraPlayerController* NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMapCircleAndLineBlackboard_C::GetPlayerController(class ASTExtraPlayerController** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.GetPlayerController");

	UMapCircleAndLineBlackboard_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMapCircleAndLineBlackboard_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchEnded");

	UMapCircleAndLineBlackboard_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMapCircleAndLineBlackboard_C::OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchMoved");

	UMapCircleAndLineBlackboard_C_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           GestureEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMapCircleAndLineBlackboard_C::OnTouchGesture(struct FGeometry* MyGeometry, struct FPointerEvent* GestureEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchGesture");

	UMapCircleAndLineBlackboard_C_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GestureEvent != nullptr)
		*GestureEvent = params.GestureEvent;

	return params.ReturnValue;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMapCircleAndLineBlackboard_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchStarted");

	UMapCircleAndLineBlackboard_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMapCircleAndLineBlackboard_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnPaint");

	UMapCircleAndLineBlackboard_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMapCircleAndLineBlackboard_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseLeave");

	UMapCircleAndLineBlackboard_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UMapCircleAndLineBlackboard_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ReceivedInitWidget");

	UMapCircleAndLineBlackboard_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ExecuteUbergraph_MapCircleAndLineBlackboard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMapCircleAndLineBlackboard_C::ExecuteUbergraph_MapCircleAndLineBlackboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ExecuteUbergraph_MapCircleAndLineBlackboard");

	UMapCircleAndLineBlackboard_C_ExecuteUbergraph_MapCircleAndLineBlackboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.WheelEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapCircleAndLineBlackboard_C::WheelEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.WheelEvent__DelegateSignature");

	UMapCircleAndLineBlackboard_C_WheelEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OperateBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapCircleAndLineBlackboard_C::OperateBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OperateBegin__DelegateSignature");

	UMapCircleAndLineBlackboard_C_OperateBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OperateEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapCircleAndLineBlackboard_C::OperateEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OperateEnd__DelegateSignature");

	UMapCircleAndLineBlackboard_C_OperateEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ScaleMap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScaleValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMapCircleAndLineBlackboard_C::ScaleMap__DelegateSignature(float ScaleValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ScaleMap__DelegateSignature");

	UMapCircleAndLineBlackboard_C_ScaleMap__DelegateSignature_Params params;
	params.ScaleValue = ScaleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.SetMarker__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMapCircleAndLineBlackboard_C::SetMarker__DelegateSignature(const struct FVector2D& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.SetMarker__DelegateSignature");

	UMapCircleAndLineBlackboard_C_SetMarker__DelegateSignature_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.MoveMap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMapCircleAndLineBlackboard_C::MoveMap__DelegateSignature(const struct FVector2D& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.MoveMap__DelegateSignature");

	UMapCircleAndLineBlackboard_C_MoveMap__DelegateSignature_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
