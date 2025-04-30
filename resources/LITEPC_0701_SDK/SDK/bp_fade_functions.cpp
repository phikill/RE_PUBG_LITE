
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

// Function bp_fade.bp_fade_C.EventFadeIn_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_fade_C::EventFadeIn_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_fade.bp_fade_C.EventFadeIn_NoFetch");

	Abp_fade_C_EventFadeIn_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_fade.bp_fade_C.EventFadeIn
// (BlueprintCallable, BlueprintEvent)

void Abp_fade_C::EventFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_fade.bp_fade_C.EventFadeIn");

	Abp_fade_C_EventFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_fade.bp_fade_C.EventFadeHide_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_fade_C::EventFadeHide_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_fade.bp_fade_C.EventFadeHide_NoFetch");

	Abp_fade_C_EventFadeHide_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_fade.bp_fade_C.EventFadeHide
// (BlueprintCallable, BlueprintEvent)

void Abp_fade_C::EventFadeHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_fade.bp_fade_C.EventFadeHide");

	Abp_fade_C_EventFadeHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_fade.bp_fade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_fade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_fade.bp_fade_C.UserConstructionScript");

	Abp_fade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
