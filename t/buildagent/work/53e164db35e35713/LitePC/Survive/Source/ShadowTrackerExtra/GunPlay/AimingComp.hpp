

// Class ShadowTrackerExtra.AimingComp
// //Class ShadowTrackerExtra.AimingComp
//0x00A0 (0x01A8 - 0x0108)
class UAimingComp : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0108(0x0040) MISSED OFFSET
	TMap<int, class UScopeAnimInstance*>               ScopeAnimInstancesMap;                                    // 0x0148(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnAimingStateChange;                                      // 0x0198(0x0010) (ZeroConstructor, InstancedReference)

	// Function ShadowTrackerExtra.AimingComp.ToggleShoulderFiring
	// (Final, Native, Public, BlueprintCallable)
	void ToggleShoulderFiring(unsigned char Toggle);// sub_1B38B50()

	// Function ShadowTrackerExtra.AimingComp.ToggleAimingDownSight
	// (Final, Native, Public, BlueprintCallable)
	void ToggleAimingDownSight(unsigned char Toggle);// sub_1B38AC0()

	// Function ShadowTrackerExtra.AimingComp.SetAiming
	// (Final, Native, Public, BlueprintCallable)
	void SetAiming(EAimingType AimingType);// sub_1B38750()

	// Function ShadowTrackerExtra.AimingComp.ScopeModeChangeByState
	// (Final, Native, Public, BlueprintCallable)
	void ScopeModeChangeByState();// sub_1B385D0()

	// Function ShadowTrackerExtra.AimingComp.OnTargetingReleasedWithAltInput
	// (Final, Native, Public, BlueprintCallable)
	void OnTargetingReleasedWithAltInput();// sub_1B385B0()

	// Function ShadowTrackerExtra.AimingComp.OnTargetingReleased
	// (Final, Native, Public, BlueprintCallable)
	void OnTargetingReleased();// sub_1B38590()

	// Function ShadowTrackerExtra.AimingComp.OnTargetingPressed
	// (Final, Native, Public, BlueprintCallable)
	void OnTargetingPressed();// sub_1B38570()

	// Function ShadowTrackerExtra.AimingComp.OnScopeInterrupt
	// (Final, Native, Public, BlueprintCallable)
	void OnScopeInterrupt();// sub_1B38550()

	// Function ShadowTrackerExtra.AimingComp.GetIsScopeTransitionInProgress
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetIsScopeTransitionInProgress();// sub_1B381E0()

	// Function ShadowTrackerExtra.AimingComp.GetCurrentBoltActionProgress
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	EBoltActionWeaponProgressType GetCurrentBoltActionProgress();// sub_1B381B0()

	// Function ShadowTrackerExtra.AimingComp.GetAimingType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	EAimingType GetAimingType();// sub_1B38180()


}

