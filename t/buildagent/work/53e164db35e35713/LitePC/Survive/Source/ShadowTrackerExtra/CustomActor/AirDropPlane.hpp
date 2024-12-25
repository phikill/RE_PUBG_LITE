

// Class ShadowTrackerExtra.AirDropPlane
// //Class ShadowTrackerExtra.AirDropPlane
//0x0068 (0x0428 - 0x03C0)
class AAirDropPlane : public AFlightVehicle
{
public:
	struct FFlyingParam                                FlyingParam;                                              // 0x03C0(0x0014) (Edit, BlueprintVisible, Net)
	struct FVector                                     DroppingStuffLocation;                                    // 0x03D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DroppingSpeed;                                            // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpanAfterDrop;                                        // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x03E8(0x0038) MISSED OFFSET
	class UProjectileMovementComponent*                PMComp;                                                   // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	// Function ShadowTrackerExtra.AirDropPlane.OnRep_FlyingParams
	// (Final, Native, Public)
	void OnRep_FlyingParams();// sub_1394BA0()


}

