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

// Function AppleARKit.AppleARKitAnchor.GetTransform
struct UAppleARKitAnchor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace
struct UAppleARKitBlueprintLibrary_HitTestAtScreenPosition_TrackingSpace_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (ConstParm, Parm, IsPlainOldData)
	EAppleARKitHitTestResultType                       Types;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAppleARKitHitTestResult>            OutResults;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame
struct UAppleARKitBlueprintLibrary_GetCurrentFrame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAppleARKitFrame                            OutCurrentFrame;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter
struct UAppleARKitPlaneAnchor_GetTransformToCenter_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetExtent
struct UAppleARKitPlaneAnchor_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetCenter
struct UAppleARKitPlaneAnchor_GetCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
