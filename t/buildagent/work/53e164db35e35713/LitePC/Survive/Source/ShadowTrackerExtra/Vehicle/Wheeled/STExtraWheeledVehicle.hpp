

// Class ShadowTrackerExtra.STExtraWheeledVehicle
// //Class ShadowTrackerExtra.STExtraWheeledVehicle
//0x0180 (0x09D0 - 0x0850)
class ASTExtraWheeledVehicle : public ASTExtraVehicleBase
{
public:
	class USTVehicleWheelDustConfig*                   DustConfig;                                               // 0x0850(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    DustPSC[0x4];                                             // 0x0858(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            PSCs;                                                     // 0x0878(0x0010) (ExportObject, ZeroConstructor, Transient)
	class USTExtraVehicleMovementComponent4W*          VehicleMovement;                                          // 0x0888(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0890(0x0004) MISSED OFFSET
	float                                              TorqueMultiplierforBoosting;                              // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WheelEffectUpdateInterval;                                // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ValidTransformMinWheelNum;                                // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleWheelLanded;                                     // 0x08A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              MinLandingWheelSuspensionOffset;                          // 0x08B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailMarkVelocityMultiplier;                              // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleGearChanged;                                     // 0x08B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x28];                                      // 0x08C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty ShadowTrackerExtra.STExtraWheeledVehicle.TrailMarkClass
	TWeakObjectPtr<class ATrailMarkActor>              WeakTrailMarkActor;                                       // 0x08F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x08F8(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               Sfx_MoveConcrete;                                         // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_MoveMud;                                              // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_MoveWater;                                            // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_Slip;                                                 // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_TireExplosion;                                        // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_GearUp;                                               // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_GearDown;                                             // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Sfx_RPMRelativeCurve;                                     // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6C];                                      // 0x0940(0x006C) MISSED OFFSET
	unsigned char                                      bWheelGrounded : 1;                                       // 0x09AC(0x0001) (Net, Transient)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09AD(0x0003) MISSED OFFSET
	float                                              SpeedKPH;                                                 // 0x09B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x09B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RPM;                                                      // 0x09B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Brake;                                                    // 0x09BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bDirtySpeedKPH : 1;                                       // 0x09C0(0x0001)
	unsigned char                                      bDirtyThrottleInput : 1;                                  // 0x09C0(0x0001)
	unsigned char                                      bDirtyRPM : 1;                                            // 0x09C0(0x0001)
	unsigned char                                      bDirtyBrake : 1;                                          // 0x09C0(0x0001)
	unsigned char                                      bDetectedStartup : 1;                                     // 0x09C0(0x0001)
	unsigned char                                      bDetectedBraking : 1;                                     // 0x09C0(0x0001)
	unsigned char                                      UnknownData05[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	class UVehicleCommonComponent*                     VehicleCommonComponent;                                   // 0x09C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	// Function ShadowTrackerExtra.STExtraWheeledVehicle.UpdateBasicInfoCaching
	// (Final, Native, Private, BlueprintCallable)
	void UpdateBasicInfoCaching();// sub_178C640()

	// Function ShadowTrackerExtra.STExtraWheeledVehicle.OnWheelsLanded
	// (Final, Native, Protected)
	void OnWheelsLanded();// sub_178BE40()

	// Function ShadowTrackerExtra.STExtraWheeledVehicle.OnGearChanged
	// (Final, Native, Protected)
	void OnGearChanged(unsigned char bIsUp);// sub_178BD50()

	// Function ShadowTrackerExtra.STExtraWheeledVehicle.GetVehicleSpeed
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetVehicleSpeed();// sub_178BA40()

	// Function ShadowTrackerExtra.STExtraWheeledVehicle.GetRotationInputDir
	// (Native, Public, HasDefaults, BlueprintCallable)
	struct FVector GetRotationInputDir();// sub_C54E20()

	// Function ShadowTrackerExtra.STExtraWheeledVehicle.GetAirControlPitchInput
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetAirControlPitchInput();// sub_1642440()

	// Function ShadowTrackerExtra.STExtraWheeledVehicle.BroadcastClientVehicleWheelDestroyEffect
	// (Net, Native, Event, NetMulticast, Public)
	void BroadcastClientVehicleWheelDestroyEffect();// sub_178B7B0()

	// Function ShadowTrackerExtra.STExtraWheeledVehicle.AddBoostParticleSystemComponent
	// (Event, Public, BlueprintEvent)
	void AddBoostParticleSystemComponent();// sub_1B0A820()


}

