

// Class ShadowTrackerExtra.VehicleUserComponent
// //Class ShadowTrackerExtra.VehicleUserComponent
//0x00D8 (0x01E0 - 0x0108)
class UVehicleUserComponent : public UActorComponent
{
public:
	class ASTExtraVehicleBase*                         CurrentClosestVehicle;                                    // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    CurrentClosestVehicleChanged;                             // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnterVehicle;                                           // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExitVehicle;                                            // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ASTExtraVehicleBase*                         Vehicle;                                                  // 0x0140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     Character;                                                // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleUserState                           VehicleUserState;                                         // 0x0150(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	class ASTExtraVehicleBase*                         LastDriveVehicle;                                         // 0x0158(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              UpdateVehicleSpeedGUIInterval;                            // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	float                                              UpdateClosestVehicleInterval;                             // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	TArray<class ASTExtraVehicleBase*>                 OverlappingVehicles;                                      // 0x0170(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0180(0x0010) MISSED OFFSET
	unsigned char                                      EnableVehicleShoot : 1;                                   // 0x0190(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              MaxAllowedExitSpeedDiff;                                  // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x0198(0x000C) MISSED OFFSET
	unsigned char                                      bRotateToViewOnExitVehicle : 1;                           // 0x01A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	float                                              NoFuelTipsDisplayCooldown;                                // 0x01A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	struct FVehicleUserReconnRepData                   ReconnRepData;                                            // 0x01B0(0x0018) (Net)
	unsigned char                                      UnknownData08[0x2];                                       // 0x01C8(0x0002) MISSED OFFSET
	unsigned char                                      bAllowProcessReconnectionDataMoreThanOnce : 1;            // 0x01CA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x01CB(0x0001) MISSED OFFSET
	float                                              CurrentMoveForwardRate;                                   // 0x01CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentMoveRightRate;                                     // 0x01D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0xC];                                       // 0x01D4(0x000C) MISSED OFFSET

	// Function ShadowTrackerExtra.VehicleUserComponent.UpdatePassengerViewPitchLimit
	// (Final, Native, Protected)
	void UpdatePassengerViewPitchLimit();// sub_1D2F6B0()

	// Function ShadowTrackerExtra.VehicleUserComponent.TurnVehicle
	// (Final, Native, Public, BlueprintCallable)
	void TurnVehicle(float Rate);// sub_1D2F630()

	// Function ShadowTrackerExtra.VehicleUserComponent.TryUseHorn
	// (Final, Native, Public, BlueprintCallable)
	void TryUseHorn(unsigned char bUse);// sub_1D2F5A0()

	// Function ShadowTrackerExtra.VehicleUserComponent.TryLeanOutOrIn
	// (Final, Native, Public, BlueprintCallable)
	void TryLeanOutOrIn(unsigned char bAutoLeanOut);// sub_1D2F510()

	// Function ShadowTrackerExtra.VehicleUserComponent.TryLeanOut
	// (Final, Native, Public, BlueprintCallable)
	void TryLeanOut(unsigned char bLean);// sub_1D2F480()

	// Function ShadowTrackerExtra.VehicleUserComponent.TryExitVehicle
	// (Final, Native, Public, BlueprintCallable)
	void TryExitVehicle();// sub_1D2F460()

	// Function ShadowTrackerExtra.VehicleUserComponent.TryEnterVehicle
	// (Final, Native, Public, BlueprintCallable)
	void TryEnterVehicle(class ASTExtraVehicleBase* InVehicleESTExtraVehicleSeatType SeatType);// sub_1D2F3A0()

	// Function ShadowTrackerExtra.VehicleUserComponent.TryChangeVehicleSeatForPC
	// (Final, Native, Public, BlueprintCallable)
	void TryChangeVehicleSeatForPC(int SeatIndexclass ASTExtraVehicleBase* InVehicle);// sub_1D2F260()

