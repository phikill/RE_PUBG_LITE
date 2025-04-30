
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

// Function BP_LitePCLobbyFirstHUD.BP_LitePCLobbyFirstHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LitePCLobbyFirstHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyFirstHUD.BP_LitePCLobbyFirstHUD_C.Construct");

	UBP_LitePCLobbyFirstHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyFirstHUD.BP_LitePCLobbyFirstHUD_C.Custom Event_1
// (BlueprintCallable, BlueprintEvent)

void UBP_LitePCLobbyFirstHUD_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyFirstHUD.BP_LitePCLobbyFirstHUD_C.Custom Event_1");

	UBP_LitePCLobbyFirstHUD_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyFirstHUD.BP_LitePCLobbyFirstHUD_C.EndLogoAnim
// (BlueprintCallable, BlueprintEvent)

void UBP_LitePCLobbyFirstHUD_C::EndLogoAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyFirstHUD.BP_LitePCLobbyFirstHUD_C.EndLogoAnim");

	UBP_LitePCLobbyFirstHUD_C_EndLogoAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyFirstHUD.BP_LitePCLobbyFirstHUD_C.ExecuteUbergraph_BP_LitePCLobbyFirstHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LitePCLobbyFirstHUD_C::ExecuteUbergraph_BP_LitePCLobbyFirstHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyFirstHUD.BP_LitePCLobbyFirstHUD_C.ExecuteUbergraph_BP_LitePCLobbyFirstHUD");

	UBP_LitePCLobbyFirstHUD_C_ExecuteUbergraph_BP_LitePCLobbyFirstHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LitePCLobbyFirstHUD.BP_LitePCLobbyFirstHUD_C.OnFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_LitePCLobbyFirstHUD_C::OnFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LitePCLobbyFirstHUD.BP_LitePCLobbyFirstHUD_C.OnFinished__DelegateSignature");

	UBP_LitePCLobbyFirstHUD_C_OnFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
