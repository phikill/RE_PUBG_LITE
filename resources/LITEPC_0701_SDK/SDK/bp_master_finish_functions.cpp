
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

// Function bp_master_finish.bp_master_finish_C.EventFetchInfo_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_master_finish_C::EventFetchInfo_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_master_finish.bp_master_finish_C.EventFetchInfo_NoFetch");

	Abp_master_finish_C_EventFetchInfo_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_master_finish.bp_master_finish_C.EventFetchInfo
// (BlueprintCallable, BlueprintEvent)

void Abp_master_finish_C::EventFetchInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_master_finish.bp_master_finish_C.EventFetchInfo");

	Abp_master_finish_C_EventFetchInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_master_finish.bp_master_finish_C.EventMasterFinishClose_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_master_finish_C::EventMasterFinishClose_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_master_finish.bp_master_finish_C.EventMasterFinishClose_NoFetch");

	Abp_master_finish_C_EventMasterFinishClose_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_master_finish.bp_master_finish_C.EventMasterFinishClose
// (BlueprintCallable, BlueprintEvent)

void Abp_master_finish_C::EventMasterFinishClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_master_finish.bp_master_finish_C.EventMasterFinishClose");

	Abp_master_finish_C_EventMasterFinishClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_master_finish.bp_master_finish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_master_finish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_master_finish.bp_master_finish_C.UserConstructionScript");

	Abp_master_finish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
