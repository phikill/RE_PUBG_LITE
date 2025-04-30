
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

// Function BP_AirDropPlane.BP_AirDropPlane_C.StartSymulateFly
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AirDropPlane_C::StartSymulateFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropPlane.BP_AirDropPlane_C.StartSymulateFly");

	ABP_AirDropPlane_C_StartSymulateFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropPlane.BP_AirDropPlane_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AirDropPlane_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropPlane.BP_AirDropPlane_C.UserConstructionScript");

	ABP_AirDropPlane_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropPlane.BP_AirDropPlane_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AirDropPlane_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropPlane.BP_AirDropPlane_C.ReceiveBeginPlay");

	ABP_AirDropPlane_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropPlane.BP_AirDropPlane_C.ExecuteUbergraph_BP_AirDropPlane
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AirDropPlane_C::ExecuteUbergraph_BP_AirDropPlane(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropPlane.BP_AirDropPlane_C.ExecuteUbergraph_BP_AirDropPlane");

	ABP_AirDropPlane_C_ExecuteUbergraph_BP_AirDropPlane_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