	// Function ShadowTrackerExtra.VehicleUserComponent.TryChangeVehicleSeat
	// (Final, Native, Public, BlueprintCallable)
	void TryChangeVehicleSeat();// sub_1D2F240()

	// Function ShadowTrackerExtra.VehicleUserComponent.SetBrake
	// (Final, Native, Public, BlueprintCallable)
	void SetBrake(float Rate);// sub_1D2EEC0()

	// Function ShadowTrackerExtra.VehicleUserComponent.SetBoosting
	// (Final, Native, Public, BlueprintCallable)
	void SetBoosting(unsigned char bEnabled);// sub_1D2EE30()

	// Function ShadowTrackerExtra.VehicleUserComponent.SetAirControlF
	// (Final, Native, Public, BlueprintCallable)
	void SetAirControlF(float Rate);// sub_1D2EDB0()

	// Function ShadowTrackerExtra.VehicleUserComponent.SetAirControlB
	// (Final, Native, Public, BlueprintCallable)
	void SetAirControlB(float Rate);// sub_1D2ED30()

	// Function ShadowTrackerExtra.VehicleUserComponent.RspLeanOut
	// (Net, NetReliable, Native, Event, Protected, NetClient)
	void RspLeanOut(unsigned char bOut);// sub_1D2EC10()

	// Function ShadowTrackerExtra.VehicleUserComponent.RspExitVehicle
	// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
	void RspExitVehicle(unsigned char bSuccessconst struct FVector& InLeaveVelocityconst struct FVector& InLeaveLocation);// sub_1D2EB00()

	// Function ShadowTrackerExtra.VehicleUserComponent.RspEnterVehicle
	// (Net, NetReliable, Native, Event, Protected, NetClient)
	void RspEnterVehicle(class ASTExtraVehicleBase* InVehicleunsigned char bSuccessESTExtraVehicleSeatType SeatType);// sub_1D2E9F0()

	// Function ShadowTrackerExtra.VehicleUserComponent.RspChangeVehicleSeatForPC
	// (Net, NetReliable, Native, Event, Protected, NetClient)
	void RspChangeVehicleSeatForPC(unsigned char bSuccessint SeatIndex);// sub_1D2E920()

	// Function ShadowTrackerExtra.VehicleUserComponent.RspChangeVehicleSeat
	// (Net, NetReliable, Native, Event, Protected, NetClient)
	void RspChangeVehicleSeat(unsigned char bSuccessESTExtraVehicleSeatType SeatType);// sub_1D2E850()

	// Function ShadowTrackerExtra.VehicleUserComponent.ReqSyncViewTargetLastDriveInfo
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ReqSyncViewTargetLastDriveInfo(class ASTExtraPlayerController* ObserverControllerclass ASTExtraBaseCharacter* ViewTargetCharacter);// sub_1D2E750()

	// Function ShadowTrackerExtra.VehicleUserComponent.ReqMarkLastestVehicle
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ReqMarkLastestVehicle(class ASTExtraPlayerController* STEPCclass ASTExtraVehicleBase* InVehicle);// sub_1D2E650()

	// Function ShadowTrackerExtra.VehicleUserComponent.ReqLeanOut
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ReqLeanOut(unsigned char IsLeanOut);// sub_1D2E590()

	// Function ShadowTrackerExtra.VehicleUserComponent.ReqExitVehicle
	// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	void ReqExitVehicle(const struct FVector& ClientVehicleVelocity);// sub_1D2E4C0()

	// Function ShadowTrackerExtra.VehicleUserComponent.ReqEraseLastDriveVehicle
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ReqEraseLastDriveVehicle();// sub_1D2E470()

	// Function ShadowTrackerExtra.VehicleUserComponent.ReqEnterVehicle
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void ReqEnterVehicle(class ASTExtraVehicleBase* InVehicleESTExtraVehicleSeatType SeatType);// sub_1D2E370()

	// Function ShadowTrackerExtra.VehicleUserComponent.ReqChangeVehicleSeatForPC
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void ReqChangeVehicleSeatForPC(int SeatIndex);// sub_1D2E2B0()

