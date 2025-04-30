
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

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.CreateMeshData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMeshPackage            MeshPackage                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMeshData               Output                         (Parm, OutParm)

void UCharacterAvatarComp_BP_C::CreateMeshData(const struct FMeshPackage& MeshPackage, const struct FItemDefineID& DefineID, struct FMeshData* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.CreateMeshData");

	UCharacterAvatarComp_BP_C_CreateMeshData_Params params;
	params.MeshPackage = MeshPackage;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.CheckShouldEquipItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            slotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp_BP_C::CheckShouldEquipItem(int slotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.CheckShouldEquipItem");

	UCharacterAvatarComp_BP_C_CheckShouldEquipItem_Params params;
	params.slotID = slotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.PutOnDefaultEquipment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackpackAvatarHandle*   ItemHandle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp_BP_C::PutOnDefaultEquipment(class UBackpackAvatarHandle* ItemHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.PutOnDefaultEquipment");

	UCharacterAvatarComp_BP_C_PutOnDefaultEquipment_Params params;
	params.ItemHandle = ItemHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.InitBodyMeshByHead
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp_BP_C::InitBodyMeshByHead(int* Head)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.InitBodyMeshByHead");

	UCharacterAvatarComp_BP_C_InitBodyMeshByHead_Params params;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.GetBPID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp_BP_C::GetBPID(int RowName, int* BPID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.GetBPID");

	UCharacterAvatarComp_BP_C_GetBPID_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPID != nullptr)
		*BPID = params.BPID;
}


// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.GetBattleItemFromResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackAvatarHandle*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackAvatarHandle* UCharacterAvatarComp_BP_C::GetBattleItemFromResID(int RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.GetBattleItemFromResID");

	UCharacterAvatarComp_BP_C_GetBattleItemFromResID_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.PutOffEquimentByResID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp_BP_C::PutOffEquimentByResID(int* resID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.PutOffEquimentByResID");

	UCharacterAvatarComp_BP_C_PutOffEquimentByResID_Params params;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.PutOnEquipmentByResID
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterAvatarComp_BP_C::PutOnEquipmentByResID(int* resID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.PutOnEquipmentByResID");

	UCharacterAvatarComp_BP_C_PutOnEquipmentByResID_Params params;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UCharacterAvatarComp_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.ReceiveBeginPlay");

	UCharacterAvatarComp_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.ExecuteUbergraph_CharacterAvatarComp_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterAvatarComp_BP_C::ExecuteUbergraph_CharacterAvatarComp_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.ExecuteUbergraph_CharacterAvatarComp_BP");

	UCharacterAvatarComp_BP_C_ExecuteUbergraph_CharacterAvatarComp_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
