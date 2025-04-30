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

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ResetHighLightSlot
struct UBackPackClothSlot_BP_C_ResetHighLightSlot_Params
{
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.HighLightSlot
struct UBackPackClothSlot_BP_C_HighLightSlot_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ShowItem
struct UBackPackClothSlot_BP_C_ShowItem_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseButtonUp
struct UBackPackClothSlot_BP_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseButtonDown
struct UBackPackClothSlot_BP_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.GetSmallIcon
struct UBackPackClothSlot_BP_C_GetSmallIcon_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemSmallIcon;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnTouchEnded
struct UBackPackClothSlot_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnTouchStarted
struct UBackPackClothSlot_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnDragDetected
struct UBackPackClothSlot_BP_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.GetNameByClothArmorType
struct UBackPackClothSlot_BP_C_GetNameByClothArmorType_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ShowNull
struct UBackPackClothSlot_BP_C_ShowNull_Params
{
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.Construct
struct UBackPackClothSlot_BP_C_Construct_Params
{
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnDragCancelled
struct UBackPackClothSlot_BP_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseLeave
struct UBackPackClothSlot_BP_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.OnMouseEnter
struct UBackPackClothSlot_BP_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ExecuteUbergraph_BackPackClothSlot_BP
struct UBackPackClothSlot_BP_C_ExecuteUbergraph_BackPackClothSlot_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ShowToolTip__DelegateSignature
struct UBackPackClothSlot_BP_C_ShowToolTip__DelegateSignature_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ItemBeDragCancelled__DelegateSignature
struct UBackPackClothSlot_BP_C_ItemBeDragCancelled__DelegateSignature_Params
{
};

// Function BackPackClothSlot_BP.BackPackClothSlot_BP_C.ItemBeDragBegin__DelegateSignature
struct UBackPackClothSlot_BP_C_ItemBeDragBegin__DelegateSignature_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
