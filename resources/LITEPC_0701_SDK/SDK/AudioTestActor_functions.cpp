
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

// Function AudioTestActor.AudioTestActor_C.PrintDistnace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DistanceInMeters               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAudioTestActor_C::PrintDistnace(float DistanceInMeters)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.PrintDistnace");

	AAudioTestActor_C_PrintDistnace_Params params;
	params.DistanceInMeters = DistanceInMeters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.PlayAudioRetrigger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAudioTestActor_C::PlayAudioRetrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.PlayAudioRetrigger");

	AAudioTestActor_C_PlayAudioRetrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.Retrigger
// (Public, BlueprintCallable, BlueprintEvent)

void AAudioTestActor_C::Retrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.Retrigger");

	AAudioTestActor_C_Retrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.PrintText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InText                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AAudioTestActor_C::PrintText(const struct FString& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.PrintText");

	AAudioTestActor_C_PrintText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.SetSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AAudioTestActor_C::SetSwitch(const struct FString& Group, const struct FString& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.SetSwitch");

	AAudioTestActor_C_SetSwitch_Params params;
	params.Group = Group;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.SetNextSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAudioTestActor_C::SetNextSound(bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.SetNextSound");

	AAudioTestActor_C_SetNextSound_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void AAudioTestActor_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.Destroy");

	AAudioTestActor_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AAudioTestActor_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.PlayAudio");

	AAudioTestActor_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerPawnPC_C*      Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAudioTestActor_C::Initialize(class ABP_PlayerPawnPC_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.Initialize");

	AAudioTestActor_C_Initialize_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAudioTestActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.UserConstructionScript");

	AAudioTestActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAudioTestActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.ReceiveTick");

	AAudioTestActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioTestActor.AudioTestActor_C.ExecuteUbergraph_AudioTestActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAudioTestActor_C::ExecuteUbergraph_AudioTestActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioTestActor.AudioTestActor_C.ExecuteUbergraph_AudioTestActor");

	AAudioTestActor_C_ExecuteUbergraph_AudioTestActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
