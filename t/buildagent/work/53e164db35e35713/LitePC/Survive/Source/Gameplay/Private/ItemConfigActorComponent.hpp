

// Class Gameplay.ItemConfigActorComponent
// //Class Gameplay.ItemConfigActorComponent
//0x0060 (0x0168 - 0x0108)
class UItemConfigActorComponent : public UActorComponent
{
public:
	TArray<struct FItemSpawnData>                      ItemSpawnDatas;                                           // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FGroupTypeSceneComponents>        AllSpotGroups;                                            // 0x0118(0x0050) (ZeroConstructor)

	// Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent
	// (Final, Native, Public, BlueprintCallable)
	void RegisterGroupSceneComponent(int GroupTypeclass USceneComponent* GroupSceneComponent);// sub_1992D60()

	// Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass
	// (Final, Native, Public, BlueprintCallable)
	TArray<struct FItemSpawnClass> RandomItemSpawnClass(const struct FString& ItemValueconst struct FString& ItemCategory);// sub_19925D0()

	// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents
	// (Final, Native, Public, BlueprintCallable)
	TArray<class USceneComponent*> RandomGroupSceneComponents(int GroupTypeint Persent);// sub_19921D0()

	// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent
	// (Final, Native, Public)
	class USceneComponent* RandomGroupSceneComponent(TArray<class USceneComponent*> AllGroups);// sub_19920E0()

	// Function Gameplay.ItemConfigActorComponent.LoadActorClass
	// (Final, Native, Public, BlueprintCallable)
	class UObject* LoadActorClass(const struct FString& Path);// sub_E03AC0()

	// Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass
	// (Final, Native, Public)
	TArray<struct FItemSpawnClass> GetItemSpawnClass(const struct FItemSpawnData& Data);// sub_19911F0()


}

