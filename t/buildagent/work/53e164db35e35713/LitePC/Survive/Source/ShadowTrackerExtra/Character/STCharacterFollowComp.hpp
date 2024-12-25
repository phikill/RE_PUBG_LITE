

// Class ShadowTrackerExtra.STCharacterFollowComp
// //Class ShadowTrackerExtra.STCharacterFollowComp
//0x0098 (0x01A0 - 0x0108)
class USTCharacterFollowComp : public UActorComponent
{
public:
	class UTargetJumpOperation*                        CurRecordingVaultOperation;                               // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTargetJumpOperation*                        CurPlayingVaultOperation;                                 // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	class ASTExtraBaseCharacter*                       Target;                                                   // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CanFollowDist;                                            // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QuitFollowAngleInput;                                     // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QuitFollowDist;                                           // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PointDensityTimeInterval;                                 // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistThrehold;                                             // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ASTExtraBaseCharacter>        PawnOwner;                                                // 0x013C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class USTCharacterNearDeathComp*                   ParentNDComp;                                             // 0x0148(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0150(0x0038) MISSED OFFSET
	TArray<class UTargetKeyOperation*>                 TargetOps;                                                // 0x0188(0x0010) (ZeroConstructor)
	class UTargetKeyOperation*                         CurOp;                                                    // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData)

	// Function ShadowTrackerExtra.STCharacterFollowComp.WaitingConfirmState_IsConditionSatisfied
	// (Final, Native, Public)
	unsigned char WaitingConfirmState_IsConditionSatisfied();// sub_1C46F80()

	// Function ShadowTrackerExtra.STCharacterFollowComp.WaitingConfirmState_ActOnUnsatisfied
	// (Final, Native, Public)
	void WaitingConfirmState_ActOnUnsatisfied();// sub_1C46F40()

	// Function ShadowTrackerExtra.STCharacterFollowComp.WaitingConfirmState_ActOnSatisfied
	// (Final, Native, Public)
	void WaitingConfirmState_ActOnSatisfied(float DeltaTime);// sub_6DB780()

	// Function ShadowTrackerExtra.STCharacterFollowComp.TargetStartVault
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	class UTargetJumpOperation* TargetStartVault(const struct FVector& vaultStartPos);// sub_1C463D0()

	// Function ShadowTrackerExtra.STCharacterFollowComp.SetInterruptAutoFollowByInput
	// (Final, Native, Public, BlueprintCallable)
	void SetInterruptAutoFollowByInput(int InterrupteReason);// sub_1C45AE0()

	// Function ShadowTrackerExtra.STCharacterFollowComp.SelectedPickedTargetChangeNotifyHUD
	// (Final, Native, Public)
	void SelectedPickedTargetChangeNotifyHUD(class APawn* previousTarget);// sub_1C45370()

	// Function ShadowTrackerExtra.STCharacterFollowComp.PlayerStopFollow
	// (Final, Native, Public, BlueprintCallable)
	unsigned char PlayerStopFollow();// sub_1C44C90()

	// Function ShadowTrackerExtra.STCharacterFollowComp.PlayerConfirmToFollow
	// (Final, Native, Public, BlueprintCallable)
	unsigned char PlayerConfirmToFollow();// sub_1C44C30()

	// Function ShadowTrackerExtra.STCharacterFollowComp.InitializeOwner
	// (Final, Native, Public)
	void InitializeOwner(class APawn* _TempPawn);// sub_1C442E0()

	// Function ShadowTrackerExtra.STCharacterFollowComp.FollowingTargetChangeNotifyHUD
	// (Final, Native, Public)
	void FollowingTargetChangeNotifyHUD(class APawn* previousTarget);// sub_1C43B50()

	// Function ShadowTrackerExtra.STCharacterFollowComp.FollowingState_IsConditionSatisfied
	// (Final, Native, Public)
	unsigned char FollowingState_IsConditionSatisfied();// sub_1C43B20()

	// Function ShadowTrackerExtra.STCharacterFollowComp.FollowingState_ActOnUnsatisfied
	// (Final, Native, Public)
	void FollowingState_ActOnUnsatisfied();// sub_1C43B00()

	// Function ShadowTrackerExtra.STCharacterFollowComp.FollowingState_ActOnSatisfied
	// (Final, Native, Public)
	void FollowingState_ActOnSatisfied(float DeltaTime);// sub_1C43A80()


}

