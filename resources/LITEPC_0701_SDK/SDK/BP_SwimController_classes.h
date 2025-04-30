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

// BlueprintGeneratedClass BP_SwimController.BP_SwimController_C
// 0x00A4 (0x01AC - 0x0108)
class UBP_SwimController_C : public UPlayerSwimComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (Transient, DuplicateTransient)
	class ABP_PlayerPawn_C*                            PlayerPawn;                                               // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              NowSwimRoll;                                              // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowSwimUpInput;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardValue;                                             // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateSeppd;                                              // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMoving;                                                 // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	float                                              SwimCameraHeight;                                         // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class AWaterSwimObject_C*                          WaterObject;                                              // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterHeight;                                              // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              playerHeight;                                             // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              playerWaterOffset;                                        // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchHeight;                                             // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StandHeight;                                              // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimHeight;                                               // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowBreathtime;                                            // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BreathVauleChangeTime;                                    // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpBreathVauleChangeoffset;                                // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BreathVauleChangeoffset;                                  // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BreathNowRate;                                            // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               playunderVoice;                                           // 0x016C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	float                                              nowoffset;                                                // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInWater;                                                // 0x0174(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	float                                              movespeedScale;                                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESurviveWeaponPropSlot                             WeaponSlot;                                               // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	float                                              StateCheckTime;                                           // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rotateX;                                                  // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AITickInterval;                                           // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	TArray<class AWaterSwimObject_C*>                  waterList;                                                // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              CameraUpDateTime;                                         // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLanded;                                                 // 0x01A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	float                                              WeaponEquipTime;                                          // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SwimController.BP_SwimController_C");
		return ptr;
	}


	void CalcPlayerWaterOffset();
	void CanCrouch(bool* Ret);
	class AActor* GetWaterObject();
	void UpdateCheckWaterObject();
	void UpdateStateCheckDs();
	void GetAllWaterList();
	void SetWaterUpHeight();
	void UpdateCameraState();
	void SetSwimStatePostion();
	void RecConnected();
	void EnterNearDeadDear(bool bparam);
	void IsInbeingDead(bool* Result);
	void UpdateMove();
	void IsMainPlayer(bool* Result);
	void SetLeaveSwim();
	void SetEnterSwim();
	void UpdateHitBox();
	void UpdateBreath();
	void SwimSprint();
	void UpdatePlayerState();
	void UpdateSwimCollisionHeight();
	void LeaveSwimState(class ABP_PlayerPawn_C* PlayerPawn);
	void EnterSwimState(class ABP_PlayerPawn_C* PlayerPawn);
	void ReceiveBeginPlay();
	void AddOutOfBreathBuffOnce();
	void SetWater(class AWaterSwimObject_C* Water);
	void SetWalking();
	void UpdatePlayerState_BluePrint();
	void UpdateBreath_BluePrint();
	void SetDeltTime_BluePrint(float* DeltaTime);
	void UpdateSwimMove_BluePrint();
	void UpdateCameraState_BluePrint();
	void OnPlayerEneterFlying();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_SwimController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
