

// Class ShadowTrackerExtra.PickupManagerComponent
// //Class ShadowTrackerExtra.PickupManagerComponent
//0x0078 (0x0180 - 0x0108)
class UPickupManagerComponent : public UActorComponent
{
public:
	float                                              CheckPickUpInterval;                                      // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PickUpZLimit;                                             // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bApplyVisibleTrace : 1;                                   // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FVector2D>                           FindPutDownPointSearchRadiusGroupArray;                   // 0x0118(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                FindPutDownPointCircleSplitNum;                           // 0x0128(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindPutDownPointZThreshold;                               // 0x012C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindPutDownPointZTraceOffset;                             // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RegionXRange;                                             // 0x0134(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RegionYRange;                                             // 0x013C(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bDrawDebugSearchLine : 1;                                 // 0x0144(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x0145(0x0001)
	unsigned char                                      bDrawDebugSearchedPutDownPointsSphere : 1;                // 0x0145(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	struct FVector                                     DebugSearchedPutDownPointsBoxExtent;                      // 0x0148(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugSearchedPutDownPointsSphereRadius;                   // 0x0154(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugSearchedPutDownPointsPointSize;                      // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrawTime;                                                 // 0x015C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bDebugGetLocWithOutClamp : 1;                             // 0x0160(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	TArray<class AActor*>                              ConfirmedPickupActorPool;                                 // 0x0168(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	// Function ShadowTrackerExtra.PickupManagerComponent.ServerPutDownTargetWithLocation
	// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	void ServerPutDownTargetWithLocation(class AActor* Targetconst struct FVector& Loc);// sub_15254F0()

	// Function ShadowTrackerExtra.PickupManagerComponent.ServerPutDownTarget
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void ServerPutDownTarget(class AActor* Target);// sub_1525430()

	// Function ShadowTrackerExtra.PickupManagerComponent.ServerPickUpTarget
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void ServerPickUpTarget(class AActor* Targetint AdditionalParamconst struct FName& EquipSlotNameint PickUpCount);// sub_15252C0()

	// Function ShadowTrackerExtra.PickupManagerComponent.PutDownTargetWithLocation
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void PutDownTargetWithLocation(class AActor* Targetconst struct FVector& Loc);// sub_1524C90()

	// Function ShadowTrackerExtra.PickupManagerComponent.PutDownTarget
	// (Final, Native, Public, BlueprintCallable)
	void PutDownTarget(class AActor* Target);// sub_1524C10()

	// Function ShadowTrackerExtra.PickupManagerComponent.PickUpTarget
	// (Final, Native, Public, BlueprintCallable)
	void PickUpTarget(class AActor* Targetint AdditionalParamconst struct FName& EquipSlotNameint PickUpCount);// sub_1524AD0()

	// Function ShadowTrackerExtra.PickupManagerComponent.GetRandomPutDownLocation
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	struct FVector GetRandomPutDownLocation(float OverrideFindPutDownPointZThreshold);// sub_1524200()

	// Function ShadowTrackerExtra.PickupManagerComponent.GetPutDownLocation
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	struct FVector GetPutDownLocation(const struct FVector& CharacterLocation);// sub_1524150()

	// Function ShadowTrackerExtra.PickupManagerComponent.GetConfirmedPickupAvailableActors
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetConfirmedPickupAvailableActors();// sub_1523FA0()

	// Function ShadowTrackerExtra.PickupManagerComponent.ControlClientPutDownTargetWithLocation
	// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient, NetValidate)
	void ControlClientPutDownTargetWithLocation(class AActor* Targetconst struct FVector& Loc);// sub_1523BC0()

	// Function ShadowTrackerExtra.PickupManagerComponent.ControlClientPutDownTarget
	// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	void ControlClientPutDownTarget(class AActor* Target);// sub_1523B00()

	// Function ShadowTrackerExtra.PickupManagerComponent.ControlClientPickUpTarget
	// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
	void ControlClientPickUpTarget(class AActor* Targetint AdditionalParam);// sub_1523A00()

	// Function ShadowTrackerExtra.PickupManagerComponent.ClampWorldLocation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void ClampWorldLocation(struct FVector* OutVector);// sub_1523970()


}

