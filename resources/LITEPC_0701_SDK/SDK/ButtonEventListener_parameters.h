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

// Function ButtonEventListener.ButtonEventListener_C.OnRightClicked
struct UButtonEventListener_C_OnRightClicked_Params
{
	struct FVector2D*                                  TempScreenPos;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ButtonEventListener.ButtonEventListener_C.ExecuteUbergraph_ButtonEventListener
struct UButtonEventListener_C_ExecuteUbergraph_ButtonEventListener_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonEventListener.ButtonEventListener_C.OnRightClick__DelegateSignature
struct UButtonEventListener_C_OnRightClick__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
