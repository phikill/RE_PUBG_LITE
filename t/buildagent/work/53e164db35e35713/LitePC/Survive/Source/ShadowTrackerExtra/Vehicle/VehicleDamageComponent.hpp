

// Class ShadowTrackerExtra.VehicleDamageComponent
// //Class ShadowTrackerExtra.VehicleDamageComponent
//0x0138 (0x0240 - 0x0108)
class UVehicleDamageComponent : public UActorComponent
{
public:
	float                                              MinimumCharacterDamage;                                   // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseLimitationSpeedThreshold;                          // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactModifier;                                           // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactModifierUpsideDown;                                 // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactAbsorption;                                         // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactAbsorptionUpsideDown;                               // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactAbsorptionPassenger;                                // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactAbsorptionPassengerUpsideDown;                      // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsImpactVehicleDamageMultiplier;                     // 0x0128(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicsImpactPassengerDamageMultiplier;                   // 0x012C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CollectTime;                                              // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	float                                              AllowedMaxHitDistanceSqAtServer;                          // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExplosionLocalLocation;                                   // 0x013C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ExplosionBaseDamage;                                      // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionMinimumDamage;                                   // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionRadiusInner;                                     // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionRadiusOuter;                                     // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamageFalloff;                                   // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionBaseMomentumMag;                                 // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 ExplosionDamageType;                                      // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCharacterHit;                                           // 0x0168(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      OnlyBreakWindowThroughDriver : 1;                         // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	class UCurveFloat*                                 VehicleHitCharacterDamageCurve;                           // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CharacterDamageMassCurve;                                 // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitCharacterDuration;                                     // 0x0190(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x54];                                      // 0x0194(0x0054) MISSED OFFSET
	float                                              MinimumCharacterLaunchSpeed;                              // 0x01E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterLaunchSpeedMultiplier;                           // 0x01EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterHitMinimumVehicleSpeed;                          // 0x01F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterDamageMassUnitMultiplier;                        // 0x01F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterDamageVelocityUnitMultiplier;                    // 0x01F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           VoidPhysicalMaterial;                                     // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0208(0x0004) MISSED OFFSET
	float                                              LeaveCharacterIgnoreDuration;                             // 0x020C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x30];                                      // 0x0210(0x0030) MISSED OFFSET

	// Function ShadowTrackerExtra.VehicleDamageComponent.OnHit
	// (Native, Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	void OnHit(class AActor* SelfActorclass AActor* OtherActorconst struct FVector& NormalImpulseconst struct FHitResult& Hit);// sub_1B1E2C0()

	// Function ShadowTrackerExtra.VehicleDamageComponent.HandleOnVehicleHit
	// (Final, Native, Protected, HasOutParms, HasDefaults)
	void HandleOnVehicleHit(class AActor* SelfActorclass AActor* OtherActorconst struct FVector& NormalImpulseconst struct FHitResult& Hit);// sub_1B1DDD0()


}

