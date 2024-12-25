

// Class ShadowTrackerExtra.STCharacterMovementComponent
// //Class ShadowTrackerExtra.STCharacterMovementComponent
//0x0B70 (0x1350 - 0x07E0)
class USTCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	float                                              RadiusScaleWhenCheckPassWall;                             // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      StopTick : 1;                                             // 0x07E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07E5(0x0003) MISSED OFFSET
	float                                              TimeSpeedFactor;                                          // 0x07E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CheatCheckSumFailed : 1;                                  // 0x07EC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x07ED(0x0001)
	unsigned char                                      bCanSendCmdAck : 1;                                       // 0x07ED(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x07EE(0x0002) MISSED OFFSET
	float                                              MaxPenetrationAdjustmentSize;                             // 0x07F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaveRidingSmoothingFactor;                                // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxZSpeedOutOfWaterModifier;                              // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationUnderwaterSwimming;                    // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxUnderwaterSwimAcceleration;                            // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwimAcceleration;                                      // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0808(0x0004) MISSED OFFSET
	float                                              MaxDecideClientTimeSpeedDeltaTime;                        // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseTimeSpeedAntiCheatCheck : 1;                          // 0x0810(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseUserCmdDeltaCompress : 1;                             // 0x0810(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0811(0x0003) MISSED OFFSET
	float                                              SimulatedNearDistanceSqAtClient;                          // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulatedNearTickIntervalAtClient;                        // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulatedMiddleDistanceSqAtClient;                        // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulatedMiddleTickIntervalAtClient;                      // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulatedFarDistanceSqAtClient;                           // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulatedFarTickIntervalAtClient;                         // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeedCurveScale;                                      // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MaxWalkSpeedCurve;                                        // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeedModifierUnit;                                    // 0x0838(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinWalkSpeedModifier;                                     // 0x083C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ProneFloorAngle;                                          // 0x0840(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProneFloorZ;                                              // 0x0844(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              JumpFloorAngle;                                           // 0x0848(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpFloorZ;                                               // 0x084C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0xF4];                                      // 0x0850(0x00F4) MISSED OFFSET
	unsigned char                                      bFixParachuteEnabled : 1;                                 // 0x0944(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0945(0x0003) MISSED OFFSET
	float                                              CheckDistanceAhead;                                       // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x094C(0x000C) MISSED OFFSET
	struct FMovementData                               StandMovement;                                            // 0x0958(0x0040) (Edit, DisableEditOnInstance)
	struct FMovementData                               ProneMovement;                                            // 0x0998(0x0040) (Edit, DisableEditOnInstance)
	struct FMovementData                               CrouchMovement;                                           // 0x09D8(0x0040) (Edit, DisableEditOnInstance)
	float                                              GroggySpeed;                                              // 0x0A18(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMovementStates                             MovementStates;                                           // 0x0A1C(0x0003) (Net, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0A1F(0x0001) MISSED OFFSET
	float                                              MaxDesiredAccel;                                          // 0x0A20(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDesiredAccel;                                          // 0x0A24(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDesiredGroundFriction;                                 // 0x0A28(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDesiredGroundFriction;                                 // 0x0A2C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDesiredGroundFrictionSprint;                           // 0x0A30(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProneWalkableFloorZ;                                      // 0x0A34(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x20];                                      // 0x0A38(0x0020) MISSED OFFSET
	float                                              MinimumHighAltitude;                                      // 0x0A58(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x44];                                      // 0x0A5C(0x0044) MISSED OFFSET
	class UCurveFloat*                                 EjectDamageCurve;                                         // 0x0AA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingDamageMinZCut;                                     // 0x0AA8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingDamageVDampingZ;                                   // 0x0AAC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingDamageFactor;                                      // 0x0AB0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDistanceToBreakGlass;                                  // 0x0AB4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSweepTestDistanceToBreakGlass;                         // 0x0AB8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RiderSphereRadiusToBreakGlass;                            // 0x0ABC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastPelvisLocation;                                       // 0x0AC0(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      bInitLastPelvisLocation : 1;                              // 0x0ACC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       VaultDebugType;                                           // 0x0ACD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0ACE(0x0002) MISSED OFFSET
	class UVaultingSettings*                           VaultingSettings;                                         // 0x0AD0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVaultingData*                               CurrentVaultingData;                                      // 0x0AD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsVaulting_CP : 1;                                       // 0x0AE0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0AE1(0x0003) MISSED OFFSET
	int                                                HeightFor200;                                             // 0x0AE4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightFor160;                                             // 0x0AE8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightFor120;                                             // 0x0AEC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightFor90;                                              // 0x0AF0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightFor60;                                              // 0x0AF4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SizeForNarrow;                                            // 0x0AF8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SizeForSlide;                                             // 0x0AFC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityForMobile;                                        // 0x0B00(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVaultingTask                               CurrentVaultingTask;                                      // 0x0B04(0x0048) (BlueprintVisible, BlueprintReadOnly)
	float                                              V_Timer_CP;                                               // 0x0B4C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimMultiplierPreApex;                                    // 0x0B50(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimMultiplierPostApex;                                   // 0x0B54(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultCancelAnimSpeed;                                     // 0x0B58(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterRelLocation;                                     // 0x0B5C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LastVaultLocation;                                        // 0x0B68(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LastVaultTime;                                            // 0x0B74(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AveragedVelocity;                                         // 0x0B78(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              VaultCancelDTScalar;                                      // 0x0B84(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlobalVaultScale;                                         // 0x0B88(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VaultingDistanceLimit;                                    // 0x0B8C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MaxVaultDistanceByVelocityInMap;                          // 0x0B90(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MaxVaultDistanceByVelocityOutMap;                         // 0x0B98(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   XYSpeedToForwardDirMapIn;                                 // 0x0BA0(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   XYSpeedToForwardDirMapOut;                                // 0x0BA8(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ZSpeedToForwardDirMapIn;                                  // 0x0BB0(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ZSpeedToForwardDirMapOut;                                 // 0x0BB8(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardDirTraceSpeed;                                     // 0x0BC0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x75E];                                     // 0x0BC4(0x075E) MISSED OFFSET
	unsigned char                                      bCancelVaulting : 1;                                      // 0x1322(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x25];                                      // 0x1323(0x0025) MISSED OFFSET
	int                                                BroSimulateMovement;                                      // 0x1348(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x134C(0x0004) MISSED OFFSET

	// Function ShadowTrackerExtra.STCharacterMovementComponent.UpdateMovementState_Server
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void UpdateMovementState_Server(const struct FMovementStates& Srcconst struct FStanceUpdateCaller& Caller);// sub_1C46E20()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.TraceSphereForVaulting
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char TraceSphereForVaulting(const struct FVector& Startconst struct FVector& Endfloat RadiusTEnumAsByte<EDrawDebugTrace> DrawDebugTypestruct FHitResult* OutHitconst struct FLinearColor& TraceColorconst struct FLinearColor& TraceHitColorfloat DrawTime);// sub_1C46B50()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.TraceLineForVaulting
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char TraceLineForVaulting(const struct FVector& Startconst struct FVector& EndTEnumAsByte<EDrawDebugTrace> DrawDebugTypestruct FHitResult* OutHitconst struct FLinearColor& TraceColorconst struct FLinearColor& TraceHitColorfloat DrawTime);// sub_1C468D0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.TraceCapsuleForVaulting
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char TraceCapsuleForVaulting(const struct FVector& Startconst struct FVector& EndTEnumAsByte<EDrawDebugTrace> DrawDebugTypestruct FHitResult* OutHitconst struct FLinearColor& TraceColorconst struct FLinearColor& TraceHitColorfloat DrawTime);// sub_1C46650()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.ToggleUserCmdDelta
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ToggleUserCmdDelta(unsigned char Val);// sub_1C465A0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.TimeSpeedCheck
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void TimeSpeedCheck(unsigned char Val);// sub_1C464F0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.StartVaultingTask
	// (Final, Native, Public, BlueprintCallable)
	void StartVaultingTask(const struct FVaultingTask& InVaultTask);// sub_1C462D0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.SpeedHackNotify
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void SpeedHackNotify();// sub_1C462B0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.SpeedHackDetected_V2
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void SpeedHackDetected_V2(EStance StanceTEnumAsByte<EMovementMode> MoveModeTEnumAsByte<EMovementMode> PrevMoveModefloat OverAvgSpeedfloat DetectionTimefloat MaxContinuousTimeint Pingfloat CurTime);// sub_1C46060()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.SpeedHackDetected
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void SpeedHackDetected(EStance StanceTEnumAsByte<EMovementMode> MoveModeTEnumAsByte<EMovementMode> PrevMoveModefloat OverAvgSpeedfloat DetectionTimefloat MaxContinuousTimeint Pingfloat CurTime);// sub_1C45E10()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.SeverAddRotationVelocity
	// (Net, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	void SeverAddRotationVelocity(const struct FVector& RotationVelocity);// sub_1C45D60()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.SetProneFloorZ
	// (Final, Native, Public, BlueprintCallable)
	void SetProneFloorZ(float InProneFloorZ);// sub_1C45CE0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.SetProneFloorAngle
	// (Final, Native, Public, BlueprintCallable)
	void SetProneFloorAngle(float InProneFloorAngle);// sub_1C45C60()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.SetJumpFloorZ
	// (Final, Native, Public, BlueprintCallable)
	void SetJumpFloorZ(float InJumpFloorZ);// sub_1C45BE0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.SetJumpFloorAngle
	// (Final, Native, Public, BlueprintCallable)
	void SetJumpFloorAngle(float InJumpFloorAngle);// sub_1C45B60()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.ServerUserMoveCmdOld
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerUserMoveCmdOld(int ClientApplySequenceTArray<unsigned char> UserCmdDelta);// sub_1C45950()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.ServerUserMoveCmdDual
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerUserMoveCmdDual(uint32_t Sequenceuint32_t Checksumclass UPrimitiveComponent* ClientMovementBaseTArray<unsigned char> UserCmdTArray<unsigned char> UserCmdDelta);// sub_1C45780()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.ServerUserMoveCmd
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void ServerUserMoveCmd(uint32_t Sequenceuint32_t Checksumclass UPrimitiveComponent* ClientMovementBaseTArray<unsigned char> UserCmd);// sub_1C455F0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.ServerSetCancelVault
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSetCancelVault(unsigned char InCancel);// sub_1C45530()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.PredictCapsulePathForVaulting
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void PredictCapsulePathForVaulting(struct FHitResult* OutHitTArray<struct FVector>* OutPathPositionsstruct FVector* OutLastTraceDestinationconst struct FVector& startPosconst struct FVector& LaunchVelocitystruct FVector* OutImpactVelocityTEnumAsByte<EDrawDebugTrace> DrawDebugTypefloat DrawDebugTimefloat CapsuleRadiusOverridefloat CapsuleHalfHeightOverridefloat SimFrequencyfloat MaxSimTime);// sub_1C44CC0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.Ping2Server
	// (Net, Native, Event, Public, NetServer, NetValidate)
	void Ping2Server(float ServerTimefloat ClientTime);// sub_1C44B40()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.Ping2Client
	// (Net, Native, Event, Public, NetClient)
	void Ping2Client(float ServerTime);// sub_1C44AC0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.PhysicsFlyDistance
	// (Final, Native, Public, HasOutParms, HasDefaults)
	void PhysicsFlyDistance(float DeltaTimeconst struct FVector& flyVelocity);// sub_1C44930()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.OnRecoverOnServer
	// (Native, Public)
	void OnRecoverOnServer();// sub_1C448F0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.OnPreReconnectOnServer
	// (Final, Native, Public)
	void OnPreReconnectOnServer();// sub_1C448D0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.OnClientCloseUserCmdDelta
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void OnClientCloseUserCmdDelta();// sub_1C448B0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.K2_GetProneFloorZ
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float K2_GetProneFloorZ();// sub_1C44880()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.K2_GetProneFloorAngle
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float K2_GetProneFloorAngle();// sub_1C44850()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.K2_GetJumpFloorZ
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float K2_GetJumpFloorZ();// sub_1C44820()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.K2_GetJumpFloorAngle
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float K2_GetJumpFloorAngle();// sub_1C447F0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.IsWalkable
	// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsWalkable(const struct FHitResult& Hit);// sub_8C1730()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.IsVaultResultSafe
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char IsVaultResultSafe(const struct FVector& startPosconst struct FVector& EndPosEVaultAnimType VaultTypeconst struct FVector& ImpactPositionconst struct FName& ImpactObjectNameconst struct FVector& InApex);// sub_1C44590()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.IsVaulting
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsVaulting();// sub_1C447C0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.HandleVaultPreEvaluation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void HandleVaultPreEvaluation(unsigned char bForceVelocityconst struct FVector& InForcedVelocity);// sub_1C43F70()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.HandleVaulting
	// (Final, Native, Public, BlueprintCallable)
	struct FVaultingHandleResult HandleVaulting(const struct FVaultingHandleInput& Input);// sub_1C44050()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.GetVTimer
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetVTimer();// sub_1C43D00()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.GetVaultingDataFromAnim
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UVaultingData* GetVaultingDataFromAnim(EVaultAnimType InVaultType);// sub_1C43D30()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.GetMaxVaultDistanceBySpeed
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetMaxVaultDistanceBySpeed();// sub_1C43CA0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.GetLastServerMoveTime
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetLastServerMoveTime();// sub_1C43C70()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.GetGlobalVaultingSpeedMultiplier
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetGlobalVaultingSpeedMultiplier();// sub_1C43C40()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.GetCurrentVaultType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	EVaultAnimType GetCurrentVaultType();// sub_1C43C10()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.EvaluateVaultAnimType
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	EVaultAnimType EvaluateVaultAnimType(int FirstRowint ApexAdditiveStepCounterfloat AverageCellCountunsigned char bForceVaultunsigned char bForceClimbconst struct FVector& CharVelocityconst struct FVector& InImpactVelocityunsigned char bIsLedgeGrabfloat RelativeZconst struct FVaultingLedgeData& InLedgeDataclass UVaultingData** OutVaultingData);// sub_1C43720()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.EndCurrentTaskToFall
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char EndCurrentTaskToFall();// sub_1C436D0()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.DragOnGround
	// (Final, Native, Public)
	unsigned char DragOnGround(float DeltaTime);// sub_1C43640()

	// Function ShadowTrackerExtra.STCharacterMovementComponent.ClientUserMoveCmdAck
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientUserMoveCmdAck(int Sequence);// sub_1C435A0()


}

