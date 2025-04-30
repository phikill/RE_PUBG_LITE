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

// Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.RefreshOBData
struct UOB_PlayerHeadList_BP_C_RefreshOBData_Params
{
	TArray<struct FPlayerInfoInOB>                     MapPlayerList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FObservedData                               ObservedPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.SetChildrenVisible
struct UOB_PlayerHeadList_BP_C_SetChildrenVisible_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPanelWidget*                                Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.GetChildByIndex
struct UOB_PlayerHeadList_BP_C_GetChildByIndex_Params
{
	class UPanelWidget*                                PanelWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOB_PlayerHeadHPItem_UIBP_C*                 Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OB_PlayerHeadList_BP.OB_PlayerHeadList_BP_C.RefreshData
struct UOB_PlayerHeadList_BP_C_RefreshData_Params
{
	TArray<struct FPlayerInfoInOB>                     MapPlayerList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FObservedData                               ObservedPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
