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

// Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.ShowBeSelectCircle
struct UDropBoxInMapShow_BP_C_ShowBeSelectCircle_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.ShowDropBox
struct UDropBoxInMapShow_BP_C_ShowDropBox_Params
{
	struct FAirDropBoxInOb                             Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.BndEvt__Button_SelectedBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UDropBoxInMapShow_BP_C_BndEvt__Button_SelectedBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.ExecuteUbergraph_DropBoxInMapShow_BP
struct UDropBoxInMapShow_BP_C_ExecuteUbergraph_DropBoxInMapShow_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.OnBoxBeClicked__DelegateSignature
struct UDropBoxInMapShow_BP_C_OnBoxBeClicked__DelegateSignature_Params
{
	struct FAirDropBoxInOb                             BoxInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
