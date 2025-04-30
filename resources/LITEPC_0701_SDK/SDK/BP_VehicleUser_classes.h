#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleUser.BP_VehicleUser_C
// 0x0025 (0x01ED - 0x01C8)
class UBP_VehicleUser_C : public UVehicleUserComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	bool                                               AxisMoveForwardFreezed;                                   // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AxisMoveRightFreezed;                                     // 0x01D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01D2(0x0002) MISSED OFFSET
	float                                              Fuel;                                                     // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelMax;                                                  // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HP;                                                       // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HPMax;                                                    // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutMoveRightRate;                                         // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RawSpeed;                                                 // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleUser.BP_VehicleUser_C");
		return ptr;
	}


	void SetDrivingViewMode(int int_mode);
	void ResetInputs();
	void OnMotorcycleContactChanged();
	void FixGoStraight(float InMoveRightRate, float GoStraightThreshold, float* OutMoveRightRate);
	void OnUpdateSeatGUI();
	void OnVehicleWheelsHPChanged();
	void StopPlayerAutoSprint();
	void OnVehicleFuelChanged(float Fuel, float FuelMax);
	void OnVehicleHPChanged(float HP, float HPMax);
	void GetPlayerController(class ABP_STExtraPlayerController_C** PlayerController);
	void OnInputAxisMoveRight(float Rate);
	void OnInputAxisMoveForward(float Rate);
	void ExitVehicle();
	void EnterVehicle(bool IsDriver);
	void OnEnterVehicleCompleted(ESTExtraVehicleSeatType* SeatType);
	void OnExitVehicleCompleted();
	void ReceiveBeginPlay();
	void OnChangeVehicleSeatCompleted(ESTExtraVehicleSeatType* SeatType);
	void OnUpdateVehicleSpeedGUI(float* RawSpeed);
	void OnCurrrentClosestVehicleChanged();
	void CustomEvent_1(int IntValue);
	void ExecuteUbergraph_BP_VehicleUser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
