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

// BlueprintGeneratedClass BP_WeatherGeneratorComponent.BP_WeatherGeneratorComponent_C
// 0x0001 (0x00F9 - 0x00F8)
class UBP_WeatherGeneratorComponent_C : public UActorComponent
{
public:
	TEnumAsByte<EWeatherType>                          WeatherLevelType;                                         // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeatherGeneratorComponent.BP_WeatherGeneratorComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
