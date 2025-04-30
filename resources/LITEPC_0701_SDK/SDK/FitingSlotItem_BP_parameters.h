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

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnRightClickEvent
struct UFitingSlotItem_BP_C_OnRightClickEvent_Params
{
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseButtonDown
struct UFitingSlotItem_BP_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseButtonUp
struct UFitingSlotItem_BP_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.GetGunBattleData
struct UFitingSlotItem_BP_C_GetGunBattleData_Params
{
	struct FBattleItemData                             BattleData;                                               // (Parm, OutParm)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnDragDetected
struct UFitingSlotItem_BP_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchEnded
struct UFitingSlotItem_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnTouchStarted
struct UFitingSlotItem_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.HighLightSocket
struct UFitingSlotItem_BP_C_HighLightSocket_Params
{
	bool                                               highLight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.UpdateSlotItem
struct UFitingSlotItem_BP_C_UpdateSlotItem_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnDragCancelled
struct UFitingSlotItem_BP_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.BndEvt__Button_SlotClick_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UFitingSlotItem_BP_C_BndEvt__Button_SlotClick_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseLeave
struct UFitingSlotItem_BP_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnMouseEnter
struct UFitingSlotItem_BP_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.ExecuteUbergraph_FitingSlotItem_BP
struct UFitingSlotItem_BP_C_ExecuteUbergraph_FitingSlotItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.OnLeaveSlot__DelegateSignature
struct UFitingSlotItem_BP_C_OnLeaveSlot__DelegateSignature_Params
{
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.ShowToolTip__DelegateSignature
struct UFitingSlotItem_BP_C_ShowToolTip__DelegateSignature_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.ItemBeDragCancel__DelegateSignature
struct UFitingSlotItem_BP_C_ItemBeDragCancel__DelegateSignature_Params
{
};

// Function FitingSlotItem_BP.FitingSlotItem_BP_C.ItemBeDragBegin__DelegateSignature
struct UFitingSlotItem_BP_C_ItemBeDragBegin__DelegateSignature_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
