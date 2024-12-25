

// ScriptStruct Gameplay.VehicleSpotStatisticsData
// 0x0028 (0x0030 - 0x0008)
struct FVehicleSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     VehiclePath;                                              // 0x0010(0x0010) (ZeroConstructor)
	float                                              VehicleLocationX;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleLocationY;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleLocationZ;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

