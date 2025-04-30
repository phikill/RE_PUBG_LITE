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

// Function PlayerItem_BP.PlayerItem_BP_C.OnTouchEnded
struct UPlayerItem_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerItem_BP.PlayerItem_BP_C.ShowCone
struct UPlayerItem_BP_C_ShowCone_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerItem_BP.PlayerItem_BP_C.ShowBeSelectCircle
struct UPlayerItem_BP_C_ShowBeSelectCircle_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerItem_BP.PlayerItem_BP_C.ShowName
struct UPlayerItem_BP_C_ShowName_Params
{
	bool                                               IsFull;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerItem_BP.PlayerItem_BP_C.ShowAngle
struct UPlayerItem_BP_C_ShowAngle_Params
{
	bool                                               IsShowAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationZ;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerItem_BP.PlayerItem_BP_C.ShowData
struct UPlayerItem_BP_C_ShowData_Params
{
	struct FPlayerInfoInOB                             PlayerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSinglar;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsObing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerItem_BP.PlayerItem_BP_C.BeSelected__DelegateSignature
struct UPlayerItem_BP_C_BeSelected__DelegateSignature_Params
{
	struct FPlayerInfoInOB                             PlayerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
