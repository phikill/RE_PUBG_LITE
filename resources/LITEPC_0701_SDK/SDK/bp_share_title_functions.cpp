
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

// Function bp_share_title.bp_share_title_C.EventShowShareResultTitleUI_Push_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_share_title_C::EventShowShareResultTitleUI_Push_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_share_title.bp_share_title_C.EventShowShareResultTitleUI_Push_NoFetch");

	Abp_share_title_C_EventShowShareResultTitleUI_Push_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_share_title.bp_share_title_C.EventShowShareResultTitleUI_Push
// (BlueprintCallable, BlueprintEvent)

void Abp_share_title_C::EventShowShareResultTitleUI_Push()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_share_title.bp_share_title_C.EventShowShareResultTitleUI_Push");

	Abp_share_title_C_EventShowShareResultTitleUI_Push_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_share_title.bp_share_title_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_share_title_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_share_title.bp_share_title_C.UserConstructionScript");

	Abp_share_title_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
