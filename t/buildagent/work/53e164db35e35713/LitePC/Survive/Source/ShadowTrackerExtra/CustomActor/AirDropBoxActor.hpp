

// Class ShadowTrackerExtra.AirDropBoxActor
// //Class ShadowTrackerExtra.AirDropBoxActor
//0x00E0 (0x04A0 - 0x03C0)
class AAirDropBoxActor : public AActor
{
public:
	float                                              DroppingSpeed;                                            // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsHitTheGround : 1;                                      // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	float                                              HitGroundHeight;                                          // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmokeStartScaleDistance;                                  // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmokeEndScaleDistance;                                    // 0x03D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmokeStartScaleValue;                                     // 0x03D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmokeEndScaleValue;                                       // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevSmokeCurrentDistanceScaler;                           // 0x03DC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsShowingSmoke : 1;                                      // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	float                                              ForceUpdateLocInterval;                                   // 0x03E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceUpdateLocDissqThreshold;                             // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class APlayerTombBox*                              DeadInventoryBoxTemplate;                                 // 0x03F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       WrapperBoxName;                                           // 0x03F8(0x0018) (Edit, DisableEditOnInstance)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0410(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AirDropBoxId;                                             // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              OBUIShowDistance;                                         // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsSuperAirdrop : 1;                                      // 0x0420(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 8;                                        // 0x0421(0x0001)
	unsigned char                                      bIsHideIconOnMap : 1;                                     // 0x0421(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0422(0x0006) MISSED OFFSET
	struct FAirDropResource                            NormalAirdropBoxResource;                                 // 0x0428(0x0020) (Edit, BlueprintVisible)
	struct FAirDropResource                            SuperAirdropBoxResource;                                  // 0x0448(0x0020) (Edit, BlueprintVisible)
	class ATslParticle*                                SmokeFxClass_NormalAirDrop;                               // 0x0468(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslParticle*                                SmokeFxClass_SuperAirDrop;                                // 0x0470(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmokeRemainTime;                                          // 0x0478(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FName                                       SmokeSocket;                                              // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerTombBox*                              DeadTombBox;                                              // 0x0488(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ATslParticle*                                SmokeFx;                                                  // 0x0490(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0498(0x0008) MISSED OFFSET

	// Function ShadowTrackerExtra.AirDropBoxActor.SetBuoyancyUpdatedComponent
	// (Final, Native, Public, BlueprintCallable)
	void SetBuoyancyUpdatedComponent(class USceneComponent* UpdatedComponent);// sub_1B387D0()

	// Function ShadowTrackerExtra.AirDropBoxActor.OnRep_BoxId
	// (Final, Native, Public)
	void OnRep_BoxId();// sub_1B38530()

	// Function ShadowTrackerExtra.AirDropBoxActor.OnRep_AirdropTypeChange
	// (Final, Native, Public)
	void OnRep_AirdropTypeChange();// sub_1B38510()

	// Function ShadowTrackerExtra.AirDropBoxActor.OnLanded
	// (Final, Native, Protected, BlueprintCallable)
	void OnLanded();// sub_1B384F0()

	// Function ShadowTrackerExtra.AirDropBoxActor.GenerateWrappersBox
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void GenerateWrappersBox(TArray<struct FAirDropBoxGenerateWrapperItemData> DataListconst struct FVector& BoxLoc);// sub_1B37FF0()

	// Function ShadowTrackerExtra.AirDropBoxActor.ForceUpdateAirdropLoc
	// (Final, Native, Public, BlueprintCallable)
	unsigned char ForceUpdateAirdropLoc();// sub_1B37FC0()

	// Function ShadowTrackerExtra.AirDropBoxActor.DistanceScalerChangedEvent
	// (Event, Public, BlueprintEvent)
	void DistanceScalerChangedEvent(float Scale);// sub_1B0A820()

	// Function ShadowTrackerExtra.AirDropBoxActor.ChangeAirdropAppearance
	// (Event, Public, BlueprintEvent)
	void ChangeAirdropAppearance();// sub_1B0A820()

	// Function ShadowTrackerExtra.AirDropBoxActor.BoxReachGround
	// (Event, Public, BlueprintEvent)
	void BoxReachGround();// sub_1B0A820()

	// Function ShadowTrackerExtra.AirDropBoxActor.AttachSmokeEffect
	// (Final, Native, Protected, BlueprintCallable)
	void AttachSmokeEffect();// sub_1B37AF0()


}

