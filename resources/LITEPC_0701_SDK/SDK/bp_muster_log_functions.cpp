
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

// Function bp_muster_log.bp_muster_log_C.EventMusterLogUIHide_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_muster_log_C::EventMusterLogUIHide_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_muster_log.bp_muster_log_C.EventMusterLogUIHide_NoFetch");

	Abp_muster_log_C_EventMusterLogUIHide_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_muster_log.bp_muster_log_C.EventMusterLogUIHide
// (BlueprintCallable, BlueprintEvent)

void Abp_muster_log_C::EventMusterLogUIHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_muster_log.bp_muster_log_C.EventMusterLogUIHide");

	Abp_muster_log_C_EventMusterLogUIHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_muster_log.bp_muster_log_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_muster_log_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_muster_log.bp_muster_log_C.UserConstructionScript");

	Abp_muster_log_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
