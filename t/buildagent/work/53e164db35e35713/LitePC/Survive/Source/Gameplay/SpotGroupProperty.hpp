


// ScriptStruct Gameplay.SpotGroupProperty
// 0x0028
struct FSpotGroupProperty
{
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SpotGroupPercent;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpotTypeProperty>                   SpotTypeProperties;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bRepeatGenerateItem : 1;                                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              RepeatGenerateItemCDMin;                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepeatGenerateItemCDMax;                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

