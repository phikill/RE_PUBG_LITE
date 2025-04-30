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

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.HighLightBG_Dark
struct UPistolInfoItem_BP_C_HighLightBG_Dark_Params
{
	bool                                               IsHighLight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.IsValidWeapon
struct UPistolInfoItem_BP_C_IsValidWeapon_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnSpawnActorInSceneCaptureWorld
struct UPistolInfoItem_BP_C_OnSpawnActorInSceneCaptureWorld_Params
{
	class AActor*                                      SpawnedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.UpdateRenderTexture
struct UPistolInfoItem_BP_C_UpdateRenderTexture_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.IsAttachSlotMouseOver
struct UPistolInfoItem_BP_C_IsAttachSlotMouseOver_Params
{
	bool                                               IsMouseOver;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnMouseButtonUp
struct UPistolInfoItem_BP_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnMouseButtonDown
struct UPistolInfoItem_BP_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.BindWeaponChangeEvent
struct UPistolInfoItem_BP_C_BindWeaponChangeEvent_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.UpdateUsingSlot
struct UPistolInfoItem_BP_C_UpdateUsingSlot_Params
{
	ESurviveWeaponPropSlot                             Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.ResertHighLightAttachSlot
struct UPistolInfoItem_BP_C_ResertHighLightAttachSlot_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.HighLightAttachSlot
struct UPistolInfoItem_BP_C_HighLightAttachSlot_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnDragDetected
struct UPistolInfoItem_BP_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.UpdateWeaponAttachment
struct UPistolInfoItem_BP_C_UpdateWeaponAttachment_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.UpdateSlotVisibility
struct UPistolInfoItem_BP_C_UpdateSlotVisibility_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.UpdateBullet
struct UPistolInfoItem_BP_C_UpdateBullet_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.HighLightBG
struct UPistolInfoItem_BP_C_HighLightBG_Params
{
	bool                                               IsHighLight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.UpdateWeaponAppearanceInfo
struct UPistolInfoItem_BP_C_UpdateWeaponAppearanceInfo_Params
{
	struct FBP_STRUCT_Item_type                        Record;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnTouchEnded
struct UPistolInfoItem_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnTouchStarted
struct UPistolInfoItem_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.ReceivedInitWidget
struct UPistolInfoItem_BP_C_ReceivedInitWidget_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.FittingItemBeDragBegin
struct UPistolInfoItem_BP_C_FittingItemBeDragBegin_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.FittingItemBeDragCancel
struct UPistolInfoItem_BP_C_FittingItemBeDragCancel_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnDragCancelled
struct UPistolInfoItem_BP_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnMouseLeave
struct UPistolInfoItem_BP_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.ShowToolTipAttachment
struct UPistolInfoItem_BP_C_ShowToolTipAttachment_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.BndEvt__FitingSlotItem_BP_K2Node_ComponentBoundEvent_7_OnLeaveSlot__DelegateSignature
struct UPistolInfoItem_BP_C_BndEvt__FitingSlotItem_BP_K2Node_ComponentBoundEvent_7_OnLeaveSlot__DelegateSignature_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_0_K2Node_ComponentBoundEvent_20_OnLeaveSlot__DelegateSignature
struct UPistolInfoItem_BP_C_BndEvt__FitingSlotItem_BP_C_0_K2Node_ComponentBoundEvent_20_OnLeaveSlot__DelegateSignature_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.BndEvt__FitingSlotItem_BP_C_1_K2Node_ComponentBoundEvent_34_OnLeaveSlot__DelegateSignature
struct UPistolInfoItem_BP_C_BndEvt__FitingSlotItem_BP_C_1_K2Node_ComponentBoundEvent_34_OnLeaveSlot__DelegateSignature_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnMouseEnter
struct UPistolInfoItem_BP_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnRightClicked
struct UPistolInfoItem_BP_C_OnRightClicked_Params
{
	struct FVector2D*                                  TempScreenPos;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnDragEnter
struct UPistolInfoItem_BP_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.OnDragLeave
struct UPistolInfoItem_BP_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.ReceiveHide
struct UPistolInfoItem_BP_C_ReceiveHide_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.ReceiveShow
struct UPistolInfoItem_BP_C_ReceiveShow_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.UpdateAvatar_Event
struct UPistolInfoItem_BP_C_UpdateAvatar_Event_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.ExecuteUbergraph_PistolInfoItem_BP
struct UPistolInfoItem_BP_C_ExecuteUbergraph_PistolInfoItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.UpdateAvatar__DelegateSignature
struct UPistolInfoItem_BP_C_UpdateAvatar__DelegateSignature_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.ShowToolTip__DelegateSignature
struct UPistolInfoItem_BP_C_ShowToolTip__DelegateSignature_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.ItemBeDragCancelled__DelegateSignature
struct UPistolInfoItem_BP_C_ItemBeDragCancelled__DelegateSignature_Params
{
};

// Function PistolInfoItem_BP.PistolInfoItem_BP_C.ItemBeDragBegin__DelegateSignature
struct UPistolInfoItem_BP_C_ItemBeDragBegin__DelegateSignature_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrgin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
