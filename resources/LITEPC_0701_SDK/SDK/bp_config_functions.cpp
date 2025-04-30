
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

// Function bp_config.bp_config_C.EventChangeAccount_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_config_C::EventChangeAccount_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_config.bp_config_C.EventChangeAccount_NoFetch");

	Abp_config_C_EventChangeAccount_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_config.bp_config_C.EventChangeAccount
// (BlueprintCallable, BlueprintEvent)

void Abp_config_C::EventChangeAccount()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_config.bp_config_C.EventChangeAccount");

	Abp_config_C_EventChangeAccount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_config.bp_config_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_config_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_config.bp_config_C.UserConstructionScript");

	Abp_config_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
