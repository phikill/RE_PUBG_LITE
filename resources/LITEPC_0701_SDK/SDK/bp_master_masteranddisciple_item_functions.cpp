
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

// Function bp_master_masteranddisciple_item.bp_master_masteranddisciple_item_C.EventDismissMasterRelationShip_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_master_masteranddisciple_item_C::EventDismissMasterRelationShip_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_master_masteranddisciple_item.bp_master_masteranddisciple_item_C.EventDismissMasterRelationShip_NoFetch");

	Abp_master_masteranddisciple_item_C_EventDismissMasterRelationShip_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_master_masteranddisciple_item.bp_master_masteranddisciple_item_C.EventDismissMasterRelationShip
// (BlueprintCallable, BlueprintEvent)

void Abp_master_masteranddisciple_item_C::EventDismissMasterRelationShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_master_masteranddisciple_item.bp_master_masteranddisciple_item_C.EventDismissMasterRelationShip");

	Abp_master_masteranddisciple_item_C_EventDismissMasterRelationShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_master_masteranddisciple_item.bp_master_masteranddisciple_item_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_master_masteranddisciple_item_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_master_masteranddisciple_item.bp_master_masteranddisciple_item_C.UserConstructionScript");

	Abp_master_masteranddisciple_item_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
