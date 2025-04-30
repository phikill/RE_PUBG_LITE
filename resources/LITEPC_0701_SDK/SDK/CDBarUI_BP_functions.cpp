
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

// Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerCancelRescue
// (Public, BlueprintCallable, BlueprintEvent)

void UCDBarUI_BP_C::FirstPlayerCancelRescue()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerCancelRescue");

	UCDBarUI_BP_C_FirstPlayerCancelRescue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerStopRescue
// (Public, BlueprintCallable, BlueprintEvent)

void UCDBarUI_BP_C::FirstPlayerStopRescue()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerStopRescue");

	UCDBarUI_BP_C_FirstPlayerStopRescue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerStartBeingRescue
// (Public, BlueprintCallable, BlueprintEvent)

void UCDBarUI_BP_C::FirstPlayerStartBeingRescue()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerStartBeingRescue");

	UCDBarUI_BP_C_FirstPlayerStartBeingRescue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerStartRescueOther
// (Public, BlueprintCallable, BlueprintEvent)

void UCDBarUI_BP_C::FirstPlayerStartRescueOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.FirstPlayerStartRescueOther");

	UCDBarUI_BP_C_FirstPlayerStartRescueOther_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.IsShowingRescueingUI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCDBarUI_BP_C::IsShowingRescueingUI(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.IsShowingRescueingUI");

	UCDBarUI_BP_C_IsShowingRescueingUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function CDBarUI_BP.CDBarUI_BP_C.EndShowRescueTips
// (Public, BlueprintCallable, BlueprintEvent)

void UCDBarUI_BP_C::EndShowRescueTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.EndShowRescueTips");

	UCDBarUI_BP_C_EndShowRescueTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.OnIsRescueing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              HelpWho                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBecomeCan                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCDBarUI_BP_C::OnIsRescueing(class ACharacter* HelpWho, class ACharacter* Owner, bool IsBecomeCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.OnIsRescueing");

	UCDBarUI_BP_C_OnIsRescueing_Params params;
	params.HelpWho = HelpWho;
	params.Owner = Owner;
	params.IsBecomeCan = IsBecomeCan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.ItemCDBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ItemCDtime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCDBarUI_BP_C::ItemCDBar(float ItemCDtime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.ItemCDBar");

	UCDBarUI_BP_C_ItemCDBar_Params params;
	params.ItemCDtime = ItemCDtime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.ThrowCDbar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CDTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCDBarUI_BP_C::ThrowCDbar(float CDTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.ThrowCDbar");

	UCDBarUI_BP_C_ThrowCDbar_Params params;
	params.CDTime = CDTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.CDTimer
// (BlueprintCallable, BlueprintEvent)

void UCDBarUI_BP_C::CDTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.CDTimer");

	UCDBarUI_BP_C_CDTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.StartRescueOtherEvent
// (BlueprintCallable, BlueprintEvent)

void UCDBarUI_BP_C::StartRescueOtherEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.StartRescueOtherEvent");

	UCDBarUI_BP_C_StartRescueOtherEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.StartBeingRescueEvent
// (BlueprintCallable, BlueprintEvent)

void UCDBarUI_BP_C::StartBeingRescueEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.StartBeingRescueEvent");

	UCDBarUI_BP_C_StartBeingRescueEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.EndRescueEvent
// (BlueprintCallable, BlueprintEvent)

void UCDBarUI_BP_C::EndRescueEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.EndRescueEvent");

	UCDBarUI_BP_C_EndRescueEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.BeginShow
// (BlueprintCallable, BlueprintEvent)

void UCDBarUI_BP_C::BeginShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.BeginShow");

	UCDBarUI_BP_C_BeginShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCDBarUI_BP_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.Destruct");

	UCDBarUI_BP_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCDBarUI_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.Construct");

	UCDBarUI_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.ExecuteUbergraph_CDBarUI_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCDBarUI_BP_C::ExecuteUbergraph_CDBarUI_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.ExecuteUbergraph_CDBarUI_BP");

	UCDBarUI_BP_C_ExecuteUbergraph_CDBarUI_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CDBarUI_BP.CDBarUI_BP_C.UserCancelUse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShow_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Tips                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCDBarUI_BP_C::UserCancelUse__DelegateSignature(bool ShouldShow_, float Duration, const struct FString& Tips)
{
	static auto fn = UObject::FindObject<UFunction>("Function CDBarUI_BP.CDBarUI_BP_C.UserCancelUse__DelegateSignature");

	UCDBarUI_BP_C_UserCancelUse__DelegateSignature_Params params;
	params.ShouldShow_ = ShouldShow_;
	params.Duration = Duration;
	params.Tips = Tips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
