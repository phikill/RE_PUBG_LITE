
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

// Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.EventRankDetailRelease_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_roleinfo_rankdetail_C::EventRankDetailRelease_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.EventRankDetailRelease_NoFetch");

	Abp_roleinfo_rankdetail_C_EventRankDetailRelease_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.EventRankDetailRelease
// (BlueprintCallable, BlueprintEvent)

void Abp_roleinfo_rankdetail_C::EventRankDetailRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.EventRankDetailRelease");

	Abp_roleinfo_rankdetail_C_EventRankDetailRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_roleinfo_rankdetail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.UserConstructionScript");

	Abp_roleinfo_rankdetail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
