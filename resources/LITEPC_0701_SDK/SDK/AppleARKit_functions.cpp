
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AppleARKit.AppleARKitAnchor.GetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAppleARKitAnchor::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitAnchor.GetTransform");

	UAppleARKitAnchor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (ConstParm, Parm, IsPlainOldData)
// EAppleARKitHitTestResultType   Types                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAppleARKitHitTestResult> OutResults                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAppleARKitBlueprintLibrary::STATIC_HitTestAtScreenPosition_TrackingSpace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, EAppleARKitHitTestResultType Types, TArray<struct FAppleARKitHitTestResult>* OutResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace");

	UAppleARKitBlueprintLibrary_HitTestAtScreenPosition_TrackingSpace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
	params.Types = Types;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResults != nullptr)
		*OutResults = params.OutResults;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FAppleARKitFrame        OutCurrentFrame                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAppleARKitBlueprintLibrary::STATIC_GetCurrentFrame(class UObject* WorldContextObject, struct FAppleARKitFrame* OutCurrentFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame");

	UAppleARKitBlueprintLibrary_GetCurrentFrame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurrentFrame != nullptr)
		*OutCurrentFrame = params.OutCurrentFrame;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAppleARKitPlaneAnchor::GetTransformToCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter");

	UAppleARKitPlaneAnchor_GetTransformToCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAppleARKitPlaneAnchor::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitPlaneAnchor.GetExtent");

	UAppleARKitPlaneAnchor_GetExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAppleARKitPlaneAnchor::GetCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitPlaneAnchor.GetCenter");

	UAppleARKitPlaneAnchor_GetCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
