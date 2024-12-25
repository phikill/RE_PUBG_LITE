
// Class ShadowTrackerExtra.STCharacterNearDeathComp
// //Class ShadowTrackerExtra.STCharacterNearDeathComp
//0x00B0 (0x01B8 - 0x0108)
class USTCharacterNearDeathComp : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	float                                              BreathMax;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AssistAccountableDuration;                                // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnterNearDeathDamageInvincibleTime;                       // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsTurnOnDebugSameTeamAccountable : 1;                     // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	class UCurveFloat*                                 CurveLayeredDeathInterval;                                // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxDeathTimes;                                            // 0x0128(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsDebugging : 1;                                          // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x012D(0x000B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRescueStatusChange;                                     // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ASTExtraBaseCharacter*                       PawnOwner;                                                // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              EnterNearDeathSeconds;                                    // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Breath;                                                   // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                NearDeathRestoredOrignalHealth;                           // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	TArray<struct FNearDeathRestoredOrignalHealthStruct> RestoredHealthArray;                                      // 0x0160(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                NearDeathRestoredOrignalBreathAmount;                     // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bCanRevive : 1;                                           // 0x0174(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                                       // 0x0175(0x000B) MISSED OFFSET
	class AController*                                 EventInstigatorRecorded;                                  // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauserRecorded;                                     // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x28];                                      // 0x0190(0x0028) MISSED OFFSET

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.SetHealthSafety
	// (Final, Native, Public)
	float SetHealthSafety(float AddVal);// sub_1C45A50()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.S2C_HelpOther
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void S2C_HelpOther(class ACharacter* HelpWhounsigned char IsTurnInfofloat RemainingRescueTime);// sub_1C45260()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.S2C_BeHelpedByOther
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void S2C_BeHelpedByOther(class ACharacter* ByWhounsigned char IsTurnInfofloat RemainingRescueTime);// sub_1C45150()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.RescueFinishSuccessfully
	// (Final, Native, Public)
	void RescueFinishSuccessfully();// sub_1C450C0()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.OnRep_BreathChanged
	// (Final, Native, Public)
	void OnRep_BreathChanged();// sub_6DCE80()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.IsNearDeathInvincible
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsNearDeathInvincible();// sub_1C44560()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.IsHealthAlive
	// (Final, Native, Public, Const)
	unsigned char IsHealthAlive();// sub_1C44500()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.IsHaveLastBreathStatus
	// (Final, Native, Public, Const)
	unsigned char IsHaveLastBreathStatus();// sub_1C444D0()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.IsFinishedLastBreathStatus
	// (Final, Native, Public, Const)
	unsigned char IsFinishedLastBreathStatus();// sub_1C444A0()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.InitializeOwner
	// (Final, Native, Public)
	void InitializeOwner(class APawn* TempPawn);// sub_1C44360()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.GotoLastBreathStatus
	// (Final, Native, Public)
	unsigned char GotoLastBreathStatus(class AController* EventInstigatorclass AActor* DamageCauserconst struct FDamageEvent& DamageEventfloat _finalDamageunsigned char IsDamageFromVehicleExplode);// sub_1C43DC0()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.GetBreathMax
	// (Final, Native, Public, Const)
	float GetBreathMax();// sub_1C43BF0()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.GetBreath
	// (Final, Native, Public, Const)
	float GetBreath();// sub_1C43BD0()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.EnterSwimWhileDying
	// (Final, Native, Public, BlueprintCallable)
	void EnterSwimWhileDying();// sub_1C43700()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.DoFinishLastBreath
	// (Final, Native, Public)
	void DoFinishLastBreath();// sub_6DCE80()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.DecreaseGroggyHealth
	// (Final, Native, Private)
	void DecreaseGroggyHealth();// sub_1C43620()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.ClearNearDeathTeammate
	// (Final, Native, Public)
	void ClearNearDeathTeammate();// sub_1C43580()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.CanRevive
	// (Final, Native, Public, Const)
	unsigned char CanRevive();// sub_1C43560()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.AddHealthSafety
	// (Final, Native, Public)
	float AddHealthSafety(float AddValunsigned char ForceIgnoreInvinceTime);// sub_1C43490()

	// Function ShadowTrackerExtra.STCharacterNearDeathComp.AddDeadBuff
	// (Final, Native, Public)
	void AddDeadBuff();// sub_1C43470()


}
