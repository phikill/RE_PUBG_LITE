
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

// Function BP_VehicleGeneratorComponent.BP_VehicleGeneratorComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_VehicleGeneratorComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleGeneratorComponent.BP_VehicleGeneratorComponent_C.ReceiveBeginPlay");

	UBP_VehicleGeneratorComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleGeneratorComponent.BP_VehicleGeneratorComponent_C.LoadVehicleGenerateTable
// (Event, Public, BlueprintEvent)

void UBP_VehicleGeneratorComponent_C::LoadVehicleGenerateTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleGeneratorComponent.BP_VehicleGeneratorComponent_C.LoadVehicleGenerateTable");

	UBP_VehicleGeneratorComponent_C_LoadVehicleGenerateTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleGeneratorComponent.BP_VehicleGeneratorComponent_C.OnGameModeEnterFlying
// (BlueprintCallable, BlueprintEvent)

void UBP_VehicleGeneratorComponent_C::OnGameModeEnterFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleGeneratorComponent.BP_VehicleGeneratorComponent_C.OnGameModeEnterFlying");

	UBP_VehicleGeneratorComponent_C_OnGameModeEnterFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleGeneratorComponent.BP_VehicleGeneratorComponent_C.ExecuteUbergraph_BP_VehicleGeneratorComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VehicleGeneratorComponent_C::ExecuteUbergraph_BP_VehicleGeneratorComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleGeneratorComponent.BP_VehicleGeneratorComponent_C.ExecuteUbergraph_BP_VehicleGeneratorComponent");

	UBP_VehicleGeneratorComponent_C_ExecuteUbergraph_BP_VehicleGeneratorComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
