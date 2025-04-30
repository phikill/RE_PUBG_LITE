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

// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreahOBPlayerChange
struct UOB_MapPlayerList_BP_C_RefreahOBPlayerChange_Params
{
	class UPanelWidget*                                PanelWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.OnOBPlayerChange
struct UOB_MapPlayerList_BP_C_OnOBPlayerChange_Params
{
	struct FObservedData                               CrtOBPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshTotalListData
struct UOB_MapPlayerList_BP_C_RefreshTotalListData_Params
{
	TArray<struct FPlayerInfoInOB>                     DataList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FObservedData                               CrtOBPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshNearListData
struct UOB_MapPlayerList_BP_C_RefreshNearListData_Params
{
	TArray<struct FPlayerInfoInOB>                     DataList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FObservedData                               CrtOBPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.RefreshListData
struct UOB_MapPlayerList_BP_C_RefreshListData_Params
{
	TArray<struct FPlayerInfoInOB>                     DataList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCustomScrollBox*                            CustomScrollBox;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.GetChildByIndex
struct UOB_MapPlayerList_BP_C_GetChildByIndex_Params
{
	class UPanelWidget*                                PanelWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOB_PlayerListGroup_BP_C*                    TeamItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.BndEvt__Button_Nearby_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UOB_MapPlayerList_BP_C_BndEvt__Button_Nearby_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.BndEvt__Button_ALL_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UOB_MapPlayerList_BP_C_BndEvt__Button_ALL_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OB_MapPlayerList_BP.OB_MapPlayerList_BP_C.ExecuteUbergraph_OB_MapPlayerList_BP
struct UOB_MapPlayerList_BP_C_ExecuteUbergraph_OB_MapPlayerList_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
