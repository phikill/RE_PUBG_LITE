
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

// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.SetMasterSoundMute
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LitePCLobbyMsg_C::SetMasterSoundMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.SetMasterSoundMute");

	UBP_LitePCLobbyMsg_C_SetMasterSoundMute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.SetChangeVoiceChannel
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LitePCLobbyMsg_C::SetChangeVoiceChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.SetChangeVoiceChannel");

	UBP_LitePCLobbyMsg_C_SetChangeVoiceChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.SetVoiceMute
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LitePCLobbyMsg_C::SetVoiceMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.SetVoiceMute");

	UBP_LitePCLobbyMsg_C_SetVoiceMute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.ShowFeedBackInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InfoText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_LitePCLobbyMsg_C::ShowFeedBackInfo(const struct FText& InfoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.ShowFeedBackInfo");

	UBP_LitePCLobbyMsg_C_ShowFeedBackInfo_Params params;
	params.InfoText = InfoText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.ShowFeedBackInfoFinished
// (BlueprintCallable, BlueprintEvent)

void UBP_LitePCLobbyMsg_C::ShowFeedBackInfoFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.ShowFeedBackInfoFinished");

	UBP_LitePCLobbyMsg_C_ShowFeedBackInfoFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.ExecuteUbergraph_BP_LitePCLobbyMsg
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LitePCLobbyMsg_C::ExecuteUbergraph_BP_LitePCLobbyMsg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyMsg.BP_LitePCLobbyMsg_C.ExecuteUbergraph_BP_LitePCLobbyMsg");

	UBP_LitePCLobbyMsg_C_ExecuteUbergraph_BP_LitePCLobbyMsg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
