

// ScriptStruct Gameplay.ItemGenerateStatisticsData
// 0x0100
struct FItemGenerateStatisticsData
{
	int                                                AllGroupSpotCount;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<ESpotGroupType>, struct FItemGroupStatisticsData> GroupStatisticsData;                                      // 0x0010(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FBuildingStatisticsData> BuildingStatisticsData;                                   // 0x0060(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FItemClassStatisticsData> ItemStatisticsData;                                       // 0x00B0(0x0050) (ZeroConstructor)
};

