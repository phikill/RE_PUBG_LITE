
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

// Function bp_teamup_qrcode.bp_teamup_qrcode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_teamup_qrcode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_teamup_qrcode.bp_teamup_qrcode_C.UserConstructionScript");

	Abp_teamup_qrcode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
