
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

// Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.LoadSpecialCategoryConfig
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ItemGeneratorComponent_C::LoadSpecialCategoryConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.LoadSpecialCategoryConfig");

	UBP_ItemGeneratorComponent_C_LoadSpecialCategoryConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ItemGeneratorComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.ReceiveBeginPlay");

	UBP_ItemGeneratorComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.LoadItemGenerateTable
// (Event, Public, BlueprintEvent)

void UBP_ItemGeneratorComponent_C::LoadItemGenerateTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.LoadItemGenerateTable");

	UBP_ItemGeneratorComponent_C_LoadItemGenerateTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.OnGameModeEnterFlying
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_ItemGeneratorComponent_C::OnGameModeEnterFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.OnGameModeEnterFlying");

	UBP_ItemGeneratorComponent_C_OnGameModeEnterFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.OnPlayerEnterBornIsland
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_ItemGeneratorComponent_C::OnPlayerEnterBornIsland()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.OnPlayerEnterBornIsland");

	UBP_ItemGeneratorComponent_C_OnPlayerEnterBornIsland_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.ExecuteUbergraph_BP_ItemGeneratorComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemGeneratorComponent_C::ExecuteUbergraph_BP_ItemGeneratorComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C.ExecuteUbergraph_BP_ItemGeneratorComponent");

	UBP_ItemGeneratorComponent_C_ExecuteUbergraph_BP_ItemGeneratorComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
