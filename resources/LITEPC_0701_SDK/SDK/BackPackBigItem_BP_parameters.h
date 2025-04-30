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

// Function BackPackBigItem_BP.BackPackBigItem_BP_C.Get_CheckBox_BatchSelection_CheckedState_1
struct UBackPackBigItem_BP_C_Get_CheckBox_BatchSelection_CheckedState_1_Params
{
	ECheckBoxState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackPackBigItem_BP.BackPackBigItem_BP_C.ChangeState
struct UBackPackBigItem_BP_C_ChangeState_Params
{
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackBigItem_BP.BackPackBigItem_BP_C.InitData
struct UBackPackBigItem_BP_C_InitData_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackBigItem_BP.BackPackBigItem_BP_C.BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
struct UBackPackBigItem_BP_C_BndEvt__Button_ClickItem_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BackPackBigItem_BP.BackPackBigItem_BP_C.ExecuteUbergraph_BackPackBigItem_BP
struct UBackPackBigItem_BP_C_ExecuteUbergraph_BackPackBigItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackBigItem_BP.BackPackBigItem_BP_C.ItemBeClicked__DelegateSignature
struct UBackPackBigItem_BP_C_ItemBeClicked__DelegateSignature_Params
{
	struct FBattleItemData                             MyData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
