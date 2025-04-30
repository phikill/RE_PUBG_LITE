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

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.UpdateGroundItemData
struct UPickUpListItem_Row_BPPC_C_UpdateGroundItemData_Params
{
	TArray<struct FBattleSearchItemSortingInfo>        sortInfoList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.UpdateTombBoxData
struct UPickUpListItem_Row_BPPC_C_UpdateTombBoxData_Params
{
	class APlayerTombBox*                              Box;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBattleSearchBoxSortingInfo>         BoxList;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.MakesureListEnough
struct UPickUpListItem_Row_BPPC_C_MakesureListEnough_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.HandleBtnsStateChangeEvent
struct UPickUpListItem_Row_BPPC_C_HandleBtnsStateChangeEvent_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHover;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemDragStartEvent
struct UPickUpListItem_Row_BPPC_C_ItemDragStartEvent_Params
{
	struct FSearchedPickUpItemResult                   ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ToolTipUpdateEvent
struct UPickUpListItem_Row_BPPC_C_ToolTipUpdateEvent_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemBePickUpEvent
struct UPickUpListItem_Row_BPPC_C_ItemBePickUpEvent_Params
{
	struct FSearchedPickUpItemResult                   PickUpItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ForceDrop;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ExecuteUbergraph_PickUpListItem_Row_BPPC
struct UPickUpListItem_Row_BPPC_C_ExecuteUbergraph_PickUpListItem_Row_BPPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemBePickUp__DelegateSignature
struct UPickUpListItem_Row_BPPC_C_ItemBePickUp__DelegateSignature_Params
{
	struct FSearchedPickUpItemResult                   PickUpItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ForceDrop;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ToolTipUpdate__DelegateSignature
struct UPickUpListItem_Row_BPPC_C_ToolTipUpdate__DelegateSignature_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.ItemDragStart__DelegateSignature
struct UPickUpListItem_Row_BPPC_C_ItemDragStart__DelegateSignature_Params
{
	struct FSearchedPickUpItemResult                   ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpListItem_Row_BPPC.PickUpListItem_Row_BPPC_C.HandleBtnsStateChange__DelegateSignature
struct UPickUpListItem_Row_BPPC_C_HandleBtnsStateChange__DelegateSignature_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHover;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
