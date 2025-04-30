
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

// Function bp_signin.bp_signin_C.EventGetAwardBtnClick_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_signin_C::EventGetAwardBtnClick_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_signin.bp_signin_C.EventGetAwardBtnClick_NoFetch");

	Abp_signin_C_EventGetAwardBtnClick_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_signin.bp_signin_C.EventGetAwardBtnClick
// (BlueprintCallable, BlueprintEvent)

void Abp_signin_C::EventGetAwardBtnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_signin.bp_signin_C.EventGetAwardBtnClick");

	Abp_signin_C_EventGetAwardBtnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_signin.bp_signin_C.EventRelease_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_signin_C::EventRelease_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_signin.bp_signin_C.EventRelease_NoFetch");

	Abp_signin_C_EventRelease_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_signin.bp_signin_C.EventRelease
// (BlueprintCallable, BlueprintEvent)

void Abp_signin_C::EventRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_signin.bp_signin_C.EventRelease");

	Abp_signin_C_EventRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_signin.bp_signin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_signin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_signin.bp_signin_C.UserConstructionScript");

	Abp_signin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
