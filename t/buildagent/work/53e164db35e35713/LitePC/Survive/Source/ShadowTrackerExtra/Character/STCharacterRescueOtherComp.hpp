

// Class ShadowTrackerExtra.STCharacterRescueOtherComp
// //Class ShadowTrackerExtra.STCharacterRescueOtherComp
//0x00A8 (0x01B0 - 0x0108)
class USTCharacterRescueOtherComp : public UActorComponent
{
public:
	int                                                WanderingRadius;                                          // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FanPickerData                               FanData;                                                  // 0x010C(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x011C(0x001C) MISSED OFFSET
	class ASTExtraBaseCharacter*                       RescueWho;                                                // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRescueTargetChange;                                     // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              RescueingStatusStartTimeSeconds;                          // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0154(0x001C) MISSED OFFSET
	TArray<struct FRestoringDurationWithGameModeStruct> RestoringDurationArray;                                   // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              RestoringDuration;                                        // 0x0180(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class ASTExtraBaseCharacter>        PawnOwner;                                                // 0x0184(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	class USTCharacterNearDeathComp*                   ParentNDComp;                                             // 0x0190(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0198(0x0018) MISSED OFFSET

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.WaitingConfirmState_IsConditionSatisfied
	// (Final, Native, Public)
	unsigned char WaitingConfirmState_IsConditionSatisfied();// sub_1C46FB0()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.WaitingConfirmState_ActOnUnsatisfied
	// (Final, Native, Public)
	void WaitingConfirmState_ActOnUnsatisfied();// sub_1C46F60()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.WaitingConfirmState_ActOnSatisfied
	// (Final, Native, Public)
	void WaitingConfirmState_ActOnSatisfied(float DeltaTime);// sub_6DB780()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.TickAsHelper
	// (Final, Native, Public)
	void TickAsHelper(float DeltaTime);// sub_1C46470()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.ServerPlayerConfirm
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerPlayerConfirm(class ASTExtraBaseCharacter* _RescueWho);// sub_1C45470()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.SelectedPickedTargetChangeNotifyHUD
	// (Final, Native, Public)
	void SelectedPickedTargetChangeNotifyHUD(class APawn* previousTarget);// sub_1C453F0()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.RescueingState_IsConditionSatisfied
	// (Final, Native, Public)
	unsigned char RescueingState_IsConditionSatisfied();// sub_1C45120()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.RescueingState_ActOnUnsatisfied
	// (Final, Native, Public)
	void RescueingState_ActOnUnsatisfied();// sub_1C45100()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.RescueingState_ActOnSatisfied
	// (Final, Native, Public)
	void RescueingState_ActOnSatisfied(float DeltaTime);// sub_6DB780()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.RescueingProcessFinished
	// (Final, Native, Private)
	void RescueingProcessFinished();// sub_1C450E0()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.PlayerConfirmToRescueClientSide
	// (Final, Native, Public)
	unsigned char PlayerConfirmToRescueClientSide();// sub_1C44C60()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.PickTargetsAsHelper
	// (Final, Native, Private, HasOutParms)
	unsigned char PickTargetsAsHelper(TArray<class ASTExtraBaseCharacter*>* pickedTargets);// sub_1C44A00()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.OnRep_IsRescueingOtherStatusChange
	// (Final, Native, Public)
	void OnRep_IsRescueingOtherStatusChange();// sub_1C44910()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.IsInRescueingStatus
	// (Final, Native, Public, Const)
	unsigned char IsInRescueingStatus();// sub_1C44530()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.InitializeOwner
	// (Final, Native, Public)
	void InitializeOwner(class APawn* _TempPawnclass USTCharacterNearDeathComp* _Outer);// sub_1C443E0()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.GetRestoringDuration
	// (Final, Native, Public, BlueprintCallable)
	float GetRestoringDuration();// sub_1C43CD0()

	// Function ShadowTrackerExtra.STCharacterRescueOtherComp.DrawDebugFan
	// (Final, Native, Private)
	void DrawDebugFan();// sub_3170E0()


}

