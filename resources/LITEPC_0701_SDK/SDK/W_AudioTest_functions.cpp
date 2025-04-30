
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

// Function W_AudioTest.W_AudioTest_C.SetDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DistanceInMeters               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_AudioTest_C::SetDistance(float DistanceInMeters)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AudioTest.W_AudioTest_C.SetDistance");

	UW_AudioTest_C_SetDistance_Params params;
	params.DistanceInMeters = DistanceInMeters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AudioTest.W_AudioTest_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InText                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UW_AudioTest_C::SetText(const struct FString& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_AudioTest.W_AudioTest_C.SetText");

	UW_AudioTest_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
