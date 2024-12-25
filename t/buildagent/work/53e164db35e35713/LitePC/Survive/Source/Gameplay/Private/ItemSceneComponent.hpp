

// Class Gameplay.ItemSceneComponent
// //Class Gameplay.ItemSceneComponent
//0x0000 (0x02D0 - 0x02D0)
class UItemSceneComponent : public USceneComponent
{
public:

	// Function Engine.SceneComponent.ToggleVisibility
	// (Final, Native, Public, BlueprintCallable)
	void ToggleVisibility(unsigned char bPropagateToChildren);// sub_66C6B0()

	// Function Engine.SceneComponent.SnapTo
	// (Final, Native, Public, BlueprintCallable)
	unsigned char SnapTo(class USceneComponent* InParentconst struct FName& InSocketName);// sub_66C5F0()

	// Function Engine.SceneComponent.SetWorldScale3D
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetWorldScale3D(const struct FVector& NewScale);// sub_66C460()

	// Function Engine.SceneComponent.SetVisibility
	// (Final, Native, Public, BlueprintCallable)
	void SetVisibility(unsigned char bNewVisibilityunsigned char bPropagateToChildren);// sub_66C390()

	// Function Engine.SceneComponent.SetRelativeScale3D
	// (Native, Public, HasDefaults, BlueprintCallable)
	void SetRelativeScale3D(const struct FVector& NewScale3D);// sub_66C300()

	// Function Engine.SceneComponent.SetHiddenInGame
	// (Final, Native, Public, BlueprintCallable)
	void SetHiddenInGame(unsigned char NewHiddenunsigned char bPropagateToChildren);// sub_66C230()

	// Function Engine.SceneComponent.SetAbsolute
	// (Final, Native, Public, BlueprintCallable)
	void SetAbsolute(unsigned char bNewAbsoluteLocationunsigned char bNewAbsoluteRotationunsigned char bNewAbsoluteScale);// sub_66C090()

	// Function Engine.SceneComponent.ResetRelativeTransform
	// (Final, Native, Public, BlueprintCallable)
	void ResetRelativeTransform();// sub_66C070()

	// Function Engine.SceneComponent.OnRep_Visibility
	// (Final, Native, Private)
	void OnRep_Visibility(unsigned char OldValue);// sub_66BEE0()

	// Function Engine.SceneComponent.OnRep_Transform
	// (Final, Native, Private)
	void OnRep_Transform();// sub_66BEC0()

	// Function Engine.SceneComponent.OnRep_AttachSocketName
	// (Final, Native, Private)
	void OnRep_AttachSocketName();// sub_66BEA0()

	// Function Engine.SceneComponent.OnRep_AttachParent
	// (Final, Native, Private)
	void OnRep_AttachParent();// sub_66BEA0()

	// Function Engine.SceneComponent.OnRep_AttachChildren
	// (Final, Native, Private)
	void OnRep_AttachChildren();// sub_66BE80()

