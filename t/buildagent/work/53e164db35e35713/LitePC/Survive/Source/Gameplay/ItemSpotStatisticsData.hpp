

// ScriptStruct Gameplay.ItemSpotStatisticsData
// 0x0010 (0x0018 - 0x0008)
struct FItemSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                AllSpotCount;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

