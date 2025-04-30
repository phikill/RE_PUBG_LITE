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

// Function PickUpItem_BP.PickUpItem_BP_C.UpdateItemData
struct UPickUpItem_BP_C_UpdateItemData_Params
{
	struct FBattleSearchItemSortingInfo                ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpItem_BP.PickUpItem_BP_C.RefreshIcon
struct UPickUpItem_BP_C_RefreshIcon_Params
{
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_BP.PickUpItem_BP_C.ShowDurable
struct UPickUpItem_BP_C_ShowDurable_Params
{
};

// Function PickUpItem_BP.PickUpItem_BP_C.UpdateUseless
struct UPickUpItem_BP_C_UpdateUseless_Params
{
	bool                                               Useful;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_BP.PickUpItem_BP_C.GetUseless
struct UPickUpItem_BP_C_GetUseless_Params
{
	bool                                               useless;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_BP.PickUpItem_BP_C.UpdateItemDataByWrap
struct UPickUpItem_BP_C_UpdateItemDataByWrap_Params
{
	struct FBattleSearchBoxSortingInfo                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpItem_BP.PickUpItem_BP_C.OnTouchGesture
struct UPickUpItem_BP_C_OnTouchGesture_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               GestureEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickUpItem_BP.PickUpItem_BP_C.HandlePickup
struct UPickUpItem_BP_C_HandlePickup_Params
{
};

// Function PickUpItem_BP.PickUpItem_BP_C.OnTouchStarted
struct UPickUpItem_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickUpItem_BP.PickUpItem_BP_C.OnTouchEnded
struct UPickUpItem_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickUpItem_BP.PickUpItem_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
struct UPickUpItem_BP_C_BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PickUpItem_BP.PickUpItem_BP_C.OnMouseLeave
struct UPickUpItem_BP_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PickUpItem_BP.PickUpItem_BP_C.ExecuteUbergraph_PickUpItem_BP
struct UPickUpItem_BP_C_ExecuteUbergraph_PickUpItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
