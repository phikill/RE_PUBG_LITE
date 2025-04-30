
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

// Function NewEntireMap.NewEntireMap_C.GetMapCenter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InAligX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InAligY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutAligX                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutAligY                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::GetMapCenter(float InAligX, float InAligY, float* OutAligX, float* OutAligY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GetMapCenter");

	UNewEntireMap_C_GetMapCenter_Params params;
	params.InAligX = InAligX;
	params.InAligY = InAligY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAligX != nullptr)
		*OutAligX = params.OutAligX;
	if (OutAligY != nullptr)
		*OutAligY = params.OutAligY;
}


// Function NewEntireMap.NewEntireMap_C.InterpolateZoomInOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::InterpolateZoomInOut(const struct FGeometry& MyGeometry, float InDeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.InterpolateZoomInOut");

	UNewEntireMap_C_InterpolateZoomInOut_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.RemoveKeyFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::RemoveKeyFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.RemoveKeyFocus");

	UNewEntireMap_C_RemoveKeyFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.SetKeyFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::SetKeyFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetKeyFocus");

	UNewEntireMap_C_SetKeyFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.HideAirplane
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::HideAirplane()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HideAirplane");

	UNewEntireMap_C_HideAirplane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.ShowAirplane
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::ShowAirplane()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ShowAirplane");

	UNewEntireMap_C_ShowAirplane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.ReCalMapInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapRealTimeInfo        RealTimeInfo                   (Parm, OutParm)

void UNewEntireMap_C::ReCalMapInfo(struct FMapRealTimeInfo* RealTimeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ReCalMapInfo");

	UNewEntireMap_C_ReCalMapInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RealTimeInfo != nullptr)
		*RealTimeInfo = params.RealTimeInfo;
}


