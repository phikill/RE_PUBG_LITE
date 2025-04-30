
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

// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RefreshWorldTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOB_CircleChasingProgress_BP_C::RefreshWorldTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RefreshWorldTime");

	UOB_CircleChasingProgress_BP_C_RefreshWorldTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnBlueCircleRunHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlueCircleRunDuration          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_CircleChasingProgress_BP_C::OnBlueCircleRunHandle(float BlueCircleRunDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnBlueCircleRunHandle");

	UOB_CircleChasingProgress_BP_C_OnBlueCircleRunHandle_Params params;
	params.BlueCircleRunDuration = BlueCircleRunDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnWhiteCircleAppearHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlueCircleMovingCountDownDuration (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_CircleChasingProgress_BP_C::OnWhiteCircleAppearHandle(float BlueCircleMovingCountDownDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnWhiteCircleAppearHandle");

	UOB_CircleChasingProgress_BP_C_OnWhiteCircleAppearHandle_Params params;
	params.BlueCircleMovingCountDownDuration = BlueCircleMovingCountDownDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RecoverBlueCircleRunProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UOB_CircleChasingProgress_BP_C::RecoverBlueCircleRunProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RecoverBlueCircleRunProgress");

	UOB_CircleChasingProgress_BP_C_RecoverBlueCircleRunProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RefreshCircleDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOB_CircleChasingProgress_BP_C::RefreshCircleDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RefreshCircleDistance");

	UOB_CircleChasingProgress_BP_C_RefreshCircleDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.HandleReconnectInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReConnectGameStateInfo Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UOB_CircleChasingProgress_BP_C::HandleReconnectInfo(const struct FReConnectGameStateInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.HandleReconnectInfo");

	UOB_CircleChasingProgress_BP_C_HandleReconnectInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RefreshPlayerEscapePercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOB_CircleChasingProgress_BP_C::RefreshPlayerEscapePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.RefreshPlayerEscapePercent");

	UOB_CircleChasingProgress_BP_C_RefreshPlayerEscapePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnCountDownTextInvisible
// (Event, Public, BlueprintEvent)

void UOB_CircleChasingProgress_BP_C::OnCountDownTextInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnCountDownTextInvisible");

	UOB_CircleChasingProgress_BP_C_OnCountDownTextInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.UpdateCountDownText
// (Event, Public, BlueprintEvent)

void UOB_CircleChasingProgress_BP_C::UpdateCountDownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.UpdateCountDownText");

	UOB_CircleChasingProgress_BP_C_UpdateCountDownText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_CircleChasingProgress_BP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.Tick");

	UOB_CircleChasingProgress_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnPlayerEnterExitBlueCircle
// (Event, Public, BlueprintEvent)

void UOB_CircleChasingProgress_BP_C::OnPlayerEnterExitBlueCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.OnPlayerEnterExitBlueCircle");

	UOB_CircleChasingProgress_BP_C_OnPlayerEnterExitBlueCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.CleanTheProgressBar
// (Event, Public, BlueprintEvent)

void UOB_CircleChasingProgress_BP_C::CleanTheProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.CleanTheProgressBar");

	UOB_CircleChasingProgress_BP_C_CleanTheProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UOB_CircleChasingProgress_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.ReceivedInitWidget");

	UOB_CircleChasingProgress_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.DelayReconverBlueProgressAgain
// (BlueprintCallable, BlueprintEvent)

void UOB_CircleChasingProgress_BP_C::DelayReconverBlueProgressAgain()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.DelayReconverBlueProgressAgain");

	UOB_CircleChasingProgress_BP_C_DelayReconverBlueProgressAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.ExecuteUbergraph_OB_CircleChasingProgress_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_CircleChasingProgress_BP_C::ExecuteUbergraph_OB_CircleChasingProgress_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_CircleChasingProgress_BP.OB_CircleChasingProgress_BP_C.ExecuteUbergraph_OB_CircleChasingProgress_BP");

	UOB_CircleChasingProgress_BP_C_ExecuteUbergraph_OB_CircleChasingProgress_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
