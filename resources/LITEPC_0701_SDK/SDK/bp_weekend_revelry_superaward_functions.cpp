
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

// Function bp_weekend_revelry_superaward.bp_weekend_revelry_superaward_C.EventShareClicked_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_weekend_revelry_superaward_C::EventShareClicked_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_weekend_revelry_superaward.bp_weekend_revelry_superaward_C.EventShareClicked_NoFetch");

	Abp_weekend_revelry_superaward_C_EventShareClicked_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_weekend_revelry_superaward.bp_weekend_revelry_superaward_C.EventShareClicked
// (BlueprintCallable, BlueprintEvent)

void Abp_weekend_revelry_superaward_C::EventShareClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_weekend_revelry_superaward.bp_weekend_revelry_superaward_C.EventShareClicked");

	Abp_weekend_revelry_superaward_C_EventShareClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_weekend_revelry_superaward.bp_weekend_revelry_superaward_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_weekend_revelry_superaward_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_weekend_revelry_superaward.bp_weekend_revelry_superaward_C.UserConstructionScript");

	Abp_weekend_revelry_superaward_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
