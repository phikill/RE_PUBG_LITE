

// Class ShadowTrackerExtra.STExtraVehicleMovementComponent4W
// //Class ShadowTrackerExtra.STExtraVehicleMovementComponent4W
//0x0100 (0x0560 - 0x0460)
class USTExtraVehicleMovementComponent4W : public UWheeledVehicleMovementComponent4W
{
public:
	TArray<struct FWheelHubSetup>                      WheelHubSetups;                                           // 0x0460(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bHideWheelPhyBodyOnServer : 1;                            // 0x0470(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	TArray<struct FName>                               ExtraOptBoneNames;                                        // 0x0478(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bApplyForceOnPuncture : 1;                                // 0x0488(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	float                                              PunctureForce;                                            // 0x048C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PunctureVelocityScalar;                                   // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0494(0x0014) MISSED OFFSET
	TArray<class UVehicleWheel*>                       WheelHubs;                                                // 0x04A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET
	struct FCustomTransmissionData                     CustomTransmission;                                       // 0x04C0(0x0020) (Edit)
	class ASTExtraVehicleBase*                         CharacterOwner;                                           // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x04E8(0x000C) MISSED OFFSET
	unsigned char                                      bAlwaysUseDirectInput : 1;                                // 0x04F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	float                                              Anim_SteeringInputInterpSpeed;                            // 0x04F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Anim_InterpOfInterpSpeedScale;                            // 0x04FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Anim_InterpOfInterpSpeedAbs;                              // 0x0500(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0504(0x0008) MISSED OFFSET
	float                                              Anim_SpeedForInputTypeSwitch;                             // 0x050C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x50];                                      // 0x0510(0x0050) MISSED OFFSET

	// Function ShadowTrackerExtra.STExtraVehicleMovementComponent4W.ServerUpdateAdditionalState
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerUpdateAdditionalState(int InTargetGear);// sub_C56820()

	// Function ShadowTrackerExtra.STExtraVehicleMovementComponent4W.ProcessCustomTransmission
	// (Final, Native, Protected)
	void ProcessCustomTransmission(float InVelocity);// sub_C563C0()

	// Function ShadowTrackerExtra.STExtraVehicleMovementComponent4W.OnDriverRide
	// (Final, Native, Public)
	void OnDriverRide();// sub_C55F10()

	// Function ShadowTrackerExtra.STExtraVehicleMovementComponent4W.OnDriverLeave
	// (Final, Native, Public)
	void OnDriverLeave();// sub_C55EF0()

	// Function ShadowTrackerExtra.STExtraVehicleMovementComponent4W.HandleOnSeatDetached
	// (Final, Native, Protected)
	void HandleOnSeatDetached(class ASTExtraPlayerCharacter* CharacterESTExtraVehicleSeatType SeatTypeint SeatIdx);// sub_C558D0()

	// Function ShadowTrackerExtra.STExtraVehicleMovementComponent4W.HandleOnSeatChanged
	// (Final, Native, Protected)
	void HandleOnSeatChanged(class ASTExtraPlayerCharacter* CharacterESTExtraVehicleSeatType LastSeatTypeint LastSeatIdxESTExtraVehicleSeatType NewSeatTypeint NewSeatIdx);// sub_C55640()

	// Function ShadowTrackerExtra.STExtraVehicleMovementComponent4W.HandleOnSeatAttached
	// (Final, Native, Protected)
	void HandleOnSeatAttached(class ASTExtraPlayerCharacter* CharacterESTExtraVehicleSeatType SeatTypeint SeatIdx);// sub_C553B0()

	// Function ShadowTrackerExtra.STExtraVehicleMovementComponent4W.GetSteeringInputClamped
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetSteeringInputClamped();// sub_C54E90()

	// Function ShadowTrackerExtra.STExtraVehicleMovementComponent4W.Client_DrawBodyDebug
	// (Net, Native, Event, Public, HasDefaults, NetClient)
	void Client_DrawBodyDebug(const struct FVector& InLocationconst struct FVector& InParentLocaitonconst struct FRotator& InRotationfloat InMassconst struct FColor& InColorconst struct FBodyInstance& InBody);// sub_C53F70()


}

