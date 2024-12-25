

// ScriptStruct Gameplay.VehicleSpotComponentArray
// 0x0018
struct FVehicleSpotComponentArray
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};


