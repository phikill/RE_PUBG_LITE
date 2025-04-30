
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

// Function TApm.TApmHelper.UpdateGameStatusToVmp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::STATIC_UpdateGameStatusToVmp(int Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.UpdateGameStatusToVmp");

	UTApmHelper_UpdateGameStatusToVmp_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.SetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 userId                         (Parm, ZeroConstructor)

void UTApmHelper::STATIC_SetUserId(const struct FString& userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetUserId");

	UTApmHelper_SetUserId_Params params;
	params.userId = userId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.SetTragetFrameRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::STATIC_SetTragetFrameRate(int Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetTragetFrameRate");

	UTApmHelper_SetTragetFrameRate_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.SetQuality
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::STATIC_SetQuality(int Quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetQuality");

	UTApmHelper_SetQuality_Params params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.SetLocale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Locale                         (Parm, ZeroConstructor)

void UTApmHelper::STATIC_SetLocale(const struct FString& Locale)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetLocale");

	UTApmHelper_SetLocale_Params params;
	params.Locale = Locale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.setAffinityForThread
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            tid                            (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::STATIC_setAffinityForThread(int tid)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.setAffinityForThread");

	UTApmHelper_setAffinityForThread_Params params;
	params.tid = tid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.requestResourceGuarantee
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            loadType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            applyType                      (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::STATIC_requestResourceGuarantee(int Condition, int loadType, int applyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.requestResourceGuarantee");

	UTApmHelper_requestResourceGuarantee_Params params;
	params.Condition = Condition;
	params.loadType = loadType;
	params.applyType = applyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.RegisterRomCallBackMeta
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 ZoneID                         (Parm, ZeroConstructor)

void UTApmHelper::STATIC_RegisterRomCallBackMeta(const struct FString& OpenID, const struct FString& ZoneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.RegisterRomCallBackMeta");

	UTApmHelper_RegisterRomCallBackMeta_Params params;
	params.OpenID = OpenID;
	params.ZoneID = ZoneID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PutKVS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::STATIC_PutKVS(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PutKVS");

	UTApmHelper_PutKVS_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PutKVI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::STATIC_PutKVI(const struct FString& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PutKVI");

	UTApmHelper_PutKVI_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PutKVD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::STATIC_PutKVD(const struct FString& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PutKVD");

	UTApmHelper_PutKVD_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostNTL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            latency                        (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::STATIC_PostNTL(int latency)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostNTL");

	UTApmHelper_PostNTL_Params params;
	params.latency = latency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostLagStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::STATIC_PostLagStatus(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostLagStatus");

	UTApmHelper_PostLagStatus_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Info                           (Parm, ZeroConstructor)

void UTApmHelper::STATIC_PostEvent(int Key, const struct FString& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostEvent");

	UTApmHelper_PostEvent_Params params;
	params.Key = Key;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.MarkLevelLoadCompleted
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::STATIC_MarkLevelLoadCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkLevelLoadCompleted");

	UTApmHelper_MarkLevelLoadCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.MarkLevelLoad
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SceneName                      (Parm, ZeroConstructor)
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::STATIC_MarkLevelLoad(const struct FString& SceneName, int Quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkLevelLoad");

	UTApmHelper_MarkLevelLoad_Params params;
	params.SceneName = SceneName;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.MarkLevelFin
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::STATIC_MarkLevelFin()
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkLevelFin");

	UTApmHelper_MarkLevelFin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.MarkAppFinishLaunch
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::STATIC_MarkAppFinishLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkAppFinishLaunch");

	UTApmHelper_MarkAppFinishLaunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.GetDeviceLevelByQcc
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 configName                     (Parm, ZeroConstructor)
// struct FString                 gpuFamily                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTApmHelper::STATIC_GetDeviceLevelByQcc(const struct FString& configName, const struct FString& gpuFamily)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.GetDeviceLevelByQcc");

	UTApmHelper_GetDeviceLevelByQcc_Params params;
	params.configName = configName;
	params.gpuFamily = gpuFamily;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TApm.TApmHelper.GetDeviceLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTApmHelper::STATIC_GetDeviceLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.GetDeviceLevel");

	UTApmHelper_GetDeviceLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TApm.TApmHelper.EndTag
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::STATIC_EndTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.EndTag");

	UTApmHelper_EndTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.EnableDebugMode
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::STATIC_EnableDebugMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.EnableDebugMode");

	UTApmHelper_EnableDebugMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.cancelAffinityForThread
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            tid                            (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::STATIC_cancelAffinityForThread(int tid)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.cancelAffinityForThread");

	UTApmHelper_cancelAffinityForThread_Params params;
	params.tid = tid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TApm.TApmHelper.AddTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void UTApmHelper::STATIC_AddTag(const struct FString& TagName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TApm.TApmHelper.AddTag");

	UTApmHelper_AddTag_Params params;
	params.TagName = TagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
