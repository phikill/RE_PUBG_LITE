
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

// Function bp_newer_guide.bp_newer_guide_C.EventNewerGuideSelection_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_newer_guide_C::EventNewerGuideSelection_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_newer_guide.bp_newer_guide_C.EventNewerGuideSelection_NoFetch");

	Abp_newer_guide_C_EventNewerGuideSelection_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_newer_guide.bp_newer_guide_C.EventNewerGuideSelection
// (BlueprintCallable, BlueprintEvent)

void Abp_newer_guide_C::EventNewerGuideSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_newer_guide.bp_newer_guide_C.EventNewerGuideSelection");

	Abp_newer_guide_C_EventNewerGuideSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_newer_guide.bp_newer_guide_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_newer_guide_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_newer_guide.bp_newer_guide_C.UserConstructionScript");

	Abp_newer_guide_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
