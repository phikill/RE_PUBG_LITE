
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

// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetVoiceIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LitePCLobbyNameTag_C::SetVoiceIcon(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetVoiceIcon");

	UBP_LitePCLobbyNameTag_C_SetVoiceIcon_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetStateIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LitePCLobbyNameTag_C::SetStateIcon(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetStateIcon");

	UBP_LitePCLobbyNameTag_C_SetStateIcon_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetLogout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLogout                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LitePCLobbyNameTag_C::SetLogout(bool bLogout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetLogout");

	UBP_LitePCLobbyNameTag_C_SetLogout_Params params;
	params.bLogout = bLogout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetRankEmblem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERatingRankType                NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LitePCLobbyNameTag_C::SetRankEmblem(ERatingRankType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetRankEmblem");

	UBP_LitePCLobbyNameTag_C_SetRankEmblem_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LitePCLobbyNameTag_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.Hide");

	UBP_LitePCLobbyNameTag_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LitePCLobbyNameTag_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.Show");

	UBP_LitePCLobbyNameTag_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetHost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHost                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LitePCLobbyNameTag_C::SetHost(bool bHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetHost");

	UBP_LitePCLobbyNameTag_C_SetHost_Params params;
	params.bHost = bHost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bReady                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LitePCLobbyNameTag_C::SetReady(bool bReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetReady");

	UBP_LitePCLobbyNameTag_C_SetReady_Params params;
	params.bReady = bReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetNickName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InNick                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_LitePCLobbyNameTag_C::SetNickName(const struct FString& InNick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.SetNickName");

	UBP_LitePCLobbyNameTag_C_SetNickName_Params params;
	params.InNick = InNick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.InitWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InNickName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_LitePCLobbyNameTag_C::InitWidget(const struct FString& InNickName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.InitWidget");

	UBP_LitePCLobbyNameTag_C_InitWidget_Params params;
	params.InNickName = InNickName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LitePCLobbyNameTag_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.Construct");

	UBP_LitePCLobbyNameTag_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.ExecuteUbergraph_BP_LitePCLobbyNameTag
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LitePCLobbyNameTag_C::ExecuteUbergraph_BP_LitePCLobbyNameTag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyNameTag.BP_LitePCLobbyNameTag_C.ExecuteUbergraph_BP_LitePCLobbyNameTag");

	UBP_LitePCLobbyNameTag_C_ExecuteUbergraph_BP_LitePCLobbyNameTag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
