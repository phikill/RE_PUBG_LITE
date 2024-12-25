

// Class ShadowTrackerExtra.STExtraUnderWaterEffectComp
// //Class ShadowTrackerExtra.STExtraUnderWaterEffectComp
//0x0090 (0x0360 - 0x02D0)
class USTExtraUnderWaterEffectComp : public USceneComponent
{
public:
	unsigned char                                      bTickWaterEffectEnabled : 1;                              // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	struct FName                                       UnderWaterFogTagName;                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             UnderWaterCamEffectClass;                                 // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
	struct FTransform                                  UnderWaterCamEffectTransform;                             // 0x02F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class UAkAudioEvent*                               SfxInWater;                                               // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SfxOutWater;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoggyWeatherUnderWaterFogMaxOpacity;                      // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalWeatherUnderWaterFogMaxOpacity;                     // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExponentialHeightFogComponent*              UnderWaterFogComp;                                        // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UExponentialHeightFogComponent*>      SceneFogComps;                                            // 0x0340(0x0010) (ExportObject, ZeroConstructor)
	class UCameraComponent*                            LastActiveCamComp;                                        // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0358(0x0008) MISSED OFFSET

}

