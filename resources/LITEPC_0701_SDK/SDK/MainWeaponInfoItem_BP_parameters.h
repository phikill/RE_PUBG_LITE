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

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HighLightBG_Dark
struct UMainWeaponInfoItem_BP_C_HighLightBG_Dark_Params
{
	bool                                               IsHighLightDark;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.IsValidWeapon
struct UMainWeaponInfoItem_BP_C_IsValidWeapon_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnSpawnActorInSceneCaptureWorld
struct UMainWeaponInfoItem_BP_C_OnSpawnActorInSceneCaptureWorld_Params
{
	class AActor*                                      SpawnedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateRenderTexture
struct UMainWeaponInfoItem_BP_C_UpdateRenderTexture_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.IsAttachSlotMouseOver
struct UMainWeaponInfoItem_BP_C_IsAttachSlotMouseOver_Params
{
	bool                                               IsMouseOver;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseButtonDown
struct UMainWeaponInfoItem_BP_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseButtonUp
struct UMainWeaponInfoItem_BP_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragDetected
struct UMainWeaponInfoItem_BP_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BindWeaponChangeEvent
struct UMainWeaponInfoItem_BP_C_BindWeaponChangeEvent_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateBullet
struct UMainWeaponInfoItem_BP_C_UpdateBullet_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateUsingSlot
struct UMainWeaponInfoItem_BP_C_UpdateUsingSlot_Params
{
	ESurviveWeaponPropSlot                             Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ResertHighLightAttachSlot
struct UMainWeaponInfoItem_BP_C_ResertHighLightAttachSlot_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HighLightAttachSlot
struct UMainWeaponInfoItem_BP_C_HighLightAttachSlot_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateSlotVisibility
struct UMainWeaponInfoItem_BP_C_UpdateSlotVisibility_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateWeaponAttachment
struct UMainWeaponInfoItem_BP_C_UpdateWeaponAttachment_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.HighLightBG
struct UMainWeaponInfoItem_BP_C_HighLightBG_Params
{
	bool                                               IsHighLight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchEnded
struct UMainWeaponInfoItem_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnTouchStarted
struct UMainWeaponInfoItem_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateWeaponAppearanceInfo
struct UMainWeaponInfoItem_BP_C_UpdateWeaponAppearanceInfo_Params
{
	struct FBP_STRUCT_Item_type                        WeaponData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             BattleData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ReceivedInitWidget
struct UMainWeaponInfoItem_BP_C_ReceivedInitWidget_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.InitItemArray
struct UMainWeaponInfoItem_BP_C_InitItemArray_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragCancelled
struct UMainWeaponInfoItem_BP_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.FittingItemBeDragBegin
struct UMainWeaponInfoItem_BP_C_FittingItemBeDragBegin_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.FittingItemBeDragCancel
struct UMainWeaponInfoItem_BP_C_FittingItemBeDragCancel_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseLeave
struct UMainWeaponInfoItem_BP_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ShowToolTipAttachment
struct UMainWeaponInfoItem_BP_C_ShowToolTipAttachment_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnMouseEnter
struct UMainWeaponInfoItem_BP_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_K2Node_ComponentBoundEvent_21_OnLeaveSlot__DelegateSignature
struct UMainWeaponInfoItem_BP_C_BndEvt__FitingSlotItem_BP_K2Node_ComponentBoundEvent_21_OnLeaveSlot__DelegateSignature_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_0_K2Node_ComponentBoundEvent_46_OnLeaveSlot__DelegateSignature
struct UMainWeaponInfoItem_BP_C_BndEvt__FitingSlotItem_BP_C_0_K2Node_ComponentBoundEvent_46_OnLeaveSlot__DelegateSignature_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_1_K2Node_ComponentBoundEvent_64_OnLeaveSlot__DelegateSignature
struct UMainWeaponInfoItem_BP_C_BndEvt__FitingSlotItem_BP_C_1_K2Node_ComponentBoundEvent_64_OnLeaveSlot__DelegateSignature_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_2_K2Node_ComponentBoundEvent_83_OnLeaveSlot__DelegateSignature
struct UMainWeaponInfoItem_BP_C_BndEvt__FitingSlotItem_BP_C_2_K2Node_ComponentBoundEvent_83_OnLeaveSlot__DelegateSignature_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_3_K2Node_ComponentBoundEvent_103_OnLeaveSlot__DelegateSignature
struct UMainWeaponInfoItem_BP_C_BndEvt__FitingSlotItem_BP_C_3_K2Node_ComponentBoundEvent_103_OnLeaveSlot__DelegateSignature_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragEnter
struct UMainWeaponInfoItem_BP_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.OnDragLeave
struct UMainWeaponInfoItem_BP_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ReceiveHide
struct UMainWeaponInfoItem_BP_C_ReceiveHide_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ReceiveShow
struct UMainWeaponInfoItem_BP_C_ReceiveShow_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateAvatar_Event
struct UMainWeaponInfoItem_BP_C_UpdateAvatar_Event_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ExecuteUbergraph_MainWeaponInfoItem_BP
struct UMainWeaponInfoItem_BP_C_ExecuteUbergraph_MainWeaponInfoItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.UpdateAvatar__DelegateSignature
struct UMainWeaponInfoItem_BP_C_UpdateAvatar__DelegateSignature_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ShowToolTip__DelegateSignature
struct UMainWeaponInfoItem_BP_C_ShowToolTip__DelegateSignature_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ItemBeDragCancelled__DelegateSignature
struct UMainWeaponInfoItem_BP_C_ItemBeDragCancelled__DelegateSignature_Params
{
};

// Function MainWeaponInfoItem_BP.MainWeaponInfoItem_BP_C.ItemBeDragBegin__DelegateSignature
struct UMainWeaponInfoItem_BP_C_ItemBeDragBegin__DelegateSignature_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
