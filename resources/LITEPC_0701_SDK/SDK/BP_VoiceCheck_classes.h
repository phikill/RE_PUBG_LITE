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

// BlueprintGeneratedClass BP_VoiceCheck.BP_VoiceCheck_C
// 0x0084 (0x017C - 0x00F8)
class UBP_VoiceCheck_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	TArray<struct FBP_VoiceCheckData>                  checkDataList;                                            // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ShowTrigerVoiceIcon;                                      // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBP_VoiceDataObject_C*                       playerMoveCheck;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_VoiceDataObject_C*                       VehicleMoveChek;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_VoiceDataObject_C*                       weaponCheck;                                              // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isRainDay;                                                // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	class ABP_STExtraPlayerController_C*               PlayerController;                                         // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBP_VoiceCheckWeatherConfig>         weatherConfigList;                                        // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FBP_VoiceCheckWeatherConfig                 nowWeatherConfig;                                         // 0x0158(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EWeatherType>                          nowWeatherType;                                           // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	float                                              normalScaleDis;                                           // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraGameStateBase*                       GameState;                                                // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                WeatherID;                                                // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VoiceCheck.BP_VoiceCheck_C");
		return ptr;
	}


	void GetWeatherID(int* WeatherID);
	void IsVoiceCheckEnable(bool* Result);
	void UpdateRainDay();
	void TrigerVoiceCheck(class AActor* nowActor, float checkDis);
	void InitCheckObjectByType(TEnumAsByte<EBP_VoiceCheckType> NewParam, class UBP_VoiceDataObject_C** NewParam1);
	void GetCheckData(TEnumAsByte<EBP_VoiceCheckType> checkType, struct FBP_VoiceCheckData* Result);
	void InitCheckMap();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void SetAllWeatherType(int weatherType);
	void ExecuteUbergraph_BP_VoiceCheck(int EntryPoint);
	void ShowTrigerVoiceIcon__DelegateSignature(class UBP_VoiceDataSubObject_C* nowSubObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
