
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

// Function bp_loading.bp_loading_C.EventFetchInfo_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_loading_C::EventFetchInfo_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_loading.bp_loading_C.EventFetchInfo_NoFetch");

	Abp_loading_C_EventFetchInfo_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_loading.bp_loading_C.EventFetchInfo
// (BlueprintCallable, BlueprintEvent)

void Abp_loading_C::EventFetchInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_loading.bp_loading_C.EventFetchInfo");

	Abp_loading_C_EventFetchInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_loading.bp_loading_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_loading_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_loading.bp_loading_C.UserConstructionScript");

	Abp_loading_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
