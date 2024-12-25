

// Class ShadowTrackerExtra.STScreenAppearanceComponent
// //Class ShadowTrackerExtra.STScreenAppearanceComponent
//0x0068 (0x0170 - 0x0108)
class USTScreenAppearanceComponent : public UActorComponent
{
public:
	TArray<struct FAppearanceMatData>                  AppearancePresentList;                                    // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FTransform                                  AppearanceMeshRelativeTransform;                          // 0x0120(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        OwnerAppearanceMesh;                                      // 0x0150(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FAppearanceMatData>                  CurAppearanceList;                                        // 0x0158(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

	// Function ShadowTrackerExtra.STScreenAppearanceComponent.StopScreenAppearance
	// (Final, Native, Public, BlueprintCallable)
	void StopScreenAppearance(const struct FString& AppearanceName);// sub_178C420()

	// Function ShadowTrackerExtra.STScreenAppearanceComponent.PlayPresentScreenAppearance
	// (Final, Native, Public, BlueprintCallable)
	class UMaterialInstanceDynamic* PlayPresentScreenAppearance(const struct FString& AppearanceName);// sub_178BF80()

	// Function ShadowTrackerExtra.STScreenAppearanceComponent.PlayCustomScreenAppearance
	// (Final, Native, Public, BlueprintCallable)
	class UMaterialInstanceDynamic* PlayCustomScreenAppearance(const struct FString& AppearanceNameclass UMaterialInterface* MatToPlayfloat LifeSpan);// sub_178BE60()

	// Function ShadowTrackerExtra.STScreenAppearanceComponent.IsScreenAppearancePlaying
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsScreenAppearancePlaying(const struct FString& AppearanceName);// sub_178BAB0()


}

