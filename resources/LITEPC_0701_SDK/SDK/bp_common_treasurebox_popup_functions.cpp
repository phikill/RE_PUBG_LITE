
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

// Function bp_common_treasurebox_popup.bp_common_treasurebox_popup_C.EventCommonTreasureBoxPopupClosePanel_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_common_treasurebox_popup_C::EventCommonTreasureBoxPopupClosePanel_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_common_treasurebox_popup.bp_common_treasurebox_popup_C.EventCommonTreasureBoxPopupClosePanel_NoFetch");

	Abp_common_treasurebox_popup_C_EventCommonTreasureBoxPopupClosePanel_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_common_treasurebox_popup.bp_common_treasurebox_popup_C.EventCommonTreasureBoxPopupClosePanel
// (BlueprintCallable, BlueprintEvent)

void Abp_common_treasurebox_popup_C::EventCommonTreasureBoxPopupClosePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_common_treasurebox_popup.bp_common_treasurebox_popup_C.EventCommonTreasureBoxPopupClosePanel");

	Abp_common_treasurebox_popup_C_EventCommonTreasureBoxPopupClosePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_common_treasurebox_popup.bp_common_treasurebox_popup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_common_treasurebox_popup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_common_treasurebox_popup.bp_common_treasurebox_popup_C.UserConstructionScript");

	Abp_common_treasurebox_popup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
