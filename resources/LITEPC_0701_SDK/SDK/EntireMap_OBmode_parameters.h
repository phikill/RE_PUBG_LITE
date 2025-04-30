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

// Function EntireMap_OBmode.EntireMap_OBmode_C.OnBoxBeClicked
struct UEntireMap_OBmode_C_OnBoxBeClicked_Params
{
	struct FAirDropBoxInOb                             BoxInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.UnselectItem
struct UEntireMap_OBmode_C_UnselectItem_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeViewToDropBox
struct UEntireMap_OBmode_C_ChangeViewToDropBox_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.GetDropBoxBPByID
struct UEntireMap_OBmode_C_GetDropBoxBPByID_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDropBoxInMapShow_BP_C*                      DropBoxBP;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshDropBox
struct UEntireMap_OBmode_C_RefreshDropBox_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeViewToClickedItem
struct UEntireMap_OBmode_C_ChangeViewToClickedItem_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.OnItemBeClicked
struct UEntireMap_OBmode_C_OnItemBeClicked_Params
{
	struct FPlayerInfoInOB                             PlayerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.CheckMapShowName
struct UEntireMap_OBmode_C_CheckMapShowName_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.LockView
struct UEntireMap_OBmode_C_LockView_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshSpectatorPosRot
struct UEntireMap_OBmode_C_RefreshSpectatorPosRot_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.GetSpectatorItemBP
struct UEntireMap_OBmode_C_GetSpectatorItemBP_Params
{
	class USpectatorItem_BP_C*                         ItemBp;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ResetSpectatorData
struct UEntireMap_OBmode_C_ResetSpectatorData_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       SpectorPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshWidgetPosByPawn
struct UEntireMap_OBmode_C_RefreshWidgetPosByPawn_Params
{
	class APawn*                                       ItemPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerItem_BP_C*                            ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshWidgetPosByVector
struct UEntireMap_OBmode_C_RefreshWidgetPosByVector_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PointLocationInLevel;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshNearPosRot
struct UEntireMap_OBmode_C_RefreshNearPosRot_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ResetNearCharacter
struct UEntireMap_OBmode_C_ResetNearCharacter_Params
{
	TArray<struct FPlayerInfoInOB>                     MapPlayerList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeMapAlignment
struct UEntireMap_OBmode_C_ChangeMapAlignment_Params
{
	struct FVector2D                                   InAlignment;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.GetObjectAligInCurMapSize
struct UEntireMap_OBmode_C_GetObjectAligInCurMapSize_Params
{
	struct FVector2D                                   Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              AligX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AligY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.OnPlaneDisappeared
struct UEntireMap_OBmode_C_OnPlaneDisappeared_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.OnPlaneShow
struct UEntireMap_OBmode_C_OnPlaneShow_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.DrawAirAttackArea
struct UEntireMap_OBmode_C_DrawAirAttackArea_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.DrawPlaneRoute
struct UEntireMap_OBmode_C_DrawPlaneRoute_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.OnAirAttackEventHandle
struct UEntireMap_OBmode_C_OnAirAttackEventHandle_Params
{
	TEnumAsByte<EAirAttackInfo>                        AttackMsg;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Wave;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshCircle
struct UEntireMap_OBmode_C_RefreshCircle_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ApplyDataToItemBP
struct UEntireMap_OBmode_C_ApplyDataToItemBP_Params
{
	class UPlayerItem_BP_C*                            ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerInfoInOB                             PlayerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.GetPlayerItemBPByName
struct UEntireMap_OBmode_C_GetPlayerItemBPByName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               AddIfNotFound;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerItem_BP_C*                            ItemBp;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshTotalPosRot
struct UEntireMap_OBmode_C_RefreshTotalPosRot_Params
{
	bool                                               IsApplyData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsApplyPos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.RefreshData
struct UEntireMap_OBmode_C_RefreshData_Params
{
	TArray<struct FPlayerInfoInOB>                     MapPlayerList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FObservedData                               CrtOBPPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.OnTouchEnded
struct UEntireMap_OBmode_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.Init
struct UEntireMap_OBmode_C_Init_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeScaleSlideValue
struct UEntireMap_OBmode_C_ChangeScaleSlideValue_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.MoveMap
struct UEntireMap_OBmode_C_MoveMap_Params
{
	struct FVector2D                                   MoveOffset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.OnTouchMoved
struct UEntireMap_OBmode_C_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.GetTouchDelta
struct UEntireMap_OBmode_C_GetTouchDelta_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.OnTouchStarted
struct UEntireMap_OBmode_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ZoomMapSize
struct UEntireMap_OBmode_C_ZoomMapSize_Params
{
	float                                              SlideValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.GetMapMaxAligByMapSize
struct UEntireMap_OBmode_C_GetMapMaxAligByMapSize_Params
{
	struct FVector2D                                   MapSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MinAlig;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxAlig;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ChangeMapSize
struct UEntireMap_OBmode_C_ChangeMapSize_Params
{
	struct FVector2D                                   Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature
struct UEntireMap_OBmode_C_BndEvt__Button_HideMap_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature
struct UEntireMap_OBmode_C_BndEvt__Slider_MapZoom_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_SwitchTeamMate_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct UEntireMap_OBmode_C_BndEvt__Button_SwitchTeamMate_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UEntireMap_OBmode_C_BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_151_OnButtonClickedEvent__DelegateSignature
struct UEntireMap_OBmode_C_BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_151_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.Tick
struct UEntireMap_OBmode_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ReceiveShow
struct UEntireMap_OBmode_C_ReceiveShow_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
struct UEntireMap_OBmode_C_BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ReceiveHide
struct UEntireMap_OBmode_C_ReceiveHide_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ReceivedInitWidget
struct UEntireMap_OBmode_C_ReceivedInitWidget_Params
{
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.ExecuteUbergraph_EntireMap_OBmode
struct UEntireMap_OBmode_C_ExecuteUbergraph_EntireMap_OBmode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntireMap_OBmode.EntireMap_OBmode_C.OnEntireMapCloseEvent__DelegateSignature
struct UEntireMap_OBmode_C_OnEntireMapCloseEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
