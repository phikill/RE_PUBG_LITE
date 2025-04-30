
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

// Function BP_VoiceCheck.BP_VoiceCheck_C.GetWeatherID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeatherID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceCheck_C::GetWeatherID(int* WeatherID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.GetWeatherID");

	UBP_VoiceCheck_C_GetWeatherID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeatherID != nullptr)
		*WeatherID = params.WeatherID;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.IsVoiceCheckEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceCheck_C::IsVoiceCheckEnable(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.IsVoiceCheckEnable");

	UBP_VoiceCheck_C_IsVoiceCheckEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.UpdateRainDay
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VoiceCheck_C::UpdateRainDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.UpdateRainDay");

	UBP_VoiceCheck_C_UpdateRainDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.TrigerVoiceCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  nowActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          checkDis                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceCheck_C::TrigerVoiceCheck(class AActor* nowActor, float checkDis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.TrigerVoiceCheck");

	UBP_VoiceCheck_C_TrigerVoiceCheck_Params params;
	params.nowActor = nowActor;
	params.checkDis = checkDis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.InitCheckObjectByType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBP_VoiceCheckType> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_VoiceDataObject_C*   NewParam1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceCheck_C::InitCheckObjectByType(TEnumAsByte<EBP_VoiceCheckType> NewParam, class UBP_VoiceDataObject_C** NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.InitCheckObjectByType");

	UBP_VoiceCheck_C_InitCheckObjectByType_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.GetCheckData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBP_VoiceCheckType> checkType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_VoiceCheckData      Result                         (Parm, OutParm)

void UBP_VoiceCheck_C::GetCheckData(TEnumAsByte<EBP_VoiceCheckType> checkType, struct FBP_VoiceCheckData* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.GetCheckData");

	UBP_VoiceCheck_C_GetCheckData_Params params;
	params.checkType = checkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.InitCheckMap
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VoiceCheck_C::InitCheckMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.InitCheckMap");

	UBP_VoiceCheck_C_InitCheckMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_VoiceCheck_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.ReceiveBeginPlay");

	UBP_VoiceCheck_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceCheck_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.ReceiveTick");

	UBP_VoiceCheck_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.SetAllWeatherType
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            weatherType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceCheck_C::SetAllWeatherType(int weatherType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.SetAllWeatherType");

	UBP_VoiceCheck_C_SetAllWeatherType_Params params;
	params.weatherType = weatherType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.ExecuteUbergraph_BP_VoiceCheck
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceCheck_C::ExecuteUbergraph_BP_VoiceCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.ExecuteUbergraph_BP_VoiceCheck");

	UBP_VoiceCheck_C_ExecuteUbergraph_BP_VoiceCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceCheck.BP_VoiceCheck_C.ShowTrigerVoiceIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_VoiceDataSubObject_C* nowSubObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceCheck_C::ShowTrigerVoiceIcon__DelegateSignature(class UBP_VoiceDataSubObject_C* nowSubObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceCheck.BP_VoiceCheck_C.ShowTrigerVoiceIcon__DelegateSignature");

	UBP_VoiceCheck_C_ShowTrigerVoiceIcon__DelegateSignature_Params params;
	params.nowSubObject = nowSubObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
