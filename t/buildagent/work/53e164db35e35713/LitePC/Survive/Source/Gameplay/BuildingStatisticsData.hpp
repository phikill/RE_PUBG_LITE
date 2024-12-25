

// ScriptStruct Gameplay.BuildingStatisticsData
// 0x0078 (0x0080 - 0x0008)
struct FBuildingStatisticsData : public FTableRowBase
{
	struct FString                                     BuildingName;                                             // 0x0008(0x0010) (ZeroConstructor)
	float                                              BuildingLocationX;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildingLocationY;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllGroupSpotCount;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<ESpotType>, struct FItemSpotStatisticsData> SpotStatisticsData;                                       // 0x0030(0x0050) (ZeroConstructor)
};

