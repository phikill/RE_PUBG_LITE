

// ScriptStruct Gameplay.SpotTypeProperty
// 0x0038
struct FSpotTypeProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SpotPercentMin;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpotPercentMax;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpotPercentDot;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerSpotMin;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerSpotMax;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpotWeight>                         WeightsPerValue;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

