

// ScriptStruct Gameplay.TreasureBoxSpotProperty
// 0x0020
struct FTreasureBoxSpotProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TotalCountRangeMin;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMax;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

