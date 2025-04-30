
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

// Function bp_weapon_model_handler.bp_weapon_model_handler_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_weapon_model_handler_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_weapon_model_handler.bp_weapon_model_handler_C.UserConstructionScript");

	Abp_weapon_model_handler_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
