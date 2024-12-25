

// ScriptStruct Gameplay.VehicleGenerateRandomInfo
// 0x0028
struct FVehicleGenerateRandomInfo
{
	struct FString                                     VehicleType;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     VehiclePath;                                              // 0x0010(0x0010) (ZeroConstructor)
	float                                              FuelPercent;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SnapFloor : 1;                                            // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x0025(0x0001)
	unsigned char                                      bActiveByStartVolume : 1;                                 // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
};

