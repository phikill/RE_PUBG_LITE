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

// BlueprintGeneratedClass BP_GameFunctionLibrary.BP_GameFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_GameFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameFunctionLibrary.BP_GameFunctionLibrary_C");
		return ptr;
	}


	void STATIC_ClampStringLength(const struct FString& Source, int Length, class UObject* __WorldContext, struct FString* Result);
	void STATIC_IsPlayerCanSeeWidget(class UWidget* NewParam, class UObject* __WorldContext, bool* cansee);
	void STATIC_GetCurLevelMapTexture(class UObject* __WorldContext, class UTexture2D** Texture);
	void STATIC_GetActorsByTag(const struct FName& Tag, class UObject* ContextObject, class UClass* ActorClass, class UObject* __WorldContext, TArray<class AActor*>* Targets);
	void STATIC_AddActorTag(class AActor* Target, const struct FName& TagInfo, class UObject* __WorldContext);
	void STATIC_SetUpGamePostProcessEffectData(class APostProcessVolume* Volume, class UObject* ContextObject, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
