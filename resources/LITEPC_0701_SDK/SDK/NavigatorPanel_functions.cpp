
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

// Function NavigatorPanel.NavigatorPanel_C.SetSpecialBigTipsText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::SetSpecialBigTipsText(int Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.SetSpecialBigTipsText");

	UNavigatorPanel_C_SetSpecialBigTipsText_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.HideAllMarks
// (Public, BlueprintCallable, BlueprintEvent)

void UNavigatorPanel_C::HideAllMarks()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.HideAllMarks");

	UNavigatorPanel_C_HideAllMarks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.TestPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::TestPlayerController(bool NewParam, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.TestPlayerController");

	UNavigatorPanel_C_TestPlayerController_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function NavigatorPanel.NavigatorPanel_C.Reconnect_ResetUIByPlayerControllerState
// (Public, BlueprintCallable, BlueprintEvent)

void UNavigatorPanel_C::Reconnect_ResetUIByPlayerControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.Reconnect_ResetUIByPlayerControllerState");

	UNavigatorPanel_C_Reconnect_ResetUIByPlayerControllerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.RemoveSameActorShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_VoiceUIObject_C*     UIObject                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::RemoveSameActorShow(class UBP_VoiceUIObject_C* UIObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.RemoveSameActorShow");

	UNavigatorPanel_C_RemoveSameActorShow_Params params;
	params.UIObject = UIObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.GetFinalX
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          middlsX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          playerX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::GetFinalX(float middlsX, float playerX, float Scale, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.GetFinalX");

	UNavigatorPanel_C_GetFinalX_Params params;
	params.middlsX = middlsX;
	params.playerX = playerX;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function NavigatorPanel.NavigatorPanel_C.UpdateDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNavigatorPanel_C::UpdateDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.UpdateDirection");

	UNavigatorPanel_C_UpdateDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.ConvertAngleToUV
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RetrunValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::ConvertAngleToUV(float Angle, float* RetrunValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.ConvertAngleToUV");

	UNavigatorPanel_C_ConvertAngleToUV_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetrunValue != nullptr)
		*RetrunValue = params.RetrunValue;
}


// Function NavigatorPanel.NavigatorPanel_C.GetPlayerRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                RetrunValue                    (Parm, OutParm, IsPlainOldData)

void UNavigatorPanel_C::GetPlayerRotation(struct FRotator* RetrunValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.GetPlayerRotation");

	UNavigatorPanel_C_GetPlayerRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetrunValue != nullptr)
		*RetrunValue = params.RetrunValue;
}


// Function NavigatorPanel.NavigatorPanel_C.InitCompassWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UNavigatorPanel_C::InitCompassWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.InitCompassWidget");

	UNavigatorPanel_C_InitCompassWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.SetVoiceChekImageZorder
// (Public, BlueprintCallable, BlueprintEvent)

void UNavigatorPanel_C::SetVoiceChekImageZorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.SetVoiceChekImageZorder");

	UNavigatorPanel_C_SetVoiceChekImageZorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.SetOneData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_VoiceUIObject_C*     UIObject                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_VoiceDataSubObject_C* SubObject                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::SetOneData(class UBP_VoiceUIObject_C* UIObject, class UBP_VoiceDataSubObject_C* SubObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.SetOneData");

	UNavigatorPanel_C_SetOneData_Params params;
	params.UIObject = UIObject;
	params.SubObject = SubObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.ShowTrigerVoiceIcom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_VoiceDataSubObject_C* nowObject                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::ShowTrigerVoiceIcom(class UBP_VoiceDataSubObject_C* nowObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.ShowTrigerVoiceIcom");

	UNavigatorPanel_C_ShowTrigerVoiceIcom_Params params;
	params.nowObject = nowObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.IsSamVoiceObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_VoiceDataSubObject_C* SubObject                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_VoiceUIObject_C*     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::IsSamVoiceObject(class UBP_VoiceDataSubObject_C* SubObject, class UBP_VoiceUIObject_C* NewParam, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.IsSamVoiceObject");

	UNavigatorPanel_C_IsSamVoiceObject_Params params;
	params.SubObject = SubObject;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function NavigatorPanel.NavigatorPanel_C.UpdateVoiceStateOneType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_VoiceDataObject_C*   nowObject                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::UpdateVoiceStateOneType(class UBP_VoiceDataObject_C* nowObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.UpdateVoiceStateOneType");

	UNavigatorPanel_C_UpdateVoiceStateOneType_Params params;
	params.nowObject = nowObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.GetMinShowTimeObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_VoiceDataSubObject_C* nowSubObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_VoiceUIObject_C*     Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::GetMinShowTimeObject(class UBP_VoiceDataSubObject_C* nowSubObject, class UBP_VoiceUIObject_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.GetMinShowTimeObject");

	UNavigatorPanel_C_GetMinShowTimeObject_Params params;
	params.nowSubObject = nowSubObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function NavigatorPanel.NavigatorPanel_C.UpdateNewVocieState
// (Public, BlueprintCallable, BlueprintEvent)

void UNavigatorPanel_C::UpdateNewVocieState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.UpdateNewVocieState");

	UNavigatorPanel_C_UpdateNewVocieState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.UpdateShowVoiceIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::UpdateShowVoiceIcon(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.UpdateShowVoiceIcon");

	UNavigatorPanel_C_UpdateShowVoiceIcon_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.GetVoicePostion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          resultposx                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          resultposy                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::GetVoicePostion(int Index, float Scale, float* resultposx, float* resultposy)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.GetVoicePostion");

	UNavigatorPanel_C_GetVoicePostion_Params params;
	params.Index = Index;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (resultposx != nullptr)
		*resultposx = params.resultposx;
	if (resultposy != nullptr)
		*resultposy = params.resultposy;
}


// Function NavigatorPanel.NavigatorPanel_C.CreateVoiceCheckObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBP_VoiceCheckType> checkType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_VoiceUIObject_C*     NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::CreateVoiceCheckObject(TEnumAsByte<EBP_VoiceCheckType> checkType, class UBP_VoiceUIObject_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.CreateVoiceCheckObject");

	UNavigatorPanel_C_CreateVoiceCheckObject_Params params;
	params.checkType = checkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function NavigatorPanel.NavigatorPanel_C.InitVoiceImageList
// (Public, BlueprintCallable, BlueprintEvent)

void UNavigatorPanel_C::InitVoiceImageList()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.InitVoiceImageList");

	UNavigatorPanel_C_InitVoiceImageList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.CreateTipsImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBP_VoiceCheckType> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::CreateTipsImage(TEnumAsByte<EBP_VoiceCheckType> NewParam, class UImage** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.CreateTipsImage");

	UNavigatorPanel_C_CreateTipsImage_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function NavigatorPanel.NavigatorPanel_C.GetPlayerColorByIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UNavigatorPanel_C::GetPlayerColorByIndex(int Index, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.GetPlayerColorByIndex");

	UNavigatorPanel_C_GetPlayerColorByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function NavigatorPanel.NavigatorPanel_C.InitPlayerMarkerArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNavigatorPanel_C::InitPlayerMarkerArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.InitPlayerMarkerArray");

	UNavigatorPanel_C_InitPlayerMarkerArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.RepositionMapMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::RepositionMapMark(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.RepositionMapMark");

	UNavigatorPanel_C_RepositionMapMark_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.BindTeamMapMarkDelegate
// (Public, BlueprintCallable, BlueprintEvent)

void UNavigatorPanel_C::BindTeamMapMarkDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.BindTeamMapMarkDelegate");

	UNavigatorPanel_C_BindTeamMapMarkDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.InitPlayerState
// (Public, BlueprintCallable, BlueprintEvent)

void UNavigatorPanel_C::InitPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.InitPlayerState");

	UNavigatorPanel_C_InitPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UNavigatorPanel_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.ReceivedInitWidget");

	UNavigatorPanel_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.Tick");

	UNavigatorPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNavigatorPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.Construct");

	UNavigatorPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigatorPanel.NavigatorPanel_C.ExecuteUbergraph_NavigatorPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNavigatorPanel_C::ExecuteUbergraph_NavigatorPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigatorPanel.NavigatorPanel_C.ExecuteUbergraph_NavigatorPanel");

	UNavigatorPanel_C_ExecuteUbergraph_NavigatorPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
