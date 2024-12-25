

// Class Gameplay.VehicleGeneratorComponent
// //Class Gameplay.VehicleGeneratorComponent
//0x0118 (0x02F8 - 0x01E0)
class UVehicleGeneratorComponent : public UBaseGeneratorComponent
{
public:
	TArray<struct FVehicleSpotProperty>                VehicleSpotPropertys;                                     // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bStatisticsValid : 1;                                     // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x01F1(0x0001)
	unsigned char                                      bIsRandom : 1;                                            // 0x01F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01F2(0x0006) MISSED OFFSET
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          // 0x01F8(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                // 0x0248(0x0050) (ZeroConstructor)
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    // 0x0298(0x0060)

	// Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas
	// (Final, Native, Protected)
	void WriteVehicleSpotStatisticsDatas();// sub_3170E0()

	// Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas
	// (Final, Native, Protected)
	void WriteVehicleClassStatisticsDatas();// sub_3170E0()

	// Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas
	// (Final, Native, Protected, BlueprintCallable)
	void WriteAllVehicleStatisticsDatas();// sub_3170E0()

	// Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData
	// (Final, Native, Public, BlueprintCallable)
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);// sub_E047B0()

	// Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent
	// (Native, Public, BlueprintCallable)
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);// sub_E04630()

	// Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType
	// (Final, Native, Protected, HasOutParms)
	void RandomSpotsByType(struct FVehicleSpotProperty* Propertystruct FVehicleSpotComponentArray* Spots);// sub_E04270()

	// Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots
	// (Final, Native, Protected, HasOutParms)
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpotsstruct FVehicleSpotProperty* Property);// sub_E03FF0()

	// Function Gameplay.VehicleGeneratorComponent.RandomGroups
	// (Native, Public, BlueprintCallable)
	void RandomGroups();// sub_E03E90()

	// Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable
	// (Native, Event, Public, BlueprintEvent)
	void LoadVehicleGenerateTable();// sub_457970()

	// Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfoBySpotType
	// (Final, Native, Public)
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType);// sub_E035C0()

	// Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfo
	// (Final, Native, Public, HasOutParms)
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty);// sub_E033E0()

	// Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass
	// (Final, Native, Public)
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);// sub_E02CD0()

	// Function Gameplay.VehicleGeneratorComponent.GetRandomCategory
	// (Native, Protected, HasOutParms)
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);// sub_E02A90()

	// Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick
	// (Native, Protected)
	void GenerateSpotOnTick();// sub_E02830()

	// Function Gameplay.VehicleGeneratorComponent.DeleteGroups
	// (Final, Native, Protected)
	void DeleteGroups();// sub_E02540()

	// Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount
	// (Final, Native, Protected)
	void AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotTypeconst struct FString& Pathfloat LocationXfloat LocationYfloat LocationZ);// sub_E01FD0()

	// Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount
	// (Final, Native, Protected)
	void AddVehicleClassCount(const struct FString& Pathunsigned char IsValidint Count);// sub_E01E60()


}

