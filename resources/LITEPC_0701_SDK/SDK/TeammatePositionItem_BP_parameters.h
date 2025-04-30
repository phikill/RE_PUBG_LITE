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

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.UIMsg_CongregationFlag
struct UTeammatePositionItem_BP_C_UIMsg_CongregationFlag_Params
{
};

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.HideAll
struct UTeammatePositionItem_BP_C_HideAll_Params
{
};

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.ShowImage
struct UTeammatePositionItem_BP_C_ShowImage_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetColor
struct UTeammatePositionItem_BP_C_SetColor_Params
{
	struct FLinearColor                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetState
struct UTeammatePositionItem_BP_C_SetState_Params
{
	ExtraPlayerLiveState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetPlayerName
struct UTeammatePositionItem_BP_C_SetPlayerName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.Construct
struct UTeammatePositionItem_BP_C_Construct_Params
{
};

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetCurrentWidgetVisible
struct UTeammatePositionItem_BP_C_SetCurrentWidgetVisible_Params
{
	bool*                                              visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.DelayHideQuick
struct UTeammatePositionItem_BP_C_DelayHideQuick_Params
{
};

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.ExecuteUbergraph_TeammatePositionItem_BP
struct UTeammatePositionItem_BP_C_ExecuteUbergraph_TeammatePositionItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
