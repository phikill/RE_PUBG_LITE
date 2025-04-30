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

// BlueprintGeneratedClass BP_WeatherConfig.BP_WeatherConfig_C
// 0x0008 (0x0150 - 0x0148)
class UBP_WeatherConfig_C : public UWeatherConfigComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeatherConfig.BP_WeatherConfig_C");
		return ptr;
	}


	void DelaySyncWeatherLevelInfo();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeatherConfig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
