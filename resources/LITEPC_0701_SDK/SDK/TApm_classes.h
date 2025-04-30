#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class TApm.TApmHelper
// 0x0000 (0x0028 - 0x0028)
class UTApmHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TApm.TApmHelper");
		return ptr;
	}


	void STATIC_UpdateGameStatusToVmp(int Key, const struct FString& Value);
	void STATIC_SetUserId(const struct FString& userId);
	void STATIC_SetTragetFrameRate(int Target);
	void STATIC_SetQuality(int Quality);
	void STATIC_SetLocale(const struct FString& Locale);
	void STATIC_setAffinityForThread(int tid);
	void STATIC_requestResourceGuarantee(int Condition, int loadType, int applyType);
	void STATIC_RegisterRomCallBackMeta(const struct FString& OpenID, const struct FString& ZoneID);
	void STATIC_PutKVS(const struct FString& Key, const struct FString& Value);
	void STATIC_PutKVI(const struct FString& Key, int Value);
	void STATIC_PutKVD(const struct FString& Key, float Value);
	void STATIC_PostNTL(int latency);
	void STATIC_PostLagStatus(float Distance);
	void STATIC_PostEvent(int Key, const struct FString& Info);
	void STATIC_MarkLevelLoadCompleted();
	void STATIC_MarkLevelLoad(const struct FString& SceneName, int Quality);
	void STATIC_MarkLevelFin();
	void STATIC_MarkAppFinishLaunch();
	int STATIC_GetDeviceLevelByQcc(const struct FString& configName, const struct FString& gpuFamily);
	int STATIC_GetDeviceLevel();
	void STATIC_EndTag();
	void STATIC_EnableDebugMode();
	void STATIC_cancelAffinityForThread(int tid);
	void STATIC_AddTag(const struct FString& TagName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
