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

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ResetHighLightSlot
struct UBackPackArmorSlot_BP_C_ResetHighLightSlot_Params
{
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.HighLightSlot
struct UBackPackArmorSlot_BP_C_HighLightSlot_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowItem
struct UBackPackArmorSlot_BP_C_ShowItem_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseButtonUp
struct UBackPackArmorSlot_BP_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnTouchStarted
struct UBackPackArmorSlot_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseButtonDown
struct UBackPackArmorSlot_BP_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnTouchEnded
struct UBackPackArmorSlot_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetArmorHP
struct UBackPackArmorSlot_BP_C_GetArmorHP_Params
{
	int                                                CrtHP;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxHP;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnDragDetected
struct UBackPackArmorSlot_BP_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SetArmorName
struct UBackPackArmorSlot_BP_C_SetArmorName_Params
{
	bool                                               ShowDefault;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.SetArmorHP
struct UBackPackArmorSlot_BP_C_SetArmorHP_Params
{
	int                                                HPCrt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HPMax;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowArmor
struct UBackPackArmorSlot_BP_C_ShowArmor_Params
{
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.GetNameByClothArmorType
struct UBackPackArmorSlot_BP_C_GetNameByClothArmorType_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowNull
struct UBackPackArmorSlot_BP_C_ShowNull_Params
{
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.Construct
struct UBackPackArmorSlot_BP_C_Construct_Params
{
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.Tick
struct UBackPackArmorSlot_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnDragCancelled
struct UBackPackArmorSlot_BP_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseLeave
struct UBackPackArmorSlot_BP_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.OnMouseEnter
struct UBackPackArmorSlot_BP_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ExecuteUbergraph_BackPackArmorSlot_BP
struct UBackPackArmorSlot_BP_C_ExecuteUbergraph_BackPackArmorSlot_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ShowToolTip__DelegateSignature
struct UBackPackArmorSlot_BP_C_ShowToolTip__DelegateSignature_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ItemBeDragCancelled__DelegateSignature
struct UBackPackArmorSlot_BP_C_ItemBeDragCancelled__DelegateSignature_Params
{
};

// Function BackPackArmorSlot_BP.BackPackArmorSlot_BP_C.ItemBeDragBegin__DelegateSignature
struct UBackPackArmorSlot_BP_C_ItemBeDragBegin__DelegateSignature_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
