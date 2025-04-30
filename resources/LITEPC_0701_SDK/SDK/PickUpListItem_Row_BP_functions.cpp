
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

// Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.UpdateGroundItemData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleSearchItemSortingInfo> sortInfoList                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPickUpListItem_Row_BP_C::UpdateGroundItemData(TArray<struct FBattleSearchItemSortingInfo>* sortInfoList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.UpdateGroundItemData");

	UPickUpListItem_Row_BP_C_UpdateGroundItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sortInfoList != nullptr)
		*sortInfoList = params.sortInfoList;
}


// Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.UpdateTombBoxData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerTombBox*          Box                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBattleSearchBoxSortingInfo> BoxList                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPickUpListItem_Row_BP_C::UpdateTombBoxData(class APlayerTombBox* Box, TArray<struct FBattleSearchBoxSortingInfo>* BoxList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.UpdateTombBoxData");

	UPickUpListItem_Row_BP_C_UpdateTombBoxData_Params params;
	params.Box = Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoxList != nullptr)
		*BoxList = params.BoxList;
}


// Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.MakesureListEnough
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListItem_Row_BP_C::MakesureListEnough(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.MakesureListEnough");

	UPickUpListItem_Row_BP_C_MakesureListEnough_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.ExecuteUbergraph_PickUpListItem_Row_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpListItem_Row_BP_C::ExecuteUbergraph_PickUpListItem_Row_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.ExecuteUbergraph_PickUpListItem_Row_BP");

	UPickUpListItem_Row_BP_C_ExecuteUbergraph_PickUpListItem_Row_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
