
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

// Function GVoice.GVoice_C.GetTeamID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TeamID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGVoice_C::GetTeamID(int* TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.GetTeamID");

	UGVoice_C_GetTeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamID != nullptr)
		*TeamID = params.TeamID;
}


// Function GVoice.GVoice_C.GetSessionID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 SessionID                      (Parm, OutParm, ZeroConstructor)

void UGVoice_C::GetSessionID(struct FString* SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.GetSessionID");

	UGVoice_C_GetSessionID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SessionID != nullptr)
		*SessionID = params.SessionID;
}


// Function GVoice.GVoice_C.EnsureJoinTeam
// (BlueprintCallable, BlueprintEvent)

void UGVoice_C::EnsureJoinTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.EnsureJoinTeam");

	UGVoice_C_EnsureJoinTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.EnsureJoinRange
// (BlueprintCallable, BlueprintEvent)

void UGVoice_C::EnsureJoinRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.EnsureJoinRange");

	UGVoice_C_EnsureJoinRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.VoiceMute
// (BlueprintCallable, BlueprintEvent)

void UGVoice_C::VoiceMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.VoiceMute");

	UGVoice_C_VoiceMute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.VoiceTeam
// (BlueprintCallable, BlueprintEvent)

void UGVoice_C::VoiceTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.VoiceTeam");

	UGVoice_C_VoiceTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.VoiceRange
// (BlueprintCallable, BlueprintEvent)

void UGVoice_C::VoiceRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.VoiceRange");

	UGVoice_C_VoiceRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.VoiceQuit
// (BlueprintCallable, BlueprintEvent)

void UGVoice_C::VoiceQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.VoiceQuit");

	UGVoice_C_VoiceQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.VoicePttOn
// (BlueprintCallable, BlueprintEvent)

void UGVoice_C::VoicePttOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.VoicePttOn");

	UGVoice_C_VoicePttOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.VoicePttOff
// (BlueprintCallable, BlueprintEvent)

void UGVoice_C::VoicePttOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.VoicePttOff");

	UGVoice_C_VoicePttOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.VoiceBySettings
// (BlueprintCallable, BlueprintEvent)

void UGVoice_C::VoiceBySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.VoiceBySettings");

	UGVoice_C_VoiceBySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.OnSessionIdReplicated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SessionID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGVoice_C::OnSessionIdReplicated(const struct FString& SessionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.OnSessionIdReplicated");

	UGVoice_C_OnSessionIdReplicated_Params params;
	params.SessionID = SessionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.OnTeamIdReplicated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGVoice_C::OnTeamIdReplicated(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.OnTeamIdReplicated");

	UGVoice_C_OnTeamIdReplicated_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UGVoice_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.ReceivedInitWidget");

	UGVoice_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGVoice_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.Destruct");

	UGVoice_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.ReceiveHide
// (Event, Protected, BlueprintEvent)

void UGVoice_C::ReceiveHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.ReceiveHide");

	UGVoice_C_ReceiveHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GVoice.GVoice_C.ExecuteUbergraph_GVoice
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGVoice_C::ExecuteUbergraph_GVoice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GVoice.GVoice_C.ExecuteUbergraph_GVoice");

	UGVoice_C_ExecuteUbergraph_GVoice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
