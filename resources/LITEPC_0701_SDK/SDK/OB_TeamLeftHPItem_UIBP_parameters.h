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

// Function OB_TeamLeftHPItem_UIBP.OB_TeamLeftHPItem_UIBP_C.OnMouseButtonUp
struct UOB_TeamLeftHPItem_UIBP_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OB_TeamLeftHPItem_UIBP.OB_TeamLeftHPItem_UIBP_C.ShowHP
struct UOB_TeamLeftHPItem_UIBP_C_ShowHP_Params
{
	float                                              HPPersent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ExtraPlayerLiveState                               LiveState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_TeamLeftHPItem_UIBP.OB_TeamLeftHPItem_UIBP_C.ShowData
struct UOB_TeamLeftHPItem_UIBP_C_ShowData_Params
{
	struct FPlayerInfoInOB                             PlayerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
