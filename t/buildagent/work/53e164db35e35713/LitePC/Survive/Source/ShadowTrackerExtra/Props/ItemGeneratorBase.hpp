

// Class ShadowTrackerExtra.ItemGeneratorBase
// //Class ShadowTrackerExtra.ItemGeneratorBase
//0x0058 (0x0418 - 0x03C0)
class AItemGeneratorBase : public AActor
{
public:
	class UCurveFloat*                                 UpdateOverlapCurve;                                       // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShowWrapperMeshDistance;                                  // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IsGenerateOverlapEventsForceUpdateTime;                   // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BoxOverlapCheckExtent;                                    // 0x03D0(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bShowCheckPropsMeshVisibleBox : 1;                        // 0x03DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	float                                              ShowCheckPropsMeshVisibleBoxTime;                         // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x03E4(0x0014) MISSED OFFSET
	class ASTExtraPlayerController*                    PlayerController;                                         // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0400(0x0018) MISSED OFFSET

	// Function ShadowTrackerExtra.ItemGeneratorBase.ForceUpdate
	// (Final, Native, Public, BlueprintCallable)
	void ForceUpdate();// sub_F8BA80()


}

