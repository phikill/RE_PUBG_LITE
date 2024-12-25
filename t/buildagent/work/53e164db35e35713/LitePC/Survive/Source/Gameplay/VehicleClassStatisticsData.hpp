

// ScriptStruct Gameplay.VehicleClassStatisticsData
// 0x0018 (0x0020 - 0x0008)
struct FVehicleClassStatisticsData : public FTableRowBase
{
	struct FString                                     VehiclePath;                                              // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      bValidPath : 1;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                AllVehicleCount;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

