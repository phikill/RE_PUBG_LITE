

// Class Gameplay.BaseGeneratorComponent
// //Class Gameplay.BaseGeneratorComponent
//0x00D8 (0x01E0 - 0x0108)
class UBaseGeneratorComponent : public UItemActorComponent
{
public:
	unsigned char                                      bWorldTileGenerator : 1;                                  // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x0109(0x0001)
	unsigned char                                      bModeStateControl : 1;                                    // 0x0109(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x010A(0x0002) MISSED OFFSET
	int                                                GenerateSpotCountPerTick;                                 // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTableName;                                            // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UUAEDataTable*                               ItemTable;                                                // 0x0120(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsWriteStatisticsToLog : 1;                               // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<ESpotGroupType>, struct FGroupSpotComponentArray> AllGroupSpots;                                            // 0x0130(0x0050) (ZeroConstructor)
	TArray<class USpotSceneComponent*>                 AllSpotsToTick;                                           // 0x0180(0x0010) (ExportObject, ZeroConstructor)
	TMap<int, struct FWorldTileSpotArray>              WorldTileSpots;                                           // 0x0190(0x0050) (ZeroConstructor)

	// Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot
	// (Native, Public)
	void RegisterWorldTileSpot(class USpotSceneComponent* Spot);// sub_1993000()

	// Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick
	// (Native, Public, BlueprintCallable)
	void RegisterSpotComponentToTick(class USpotSceneComponent* SpotComponent);// sub_1992F70()

	// Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent
	// (Native, Public, BlueprintCallable)
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);// sub_E04630()

	// Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots
	// (Final, Native, Protected, HasOutParms)
	void GeneratorWorldTileSpots(struct FWorldTileSpotArray* SpotArray);// sub_1990B50()

	// Function Gameplay.BaseGeneratorComponent.GenerateSpots
	// (Native, Public)
	void GenerateSpots();// sub_A8ADE0()

	// Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick
	// (Native, Public)
	void GenerateSpotOnTick();// sub_E02830()

	// Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible
	// (Final, Native, Protected)
	void CheckTileLevelsVisible();// sub_1990130()


}