// Function NewEntireMap.NewEntireMap_C.HidePlaneImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::HidePlaneImage(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HidePlaneImage");

	UNewEntireMap_C_HidePlaneImage_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.HideSelfInfoCanvas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::HideSelfInfoCanvas(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HideSelfInfoCanvas");

	UNewEntireMap_C_HideSelfInfoCanvas_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.HidePlayerInfoCanvasByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::HidePlayerInfoCanvasByIndex(bool isShow, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HidePlayerInfoCanvasByIndex");

	UNewEntireMap_C_HidePlayerInfoCanvasByIndex_Params params;
	params.isShow = isShow;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.TickCircle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::TickCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.TickCircle");

	UNewEntireMap_C_TickCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.UpdateLastCircle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::UpdateLastCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.UpdateLastCircle");

	UNewEntireMap_C_UpdateLastCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.HandleLastCircle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LastCircle                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNewEntireMap_C::HandleLastCircle(const struct FVector& LastCircle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HandleLastCircle");

	UNewEntireMap_C_HandleLastCircle_Params params;
	params.LastCircle = LastCircle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.MapInfoUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::MapInfoUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.MapInfoUpdate");

	UNewEntireMap_C_MapInfoUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.WheelEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UNewEntireMap_C::WheelEvent(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.WheelEvent");

	UNewEntireMap_C_WheelEvent_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.SetMapCenterPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::SetMapCenterPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetMapCenterPos");

	UNewEntireMap_C_SetMapCenterPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.MoveToSelfPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::MoveToSelfPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.MoveToSelfPosition");

	UNewEntireMap_C_MoveToSelfPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.SetMarkerAtCurrentPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::SetMarkerAtCurrentPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetMarkerAtCurrentPosition");

	UNewEntireMap_C_SetMarkerAtCurrentPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.IsLocalPlayerIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::IsLocalPlayerIndex(int InIndex, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.IsLocalPlayerIndex");

	UNewEntireMap_C_IsLocalPlayerIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function NewEntireMap.NewEntireMap_C.HideMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::HideMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HideMarker");

	UNewEntireMap_C_HideMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.On_Button_Player01MarkInMap_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UNewEntireMap_C::On_Button_Player01MarkInMap_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.On_Button_Player01MarkInMap_MouseButtonDown_1");

	UNewEntireMap_C_On_Button_Player01MarkInMap_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function NewEntireMap.NewEntireMap_C.ClearAllMark
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::ClearAllMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ClearAllMark");

	UNewEntireMap_C_ClearAllMark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.OnCharacterStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Teammate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ExtraPlayerLiveState           LiveState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::OnCharacterStateChange(class APawn* Teammate, ExtraPlayerLiveState LiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.OnCharacterStateChange");

	UNewEntireMap_C_OnCharacterStateChange_Params params;
	params.Teammate = Teammate;
	params.LiveState = LiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.HideTeammateDeadIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeammateIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::HideTeammateDeadIcon(int TeammateIndex, bool bIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HideTeammateDeadIcon");

	UNewEntireMap_C_HideTeammateDeadIcon_Params params;
	params.TeammateIndex = TeammateIndex;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.HideSelfDeadIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::HideSelfDeadIcon(bool bIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HideSelfDeadIcon");

	UNewEntireMap_C_HideSelfDeadIcon_Params params;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.UpdateLastDriveVehicleIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::UpdateLastDriveVehicleIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.UpdateLastDriveVehicleIcon");

	UNewEntireMap_C_UpdateLastDriveVehicleIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.UpdateAirplaneRoute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Stop                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsDraw                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::UpdateAirplaneRoute(const struct FVector& Start, const struct FVector& Stop, bool IsDraw)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.UpdateAirplaneRoute");

	UNewEntireMap_C_UpdateAirplaneRoute_Params params;
	params.Start = Start;
	params.Stop = Stop;
	params.IsDraw = IsDraw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.ShowFriendsDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::ShowFriendsDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ShowFriendsDistance");

	UNewEntireMap_C_ShowFriendsDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.MarkPoint2RealLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InVec                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UNewEntireMap_C::MarkPoint2RealLocation(const struct FVector2D& InVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.MarkPoint2RealLocation");

	UNewEntireMap_C_MarkPoint2RealLocation_Params params;
	params.InVec = InVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewEntireMap.NewEntireMap_C.CaclMarkDir
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MarkPoint                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::CaclMarkDir(const struct FVector2D& MarkPoint, int* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.CaclMarkDir");

	UNewEntireMap_C_CaclMarkDir_Params params;
	params.MarkPoint = MarkPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function NewEntireMap.NewEntireMap_C.ShowMarkerDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::ShowMarkerDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ShowMarkerDistance");

	UNewEntireMap_C_ShowMarkerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.RefreshTeammateIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::RefreshTeammateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.RefreshTeammateIcon");

	UNewEntireMap_C_RefreshTeammateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.SetSelfInfoAndColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerState*     playState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::SetSelfInfoAndColor(class ASTExtraPlayerState* playState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetSelfInfoAndColor");

	UNewEntireMap_C_SetSelfInfoAndColor_Params params;
	params.playState = playState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.MakeMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MarkAligment                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNewEntireMap_C::MakeMarker(const struct FVector2D& MarkAligment)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.MakeMarker");

	UNewEntireMap_C_MakeMarker_Params params;
	params.MarkAligment = MarkAligment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.ShowMarkerLocationText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Vector                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNewEntireMap_C::ShowMarkerLocationText(const struct FVector2D& Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ShowMarkerLocationText");

	UNewEntireMap_C_ShowMarkerLocationText_Params params;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.GMShowMarkerLocation
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::GMShowMarkerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GMShowMarkerLocation");

	UNewEntireMap_C_GMShowMarkerLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.Reconnect_ResetUIByPlayerControllerState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.Reconnect_ResetUIByPlayerControllerState");

	UNewEntireMap_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.SetMateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTextBlock*              LabName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::SetMateName(const struct FString& PlayerName, class UTextBlock* LabName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetMateName");

	UNewEntireMap_C_SetMateName_Params params;
	params.PlayerName = PlayerName;
	params.LabName = LabName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.SetMateColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  TargetImg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::SetMateColor(class UImage* TargetImg, int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetMateColor");

	UNewEntireMap_C_SetMateColor_Params params;
	params.TargetImg = TargetImg;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.SetMateNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  PlayerImg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::SetMateNum(class UImage* PlayerImg, int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetMateNum");

	UNewEntireMap_C_SetMateNum_Params params;
	params.PlayerImg = PlayerImg;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.HandleReconnectInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReConnectGameStateInfo ReConnectInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UNewEntireMap_C::HandleReconnectInfo(const struct FReConnectGameStateInfo& ReConnectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HandleReconnectInfo");

	UNewEntireMap_C_HandleReconnectInfo_Params params;
	params.ReConnectInfo = ReConnectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.SetPlayerIdxAndColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::SetPlayerIdxAndColor(int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetPlayerIdxAndColor");

	UNewEntireMap_C_SetPlayerIdxAndColor_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.GetPlayerColorByIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UNewEntireMap_C::GetPlayerColorByIndex(int Index, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GetPlayerColorByIndex");

	UNewEntireMap_C_GetPlayerColorByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function NewEntireMap.NewEntireMap_C.GetTeamMateListFromPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ASTExtraPlayerState*> TeammateList                   (Parm, OutParm, ZeroConstructor)

void UNewEntireMap_C::GetTeamMateListFromPlayerState(TArray<class ASTExtraPlayerState*>* TeammateList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GetTeamMateListFromPlayerState");

	UNewEntireMap_C_GetTeamMateListFromPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeammateList != nullptr)
		*TeammateList = params.TeammateList;
}


// Function NewEntireMap.NewEntireMap_C.GetSelfMarkImageInRight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                  NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::GetSelfMarkImageInRight(class UImage** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GetSelfMarkImageInRight");

	UNewEntireMap_C_GetSelfMarkImageInRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function NewEntireMap.NewEntireMap_C.RepositionMapMark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChangeIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::RepositionMapMark(int ChangeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.RepositionMapMark");

	UNewEntireMap_C_RepositionMapMark_Params params;
	params.ChangeIndex = ChangeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BindTeamMapMarkDelegate
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::BindTeamMapMarkDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BindTeamMapMarkDelegate");

	UNewEntireMap_C_BindTeamMapMarkDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.SetTeamMateNameInMap
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::SetTeamMateNameInMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetTeamMateNameInMap");

	UNewEntireMap_C_SetTeamMateNameInMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.GetTeamMateBySerialNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TeammateIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::GetTeamMateBySerialNumber(int TeammateIndex, int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GetTeamMateBySerialNumber");

	UNewEntireMap_C_GetTeamMateBySerialNumber_Params params;
	params.TeammateIndex = TeammateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function NewEntireMap.NewEntireMap_C.SetTeamLocAndRot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASTExtraPlayerState*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNewEntireMap_C::SetTeamLocAndRot(TArray<class ASTExtraPlayerState*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetTeamLocAndRot");

	UNewEntireMap_C_SetTeamLocAndRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NewEntireMap.NewEntireMap_C.SetTeamInfoName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::SetTeamInfoName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.SetTeamInfoName");

	UNewEntireMap_C_SetTeamInfoName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.InitTeamMateUIArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::InitTeamMateUIArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.InitTeamMateUIArray");

	UNewEntireMap_C_InitTeamMateUIArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.GetSelfMarkerGrid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*            SelfMarker2                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::GetSelfMarkerGrid(class UCanvasPanel** SelfMarker2)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GetSelfMarkerGrid");

	UNewEntireMap_C_GetSelfMarkerGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelfMarker2 != nullptr)
		*SelfMarker2 = params.SelfMarker2;
}


// Function NewEntireMap.NewEntireMap_C.GetSelfImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                  SelfMarker                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::GetSelfImage(class UImage** SelfMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GetSelfImage");

	UNewEntireMap_C_GetSelfImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelfMarker != nullptr)
		*SelfMarker = params.SelfMarker;
}


// Function NewEntireMap.NewEntireMap_C.RepositionSelfMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::RepositionSelfMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.RepositionSelfMarker");

	UNewEntireMap_C_RepositionSelfMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.GetObjectAligInCurMapSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          AligX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AligY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::GetObjectAligInCurMapSize(const struct FVector2D& Pos, float* AligX, float* AligY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GetObjectAligInCurMapSize");

	UNewEntireMap_C_GetObjectAligInCurMapSize_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AligX != nullptr)
		*AligX = params.AligX;
	if (AligY != nullptr)
		*AligY = params.AligY;
}


// Function NewEntireMap.NewEntireMap_C.ClampAlig
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxAlig                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinAlig                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::ClampAlig(float MaxAlig, float MinAlig)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ClampAlig");

	UNewEntireMap_C_ClampAlig_Params params;
	params.MaxAlig = MaxAlig;
	params.MinAlig = MinAlig;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.GetMapMaxAligByMapSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               MapSize                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MinAlig                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxAlig                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::GetMapMaxAligByMapSize(const struct FVector2D& MapSize, float* MinAlig, float* MaxAlig)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GetMapMaxAligByMapSize");

	UNewEntireMap_C_GetMapMaxAligByMapSize_Params params;
	params.MapSize = MapSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinAlig != nullptr)
		*MinAlig = params.MinAlig;
	if (MaxAlig != nullptr)
		*MaxAlig = params.MaxAlig;
}


// Function NewEntireMap.NewEntireMap_C.HandleMapMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MoveOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNewEntireMap_C::HandleMapMove(const struct FVector2D& MoveOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HandleMapMove");

	UNewEntireMap_C_HandleMapMove_Params params;
	params.MoveOffset = MoveOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.ChangeMapPivot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AligX                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AligY                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::ChangeMapPivot(float AligX, float AligY)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ChangeMapPivot");

	UNewEntireMap_C_ChangeMapPivot_Params params;
	params.AligX = AligX;
	params.AligY = AligY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.RepositionMarkerAndPin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::RepositionMarkerAndPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.RepositionMarkerAndPin");

	UNewEntireMap_C_RepositionMarkerAndPin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.ChangeMapSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNewEntireMap_C::ChangeMapSize(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ChangeMapSize");

	UNewEntireMap_C_ChangeMapSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.HandleAirAttackBroadcast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAirAttackInfo>    AttackMsg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Wave                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::HandleAirAttackBroadcast(TEnumAsByte<EAirAttackInfo> AttackMsg, int Wave)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HandleAirAttackBroadcast");

	UNewEntireMap_C_HandleAirAttackBroadcast_Params params;
	params.AttackMsg = AttackMsg;
	params.Wave = Wave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNewEntireMap_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.OnPaint");

	UNewEntireMap_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function NewEntireMap.NewEntireMap_C.MapVectorToWorldVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MapVector                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               WORLDMAP                       (Parm, OutParm, IsPlainOldData)

void UNewEntireMap_C::MapVectorToWorldVector(const struct FVector2D& MapVector, struct FVector2D* WORLDMAP)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.MapVectorToWorldVector");

	UNewEntireMap_C_MapVectorToWorldVector_Params params;
	params.MapVector = MapVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WORLDMAP != nullptr)
		*WORLDMAP = params.WORLDMAP;
}


// Function NewEntireMap.NewEntireMap_C.GetMarkerToWorldVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewParam                       (Parm, OutParm, IsPlainOldData)

void UNewEntireMap_C::GetMarkerToWorldVector(struct FVector* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.GetMarkerToWorldVector");

	UNewEntireMap_C_GetMarkerToWorldVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_286_MoveMap__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector2D               Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNewEntireMap_C::BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_286_MoveMap__DelegateSignature(const struct FVector2D& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_286_MoveMap__DelegateSignature");

	UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_286_MoveMap__DelegateSignature_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_54_SetMarker__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNewEntireMap_C::BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_54_SetMarker__DelegateSignature(const struct FVector2D& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_54_SetMarker__DelegateSignature");

	UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_54_SetMarker__DelegateSignature_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_DelMarkIcon_K2Node_ComponentBoundEvent_440_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__Button_DelMarkIcon_K2Node_ComponentBoundEvent_440_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__Button_DelMarkIcon_K2Node_ComponentBoundEvent_440_OnButtonClickedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__Button_DelMarkIcon_K2Node_ComponentBoundEvent_440_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_SelfMark_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__Button_SelfMark_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__Button_SelfMark_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__Button_SelfMark_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_MyMark_K2Node_ComponentBoundEvent_908_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__Button_MyMark_K2Node_ComponentBoundEvent_908_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__Button_MyMark_K2Node_ComponentBoundEvent_908_OnButtonClickedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__Button_MyMark_K2Node_ComponentBoundEvent_908_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.InitPlayerState
// (Public, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::InitPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.InitPlayerState");

	UNewEntireMap_C_InitPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_203_ScaleMap__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          ScaleValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_203_ScaleMap__DelegateSignature(float ScaleValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_203_ScaleMap__DelegateSignature");

	UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_203_ScaleMap__DelegateSignature_Params params;
	params.ScaleValue = ScaleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.ReceiveAirAttackBroadcast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAirAttackInfo>    airattacktype                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            waveindex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::ReceiveAirAttackBroadcast(TEnumAsByte<EAirAttackInfo> airattacktype, int waveindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ReceiveAirAttackBroadcast");

	UNewEntireMap_C_ReceiveAirAttackBroadcast_Params params;
	params.airattacktype = airattacktype;
	params.waveindex = waveindex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UNewEntireMap_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ReceivedInitWidget");

	UNewEntireMap_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.RedrawMap
// (BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::RedrawMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.RedrawMap");

	UNewEntireMap_C_RedrawMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.ReConnectGameStateInfoNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReConnectGameStateInfo ReConnectInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UNewEntireMap_C::ReConnectGameStateInfoNotify(const struct FReConnectGameStateInfo& ReConnectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ReConnectGameStateInfoNotify");

	UNewEntireMap_C_ReConnectGameStateInfoNotify_Params params;
	params.ReConnectInfo = ReConnectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.Tick");

	UNewEntireMap_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonPressedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_98_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_98_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_98_OnButtonReleasedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_98_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_OperateEnd__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_OperateEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_OperateEnd__DelegateSignature");

	UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_OperateEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_60_OperateBegin__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_60_OperateBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_60_OperateBegin__DelegateSignature");

	UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_60_OperateBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.OnPlayerTeammateStateChange
// (BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::OnPlayerTeammateStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.OnPlayerTeammateStateChange");

	UNewEntireMap_C_OnPlayerTeammateStateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.InitMapStandardPoint
// (BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::InitMapStandardPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.InitMapStandardPoint");

	UNewEntireMap_C_InitMapStandardPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.OnCharacterStateChangeDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ExtraPlayerLiveState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::OnCharacterStateChangeDelegate(ExtraPlayerLiveState State, class ACharacter* OwnerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.OnCharacterStateChangeDelegate");

	UNewEntireMap_C_OnCharacterStateChangeDelegate_Params params;
	params.State = State;
	params.OwnerCharacter = OwnerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__MinimizeHelpButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewEntireMap_C::BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__RestoreHelpButton_K2Node_ComponentBoundEvent_113_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.PreConstruct");

	UNewEntireMap_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.UpdatePlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ExtraPlayerLiveState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::UpdatePlayerState(ExtraPlayerLiveState State, class ACharacter* OwnerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.UpdatePlayerState");

	UNewEntireMap_C_UpdatePlayerState_Params params;
	params.State = State;
	params.OwnerCharacter = OwnerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_WheelEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UNewEntireMap_C::BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_WheelEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_WheelEvent__DelegateSignature");

	UNewEntireMap_C_BndEvt__MapCircleAndLineBlackboard_K2Node_ComponentBoundEvent_36_WheelEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.HideDeadIcon
// (BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::HideDeadIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.HideDeadIcon");

	UNewEntireMap_C_HideDeadIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.OnPlayer04MarkerRightClicked
// (BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::OnPlayer04MarkerRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.OnPlayer04MarkerRightClicked");

	UNewEntireMap_C_OnPlayer04MarkerRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.OnPlayer03MarkerRightClicked
// (BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::OnPlayer03MarkerRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.OnPlayer03MarkerRightClicked");

	UNewEntireMap_C_OnPlayer03MarkerRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.OnPlayer02MarkerRightClicked
// (BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::OnPlayer02MarkerRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.OnPlayer02MarkerRightClicked");

	UNewEntireMap_C_OnPlayer02MarkerRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.OnPlayer01MarkerRightClicked
// (BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::OnPlayer01MarkerRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.OnPlayer01MarkerRightClicked");

	UNewEntireMap_C_OnPlayer01MarkerRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.ExecuteUbergraph_NewEntireMap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewEntireMap_C::ExecuteUbergraph_NewEntireMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.ExecuteUbergraph_NewEntireMap");

	UNewEntireMap_C_ExecuteUbergraph_NewEntireMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntireMap.NewEntireMap_C.MarkerClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNewEntireMap_C::MarkerClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntireMap.NewEntireMap_C.MarkerClick__DelegateSignature");

	UNewEntireMap_C_MarkerClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
