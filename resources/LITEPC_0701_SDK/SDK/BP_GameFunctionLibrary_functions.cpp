
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

// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.ClampStringLength
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void UBP_GameFunctionLibrary_C::STATIC_ClampStringLength(const struct FString& Source, int Length, class UObject* __WorldContext, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.ClampStringLength");

	UBP_GameFunctionLibrary_C_ClampStringLength_Params params;
	params.Source = Source;
	params.Length = Length;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsPlayerCanSeeWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           cansee                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_IsPlayerCanSeeWidget(class UWidget* NewParam, class UObject* __WorldContext, bool* cansee)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.IsPlayerCanSeeWidget");

	UBP_GameFunctionLibrary_C_IsPlayerCanSeeWidget_Params params;
	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (cansee != nullptr)
		*cansee = params.cansee;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMapTexture
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_GetCurLevelMapTexture(class UObject* __WorldContext, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetCurLevelMapTexture");

	UBP_GameFunctionLibrary_C_GetCurLevelMapTexture_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetActorsByTag
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Targets                        (Parm, OutParm, ZeroConstructor)

void UBP_GameFunctionLibrary_C::STATIC_GetActorsByTag(const struct FName& Tag, class UObject* ContextObject, class UClass* ActorClass, class UObject* __WorldContext, TArray<class AActor*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.GetActorsByTag");

	UBP_GameFunctionLibrary_C_GetActorsByTag_Params params;
	params.Tag = Tag;
	params.ContextObject = ContextObject;
	params.ActorClass = ActorClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.AddActorTag
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TagInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_AddActorTag(class AActor* Target, const struct FName& TagInfo, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.AddActorTag");

	UBP_GameFunctionLibrary_C_AddActorTag_Params params;
	params.Target = Target;
	params.TagInfo = TagInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.SetUpGamePostProcessEffectData
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APostProcessVolume*      Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameFunctionLibrary_C::STATIC_SetUpGamePostProcessEffectData(class APostProcessVolume* Volume, class UObject* ContextObject, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameFunctionLibrary.BP_GameFunctionLibrary_C.SetUpGamePostProcessEffectData");

	UBP_GameFunctionLibrary_C_SetUpGamePostProcessEffectData_Params params;
	params.Volume = Volume;
	params.ContextObject = ContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
