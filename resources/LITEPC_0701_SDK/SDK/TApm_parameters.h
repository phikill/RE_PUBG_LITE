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

// Function TApm.TApmHelper.UpdateGameStatusToVmp
struct UTApmHelper_UpdateGameStatusToVmp_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.SetUserId
struct UTApmHelper_SetUserId_Params
{
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.SetTragetFrameRate
struct UTApmHelper_SetTragetFrameRate_Params
{
	int                                                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.SetQuality
struct UTApmHelper_SetQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.SetLocale
struct UTApmHelper_SetLocale_Params
{
	struct FString                                     Locale;                                                   // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.setAffinityForThread
struct UTApmHelper_setAffinityForThread_Params
{
	int                                                tid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.requestResourceGuarantee
struct UTApmHelper_requestResourceGuarantee_Params
{
	int                                                Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                loadType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                applyType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.RegisterRomCallBackMeta
struct UTApmHelper_RegisterRomCallBackMeta_Params
{
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PutKVS
struct UTApmHelper_PutKVS_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.PutKVI
struct UTApmHelper_PutKVI_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PutKVD
struct UTApmHelper_PutKVD_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostNTL
struct UTApmHelper_PostNTL_Params
{
	int                                                latency;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostLagStatus
struct UTApmHelper_PostLagStatus_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.PostEvent
struct UTApmHelper_PostEvent_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Info;                                                     // (Parm, ZeroConstructor)
};

// Function TApm.TApmHelper.MarkLevelLoadCompleted
struct UTApmHelper_MarkLevelLoadCompleted_Params
{
};

// Function TApm.TApmHelper.MarkLevelLoad
struct UTApmHelper_MarkLevelLoad_Params
{
	struct FString                                     SceneName;                                                // (Parm, ZeroConstructor)
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.MarkLevelFin
struct UTApmHelper_MarkLevelFin_Params
{
};

// Function TApm.TApmHelper.MarkAppFinishLaunch
struct UTApmHelper_MarkAppFinishLaunch_Params
{
};

// Function TApm.TApmHelper.GetDeviceLevelByQcc
struct UTApmHelper_GetDeviceLevelByQcc_Params
{
	struct FString                                     configName;                                               // (Parm, ZeroConstructor)
	struct FString                                     gpuFamily;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TApm.TApmHelper.GetDeviceLevel
struct UTApmHelper_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TApm.TApmHelper.EndTag
struct UTApmHelper_EndTag_Params
{
};

// Function TApm.TApmHelper.EnableDebugMode
struct UTApmHelper_EnableDebugMode_Params
{
};

// Function TApm.TApmHelper.cancelAffinityForThread
struct UTApmHelper_cancelAffinityForThread_Params
{
	int                                                tid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TApm.TApmHelper.AddTag
struct UTApmHelper_AddTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
