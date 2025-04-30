
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

// Function bp_appraise.bp_appraise_C.EventGotoAppraise_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_appraise_C::EventGotoAppraise_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_appraise.bp_appraise_C.EventGotoAppraise_NoFetch");

	Abp_appraise_C_EventGotoAppraise_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_appraise.bp_appraise_C.EventGotoAppraise
// (BlueprintCallable, BlueprintEvent)

void Abp_appraise_C::EventGotoAppraise()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_appraise.bp_appraise_C.EventGotoAppraise");

	Abp_appraise_C_EventGotoAppraise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_appraise.bp_appraise_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_appraise_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_appraise.bp_appraise_C.UserConstructionScript");

	Abp_appraise_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
