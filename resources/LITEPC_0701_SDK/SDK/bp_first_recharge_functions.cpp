
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

// Function bp_first_recharge.bp_first_recharge_C.EventFirstRechargeAward_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_first_recharge_C::EventFirstRechargeAward_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_first_recharge.bp_first_recharge_C.EventFirstRechargeAward_NoFetch");

	Abp_first_recharge_C_EventFirstRechargeAward_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_first_recharge.bp_first_recharge_C.EventFirstRechargeAward
// (BlueprintCallable, BlueprintEvent)

void Abp_first_recharge_C::EventFirstRechargeAward()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_first_recharge.bp_first_recharge_C.EventFirstRechargeAward");

	Abp_first_recharge_C_EventFirstRechargeAward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_first_recharge.bp_first_recharge_C.EventFirstRechargeShowRechargeUI_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_first_recharge_C::EventFirstRechargeShowRechargeUI_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_first_recharge.bp_first_recharge_C.EventFirstRechargeShowRechargeUI_NoFetch");

	Abp_first_recharge_C_EventFirstRechargeShowRechargeUI_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_first_recharge.bp_first_recharge_C.EventFirstRechargeShowRechargeUI
// (BlueprintCallable, BlueprintEvent)

void Abp_first_recharge_C::EventFirstRechargeShowRechargeUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_first_recharge.bp_first_recharge_C.EventFirstRechargeShowRechargeUI");

	Abp_first_recharge_C_EventFirstRechargeShowRechargeUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_first_recharge.bp_first_recharge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_first_recharge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_first_recharge.bp_first_recharge_C.UserConstructionScript");

	Abp_first_recharge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
