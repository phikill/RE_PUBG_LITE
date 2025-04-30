
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

// Function BP_Ammo_556mm_PickUp.BP_Ammo_556mm_Pickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ammo_556mm_Pickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ammo_556mm_PickUp.BP_Ammo_556mm_Pickup_C.UserConstructionScript");

	ABP_Ammo_556mm_Pickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
