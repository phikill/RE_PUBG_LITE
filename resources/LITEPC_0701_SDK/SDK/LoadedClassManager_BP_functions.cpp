
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

// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadPlaneBPTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadPlaneBPTable(const struct FString& BPTableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadPlaneBPTable");

	ULoadedClassManager_BP_C_LoadPlaneBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehicleBPTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadVehicleBPTable(const struct FString& BPTableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehicleBPTable");

	ULoadedClassManager_BP_C_LoadVehicleBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadEmoteBPTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadEmoteBPTable(const struct FString& BPTableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadEmoteBPTable");

	ULoadedClassManager_BP_C_LoadEmoteBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadArmoryWeaponBPTable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoadedClassManager_BP_C::LoadArmoryWeaponBPTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadArmoryWeaponBPTable");

	ULoadedClassManager_BP_C_LoadArmoryWeaponBPTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadConsumableBPTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoadedClassManager_BP_C::LoadConsumableBPTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadConsumableBPTable");

	ULoadedClassManager_BP_C_LoadConsumableBPTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadGameModeBPTable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoadedClassManager_BP_C::LoadGameModeBPTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadGameModeBPTable");

	ULoadedClassManager_BP_C_LoadGameModeBPTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarBPTable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoadedClassManager_BP_C::LoadAvatarBPTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarBPTable");

	ULoadedClassManager_BP_C_LoadAvatarBPTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadWeaponBPTable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoadedClassManager_BP_C::LoadWeaponBPTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadWeaponBPTable");

	ULoadedClassManager_BP_C_LoadWeaponBPTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.InitBPTableMap
// (Event, Public, BlueprintEvent)

void ULoadedClassManager_BP_C::InitBPTableMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.InitBPTableMap");

	ULoadedClassManager_BP_C_InitBPTableMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.ExecuteUbergraph_LoadedClassManager_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadedClassManager_BP_C::ExecuteUbergraph_LoadedClassManager_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.ExecuteUbergraph_LoadedClassManager_BP");

	ULoadedClassManager_BP_C_ExecuteUbergraph_LoadedClassManager_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
