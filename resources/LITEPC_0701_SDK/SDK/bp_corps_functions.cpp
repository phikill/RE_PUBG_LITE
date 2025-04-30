
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

// Function bp_corps.bp_corps_C.EventOnCorpsClose_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_C::EventOnCorpsClose_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_corps.bp_corps_C.EventOnCorpsClose_NoFetch");

	Abp_corps_C_EventOnCorpsClose_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_corps.bp_corps_C.EventOnCorpsClose
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_C::EventOnCorpsClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_corps.bp_corps_C.EventOnCorpsClose");

	Abp_corps_C_EventOnCorpsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_corps.bp_corps_C.EventClickToggle_Push_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_C::EventClickToggle_Push_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_corps.bp_corps_C.EventClickToggle_Push_NoFetch");

	Abp_corps_C_EventClickToggle_Push_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_corps.bp_corps_C.EventClickToggle_Push
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_C::EventClickToggle_Push()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_corps.bp_corps_C.EventClickToggle_Push");

	Abp_corps_C_EventClickToggle_Push_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_corps.bp_corps_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_corps_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_corps.bp_corps_C.UserConstructionScript");

	Abp_corps_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
