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

// Function GrenadeAimBtn.GrenadeAimBtn_C.SwitchCamera
struct UGrenadeAimBtn_C_SwitchCamera_Params
{
};

// Function GrenadeAimBtn.GrenadeAimBtn_C.OnTouchEnded
struct UGrenadeAimBtn_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GrenadeAimBtn.GrenadeAimBtn_C.OnTouchStarted
struct UGrenadeAimBtn_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GrenadeAimBtn.GrenadeAimBtn_C.GrenadeThrown__DelegateSignature
struct UGrenadeAimBtn_C_GrenadeThrown__DelegateSignature_Params
{
};

// Function GrenadeAimBtn.GrenadeAimBtn_C.GrenadeTriggerHit__DelegateSignature
struct UGrenadeAimBtn_C_GrenadeTriggerHit__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
