
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

// Function BP_WeatherConfig.BP_WeatherConfig_C.DelaySyncWeatherLevelInfo
// (BlueprintCallable, BlueprintEvent)

void UBP_WeatherConfig_C::DelaySyncWeatherLevelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherConfig.BP_WeatherConfig_C.DelaySyncWeatherLevelInfo");

	UBP_WeatherConfig_C_DelaySyncWeatherLevelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeatherConfig.BP_WeatherConfig_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_WeatherConfig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherConfig.BP_WeatherConfig_C.ReceiveBeginPlay");

	UBP_WeatherConfig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeatherConfig.BP_WeatherConfig_C.ExecuteUbergraph_BP_WeatherConfig
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WeatherConfig_C::ExecuteUbergraph_BP_WeatherConfig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherConfig.BP_WeatherConfig_C.ExecuteUbergraph_BP_WeatherConfig");

	UBP_WeatherConfig_C_ExecuteUbergraph_BP_WeatherConfig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
