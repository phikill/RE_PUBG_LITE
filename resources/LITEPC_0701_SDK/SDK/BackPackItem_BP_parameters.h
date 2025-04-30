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

// Function BackPackItem_BP.BackPackItem_BP_C.OnRep_ItemData
struct UBackPackItem_BP_C_OnRep_ItemData_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.UseItemTimer
struct UBackPackItem_BP_C_UseItemTimer_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.OnMouseButtonUp
struct UBackPackItem_BP_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackItem_BP.BackPackItem_BP_C.OnMouseButtonDown
struct UBackPackItem_BP_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackItem_BP.BackPackItem_BP_C.RefreshIcon
struct UBackPackItem_BP_C_RefreshIcon_Params
{
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.ShowHandleBtns
struct UBackPackItem_BP_C_ShowHandleBtns_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.OnDragDetected
struct UBackPackItem_BP_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.Get_Image_ItemSelectFG_Visibility_1
struct UBackPackItem_BP_C_Get_Image_ItemSelectFG_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.DropAllItem
struct UBackPackItem_BP_C_DropAllItem_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.getBPIDbyDefineID
struct UBackPackItem_BP_C_getBPIDbyDefineID_Params
{
	struct FItemDefineID                               itemDefineID_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                BPID_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.CanGunAddAttachment
struct UBackPackItem_BP_C_CanGunAddAttachment_Params
{
	struct FItemDefineID                               gunID_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               attachID_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               opyEmpty;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canAdd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.IsGun
struct UBackPackItem_BP_C_IsGun_Params
{
	struct FItemDefineID                               defineID_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isGun_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.FindWeapon
struct UBackPackItem_BP_C_FindWeapon_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm, OutParm)
};

// Function BackPackItem_BP.BackPackItem_BP_C.OnTouchEnded
struct UBackPackItem_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackItem_BP.BackPackItem_BP_C.OnTouchStarted
struct UBackPackItem_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackPackItem_BP.BackPackItem_BP_C.EquipItem
struct UBackPackItem_BP_C_EquipItem_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.ResetHandleBtns
struct UBackPackItem_BP_C_ResetHandleBtns_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.HandleItemClick
struct UBackPackItem_BP_C_HandleItemClick_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.UseItem
struct UBackPackItem_BP_C_UseItem_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.UpdateItemData
struct UBackPackItem_BP_C_UpdateItemData_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsUseless;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Use_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature
struct UBackPackItem_BP_C_BndEvt__Button_Use_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Equip_K2Node_ComponentBoundEvent_298_OnButtonClickedEvent__DelegateSignature
struct UBackPackItem_BP_C_BndEvt__Button_Equip_K2Node_ComponentBoundEvent_298_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_ThrowPart_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UBackPackItem_BP_C_BndEvt__Button_ThrowPart_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_Drop_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
struct UBackPackItem_BP_C_BndEvt__Button_Drop_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.OnMouseLeave
struct UBackPackItem_BP_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BackPackItem_BP.BackPackItem_BP_C.BndEvt__Button_DropAll_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct UBackPackItem_BP_C_BndEvt__Button_DropAll_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.OnRightClicked
struct UBackPackItem_BP_C_OnRightClicked_Params
{
	struct FVector2D*                                  TempScreenPos;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.OnMouseEnter
struct UBackPackItem_BP_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BackPackItem_BP.BackPackItem_BP_C.Custom Event_1
struct UBackPackItem_BP_C_Custom_Event_1_Params
{
	bool                                               IsShowPrompt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PromptText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TotalTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.Custom Event_2
struct UBackPackItem_BP_C_Custom_Event_2_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.Construct
struct UBackPackItem_BP_C_Construct_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.ReceivedInitWidget
struct UBackPackItem_BP_C_ReceivedInitWidget_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.ExecuteUbergraph_BackPackItem_BP
struct UBackPackItem_BP_C_ExecuteUbergraph_BackPackItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.ToolTipUpdate__DelegateSignature
struct UBackPackItem_BP_C_ToolTipUpdate__DelegateSignature_Params
{
	class UBackPackItem_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDragCancelled__DelegateSignature
struct UBackPackItem_BP_C_ItemBeDragCancelled__DelegateSignature_Params
{
};

// Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDragBegin__DelegateSignature
struct UBackPackItem_BP_C_ItemBeDragBegin__DelegateSignature_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.ItemBeDropped__DelegateSignature
struct UBackPackItem_BP_C_ItemBeDropped__DelegateSignature_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsForceDrop;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackItem_BP.BackPackItem_BP_C.HandleBtnsStateChange__DelegateSignature
struct UBackPackItem_BP_C_HandleBtnsStateChange__DelegateSignature_Params
{
	class UBackPackItem_BP_C*                          ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClicked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
