
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

// Function NewMiniMap.NewMiniMap_C.ReCalMapInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapRealTimeInfo        Result                         (Parm, OutParm)

void UNewMiniMap_C::ReCalMapInfo(struct FMapRealTimeInfo* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ReCalMapInfo");

	UNewMiniMap_C_ReCalMapInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function NewMiniMap.NewMiniMap_C.HideSelfInfoCanvas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::HideSelfInfoCanvas(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HideSelfInfoCanvas");

	UNewMiniMap_C_HideSelfInfoCanvas_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HidePlayerInfoCanvasByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::HidePlayerInfoCanvasByIndex(bool isShow, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HidePlayerInfoCanvasByIndex");

	UNewMiniMap_C_HidePlayerInfoCanvasByIndex_Params params;
	params.isShow = isShow;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HideAirplaneImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::HideAirplaneImage(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HideAirplaneImage");

	UNewMiniMap_C_HideAirplaneImage_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.TickCircle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::TickCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.TickCircle");

	UNewMiniMap_C_TickCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.RedrawAirAttackArea
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::RedrawAirAttackArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.RedrawAirAttackArea");

	UNewMiniMap_C_RedrawAirAttackArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.RedrawAllMapMark
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::RedrawAllMapMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.RedrawAllMapMark");

	UNewMiniMap_C_RedrawAllMapMark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.Get4*4Scale
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MiniMapShow4*4Scale            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::Get4*4Scale(float* MiniMapShow4*4Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.Get4*4Scale");

	UNewMiniMap_C_Get4*4Scale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiniMapShow4*4Scale != nullptr)
		*MiniMapShow4*4Scale = params.MiniMapShow4*4Scale;
}


// Function NewMiniMap.NewMiniMap_C.RepositionItemOnMap
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::RepositionItemOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.RepositionItemOnMap");

	UNewMiniMap_C_RepositionItemOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.ChangeDynamicScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::ChangeDynamicScale(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ChangeDynamicScale");

	UNewMiniMap_C_ChangeDynamicScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.FindScaleFactorByVelocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleFactor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::FindScaleFactorByVelocity(float Velocity, float* ScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.FindScaleFactorByVelocity");

	UNewMiniMap_C_FindScaleFactorByVelocity_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScaleFactor != nullptr)
		*ScaleFactor = params.ScaleFactor;
}


// Function NewMiniMap.NewMiniMap_C.ReadDynamicScaleTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::ReadDynamicScaleTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ReadDynamicScaleTable");

	UNewMiniMap_C_ReadDynamicScaleTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.LerpDynamicScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSec                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::LerpDynamicScale(float DeltaSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.LerpDynamicScale");

	UNewMiniMap_C_LerpDynamicScale_Params params;
	params.DeltaSec = DeltaSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.TickDynamicScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSec                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::TickDynamicScale(float DeltaSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.TickDynamicScale");

	UNewMiniMap_C_TickDynamicScale_Params params;
	params.DeltaSec = DeltaSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HandleLastCircle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LastCircle                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNewMiniMap_C::HandleLastCircle(const struct FVector& LastCircle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HandleLastCircle");

	UNewMiniMap_C_HandleLastCircle_Params params;
	params.LastCircle = LastCircle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.OnCharacterStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ExtraPlayerLiveState           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::OnCharacterStateChange(class APawn* self2, ExtraPlayerLiveState InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.OnCharacterStateChange");

	UNewMiniMap_C_OnCharacterStateChange_Params params;
	params.self2 = self2;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HideTeammateDeadIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeammateIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::HideTeammateDeadIcon(int TeammateIndex, bool bIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HideTeammateDeadIcon");

	UNewMiniMap_C_HideTeammateDeadIcon_Params params;
	params.TeammateIndex = TeammateIndex;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HideSelfDeadIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::HideSelfDeadIcon(bool bIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HideSelfDeadIcon");

	UNewMiniMap_C_HideSelfDeadIcon_Params params;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HandleTeammateOutOfRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNewMiniMap_C::HandleTeammateOutOfRange(TArray<int>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HandleTeammateOutOfRange");

	UNewMiniMap_C_HandleTeammateOutOfRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function NewMiniMap.NewMiniMap_C.UpdateLastDriveVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::UpdateLastDriveVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.UpdateLastDriveVehicle");

	UNewMiniMap_C_UpdateLastDriveVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.UpdateAirplaneRoute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLoc                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndLoc                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsDraw                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::UpdateAirplaneRoute(const struct FVector& StartLoc, const struct FVector& EndLoc, bool IsDraw)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.UpdateAirplaneRoute");

	UNewMiniMap_C_UpdateAirplaneRoute_Params params;
	params.StartLoc = StartLoc;
	params.EndLoc = EndLoc;
	params.IsDraw = IsDraw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.SetSpectatorInfoAndColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerState*     PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::SetSpectatorInfoAndColor(class ASTExtraPlayerState* PS)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.SetSpectatorInfoAndColor");

	UNewMiniMap_C_SetSpectatorInfoAndColor_Params params;
	params.PS = PS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.RefreshLocalPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::RefreshLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.RefreshLocalPlayer");

	UNewMiniMap_C_RefreshLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.OnSpectatorChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::OnSpectatorChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.OnSpectatorChanged");

	UNewMiniMap_C_OnSpectatorChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.RefreshTeammateIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::RefreshTeammateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.RefreshTeammateIcon");

	UNewMiniMap_C_RefreshTeammateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.SetSelfInfoAndColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerState*     PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::SetSelfInfoAndColor(class ASTExtraPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.SetSelfInfoAndColor");

	UNewMiniMap_C_SetSelfInfoAndColor_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.ClearAllMark
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::ClearAllMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ClearAllMark");

	UNewMiniMap_C_ClearAllMark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.MiniMapAdjustLimtChange
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::MiniMapAdjustLimtChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.MiniMapAdjustLimtChange");

	UNewMiniMap_C_MiniMapAdjustLimtChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.RedrawSelfMark
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::RedrawSelfMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.RedrawSelfMark");

	UNewMiniMap_C_RedrawSelfMark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.Reconnect_ResetUIByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.Reconnect_ResetUIByPlayerControllerState");

	UNewMiniMap_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.SetMateColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  TargetImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::SetMateColor(int PlayerIdx, class UImage* TargetImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.SetMateColor");

	UNewMiniMap_C_SetMateColor_Params params;
	params.PlayerIdx = PlayerIdx;
	params.TargetImage = TargetImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.SetMateNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  NumImg                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIdx                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::SetMateNum(class UImage* NumImg, int PlayerIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.SetMateNum");

	UNewMiniMap_C_SetMateNum_Params params;
	params.NumImg = NumImg;
	params.PlayerIdx = PlayerIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.ShowMateNum
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::ShowMateNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ShowMateNum");

	UNewMiniMap_C_ShowMateNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HandleReconnectInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReConnectGameStateInfo Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UNewMiniMap_C::HandleReconnectInfo(const struct FReConnectGameStateInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HandleReconnectInfo");

	UNewMiniMap_C_HandleReconnectInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.ShowEnterMap
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::ShowEnterMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ShowEnterMap");

	UNewMiniMap_C_ShowEnterMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HideEnterMap
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::HideEnterMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HideEnterMap");

	UNewMiniMap_C_HideEnterMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.GetPlayerColorByIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UNewMiniMap_C::GetPlayerColorByIndex(int Index, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.GetPlayerColorByIndex");

	UNewMiniMap_C_GetPlayerColorByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function NewMiniMap.NewMiniMap_C.GetTeamMateListFromPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ExcludeSelf                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ASTExtraPlayerState*> TeammateList                   (Parm, OutParm, ZeroConstructor)

void UNewMiniMap_C::GetTeamMateListFromPlayerState(bool ExcludeSelf, TArray<class ASTExtraPlayerState*>* TeammateList)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.GetTeamMateListFromPlayerState");

	UNewMiniMap_C_GetTeamMateListFromPlayerState_Params params;
	params.ExcludeSelf = ExcludeSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeammateList != nullptr)
		*TeammateList = params.TeammateList;
}


// Function NewMiniMap.NewMiniMap_C.ShowTeamMateInfoGrid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASTExtraPlayerState*> TargetArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNewMiniMap_C::ShowTeamMateInfoGrid(TArray<class ASTExtraPlayerState*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ShowTeamMateInfoGrid");

	UNewMiniMap_C_ShowTeamMateInfoGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function NewMiniMap.NewMiniMap_C.InitUIWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::InitUIWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.InitUIWidget");

	UNewMiniMap_C_InitUIWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.RepositionMapMark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::RepositionMapMark(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.RepositionMapMark");

	UNewMiniMap_C_RepositionMapMark_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.BindTeamMapMarkDelegate
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::BindTeamMapMarkDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.BindTeamMapMarkDelegate");

	UNewMiniMap_C_BindTeamMapMarkDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.LoadMapByLevelName
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::LoadMapByLevelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.LoadMapByLevelName");

	UNewMiniMap_C_LoadMapByLevelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HandleAirAttackBroadcast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAirAttackInfo>    AttackMsg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Wave                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::HandleAirAttackBroadcast(TEnumAsByte<EAirAttackInfo> AttackMsg, int Wave)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HandleAirAttackBroadcast");

	UNewMiniMap_C_HandleAirAttackBroadcast_Params params;
	params.AttackMsg = AttackMsg;
	params.Wave = Wave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNewMiniMap_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.OnPaint");

	UNewMiniMap_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function NewMiniMap.NewMiniMap_C.SetPlayerMarkerRotation
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::SetPlayerMarkerRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.SetPlayerMarkerRotation");

	UNewMiniMap_C_SetPlayerMarkerRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.UpdatePlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ExtraPlayerLiveState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::UpdatePlayerState(ExtraPlayerLiveState State, class ACharacter* OwnerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.UpdatePlayerState");

	UNewMiniMap_C_UpdatePlayerState_Params params;
	params.State = State;
	params.OwnerCharacter = OwnerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.PreConstruct");

	UNewMiniMap_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.Tick");

	UNewMiniMap_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HideEntireMap
// (BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::HideEntireMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HideEntireMap");

	UNewMiniMap_C_HideEntireMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.ReceiveAirAttackBroadcast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAirAttackInfo>    airattacktype                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            waveindex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::ReceiveAirAttackBroadcast(TEnumAsByte<EAirAttackInfo> airattacktype, int waveindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ReceiveAirAttackBroadcast");

	UNewMiniMap_C_ReceiveAirAttackBroadcast_Params params;
	params.airattacktype = airattacktype;
	params.waveindex = waveindex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.InitPlayerState
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::InitPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.InitPlayerState");

	UNewMiniMap_C_InitPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UNewMiniMap_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ReceivedInitWidget");

	UNewMiniMap_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewMiniMap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.Construct");

	UNewMiniMap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.ReConnectGameStateInfoNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReConnectGameStateInfo ReConnectInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UNewMiniMap_C::ReConnectGameStateInfoNotify(const struct FReConnectGameStateInfo& ReConnectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ReConnectGameStateInfoNotify");

	UNewMiniMap_C_ReConnectGameStateInfoNotify_Params params;
	params.ReConnectInfo = ReConnectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.PlayerEnterFlying
// (BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::PlayerEnterFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.PlayerEnterFlying");

	UNewMiniMap_C_PlayerEnterFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.OnSpectatorChangeEvent
// (BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::OnSpectatorChangeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.OnSpectatorChangeEvent");

	UNewMiniMap_C_OnSpectatorChangeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.PlayerEnterFighting
// (BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::PlayerEnterFighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.PlayerEnterFighting");

	UNewMiniMap_C_PlayerEnterFighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.InitMapStandardPoint
// (BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::InitMapStandardPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.InitMapStandardPoint");

	UNewMiniMap_C_InitMapStandardPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.OnTeamMateChange
// (BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::OnTeamMateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.OnTeamMateChange");

	UNewMiniMap_C_OnTeamMateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.OnCharacterStateChangeDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ExtraPlayerLiveState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::OnCharacterStateChangeDelegate(ExtraPlayerLiveState State, class ACharacter* OwnerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.OnCharacterStateChangeDelegate");

	UNewMiniMap_C_OnCharacterStateChangeDelegate_Params params;
	params.State = State;
	params.OwnerCharacter = OwnerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.MapResize
// (BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::MapResize()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.MapResize");

	UNewMiniMap_C_MapResize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.HideDeadIcon
// (BlueprintCallable, BlueprintEvent)

void UNewMiniMap_C::HideDeadIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.HideDeadIcon");

	UNewMiniMap_C_HideDeadIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMiniMap.NewMiniMap_C.ExecuteUbergraph_NewMiniMap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewMiniMap_C::ExecuteUbergraph_NewMiniMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewMiniMap.NewMiniMap_C.ExecuteUbergraph_NewMiniMap");

	UNewMiniMap_C_ExecuteUbergraph_NewMiniMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
