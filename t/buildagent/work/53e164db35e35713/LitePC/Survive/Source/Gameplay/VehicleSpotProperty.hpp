

// ScriptStruct Gameplay.VehicleSpotProperty
// 0x0038
struct FVehicleSpotProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                FuelPercentMin;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FuelPercentMax;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bActiveByStartVolume : 1;                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVehicleSpotRandomType>                RandomType;                                               // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              TotalCountMultiplierWithPalyerCount;                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMin;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMax;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProbabilityPersent;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProbabilityPersentWithPalyerCount;                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

