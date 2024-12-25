

// Class Gameplay.VehicleAndTreasureBoxGeneratorComponent
// //Class Gameplay.VehicleAndTreasureBoxGeneratorComponent
//0x0180 (0x0360 - 0x01E0)
class UVehicleAndTreasureBoxGeneratorComponent : public UBaseGeneratorComponent
{
public:
	TArray<struct FVehicleSpotProperty>                VehicleSpotPropertys;                                     // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTreasureBoxSpotProperty>            TreasureBoxSpotPropertys;                                 // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bStatisticsValid : 1;                                     // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x0201(0x0001)
	unsigned char                                      bIsRandom : 1;                                            // 0x0201(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0202(0x0006) MISSED OFFSET
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          // 0x0208(0x0050) (ZeroConstructor)
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllTreasureBoxSpots;                                      // 0x0258(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                // 0x02A8(0x0050) (ZeroConstructor)
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    // 0x02F8(0x0060)
	class UUAEDataTable*                               VehicleDataTable;                                         // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas
	// (Final, Native, Protected)
	void WriteVehicleSpotStatisticsDatas();// sub_E04FD0()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas
	// (Final, Native, Protected)
	void WriteVehicleClassStatisticsDatas();// sub_E04FB0()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatasToLog
	// (Final, Native, Protected, BlueprintCallable)
	void WriteAllVehicleStatisticsDatasToLog();// sub_E04F90()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas
	// (Final, Native, Protected, BlueprintCallable)
	void WriteAllVehicleStatisticsDatas();// sub_3170E0()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterVehicleGenerateSpawnData
	// (Final, Native, Public, BlueprintCallable)
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);// sub_E046C0()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterGroupSpotComponent
	// (Native, Public, BlueprintCallable)
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);// sub_E04630()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSpotsByType
	// (Final, Native, Protected, HasOutParms)
	void RandomTreasureBoxSpotsByType(struct FTreasureBoxSpotProperty* Propertystruct FVehicleSpotComponentArray* Spots);// sub_E044F0()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSingleSpots
	// (Final, Native, Protected, HasOutParms)
	void RandomTreasureBoxSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpotsstruct FTreasureBoxSpotProperty* Property);// sub_E043B0()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSpotsByType
	// (Final, Native, Protected, HasOutParms)
	void RandomSpotsByType(struct FVehicleSpotProperty* Propertystruct FVehicleSpotComponentArray* Spots);// sub_E04130()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSingleSpots
	// (Final, Native, Protected, HasOutParms)
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpotsstruct FVehicleSpotProperty* Property);// sub_E03EB0()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomGroups
	// (Native, Public, BlueprintCallable)
	void RandomGroups();// sub_E03E90()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.LoadVehicleGenerateTable
	// (Event, Public, BlueprintEvent)
	void LoadVehicleGenerateTable();// sub_1B0A820()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoBySpotType
	// (Final, Native, Public)
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType);// sub_E03500()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfo
	// (Final, Native, Public, HasOutParms)
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty);// sub_E032C0()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetTreasureBoxSpotRandomInfo
	// (Final, Native, Public, HasOutParms)
	struct FVehicleGenerateRandomInfo GetTreasureBoxSpotRandomInfo(struct FTreasureBoxSpotProperty* SpotProperty);// sub_E03090()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomVehicleClass
	// (Final, Native, Public)
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);// sub_E02BB0()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomCategory
	// (Native, Protected, HasOutParms)
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);// sub_E02970()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GenerateSpotOnTick
	// (Native, Protected)
	void GenerateSpotOnTick();// sub_E02830()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DeleteGroups
	// (Final, Native, Protected)
	void DeleteGroups();// sub_E02540()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleSpotCount
	// (Final, Native, Protected)
	void AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotTypeconst struct FString& Pathfloat LocationXfloat LocationYfloat LocationZ);// sub_E01FD0()

	// Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleClassCount
	// (Final, Native, Protected)
	void AddVehicleClassCount(const struct FString& Pathunsigned char IsValidint Count);// sub_E01E60()


}

