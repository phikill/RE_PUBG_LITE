
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

// Function ShineInterface.ShineInterface_C.ShowNormal
// (Public, BlueprintCallable, BlueprintEvent)

void UShineInterface_C::ShowNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShineInterface.ShineInterface_C.ShowNormal");

	UShineInterface_C_ShowNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShineInterface.ShineInterface_C.ShowShine
// (Public, BlueprintCallable, BlueprintEvent)

void UShineInterface_C::ShowShine()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShineInterface.ShineInterface_C.ShowShine");

	UShineInterface_C_ShowShine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
