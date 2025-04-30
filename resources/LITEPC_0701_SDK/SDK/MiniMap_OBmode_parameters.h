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

// Function MiniMap_OBmode.MiniMap_OBmode_C.GetDropBoxBPByID
struct UMiniMap_OBmode_C_GetDropBoxBPByID_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDropBoxInMapShow_BP_C*                      DropBoxBP;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshDropBox
struct UMiniMap_OBmode_C_RefreshDropBox_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.LockView
struct UMiniMap_OBmode_C_LockView_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshSpectatorPosRot
struct UMiniMap_OBmode_C_RefreshSpectatorPosRot_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.GetSpectatorItemBP
struct UMiniMap_OBmode_C_GetSpectatorItemBP_Params
{
	class USpectatorItem_BP_C*                         ItemBp;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.ResetSpectatorData
struct UMiniMap_OBmode_C_ResetSpectatorData_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       SpectorPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshWidgetPosByPawn
struct UMiniMap_OBmode_C_RefreshWidgetPosByPawn_Params
{
	class APawn*                                       ItemPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerItem_BP_C*                            ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshWidgetPosByVector
struct UMiniMap_OBmode_C_RefreshWidgetPosByVector_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PointLocationInLevel;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshNearPosRot
struct UMiniMap_OBmode_C_RefreshNearPosRot_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.ResetNearCharacter
struct UMiniMap_OBmode_C_ResetNearCharacter_Params
{
	TArray<struct FPlayerInfoInOB>                     MapPlayerList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.ChangeMapAlignment
struct UMiniMap_OBmode_C_ChangeMapAlignment_Params
{
	struct FVector2D                                   InAlignment;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.GetObjectAligInCurMapSize
struct UMiniMap_OBmode_C_GetObjectAligInCurMapSize_Params
{
	struct FVector2D                                   Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              AligX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AligY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.OnPlaneDisappeared
struct UMiniMap_OBmode_C_OnPlaneDisappeared_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.OnPlaneShow
struct UMiniMap_OBmode_C_OnPlaneShow_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.DrawAirAttackArea
struct UMiniMap_OBmode_C_DrawAirAttackArea_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.DrawPlaneRoute
struct UMiniMap_OBmode_C_DrawPlaneRoute_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.OnAirAttackEventHandle
struct UMiniMap_OBmode_C_OnAirAttackEventHandle_Params
{
	TEnumAsByte<EAirAttackInfo>                        AttackMsg;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Wave;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshCircle
struct UMiniMap_OBmode_C_RefreshCircle_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.ApplyDataToItemBP
struct UMiniMap_OBmode_C_ApplyDataToItemBP_Params
{
	class UPlayerItem_BP_C*                            ItemBp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerInfoInOB                             PlayerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.GetPlayerItemBPByName
struct UMiniMap_OBmode_C_GetPlayerItemBPByName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               AddIfNotFound;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerItem_BP_C*                            ItemBp;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshTotalPosRot
struct UMiniMap_OBmode_C_RefreshTotalPosRot_Params
{
	bool                                               IsApplyData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsApplyPos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.RefreshData
struct UMiniMap_OBmode_C_RefreshData_Params
{
	TArray<struct FPlayerInfoInOB>                     MapPlayerList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FObservedData                               CrtOBPPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.Init
struct UMiniMap_OBmode_C_Init_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.MoveMap
struct UMiniMap_OBmode_C_MoveMap_Params
{
	struct FVector2D                                   MoveOffset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.GetMapMaxAligByMapSize
struct UMiniMap_OBmode_C_GetMapMaxAligByMapSize_Params
{
	struct FVector2D                                   MapSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MinAlig;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxAlig;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.ChangeMapSize
struct UMiniMap_OBmode_C_ChangeMapSize_Params
{
	struct FVector2D                                   Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.Tick
struct UMiniMap_OBmode_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UMiniMap_OBmode_C_BndEvt__Button_SelfLock_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.ReceivedInitWidget
struct UMiniMap_OBmode_C_ReceivedInitWidget_Params
{
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.ExecuteUbergraph_MiniMap_OBmode
struct UMiniMap_OBmode_C_ExecuteUbergraph_MiniMap_OBmode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMap_OBmode.MiniMap_OBmode_C.OnEntireMapCloseEvent__DelegateSignature
struct UMiniMap_OBmode_C_OnEntireMapCloseEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
