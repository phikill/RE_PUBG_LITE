
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

// Function bp_common_itemtips_panel.bp_common_itemtips_panel_C.EventCommonItemTipsGetOwningText_Push_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_common_itemtips_panel_C::EventCommonItemTipsGetOwningText_Push_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_common_itemtips_panel.bp_common_itemtips_panel_C.EventCommonItemTipsGetOwningText_Push_NoFetch");

	Abp_common_itemtips_panel_C_EventCommonItemTipsGetOwningText_Push_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_common_itemtips_panel.bp_common_itemtips_panel_C.EventCommonItemTipsGetOwningText_Push
// (BlueprintCallable, BlueprintEvent)

void Abp_common_itemtips_panel_C::EventCommonItemTipsGetOwningText_Push()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_common_itemtips_panel.bp_common_itemtips_panel_C.EventCommonItemTipsGetOwningText_Push");

	Abp_common_itemtips_panel_C_EventCommonItemTipsGetOwningText_Push_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_common_itemtips_panel.bp_common_itemtips_panel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_common_itemtips_panel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_common_itemtips_panel.bp_common_itemtips_panel_C.UserConstructionScript");

	Abp_common_itemtips_panel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
