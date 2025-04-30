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

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.ClampStringLength
struct UBP_GameFunctionLibrary_C_ClampStringLength_Params
{
	struct FString                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsPlayerCanSeeWidget
struct UBP_GameFunctionLibrary_C_IsPlayerCanSeeWidget_Params
{
	class UWidget*                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               cansee;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMapTexture
struct UBP_GameFunctionLibrary_C_GetCurLevelMapTexture_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetActorsByTag
struct UBP_GameFunctionLibrary_C_GetActorsByTag_Params
{
	struct FName                                       Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Targets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.AddActorTag
struct UBP_GameFunctionLibrary_C_AddActorTag_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TagInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.SetUpGamePostProcessEffectData
struct UBP_GameFunctionLibrary_C_SetUpGamePostProcessEffectData_Params
{
	class APostProcessVolume*                          Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
