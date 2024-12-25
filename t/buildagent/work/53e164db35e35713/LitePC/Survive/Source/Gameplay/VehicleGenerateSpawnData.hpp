

// ScriptStruct Gameplay.VehicleGenerateSpawnData
// 0x0030
struct FVehicleGenerateSpawnData
{
	int                                                KeyID;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     VehicleType;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     VehiclePath;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                VehicleWeight;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SnapFloor : 1;                                            // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

