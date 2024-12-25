

// Class Gameplay.ItemGeneratorComponent
// //Class Gameplay.ItemGeneratorComponent
//0x0280 (0x0460 - 0x01E0)
class UItemGeneratorComponent : public UBaseGeneratorComponent
{
public:
	struct FVector                                     ItemGenerateOffset;                                       // 0x01E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ESpotGroupType>                        BornIslandGroupType;                                      // 0x01EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bStatisticsValid : 1;                                     // 0x01ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01EE(0x0002) MISSED OFFSET
	struct FItemGenerateStatisticsData                 ItemStatisticsData;                                       // 0x01F0(0x0100)
	TArray<struct FSpotGroupProperty>                  SpotGroupPropertys;                                       // 0x02F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<TEnumAsByte<ESpotGroupType>, struct FSpotGroupProperty> SpotGroupPropertysDic;                                    // 0x0300(0x0050) (ZeroConstructor)
	struct FSpotGroupProperty                          DefaultSpotGroupProperty;                                 // 0x0350(0x0028)
	class UCurveFloat*                                 SpotRateCurve;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ItemRateCurve;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, float>                        CategoryRates;                                            // 0x0388(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FItemGenerateSpawnDataArray> ItemGenerateSpawnDatas;                                   // 0x03D8(0x0050) (ZeroConstructor)
	TArray<class AActor*>                              BornIslandItems;                                          // 0x0428(0x0010) (ZeroConstructor)
	TArray<class UItemGroupSpotSceneComponent*>        AllValidGroups;                                           // 0x0438(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      bIsGenerateBornIslandItems : 1;                           // 0x0448(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x0449(0x0001)
	unsigned char                                      bIsGenerateMainlandItems : 1;                             // 0x0449(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 8;                                        // 0x044A(0x0001)
	unsigned char                                      bIsGenerateWorldTileItems : 1;                            // 0x044A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x044B(0x0005) MISSED OFFSET
	struct FDateTime                                   GenerateBornIslandTime;                                   // 0x0450(0x0008)
	struct FDateTime                                   GenerateMainlandTime;                                     // 0x0458(0x0008)

	// Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas
	// (Final, Native, Protected)
	void WriteItemClassStatisticsDatas();// sub_1993F60()

	// Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas
	// (Final, Native, Protected)
	void WriteGroupStatisticsDatas();// sub_1993F40()

	// Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas
	// (Final, Native, Protected)
	void WriteBuildingStatisticsDatas();// sub_1993F20()

	// Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatasToLog
	// (Native, Protected, BlueprintCallable)
	void WriteAllStatisticsDatasToLog();// sub_1993F00()

	// Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas
	// (Native, Protected, BlueprintCallable)
	void WriteAllStatisticsDatas();// sub_149B670()

	// Function Gameplay.ItemGeneratorComponent.SetCatetoryRate
	// (Final, Native, Public)
	void SetCatetoryRate(TMap<struct FString, float> Rates);// sub_1993430()

	// Function Gameplay.ItemGeneratorComponent.SaveSpotGroupPropertyData
	// (Final, Native, Public)
	void SaveSpotGroupPropertyData();// sub_1993410()

	// Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData
	// (Final, Native, Public, BlueprintCallable)
	void RegisterItemGenerateSpawnData(const struct FItemGenerateSpawnData& Data);// sub_1992E20()

	// Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem
	// (Native, Public)
	void RegisterBornIslandItem(class AActor* Item);// sub_E99D60()

	// Function Gameplay.ItemGeneratorComponent.RandomSingleGroup
	// (Final, Native, Protected, HasOutParms)
	class UItemGroupSpotSceneComponent* RandomSingleGroup(TArray<class UGroupSpotSceneComponent*>* Groupsconst struct FSpotGroupProperty& GroupProperty);// sub_1992840()

	// Function Gameplay.ItemGeneratorComponent.RandomItemGenerateSpawnData
	// (Final, Native, Protected, HasOutParms)
	struct FItemGenerateSpawnData RandomItemGenerateSpawnData(TArray<struct FItemGenerateSpawnData>* Items);// sub_1992380()

	// Function Gameplay.ItemGeneratorComponent.RandomGroupsByType
	// (Final, Native, Protected, HasOutParms)
	void RandomGroupsByType(const struct FSpotGroupProperty& GroupProperty);// sub_19922D0()

	// Function Gameplay.ItemGeneratorComponent.RandomGroups
	// (Native, Protected, BlueprintCallable)
	void RandomGroups();// sub_E03E90()

	// Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups
	// (Native, Protected, BlueprintCallable)
	void RandomBornIslandGroups();// sub_149B590()

	// Function Gameplay.ItemGeneratorComponent.LoadSpotGroupPropertyData
	// (Final, Native, Public)
	void LoadSpotGroupPropertyData();// sub_1991AF0()

	// Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable
	// (Native, Event, Public, BlueprintEvent)
	void LoadItemGenerateTable();// sub_457970()

	// Function Gameplay.ItemGeneratorComponent.IsCatetoryEnabled
	// (Final, Native, Protected)
	unsigned char IsCatetoryEnabled();// sub_1991A90()

	// Function Gameplay.ItemGeneratorComponent.InitCatetorys
	// (Final, Native, Protected)
	void InitCatetorys();// sub_1991780()

	// Function Gameplay.ItemGeneratorComponent.GetSpotGroupPropertyByGroupType
	// (Final, Native, Public)
	struct FSpotGroupProperty GetSpotGroupPropertyByGroupType(TEnumAsByte<ESpotGroupType> SpotGroupType);// sub_19915A0()

	// Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray
	// (Final, Native, Public, HasOutParms)
	unsigned char GetRandomItemClassArray(struct FString* Valuestruct FString* CategoryTArray<struct FItemGenerateSpawnClass>* Resultsunsigned char RepeatGenerateItem);// sub_19913A0()

	// Function Gameplay.ItemGeneratorComponent.GetCatetoryRate
	// (Final, Native, Protected)
	float GetCatetoryRate(const struct FString& Catetory);// sub_1990DC0()

	// Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick
	// (Native, Public)
	void GenerateSpotOnTick();// sub_E02830()

	// Function Gameplay.ItemGeneratorComponent.DeleteValidGroups
	// (Final, Native, Public, BlueprintCallable)
	void DeleteValidGroups();// sub_19905E0()

	// Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems
	// (Final, Native, Public, BlueprintCallable)
	void DeleteBornIslandItems();// sub_19905C0()


}

