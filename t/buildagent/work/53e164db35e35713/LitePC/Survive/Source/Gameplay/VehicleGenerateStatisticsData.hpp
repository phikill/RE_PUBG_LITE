

// ScriptStruct Gameplay.VehicleGenerateStatisticsData
// 0x0060
struct FVehicleGenerateStatisticsData
{
	TArray<struct FVehicleSpotStatisticsData>          VehicleSpotStatisticsData;                                // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FVehicleClassStatisticsData> VehicleClassStatisticsData;                               // 0x0010(0x0050) (ZeroConstructor)
};

