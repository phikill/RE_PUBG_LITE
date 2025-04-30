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

// Function KilledTipsPanel.KilledTipsPanel_C.Remove First Item
struct UKilledTipsPanel_C_Remove_First_Item_Params
{
};

// Function KilledTipsPanel.KilledTipsPanel_C.Has Used Position
struct UKilledTipsPanel_C_Has_Used_Position_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KilledTipsPanel.KilledTipsPanel_C.AssignToText
struct UKilledTipsPanel_C_AssignToText_Params
{
	int                                                Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       inputText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function KilledTipsPanel.KilledTipsPanel_C.ResetPositionAndContent
struct UKilledTipsPanel_C_ResetPositionAndContent_Params
{
};

// Function KilledTipsPanel.KilledTipsPanel_C.Has Empty Position
struct UKilledTipsPanel_C_Has_Empty_Position_Params
{
	bool                                               Has_Empty;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                EmptyPosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KilledTipsPanel.KilledTipsPanel_C.RemoveFirst
struct UKilledTipsPanel_C_RemoveFirst_Params
{
};

// Function KilledTipsPanel.KilledTipsPanel_C.Updata
struct UKilledTipsPanel_C_Updata_Params
{
	struct FString                                     new_killed_tips;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function KilledTipsPanel.KilledTipsPanel_C.Tick
struct UKilledTipsPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KilledTipsPanel.KilledTipsPanel_C.ExecuteUbergraph_KilledTipsPanel
struct UKilledTipsPanel_C_ExecuteUbergraph_KilledTipsPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
