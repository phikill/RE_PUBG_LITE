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

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateItemDataByWrap
struct UPickUpItem_S_BP_C_UpdateItemDataByWrap_Params
{
	struct FBattleSearchBoxSortingInfo                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnDragDetected
struct UPickUpItem_S_BP_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseButtonDown
struct UPickUpItem_S_BP_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseButtonUp
struct UPickUpItem_S_BP_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.RefreshIcon
struct UPickUpItem_S_BP_C_RefreshIcon_Params
{
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.ShowDurable
struct UPickUpItem_S_BP_C_ShowDurable_Params
{
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateUseless
struct UPickUpItem_S_BP_C_UpdateUseless_Params
{
	bool                                               Useful;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.GetUseless
struct UPickUpItem_S_BP_C_GetUseless_Params
{
	bool                                               useless;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchGesture
struct UPickUpItem_S_BP_C_OnTouchGesture_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               GestureEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.HandlePickup
struct UPickUpItem_S_BP_C_HandlePickup_Params
{
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchStarted
struct UPickUpItem_S_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnTouchEnded
struct UPickUpItem_S_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.UpdateItemData
struct UPickUpItem_S_BP_C_UpdateItemData_Params
{
	struct FBattleSearchItemSortingInfo                ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.Tick
struct UPickUpItem_S_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
struct UPickUpItem_S_BP_C_BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseLeave
struct UPickUpItem_S_BP_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnRightClicked
struct UPickUpItem_S_BP_C_OnRightClicked_Params
{
	struct FVector2D*                                  TempScreenPos;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.OnMouseEnter
struct UPickUpItem_S_BP_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.ExecuteUbergraph_PickUpItem_S_BP
struct UPickUpItem_S_BP_C_ExecuteUbergraph_PickUpItem_S_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.ItemBePickUp__DelegateSignature
struct UPickUpItem_S_BP_C_ItemBePickUp__DelegateSignature_Params
{
	struct FSearchedPickUpItemResult                   PickUpItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ForceDrop;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.ToolTipUpdate__DelegateSignature
struct UPickUpItem_S_BP_C_ToolTipUpdate__DelegateSignature_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.ItemDragStart__DelegateSignature
struct UPickUpItem_S_BP_C_ItemDragStart__DelegateSignature_Params
{
	struct FSearchedPickUpItemResult                   ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickUpItem_S_BP.PickUpItem_S_BP_C.HandleBtnsStateChange__DelegateSignature
struct UPickUpItem_S_BP_C_HandleBtnsStateChange__DelegateSignature_Params
{
	class UPickUpItem_S_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHover;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
