

// Class Gameplay.ItemSpotSceneComponent
// //Class Gameplay.ItemSpotSceneComponent
//0x0080 (0x0360 - 0x02E0)
class UItemSpotSceneComponent : public USpotSceneComponent
{
public:
	int                                                AIGroupID;                                                // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02E4(0x0001) MISSED OFFSET
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x02E5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02E6(0x0002) MISSED OFFSET
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FItemGenerateSpawnClass>             AllItems;                                                 // 0x02F0(0x0010) (ZeroConstructor)
	class UGroupSpotSceneComponent*                    GroupSpotSceneComponent;                                  // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FString, int>                          CacheItemValeCategory;                                    // 0x0308(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0358(0x0008) MISSED OFFSET

	// Function Gameplay.ItemSpotSceneComponent.SetSpotProperty
	// (Final, Native, Public, HasOutParms)
	void SetSpotProperty(int CompositionIDTEnumAsByte<ESpotGroupType> GroupTypeclass UItemGeneratorComponent* Generatorconst struct FSpotTypeProperty& Propertyclass UGroupSpotSceneComponent* Componentunsigned char RepeatGenerateItem);// sub_1993770()

	// Function Gameplay.ItemSpotSceneComponent.RepeatSpotProperty
	// (Final, Native, Public, HasOutParms)
	void RepeatSpotProperty(const struct FSpotTypeProperty& Property);// sub_19931B0()

	// Function Gameplay.ItemSpotSceneComponent.GetAllItemNames
	// (Final, Native, Public)
	TArray<struct FName> GetAllItemNames();// sub_1990C80()

	// Function Gameplay.ItemSpotSceneComponent.GenerateSpot
	// (Native, Public)
	unsigned char GenerateSpot();// sub_E02800()

	// Function Gameplay.ItemSpotSceneComponent.GenerateItems
	// (Final, Native, Protected, HasOutParms)
	void GenerateItems(TArray<struct FItemGenerateSpawnClass>* AllItemClass);// sub_1990A70()

	// Function Gameplay.ItemSpotSceneComponent.DoPickUp
	// (Final, Native, Public)
	void DoPickUp(const struct FString& ItemValueconst struct FString& ItemCategory);// sub_1990700()

	// Function Gameplay.ItemSpotSceneComponent.CountCacheItemValeCategory
	// (Final, Native, Protected)
	int CountCacheItemValeCategory();// sub_1990450()


}


