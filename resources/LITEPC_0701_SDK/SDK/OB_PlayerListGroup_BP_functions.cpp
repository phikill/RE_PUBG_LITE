
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

// Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.OBPlayerChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OBPlayerName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOB_PlayerListGroup_BP_C::OBPlayerChange(const struct FString& OBPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.OBPlayerChange");

	UOB_PlayerListGroup_BP_C_OBPlayerChange_Params params;
	params.OBPlayerName = OBPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.RefreshData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> PlayerDataList                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ObserverPlayerName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOB_PlayerListGroup_BP_C::RefreshData(const struct FString& ObserverPlayerName, TArray<struct FPlayerInfoInOB>* PlayerDataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.RefreshData");

	UOB_PlayerListGroup_BP_C_RefreshData_Params params;
	params.ObserverPlayerName = ObserverPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerDataList != nullptr)
		*PlayerDataList = params.PlayerDataList;
}


// Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UOB_PlayerListGroup_BP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.Init");

	UOB_PlayerListGroup_BP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOB_PlayerListGroup_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.Construct");

	UOB_PlayerListGroup_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.ExecuteUbergraph_OB_PlayerListGroup_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_PlayerListGroup_BP_C::ExecuteUbergraph_OB_PlayerListGroup_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.ExecuteUbergraph_OB_PlayerListGroup_BP");

	UOB_PlayerListGroup_BP_C_ExecuteUbergraph_OB_PlayerListGroup_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
