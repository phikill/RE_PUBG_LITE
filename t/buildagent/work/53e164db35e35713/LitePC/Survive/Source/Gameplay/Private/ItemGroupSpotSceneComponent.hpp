

// Class Gameplay.ItemGroupSpotSceneComponent
// //Class Gameplay.ItemGroupSpotSceneComponent
//0x0020 (0x0310 - 0x02F0)
class UItemGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:
	TArray<class UItemSpotSceneComponent*>             SpotsCacheCur;                                            // 0x02F0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UItemSpotSceneComponent*>             SpotsCacheAll;                                            // 0x0300(0x0010) (ExportObject, ZeroConstructor)

	// Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty
	// (Final, Native, Public, HasOutParms)
	void SetGroupProperty(class UItemGeneratorComponent* Generatorconst struct FSpotGroupProperty& Property);// sub_1993560()

	// Function Gameplay.ItemGroupSpotSceneComponent.RepeatSpots
	// (Final, Native, Protected)
	void RepeatSpots();// sub_19932C0()

	// Function Gameplay.ItemGroupSpotSceneComponent.RepeatSingleSpot
	// (Final, Native, Protected)
	void RepeatSingleSpot(class UItemSpotSceneComponent* Spot);// sub_1993130()

	// Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType
	// (Final, Native, Protected, HasOutParms)
	void RandomSpotByType(TEnumAsByte<ESpotType> SpotTypeTArray<class UItemSpotSceneComponent*>* AllSpotsconst struct FSpotTypeProperty& Property);// sub_1992AF0()

	// Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot
	// (Final, Native, Protected, HasOutParms)
	void RandomSingleSpot(TArray<class UItemSpotSceneComponent*>* Spotsconst struct FSpotTypeProperty& Property);// sub_1992970()

	// Function Gameplay.ItemGroupSpotSceneComponent.RandomRepeatGenerateItemCD
	// (Final, Native, Public, HasOutParms)
	float RandomRepeatGenerateItemCD(const struct FSpotGroupProperty& GroupProperty);// sub_1992780()


}