	// Function Engine.SceneComponent.K2_SetWorldTransform
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetWorldTransform(const struct FTransform& NewTransformunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66BC60()

	// Function Engine.SceneComponent.K2_SetWorldRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetWorldRotation(const struct FRotator& NewRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66BAB0()

	// Function Engine.SceneComponent.K2_SetWorldLocationAndRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetWorldLocationAndRotation(const struct FVector& NewLocationconst struct FRotator& NewRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66B8D0()

	// Function Engine.SceneComponent.K2_SetWorldLocation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetWorldLocation(const struct FVector& NewLocationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66B720()

	// Function Engine.SceneComponent.K2_SetRelativeTransform
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetRelativeTransform(const struct FTransform& NewTransformunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66B530()

	// Function Engine.SceneComponent.K2_SetRelativeRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetRelativeRotation(const struct FRotator& NewRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66B380()

	// Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetRelativeLocationAndRotation(const struct FVector& NewLocationconst struct FRotator& NewRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66B1A0()

	// Function Engine.SceneComponent.K2_SetRelativeLocation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetRelativeLocation(const struct FVector& NewLocationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66AFF0()

	// Function Engine.SceneComponent.K2_GetComponentToWorld
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FTransform K2_GetComponentToWorld();// sub_66AF90()

	// Function Engine.SceneComponent.K2_GetComponentScale
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector K2_GetComponentScale();// sub_66AF50()

	// Function Engine.SceneComponent.K2_GetComponentRotation
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FRotator K2_GetComponentRotation();// sub_66AF10()

	// Function Engine.SceneComponent.K2_GetComponentLocation
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector K2_GetComponentLocation();// sub_66AED0()

	// Function Engine.SceneComponent.K2_DetachFromComponent
	// (Final, Native, Public, BlueprintCallable)
	void K2_DetachFromComponent(EDetachmentRule LocationRuleEDetachmentRule RotationRuleEDetachmentRule ScaleRuleunsigned char bCallModify);// sub_66AD80()

	// Function Engine.SceneComponent.K2_AttachToComponent
	// (Final, Native, Public, BlueprintCallable)
	unsigned char K2_AttachToComponent(class USceneComponent* Parentconst struct FName& SocketNameEAttachmentRule LocationRuleEAttachmentRule RotationRuleEAttachmentRule ScaleRuleunsigned char bWeldSimulatedBodies);// sub_66ABD0()

	// Function Engine.SceneComponent.K2_AttachTo
	// (Final, Native, Public, BlueprintCallable)
	unsigned char K2_AttachTo(class USceneComponent* InParentconst struct FName& InSocketNameTEnumAsByte<EAttachLocation> AttachTypeunsigned char bWeldSimulatedBodies);// sub_66AA80()

	// Function Engine.SceneComponent.K2_AddWorldTransform
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddWorldTransform(const struct FTransform& DeltaTransformunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66A890()

	// Function Engine.SceneComponent.K2_AddWorldRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddWorldRotation(const struct FRotator& DeltaRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66A6E0()

	// Function Engine.SceneComponent.K2_AddWorldOffset
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddWorldOffset(const struct FVector& DeltaLocationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66A530()

	// Function Engine.SceneComponent.K2_AddRelativeRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddRelativeRotation(const struct FRotator& DeltaRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66A380()

	// Function Engine.SceneComponent.K2_AddRelativeLocation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddRelativeLocation(const struct FVector& DeltaLocationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_66A1D0()

	// Function Engine.SceneComponent.K2_AddLocalTransform
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddLocalTransform(const struct FTransform& DeltaTransformunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_669FE0()

	// Function Engine.SceneComponent.K2_AddLocalRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddLocalRotation(const struct FRotator& DeltaRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_669E30()

	// Function Engine.SceneComponent.K2_AddLocalOffset
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddLocalOffset(const struct FVector& DeltaLocationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_669C80()

	// Function Engine.SceneComponent.IsVisible
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsVisible();// sub_669C50()

	// Function Engine.SceneComponent.IsSimulatingPhysics
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsSimulatingPhysics(const struct FName& BoneName);// sub_669BB0()

	// Function Engine.SceneComponent.IsAnySimulatingPhysics
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsAnySimulatingPhysics();// sub_669AC0()

	// Function Engine.SceneComponent.GetUpVector
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetUpVector();// sub_669980()

	// Function Engine.SceneComponent.GetSocketTransform
	// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FTransform GetSocketTransform(const struct FName& InSocketNameTEnumAsByte<ERelativeTransformSpace> TransformSpace);// sub_669880()

	// Function Engine.SceneComponent.GetSocketRotation
	// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FRotator GetSocketRotation(const struct FName& InSocketName);// sub_6697D0()

	// Function Engine.SceneComponent.GetSocketQuaternion
	// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FQuat GetSocketQuaternion(const struct FName& InSocketName);// sub_669730()

	// Function Engine.SceneComponent.GetSocketLocation
	// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetSocketLocation(const struct FName& InSocketName);// sub_669680()

	// Function Engine.SceneComponent.GetRightVector
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetRightVector();// sub_6695B0()

	// Function Engine.SceneComponent.GetRelativeTransform
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FTransform GetRelativeTransform();// sub_669550()

	// Function Engine.SceneComponent.GetPhysicsVolume
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class APhysicsVolume* GetPhysicsVolume();// sub_669520()

	// Function Engine.SceneComponent.GetParentComponents
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetParentComponents(TArray<class USceneComponent*>* Parents);// sub_669470()

	// Function Engine.SceneComponent.GetNumChildrenComponents
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetNumChildrenComponents();// sub_669440()

	// Function Engine.SceneComponent.GetForwardVector
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetForwardVector();// sub_394910()

	// Function Engine.SceneComponent.GetComponentVelocity
	// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetComponentVelocity();// sub_669320()

	// Function Engine.SceneComponent.GetChildrenComponents
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetChildrenComponents(unsigned char bIncludeAllDescendantsTArray<class USceneComponent*>* Children);// sub_669220()

	// Function Engine.SceneComponent.GetChildComponent
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class USceneComponent* GetChildComponent(int ChildIndex);// sub_669190()

	// Function Engine.SceneComponent.GetAttachSocketName
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FName GetAttachSocketName();// sub_669120()

	// Function Engine.SceneComponent.GetAttachParent
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class USceneComponent* GetAttachParent();// sub_669100()

	// Function Engine.SceneComponent.GetAllSocketNames
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TArray<struct FName> GetAllSocketNames();// sub_669080()

	// Function Engine.SceneComponent.DoesSocketExist
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char DoesSocketExist(const struct FName& InSocketName);// sub_668E80()

	// Function Engine.SceneComponent.DetachFromParent
	// (Native, Public, BlueprintCallable)
	void DetachFromParent(unsigned char bMaintainWorldPositionunsigned char bCallModify);// sub_668DB0()


}

