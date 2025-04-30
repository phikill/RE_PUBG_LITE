#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.UpdateGroundItemData
struct UPickUpListItem_Row_BP_C_UpdateGroundItemData_Params
{
	TArray<struct FBattleSearchItemSortingInfo>        sortInfoList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.UpdateTombBoxData
struct UPickUpListItem_Row_BP_C_UpdateTombBoxData_Params
{
	class APlayerTombBox*                              Box;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBattleSearchBoxSortingInfo>         BoxList;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.MakesureListEnough
struct UPickUpListItem_Row_BP_C_MakesureListEnough_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.ExecuteUbergraph_PickUpListItem_Row_BP
struct UPickUpListItem_Row_BP_C_ExecuteUbergraph_PickUpListItem_Row_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
