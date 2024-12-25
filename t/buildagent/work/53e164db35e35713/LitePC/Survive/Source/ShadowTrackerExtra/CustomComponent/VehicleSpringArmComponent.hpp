

// Class ShadowTrackerExtra.VehicleSpringArmComponent
// //Class ShadowTrackerExtra.VehicleSpringArmComponent
//0x0030 (0x0380 - 0x0350)
class UVehicleSpringArmComponent : public USpringArmComponent
{
public:
	float                                              MinForwardSpeedToRotationKMH;                             // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForwardSpeedToRotSpeed;                                   // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayTimeBeforeReturning;                                  // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNeverAutoReturnSmartCamera : 1;                          // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x035D(0x0001)
	unsigned char                                      bDrawDebugLineAndShap : 1;                                // 0x035D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x035E(0x0002) MISSED OFFSET
	float                                              MinPitch;                                                 // 0x0360(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0368(0x0018) MISSED OFFSET

}

