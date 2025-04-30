
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

// Function OB_TeammateList_BP.OB_TeammateList_BP_C.RefreshData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfoInOB> TeammateList                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOB_TeammateList_BP_C::RefreshData(TArray<struct FPlayerInfoInOB>* TeammateList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_TeammateList_BP.OB_TeammateList_BP_C.RefreshData");

	UOB_TeammateList_BP_C_RefreshData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeammateList != nullptr)
		*TeammateList = params.TeammateList;
}


// Function OB_TeammateList_BP.OB_TeammateList_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOB_TeammateList_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_TeammateList_BP.OB_TeammateList_BP_C.Construct");

	UOB_TeammateList_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_TeammateList_BP.OB_TeammateList_BP_C.ExecuteUbergraph_OB_TeammateList_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_TeammateList_BP_C::ExecuteUbergraph_OB_TeammateList_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_TeammateList_BP.OB_TeammateList_BP_C.ExecuteUbergraph_OB_TeammateList_BP");

	UOB_TeammateList_BP_C_ExecuteUbergraph_OB_TeammateList_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
