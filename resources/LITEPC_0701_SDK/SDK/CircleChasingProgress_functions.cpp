
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

// Function CircleChasingProgress.CircleChasingProgress_C.RecoverBlueCircleRunProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UCircleChasingProgress_C::RecoverBlueCircleRunProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.RecoverBlueCircleRunProgress");

	UCircleChasingProgress_C_RecoverBlueCircleRunProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.GetLocalTimeOfCircleStatusStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CircleStatusStartServerWorldSeconds (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocalStartTimeSecond           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircleChasingProgress_C::GetLocalTimeOfCircleStatusStart(float CircleStatusStartServerWorldSeconds, float* LocalStartTimeSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.GetLocalTimeOfCircleStatusStart");

	UCircleChasingProgress_C_GetLocalTimeOfCircleStatusStart_Params params;
	params.CircleStatusStartServerWorldSeconds = CircleStatusStartServerWorldSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalStartTimeSecond != nullptr)
		*LocalStartTimeSecond = params.LocalStartTimeSecond;
}


// Function CircleChasingProgress.CircleChasingProgress_C.ShowCircleDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCircleChasingProgress_C::ShowCircleDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.ShowCircleDistance");

	UCircleChasingProgress_C_ShowCircleDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.HandleReconnectInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReConnectGameStateInfo Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCircleChasingProgress_C::HandleReconnectInfo(const struct FReConnectGameStateInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.HandleReconnectInfo");

	UCircleChasingProgress_C_HandleReconnectInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.FlashCautionIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UCircleChasingProgress_C::FlashCautionIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.FlashCautionIcon");

	UCircleChasingProgress_C_FlashCautionIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.GetPlayerPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   PlayerPawn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircleChasingProgress_C::GetPlayerPawn(class APawn** PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.GetPlayerPawn");

	UCircleChasingProgress_C_GetPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerPawn != nullptr)
		*PlayerPawn = params.PlayerPawn;
}


// Function CircleChasingProgress.CircleChasingProgress_C.PlayerEscapePercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCircleChasingProgress_C::PlayerEscapePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.PlayerEscapePercent");

	UCircleChasingProgress_C_PlayerEscapePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircleChasingProgress_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.Tick");

	UCircleChasingProgress_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.OnWhiteCircleAppear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SafeZoneTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircleChasingProgress_C::OnWhiteCircleAppear(float SafeZoneTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.OnWhiteCircleAppear");

	UCircleChasingProgress_C_OnWhiteCircleAppear_Params params;
	params.SafeZoneTime = SafeZoneTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.OnBlueCircleRun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlueCircleRunTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircleChasingProgress_C::OnBlueCircleRun(float BlueCircleRunTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.OnBlueCircleRun");

	UCircleChasingProgress_C_OnBlueCircleRun_Params params;
	params.BlueCircleRunTime = BlueCircleRunTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.OnCountDownTextInvisible
// (Event, Public, BlueprintEvent)

void UCircleChasingProgress_C::OnCountDownTextInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.OnCountDownTextInvisible");

	UCircleChasingProgress_C_OnCountDownTextInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.OnPlayerEnterExitBlueCircle
// (Event, Public, BlueprintEvent)

void UCircleChasingProgress_C::OnPlayerEnterExitBlueCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.OnPlayerEnterExitBlueCircle");

	UCircleChasingProgress_C_OnPlayerEnterExitBlueCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.CleanTheProgressBar
// (Event, Public, BlueprintEvent)

void UCircleChasingProgress_C::CleanTheProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.CleanTheProgressBar");

	UCircleChasingProgress_C_CleanTheProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.UpdateCountDownText
// (Event, Public, BlueprintEvent)

void UCircleChasingProgress_C::UpdateCountDownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.UpdateCountDownText");

	UCircleChasingProgress_C_UpdateCountDownText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.PreWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlueCirclePreWarningTime       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircleChasingProgress_C::PreWarning(float BlueCirclePreWarningTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.PreWarning");

	UCircleChasingProgress_C_PreWarning_Params params;
	params.BlueCirclePreWarningTime = BlueCirclePreWarningTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UCircleChasingProgress_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.ReceivedInitWidget");

	UCircleChasingProgress_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.ReConnectGameStateInfoNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReConnectGameStateInfo ReConnectInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UCircleChasingProgress_C::ReConnectGameStateInfoNotify(const struct FReConnectGameStateInfo& ReConnectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.ReConnectGameStateInfoNotify");

	UCircleChasingProgress_C_ReConnectGameStateInfoNotify_Params params;
	params.ReConnectInfo = ReConnectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.DelayReconverBlueProgressAgain
// (BlueprintCallable, BlueprintEvent)

void UCircleChasingProgress_C::DelayReconverBlueProgressAgain()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.DelayReconverBlueProgressAgain");

	UCircleChasingProgress_C_DelayReconverBlueProgressAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircleChasingProgress.CircleChasingProgress_C.ExecuteUbergraph_CircleChasingProgress
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircleChasingProgress_C::ExecuteUbergraph_CircleChasingProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircleChasingProgress.CircleChasingProgress_C.ExecuteUbergraph_CircleChasingProgress");

	UCircleChasingProgress_C_ExecuteUbergraph_CircleChasingProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
