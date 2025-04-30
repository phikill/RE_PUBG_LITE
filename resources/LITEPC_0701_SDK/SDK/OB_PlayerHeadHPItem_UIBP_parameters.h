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

// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.SetIconColor
struct UOB_PlayerHeadHPItem_UIBP_C_SetIconColor_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.ShowData
struct UOB_PlayerHeadHPItem_UIBP_C_ShowData_Params
{
	struct FPlayerInfoInOB                             PlayerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.Construct
struct UOB_PlayerHeadHPItem_UIBP_C_Construct_Params
{
};

// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.RefreshPlayerHealth
struct UOB_PlayerHeadHPItem_UIBP_C_RefreshPlayerHealth_Params
{
	float*                                             hpRatio;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             breathRatio;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNearDeath;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.BndEvt__Button_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UOB_PlayerHeadHPItem_UIBP_C_BndEvt__Button_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.ExecuteUbergraph_OB_PlayerHeadHPItem_UIBP
struct UOB_PlayerHeadHPItem_UIBP_C_ExecuteUbergraph_OB_PlayerHeadHPItem_UIBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
