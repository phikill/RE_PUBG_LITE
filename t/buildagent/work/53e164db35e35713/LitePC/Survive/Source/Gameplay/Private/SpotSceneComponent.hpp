

// Class Gameplay.SpotSceneComponent
// //Class Gameplay.SpotSceneComponent
//0x0010 (0x02E0 - 0x02D0)
class USpotSceneComponent : public UItemSceneComponent
{
public:
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	int                                                WorldCompositionID;                                       // 0x02D4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRepeatGenerateItem : 1;                                  // 0x02D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x02D9(0x0001)
	unsigned char                                      bIsSpotValid : 1;                                         // 0x02D9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02DA(0x0002) MISSED OFFSET
	float                                              LineOffsetZ;                                              // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	// Function Gameplay.SpotSceneComponent.SetSpotValid
	// (Native, Public)
	void SetSpotValid(unsigned char Valid);// sub_1580410()

	// Function Gameplay.SpotSceneComponent.LineTraceSingle
	// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char LineTraceSingle(class UObject* WorldContextObjectconst struct FVector& Startconst struct FVector& Endunsigned char bTraceComplexTArray<class AActor*> ActorsToIgnorestruct FHitResult* OutHitunsigned char bIgnoreSelf);// sub_157FC90()

	// Function Gameplay.SpotSceneComponent.IsSpotValid
	// (Native, Public)
	unsigned char IsSpotValid();// sub_157FC60()

	// Function Gameplay.SpotSceneComponent.GetRandomCategory
	// (Native, Protected, HasOutParms)
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);// sub_157FB20()

	// Function Gameplay.SpotSceneComponent.GenerateSpot
	// (Native, Public)
	unsigned char GenerateSpot();// sub_E02800()

	// Function Gameplay.SpotSceneComponent.GenerateActor
	// (Native, Public, HasOutParms, HasDefaults)
	class AActor* GenerateActor(class UObject* ActorClassstruct FVector* ActorLocationstruct FRotator* ActorRotatorESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod);// sub_157F2F0()


}

