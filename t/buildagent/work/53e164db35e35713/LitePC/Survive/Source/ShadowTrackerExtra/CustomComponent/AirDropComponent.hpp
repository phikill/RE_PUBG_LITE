

// Class ShadowTrackerExtra.AirDropComponent
// //Class ShadowTrackerExtra.AirDropComponent
//0x0100 (0x0258 - 0x0158)
class UAirDropComponent : public UTimerRegistComponent
{
public:
	struct FAirDropPlaneParams                         AirDropPlaneParams;                                       // 0x0158(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAirDropPlaneParams                         SuperAirDropPlaneParams;                                  // 0x0174(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FAirDropConfig>                      AirDropConfigs;                                           // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AAirDropPlane*                               AirDropPlaneBluePrint;                                    // 0x01A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAirDropBoxActor*                            AirDropBoxBlueprint;                                      // 0x01A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAirDropBoxActor*                            AirDropBoxVehicleBlueprint;                               // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperAirDropRandomRadius;                                 // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperAirDropRouteRandomRadiusMin;                         // 0x01BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperAirDropRouteRandomRadiusMax;                         // 0x01C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StuffBoxToWorldBoundaryMinDis;                            // 0x01C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C8(0x0010) MISSED OFFSET
	class UDataTable*                                  AirDropBoxDataTable;                                      // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  FlaregunAirDropBoxDataTable;                              // 0x01E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSuperAirDropBoxDataItem>            FSuperAirDropBoxDataSet;                                  // 0x01E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FAirDropOrder                               AirDropOrder;                                             // 0x01F8(0x0030)
	struct FAirDropOrder                               SuperAirDropOrder;                                        // 0x0228(0x0030)

	// Function ShadowTrackerExtra.AirDropComponent.OnAirPlaneDropStuff
	// (Final, Native, Public, HasDefaults)
	void OnAirPlaneDropStuff(const struct FVector& DropLocconst struct FAirDropOrder& Order);// sub_1B383E0()

	// Function ShadowTrackerExtra.AirDropComponent.OnAirDropStart
	// (Final, Native, Public)
	void OnAirDropStart(const struct FAirDropOrder& Order);// sub_1B38320()

	// Function ShadowTrackerExtra.AirDropComponent.CallSuperAirDrop
	// (Final, Native, Public, HasDefaults)
	void CallSuperAirDrop(const struct FVector& DropLocEFlareDeploymentType FlareDeploymentType);// sub_1B37E40()


}

