

// Class ShadowTrackerExtra.STExtraBuffApplierComponent
// //Class ShadowTrackerExtra.STExtraBuffApplierComponent
//0x0058 (0x0160 - 0x0108)
class USTExtraBuffApplierComponent : public UActorComponent
{
public:
	struct FString                                     OverlapCheckComponnentName;                               // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBuffApplierConditionPair>           BuffConditionArray;                                       // 0x0118(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bLooping : 1;                                             // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0129(0x001F) MISSED OFFSET
	class UShapeComponent*                             OverlapCheckComponnent;                                   // 0x0148(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0150(0x0002) MISSED OFFSET
	unsigned char                                      IsIgnoreThrower : 1;                                      // 0x0152(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD];                                       // 0x0153(0x000D) MISSED OFFSET

	// Function ShadowTrackerExtra.STExtraBuffApplierComponent.SetIsEnableChecking
	// (Final, Native, Public, BlueprintCallable)
	void SetIsEnableChecking(unsigned char Enable);// sub_1C78F70()

	// Function ShadowTrackerExtra.STExtraBuffApplierComponent.OverlapCheckerOverlapeed
	// (Final, Native, Protected)
	void OverlapCheckerOverlapeed(class AActor* OtherActor);// sub_1C78A80()


}

