

// Class ShadowTrackerExtra.STExtraVehicleBase
// //Class ShadowTrackerExtra.STExtraVehicleBase
//0x0430 (0x0850 - 0x0420)
class ASTExtraVehicleBase : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0420(0x0008) MISSED OFFSET
	ESTExtraVehicleType                                VehicleType;                                              // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleShapeType                           VehicleShapeType;                                         // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	struct FItemDefineID                               AvatarDefaultCfg;                                         // 0x0430(0x0018) (Edit, BlueprintVisible)
	class UMaterialInterface*                          BrokenMat;                                                // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PS_Explosion;                                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PS_OnHitObstacles;                                        // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  VehicleIcon;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelConsumptionModifierBoost;                             // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanBoostSpeed : 1;                                       // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 8;                                        // 0x046D(0x0001)
	unsigned char                                      bUseSyncAtClient : 1;                                     // 0x046D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 8;                                        // 0x046E(0x0001)
	unsigned char                                      bCheckOnGround : 1;                                       // 0x046E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x046F(0x0001) MISSED OFFSET
	float                                              LanscapeCheckDistance;                                    // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInvulnerableWhenHasRiders : 1;                           // 0x0474(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	float                                              NetCullingDistanceOnVeryLowDevice;                        // 0x0478(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              voiceCheckCD;                                             // 0x047C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              voiceCheckShowCD;                                         // 0x0480(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VoiceCheckDis;                                            // 0x0484(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              voiceUsingHornCheckDis;                                   // 0x0488(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              voiceCheckSpeed;                                          // 0x048C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1C];                                      // 0x0490(0x001C) MISSED OFFSET
	unsigned char                                      bDebugDrawEnterVehicle : 1;                               // 0x04AC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2B];                                      // 0x04AD(0x002B) MISSED OFFSET
	ESTExtraVehicleHealthState                         VehicleHealthState;                                       // 0x04D8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsEngineStarted : 1;                                     // 0x04D9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08 : 8;                                        // 0x04DA(0x0001)
	unsigned char                                      bIsUsingHorn : 1;                                         // 0x04DA(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09 : 8;                                        // 0x04DB(0x0001)
	unsigned char                                      bIsBoosting : 1;                                          // 0x04DB(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BloodEffectScale;                                         // 0x04DC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       VehicleSeats;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleDamageComponent*                     VehicleDamage;                                            // 0x04F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleCommonComponent*                     VehicleCommon;                                            // 0x0500(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0508(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UVehicleSyncComponent*                       VehicleSyncComponent;                                     // 0x0510(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        VehicleCollision;                                         // 0x0518(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              VehicleHitThreshold;                                      // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VehicleHitCharacterThreshold;                             // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AndroidGLES2TailLightScale;                               // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x10];                                      // 0x052C(0x0010) MISSED OFFSET
	float                                              VehicleEnterDistance;                                     // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickEnterSphereInterval;                                  // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterSphereExtraHeight;                                   // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x9];                                       // 0x0548(0x0009) MISSED OFFSET
	unsigned char                                      bPeneTerrainProtectionEnabled : 1;                        // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0552(0x0002) MISSED OFFSET
	float                                              PeneTerrainProtectionInterval;                            // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SaveValidTransformInterval;                               // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PeneTerrainProtectionFixOffset;                           // 0x055C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData13[0x28];                                      // 0x0568(0x0028) MISSED OFFSET
	class UAkAudioEvent*                               Sfx_EngineLoop;                                           // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_Boost;                                                // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_FireLoop;                                             // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_Landing;                                              // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_Explosion;                                            // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_HitBody;                                              // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_HitMetal;                                             // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_Horn;                                                 // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_Throttle;                                             // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sfx_EngineStop;                                           // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastEngineCriteriaTime;                                   // 0x05E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EngineOnPersistenceTimeDriver;                            // 0x05E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EngineOnPersistenceTimeNoDriver;                          // 0x05E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactNormalForceRangeLower;                              // 0x05EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x30];                                      // 0x05F0(0x0030) MISSED OFFSET
	class UAkComponent*                                AkComp_OneShot;                                           // 0x0620(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData15[0x28];                                      // 0x0628(0x0028) MISSED OFFSET
	float                                              RPMSfxScale;                                              // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleSfxMinSpeed;                                      // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x14];                                      // 0x0658(0x0014) MISSED OFFSET
	float                                              ReplicatedServerLastTransformUpdateTimeStamp;             // 0x066C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	class UVehicleAvatarComponent*                     VehicleAvatar;                                            // 0x0670(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleHealthStateChanged;                              // 0x0678(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bAlwaysIgnoreRideCheck : 1;                               // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0689(0x0003) MISSED OFFSET
	float                                              MinRideAngleDgree;                                        // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldRespawnSelfWhenUnusable : 1;                       // 0x0690(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0691(0x0003) MISSED OFFSET
	float                                              RespawnWaitingTime;                                       // 0x0694(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnTickInterval;                                      // 0x0698(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x8];                                       // 0x069C(0x0008) MISSED OFFSET
	float                                              StabilizeInitialTimer;                                    // 0x06A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StablizeCurrentTimer;                                     // 0x06A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bStabilizeActive : 1;                                     // 0x06AC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData20 : 8;                                        // 0x06AD(0x0001)
	unsigned char                                      bRunStabilizeOnEntry : 1;                                 // 0x06AD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21 : 8;                                        // 0x06AE(0x0001)
	unsigned char                                      bProcessAutoEject : 1;                                    // 0x06AE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x06AF(0x0001) MISSED OFFSET
	float                                              AutoEjectGroundDistance;                                  // 0x06B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AutoEjectRoll;                                            // 0x06B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AutoEjectPitch;                                           // 0x06B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AutoEject_RiseRate;                                       // 0x06BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AutoEject_FallRate;                                       // 0x06C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3C];                                      // 0x06C4(0x003C) MISSED OFFSET
	float                                              MoveValue;                                                // 0x0700(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	class AController*                                 LastInstigatorCtrl;                                       // 0x0708(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    VehicleMaterialDynamic;                                   // 0x0710(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x28];                                      // 0x0718(0x0028) MISSED OFFSET
	class UMaterialInstanceDynamic*                    FPPDynamicMat;                                            // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FrontLightParameterName;                                  // 0x0748(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BackLightParameterName;                                   // 0x0750(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BackLightCurve;                                           // 0x0758(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FrontLightCurve;                                          // 0x0760(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x8];                                       // 0x0768(0x0008) MISSED OFFSET
	struct FName                                       ThirdPersonCameraName;                                    // 0x0770(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FirstPersonCameraName;                                    // 0x0778(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseDynamicCamera : 1;                                    // 0x0780(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0781(0x0007) MISSED OFFSET
	struct FVehicleCameraEffectSettings                CameraEffectSettings;                                     // 0x0788(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UVehicleSpringArmComponent*                  ThirdPersonSpringArmComp;                                 // 0x0818(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraComp;                                    // 0x0820(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleSpringArmComponent*                  FirstPersonSpringArmComp;                                 // 0x0828(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            FirstPersonCameraComp;                                    // 0x0830(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData28[0x18];                                      // 0x0838(0x0018) MISSED OFFSET

	// Function ShadowTrackerExtra.STExtraVehicleBase.VehicleBeenDestroyedCleanInfoDisplay
	// (Final, Native, Private)
	void VehicleBeenDestroyedCleanInfoDisplay(ESTExtraVehicleHealthState InVehicleHealthState);// sub_C569B0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.ServerSetUsingHorn
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetUsingHorn(unsigned char bUse);// sub_C56760()

	// Function ShadowTrackerExtra.STExtraVehicleBase.ServerSetBoosting
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetBoosting(unsigned char bEnalbed);// sub_C566A0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.PlaySfxOneShot
	// (Final, Native, Protected, BlueprintCallable)
	void PlaySfxOneShot(class UAkAudioEvent* AkEvent);// sub_C56270()

	// Function ShadowTrackerExtra.STExtraVehicleBase.OnVehicleEjected
	// (Native, Protected)
	void OnVehicleEjected();// sub_8C0820()

	// Function ShadowTrackerExtra.STExtraVehicleBase.OnUserQualitySettingChanged
	// (Final, Native, Protected)
	void OnUserQualitySettingChanged(int renderlevel);// sub_C56130()

	// Function ShadowTrackerExtra.STExtraVehicleBase.OnUpdateEffects
	// (Event, Public, BlueprintEvent)
	void OnUpdateEffects();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraVehicleBase.OnRep_VehicleHealthState
	// (Final, Native, Public)
	void OnRep_VehicleHealthState();// sub_C560D0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.OnRep_IsEngineStarted
	// (Final, Native, Public)
	void OnRep_IsEngineStarted();// sub_C56070()

	// Function ShadowTrackerExtra.STExtraVehicleBase.OnRep_IsBoosting
	// (Final, Native, Public)
	void OnRep_IsBoosting();// sub_C56050()

	// Function ShadowTrackerExtra.STExtraVehicleBase.OnEngineStop
	// (Event, Public, BlueprintEvent)
	void OnEngineStop();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraVehicleBase.OnEngineStart
	// (Event, Public, BlueprintEvent)
	void OnEngineStart();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraVehicleBase.OnCharacterHit
	// (Final, Native, Private)
	void OnCharacterHit(class ASTExtraBaseCharacter* HitCharacterfloat HitDamage);// sub_C55E20()

	// Function ShadowTrackerExtra.STExtraVehicleBase.OnBoostingChanged
	// (Event, Public, BlueprintEvent)
	void OnBoostingChanged();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraVehicleBase.MulticastCharacterHitEffects
	// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
	void MulticastCharacterHitEffects(const struct FVector& HitLocation);// sub_C55DA0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.IsInWater
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsInWater();// sub_C55C60()

	// Function ShadowTrackerExtra.STExtraVehicleBase.InitVehicle
	// (Native, Public, BlueprintCallable)
	void InitVehicle(int FuelPercentunsigned char bEngineOn);// sub_C55AE0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.HandleOnVehicleHealthStateChanged
	// (Native, Protected)
	void HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState);// sub_C559D0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.HandleOnSeatDetached
	// (Final, Native, Protected)
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* CharacterESTExtraVehicleSeatType SeatTypeint SeatIdx);// sub_C557D0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.HandleOnSeatChanged
	// (Final, Native, Protected)
	void HandleOnSeatChanged(class ASTExtraPlayerCharacter* CharacterESTExtraVehicleSeatType LastSeatTypeint LastSeatIdxESTExtraVehicleSeatType NewSeatTypeint NewSeatIdx);// sub_C554B0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.HandleOnSeatAttached
	// (Native, Protected)
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* CharacterESTExtraVehicleSeatType SeatTypeint SeatIdx);// sub_C552B0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.GetVehicleAvatar
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	class UVehicleAvatarComponent* GetVehicleAvatar();// sub_C54EC0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.GetRotationInputDir
	// (Native, Public, HasDefaults, BlueprintCallable)
	struct FVector GetRotationInputDir();// sub_C54E20()

	// Function ShadowTrackerExtra.STExtraVehicleBase.GetForwardSpeed
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetForwardSpeed();// sub_C54940()

	// Function ShadowTrackerExtra.STExtraVehicleBase.ClearInputs
	// (Final, Native, Public, BlueprintCallable)
	void ClearInputs();// sub_C53F50()

	// Function ShadowTrackerExtra.STExtraVehicleBase.CanRide
	// (Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char CanRide();// sub_C53EA0()

	// Function ShadowTrackerExtra.STExtraVehicleBase.BroadcastClientVehicleExplosionEffect
	// (Net, Native, Event, NetMulticast, Public)
	void BroadcastClientVehicleExplosionEffect();// sub_3977E0()


}


