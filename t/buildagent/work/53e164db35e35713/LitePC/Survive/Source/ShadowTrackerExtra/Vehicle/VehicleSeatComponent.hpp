

// Class ShadowTrackerExtra.VehicleSeatComponent
// //Class ShadowTrackerExtra.VehicleSeatComponent
//0x0158 (0x0260 - 0x0108)
class UVehicleSeatComponent : public UActorComponent
{
public:
	class APhysicsVolume*                              WaterVolume;                                              // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EVHSeatGUIType>>                SeatGUITypes;                                             // 0x0110(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0120(0x0018) MISSED OFFSET
	TArray<struct FSTExtraVehicleSeat>                 Seats;                                                    // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ASTExtraPlayerCharacter*>             SeatOccupiers;                                            // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FName>                               AlternativeLeaveVehicleSockets;                           // 0x0158(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              LeaveVehicleVelocityScale;                                // 0x0168(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bCheckValidLeaveLocationBySweep : 1;                      // 0x016C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSeatAttached;                                           // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSeatDetached;                                           // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSeatChanged;                                            // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateSeatGUI;                                          // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     LatestDriverPlayerName;                                   // 0x01B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxInUseSeatGUIIndex;                                     // 0x01C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDriverRideAtClient;                                     // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDriverLeaveAtClient;                                    // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bDoEntryAngleCheck : 1;                                   // 0x01E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01E9(0x0003) MISSED OFFSET
	float                                              MinEntryAngle;                                            // 0x01EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ASTExtraPlayerCharacter>      LastDriver;                                               // 0x01F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x58];                                      // 0x01F8(0x0058) MISSED OFFSET
	TArray<class UVehicleSeatInteractionComponent*>    InteractionSeats;                                         // 0x0250(0x0010) (ExportObject, ZeroConstructor, Transient)

	// Function ShadowTrackerExtra.VehicleSeatComponent.OnRep_Occupiers
	// (Final, Native, Public)
	void OnRep_Occupiers();// sub_1B1E7E0()

	// Function ShadowTrackerExtra.VehicleSeatComponent.IsSeatAvailableByIndex
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsSeatAvailableByIndex(int SeatIndex);// sub_1B1E1E0()

	// Function ShadowTrackerExtra.VehicleSeatComponent.IsSeatAvailable
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsSeatAvailable(ESTExtraVehicleSeatType SeatType);// sub_1B1E150()

	// Function ShadowTrackerExtra.VehicleSeatComponent.GetSeats
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UVehicleSeatInteractionComponent* GetSeats(int SeatIndex);// sub_1B1D900()

	// Function ShadowTrackerExtra.VehicleSeatComponent.GetDriver
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraPlayerCharacter* GetDriver();// sub_1B1D6A0()

	// Function ShadowTrackerExtra.VehicleSeatComponent.ClientSetLeaveVehicleLocation
	// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	void ClientSetLeaveVehicleLocation(class ASTExtraPlayerCharacter* Characterconst struct FVector& LeaveLocation);// sub_1B1D2D0()


}

