
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

// Function bp_corps_edit.bp_corps_edit_C.EventCorpsEditShow_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_edit_C::EventCorpsEditShow_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_corps_edit.bp_corps_edit_C.EventCorpsEditShow_NoFetch");

	Abp_corps_edit_C_EventCorpsEditShow_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_corps_edit.bp_corps_edit_C.EventCorpsEditShow
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_edit_C::EventCorpsEditShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_corps_edit.bp_corps_edit_C.EventCorpsEditShow");

	Abp_corps_edit_C_EventCorpsEditShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_corps_edit.bp_corps_edit_C.EventCorpsEditConfirm_Push_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_edit_C::EventCorpsEditConfirm_Push_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_corps_edit.bp_corps_edit_C.EventCorpsEditConfirm_Push_NoFetch");

	Abp_corps_edit_C_EventCorpsEditConfirm_Push_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_corps_edit.bp_corps_edit_C.EventCorpsEditConfirm_Push
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_edit_C::EventCorpsEditConfirm_Push()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_corps_edit.bp_corps_edit_C.EventCorpsEditConfirm_Push");

	Abp_corps_edit_C_EventCorpsEditConfirm_Push_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_corps_edit.bp_corps_edit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_corps_edit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_corps_edit.bp_corps_edit_C.UserConstructionScript");

	Abp_corps_edit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
