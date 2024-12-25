

// Class Gameplay.VehicleSpotSceneComponent
// //Class Gameplay.VehicleSpotSceneComponent
//0x0040 (0x0320 - 0x02E0)
class UVehicleSpotSceneComponent : public USpotSceneComponent
{
public:
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x02E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomRotation : 1;                                      // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02E2(0x0002) MISSED OFFSET
	float                                              RandomRotationMin;                                        // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomRotationMax;                                        // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	struct FVehicleGenerateRandomInfo                  SpotRandomInfo;                                           // 0x02F0(0x0028)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	// Function Gameplay.VehicleSpotSceneComponent.SetSpotRandomInfo
	// (Final, Native, Public, HasOutParms)
	void SetSpotRandomInfo(struct FVehicleGenerateRandomInfo* RandomInfo);// sub_E04ED0()

	// Function Gameplay.VehicleSpotSceneComponent.GetVehiclePath
	// (Final, Native, Public)
	struct FString GetVehiclePath();// sub_E03240()

	// Function Gameplay.VehicleSpotSceneComponent.GenerateSpot
	// (Native, Public)
	unsigned char GenerateSpot();// sub_E02800()


}