	// Function ShadowTrackerExtra.VehicleUserComponent.ReqChangeVehicleSeat
	// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	void ReqChangeVehicleSeat();// sub_1D2E260()

	// Function ShadowTrackerExtra.VehicleUserComponent.ProcessReconnectionData
	// (Final, Native, Protected)
	void ProcessReconnectionData();// sub_1D2E240()

	// Function ShadowTrackerExtra.VehicleUserComponent.OnUpdateVehicleSpeedGUI
	// (Event, Protected, BlueprintEvent)
	void OnUpdateVehicleSpeedGUI(float RawSpeed);// sub_1B0A820()

	// Function ShadowTrackerExtra.VehicleUserComponent.OnServerAboutToReconnect
	// (Final, Native, Protected)
	void OnServerAboutToReconnect();// sub_1D2DFA0()

	// Function ShadowTrackerExtra.VehicleUserComponent.OnRep_VehicleUserReconnRepData
	// (Final, Native, Protected)
	void OnRep_VehicleUserReconnRepData();// sub_1D2DF60()

	// Function ShadowTrackerExtra.VehicleUserComponent.OnExitVehicleCompleted
	// (Event, Protected, BlueprintEvent)
	void OnExitVehicleCompleted();// sub_1B0A820()

	// Function ShadowTrackerExtra.VehicleUserComponent.OnEnterVehicleCompleted
	// (Event, Protected, BlueprintEvent)
	void OnEnterVehicleCompleted(ESTExtraVehicleSeatType SeatType);// sub_1B0A820()

	// Function ShadowTrackerExtra.VehicleUserComponent.OnCurrrentClosestVehicleChanged
	// (Event, Protected, BlueprintEvent)
	void OnCurrrentClosestVehicleChanged();// sub_1B0A820()

	// Function ShadowTrackerExtra.VehicleUserComponent.OnChangeVehicleSeatCompleted
	// (Event, Protected, BlueprintEvent)
	void OnChangeVehicleSeatCompleted(ESTExtraVehicleSeatType SeatType);// sub_1B0A820()

	// Function ShadowTrackerExtra.VehicleUserComponent.NotifyLeaveVehicleFailed
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void NotifyLeaveVehicleFailed();// sub_E03E90()

	// Function ShadowTrackerExtra.VehicleUserComponent.MoveVehicleRight
	// (Final, Native, Public, BlueprintCallable)
	void MoveVehicleRight(float Rate);// sub_1D2DA20()

	// Function ShadowTrackerExtra.VehicleUserComponent.MoveVehicleForward
	// (Final, Native, Public, BlueprintCallable)
	void MoveVehicleForward(float Rate);// sub_1D2D9A0()

	// Function ShadowTrackerExtra.VehicleUserComponent.IsClosestVehicleSeatAvailable
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsClosestVehicleSeatAvailable(ESTExtraVehicleSeatType SeatType);// sub_1D2D910()

	// Function ShadowTrackerExtra.VehicleUserComponent.GetVehicleUserState
	// (Final, Native, Public, Const)
	ESTExtraVehicleUserState GetVehicleUserState();// sub_1D2D6A0()

	// Function ShadowTrackerExtra.VehicleUserComponent.CanVehicleShoot
	// (Final, Native, Public, BlueprintCallable)
	unsigned char CanVehicleShoot(class ASTExtraPlayerCharacter* PlayerCharacter);// sub_1D2CF90()

	// Function ShadowTrackerExtra.VehicleUserComponent.CanUseVehicleHorn
	// (Final, Native, Public, BlueprintCallable)
	unsigned char CanUseVehicleHorn();// sub_1D2CF60()

	// Function ShadowTrackerExtra.VehicleUserComponent.AddVehicleFuel
	// (Final, Native, Public, BlueprintCallable)
	void AddVehicleFuel(float Amount);// sub_1D2CA60()


}

