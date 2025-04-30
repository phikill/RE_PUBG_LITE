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

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.HighLightBG_Dark
struct UGrenadeInfoItem_BP_C_HighLightBG_Dark_Params
{
	bool                                               IsHighLight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.IsValidWeapon
struct UGrenadeInfoItem_BP_C_IsValidWeapon_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnSpawnActorInSceneCaptureWorld
struct UGrenadeInfoItem_BP_C_OnSpawnActorInSceneCaptureWorld_Params
{
	class AActor*                                      SpawnedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.UpdateRenderTexture
struct UGrenadeInfoItem_BP_C_UpdateRenderTexture_Params
{
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseButtonUp
struct UGrenadeInfoItem_BP_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseButtonDown
struct UGrenadeInfoItem_BP_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragDetected
struct UGrenadeInfoItem_BP_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.HighLightBG
struct UGrenadeInfoItem_BP_C_HighLightBG_Params
{
	bool                                               IsHighLight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.UpdateWeaponAppearanceInfo
struct UGrenadeInfoItem_BP_C_UpdateWeaponAppearanceInfo_Params
{
	struct FBP_STRUCT_Item_type                        Record;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnTouchEnded
struct UGrenadeInfoItem_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnTouchStarted
struct UGrenadeInfoItem_BP_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseLeave
struct UGrenadeInfoItem_BP_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragCancelled
struct UGrenadeInfoItem_BP_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnMouseEnter
struct UGrenadeInfoItem_BP_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragEnter
struct UGrenadeInfoItem_BP_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnDragLeave
struct UGrenadeInfoItem_BP_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ReceiveHide
struct UGrenadeInfoItem_BP_C_ReceiveHide_Params
{
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ReceiveShow
struct UGrenadeInfoItem_BP_C_ReceiveShow_Params
{
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.OnRightClickedDown
struct UGrenadeInfoItem_BP_C_OnRightClickedDown_Params
{
	struct FVector2D*                                  TempScreenPos;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ExecuteUbergraph_GrenadeInfoItem_BP
struct UGrenadeInfoItem_BP_C_ExecuteUbergraph_GrenadeInfoItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ShowToolTip__DelegateSignature
struct UGrenadeInfoItem_BP_C_ShowToolTip__DelegateSignature_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             BattleItemData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ItemBeDragCancelled__DelegateSignature
struct UGrenadeInfoItem_BP_C_ItemBeDragCancelled__DelegateSignature_Params
{
};

// Function GrenadeInfoItem_BP.GrenadeInfoItem_BP_C.ItemBeDragBegin__DelegateSignature
struct UGrenadeInfoItem_BP_C_ItemBeDragBegin__DelegateSignature_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EBackPackDragOrigin>                   DragOrgin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
