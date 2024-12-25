

// Class ShadowTrackerExtra.VehicleSyncComponent
// //Class ShadowTrackerExtra.VehicleSyncComponent
//0x0528 (0x0630 - 0x0108)
class UVehicleSyncComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x460];                                     // 0x0108(0x0460) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorHit;                                               // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ASTExtraVehicleBase*                         VehicleOwner;                                             // 0x0578(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5C];                                      // 0x0580(0x005C) MISSED OFFSET
	float                                              MinReliableCorrectionInterval;                            // 0x05DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05E0(0x0004) MISSED OFFSET
	float                                              MinCorrectionInterval;                                    // 0x05E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05E8(0x0004) MISSED OFFSET
	float                                              SendingToServerIntervalAtClient;                          // 0x05EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x05F0(0x0008) MISSED OFFSET
	float                                              SendingReliableHitToServerIntervalAtClient;               // 0x05F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	float                                              AllowedMaxDistanceSqAtServer;                             // 0x0600(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StationaryCorrectionIntervalAtClient;                     // 0x0604(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0608(0x0004) MISSED OFFSET
	float                                              StationaryCorrectionSpeedThresholdSq;                     // 0x060C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StationaryCorrectionThresholdDistanceSq;                  // 0x0610(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	float                                              SweepToFloorMaxDisantce;                                  // 0x0618(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x14];                                      // 0x061C(0x0014) MISSED OFFSET

	// Function ShadowTrackerExtra.VehicleSyncComponent.SendServerOthervehicleMoveToClientUnreliably
	// (Net, Native, Event, Public, NetClient)
	void SendServerOthervehicleMoveToClientUnreliably(class UVehicleSyncComponent* TargetSyncComponentconst struct FVector_NetQuantize100& ServerLocationconst struct FVector_NetQuantize100& ServerLinearVelocityconst struct FVector_NetQuantizeNormal& ServerRotatorconst struct FVector_NetQuantize100& ServerAngularVelocity);// sub_1B1FE20()

	// Function ShadowTrackerExtra.VehicleSyncComponent.SendServerOthervehicleMoveToClientReliably
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void SendServerOthervehicleMoveToClientReliably(class UVehicleSyncComponent* TargetSyncComponentconst struct FVector_NetQuantize100& ServerLocationconst struct FVector_NetQuantize100& ServerLinearVelocityconst struct FVector_NetQuantizeNormal& ServerRotatorconst struct FVector_NetQuantize100& ServerAngularVelocity);// sub_1B1FC60()

	// Function ShadowTrackerExtra.VehicleSyncComponent.SendServerMoveToClientUnreliably
	// (Net, Native, Event, Public, NetClient)
	void SendServerMoveToClientUnreliably(const struct FVector_NetQuantize100& ServerLocationconst struct FVector_NetQuantize100& ServerLinearVelocityconst struct FVector_NetQuantizeNormal& ServerRotatorconst struct FVector_NetQuantize100& ServerAngularVelocity);// sub_1B1FAE0()

	// Function ShadowTrackerExtra.VehicleSyncComponent.SendServerMoveToClientReliably
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void SendServerMoveToClientReliably(int InCorrectionIdconst struct FVector_NetQuantize100& ServerLocationconst struct FVector_NetQuantize100& ServerLinearVelocityconst struct FVector_NetQuantizeNormal& ServerRotatorconst struct FVector_NetQuantize100& ServerAngularVelocity);// sub_1B1F920()

	// Function ShadowTrackerExtra.VehicleSyncComponent.SendClientMoveToServerUnreliably
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void SendClientMoveToServerUnreliably(int InCorrectionIdconst struct FVector_NetQuantize100& ClientLocationconst struct FVector_NetQuantize100& ClientLinearVelocityconst struct FVector_NetQuantizeNormal& ClientRotatorconst struct FVector_NetQuantize100& ClientAngularVelocityuint32_t Checksum);// sub_1B1F6B0()

	// Function ShadowTrackerExtra.VehicleSyncComponent.SendClientMoveToServerReliably
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void SendClientMoveToServerReliably(int InCorrectionIdconst struct FVector_NetQuantize100& ClientLocationconst struct FVector_NetQuantize100& ClientLinearVelocityconst struct FVector_NetQuantizeNormal& ClientRotatorconst struct FVector_NetQuantize100& ClientAngularVelocityuint32_t Checksum);// sub_1B1F440()

	// Function ShadowTrackerExtra.VehicleSyncComponent.SendClientHitToServerUnreliably
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void SendClientHitToServerUnreliably(int InCorrectionIdconst struct FVector_NetQuantize100& ClientLocationconst struct FVector_NetQuantize100& ClientLinearVelocityconst struct FVector_NetQuantizeNormal& ClientRotatorconst struct FVector_NetQuantize100& ClientAngularVelocityconst struct FVector_NetQuantize100& NormalImpulseconst struct FHitResult& Hituint32_t Checksum);// sub_1B1EEA0()

	// Function ShadowTrackerExtra.VehicleSyncComponent.SendClientHitToServerReliably
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void SendClientHitToServerReliably(int InCorrectionIdconst struct FVector_NetQuantize100& ClientLocationconst struct FVector_NetQuantize100& ClientLinearVelocityconst struct FVector_NetQuantizeNormal& ClientRotatorconst struct FVector_NetQuantize100& ClientAngularVelocityconst struct FVector_NetQuantize100& NormalImpulseconst struct FHitResult& Hituint32_t Checksum);// sub_1B1E900()

	// Function ShadowTrackerExtra.VehicleSyncComponent.OnTimerSweepToFloor
	// (Final, Native, Public)
	void OnTimerSweepToFloor();// sub_1B1E820()

	// Function ShadowTrackerExtra.VehicleSyncComponent.OnHitAtServer
	// (Final, Native, Public, HasOutParms, HasDefaults)
	void OnHitAtServer(class AActor* SelfActorclass AActor* OtherActorconst struct FVector& NormalImpulseconst struct FHitResult& Hit);// sub_1B1E600()

	// Function ShadowTrackerExtra.VehicleSyncComponent.OnHitAtClient
	// (Final, Native, Public, HasOutParms, HasDefaults)
	void OnHitAtClient(class AActor* SelfActorclass AActor* OtherActorconst struct FVector& NormalImpulseconst struct FHitResult& Hit);// sub_1B1E460()

	// Function ShadowTrackerExtra.VehicleSyncComponent.OnDriverRide
	// (Final, Native, Public)
	void OnDriverRide();// sub_1B1E2A0()

	// Function ShadowTrackerExtra.VehicleSyncComponent.GetRiders
	// (Final, Native, Public, Const)
	TArray<class ASTExtraBaseCharacter*> GetRiders();// sub_1B1D760()

	// Function ShadowTrackerExtra.VehicleSyncComponent.Correct
	// (Final, Native, Public)
	void Correct(class UVehicleSyncComponent* OtherVehicle);// sub_1B1D3B0()

	// Function ShadowTrackerExtra.VehicleSyncComponent.ApplyRigidBodyState
	// (Final, Native, Public, HasOutParms)
	void ApplyRigidBodyState(struct FRigidBodyState* NewState);// sub_1B1D210()


}

