

// Class Client.TestHUD
// //Class Client.TestHUD
//0x0000 (0x03C0 - 0x03C0)
class ATestHUD : public AActor
{
public:

	// Function Engine.Actor.WasRecentlyRendered
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char WasRecentlyRendered(float Tolerance);// sub_E9A070()

	// Function Engine.Actor.UserConstructionScript
	// (Event, Public, BlueprintEvent)
	void UserConstructionScript();// sub_1B0A820()

	// Function Engine.Actor.TearOff
	// (Native, Public, BlueprintCallable)
	void TearOff();// sub_E9A050()

	// Function Engine.Actor.SnapRootComponentTo
	// (Final, Native, Public, BlueprintCallable)
	void SnapRootComponentTo(class AActor* InParentActorconst struct FName& InSocketName);// sub_E99F90()

	// Function Engine.Actor.SetTickGroup
	// (Final, Native, Public, BlueprintCallable)
	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);// sub_E99E80()

	// Function Engine.Actor.SetTickableWhenPaused
	// (Final, Native, Public, BlueprintCallable)
	void SetTickableWhenPaused(unsigned char bTickableWhenPaused);// sub_E99F00()

	// Function Engine.Actor.SetReplicates
	// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	void SetReplicates(unsigned char bInReplicates);// sub_E99DF0()

	// Function Engine.Actor.SetReplicateMovement
	// (Native, Public, BlueprintCallable)
	void SetReplicateMovement(unsigned char bInReplicateMovement);// sub_8C4B60()

	// Function Engine.Actor.SetOwner
	// (Native, Public, BlueprintCallable)
	void SetOwner(class AActor* NewOwner);// sub_E99D60()

	// Function Engine.Actor.SetNetDormancy
	// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	void SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy);// sub_E99CE0()

	// Function Engine.Actor.SetLifeSpan
	// (Native, Public, BlueprintCallable)
	void SetLifeSpan(float InLifespan);// sub_E99C60()

	// Function Engine.Actor.SetActorTickInterval
	// (Final, Native, Public, BlueprintCallable)
	void SetActorTickInterval(float TickInterval);// sub_E99BE0()

	// Function Engine.Actor.SetActorTickEnabled
	// (Final, Native, Public, BlueprintCallable)
	void SetActorTickEnabled(unsigned char bEnabled);// sub_E99B50()

	// Function Engine.Actor.SetActorScale3D
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetActorScale3D(const struct FVector& NewScale3D);// sub_E99AC0()

	// Function Engine.Actor.SetActorRelativeScale3D
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void SetActorRelativeScale3D(const struct FVector& NewRelativeScale);// sub_E99A30()

	// Function Engine.Actor.SetActorHiddenInGame
	// (Native, Public, BlueprintCallable)
	void SetActorHiddenInGame(unsigned char bNewHidden);// sub_E999A0()

	// Function Engine.Actor.SetActorEnableCollision
	// (Final, Native, Public, BlueprintCallable)
	void SetActorEnableCollision(unsigned char bNewActorEnableCollision);// sub_E99910()

	// Function Engine.Actor.RemoveTickPrerequisiteComponent
	// (Native, Public, BlueprintCallable)
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);// sub_E99880()

	// Function Engine.Actor.RemoveTickPrerequisiteActor
	// (Native, Public, BlueprintCallable)
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);// sub_E997F0()

	// Function Engine.Actor.ReceiveTick
	// (Event, Public, BlueprintEvent)
	void ReceiveTick(float DeltaSeconds);// sub_1B0A820()

	// Function Engine.Actor.ReceiveRadialDamage
	// (BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	void ReceiveRadialDamage(float DamageReceivedclass UDamageType* DamageTypeconst struct FVector& Originconst struct FHitResult& HitInfoclass AController* InstigatedByclass AActor* DamageCauser);// sub_1B0A820()

	// Function Engine.Actor.ReceivePointDamage
	// (BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	void ReceivePointDamage(float Damageclass UDamageType* DamageTypeconst struct FVector& HitLocationconst struct FVector& HitNormalclass UPrimitiveComponent* HitComponentconst struct FName& BoneNameconst struct FVector& ShotFromDirectionclass AController* InstigatedByclass AActor* DamageCauserconst struct FHitResult& HitInfo);// sub_1B0A820()

	// Function Engine.Actor.ReceiveHit
	// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	void ReceiveHit(class UPrimitiveComponent* MyCompclass AActor* Otherclass UPrimitiveComponent* OtherCompunsigned char bSelfMovedconst struct FVector& HitLocationconst struct FVector& HitNormalconst struct FVector& NormalImpulseconst struct FHitResult& Hit);// sub_1B0A820()

	// Function Engine.Actor.ReceiveEndPlay
	// (Event, Public, BlueprintEvent)
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);// sub_1B0A820()

	// Function Engine.Actor.ReceiveDestroyed
	// (Event, Public, BlueprintEvent)
	void ReceiveDestroyed();// sub_1B0A820()

	// Function Engine.Actor.ReceiveBeginPlay
	// (Event, Protected, BlueprintEvent)
	void ReceiveBeginPlay();// sub_1B0A820()

	// Function Engine.Actor.ReceiveAnyDamage
	// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
	void ReceiveAnyDamage(float Damageclass UDamageType* DamageTypeclass AController* InstigatedByclass AActor* DamageCauser);// sub_1B0A820()

	// Function Engine.Actor.ReceiveActorOnReleased
	// (Event, Public, BlueprintEvent)
	void ReceiveActorOnReleased(const struct FKey& ButtonReleased);// sub_1B0A820()

	// Function Engine.Actor.ReceiveActorOnInputTouchLeave
	// (Event, Public, BlueprintEvent)
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);// sub_1B0A820()

	// Function Engine.Actor.ReceiveActorOnInputTouchEnter
	// (Event, Public, BlueprintEvent)
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);// sub_1B0A820()

	// Function Engine.Actor.ReceiveActorOnInputTouchEnd
	// (Event, Public, BlueprintEvent)
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);// sub_1B0A820()

	// Function Engine.Actor.ReceiveActorOnInputTouchBegin
	// (Event, Public, BlueprintEvent)
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);// sub_1B0A820()

	// Function Engine.Actor.ReceiveActorOnClicked
	// (Event, Public, BlueprintEvent)
	void ReceiveActorOnClicked(const struct FKey& ButtonPressed);// sub_1B0A820()

	// Function Engine.Actor.ReceiveActorEndOverlap
	// (Event, Public, BlueprintEvent)
	void ReceiveActorEndOverlap(class AActor* OtherActor);// sub_1B0A820()

	// Function Engine.Actor.ReceiveActorEndCursorOver
	// (Event, Public, BlueprintEvent)
	void ReceiveActorEndCursorOver();// sub_1B0A820()

	// Function Engine.Actor.ReceiveActorBeginOverlap
	// (Event, Public, BlueprintEvent)
	void ReceiveActorBeginOverlap(class AActor* OtherActor);// sub_1B0A820()

	// Function Engine.Actor.ReceiveActorBeginCursorOver
	// (Event, Public, BlueprintEvent)
	void ReceiveActorBeginCursorOver();// sub_1B0A820()

	// Function Engine.Actor.PrestreamTextures
	// (Native, Public, BlueprintCallable)
	void PrestreamTextures(float Secondsunsigned char bEnableStreamingint CinematicTextureGroups);// sub_E996E0()

	// Function Engine.Actor.OnRep_ReplicateMovement
	// (Native, Public)
	void OnRep_ReplicateMovement();// sub_E996A0()

	// Function Engine.Actor.OnRep_ReplicatedMovement
	// (Native, Public)
	void OnRep_ReplicatedMovement();// sub_E996C0()

	// Function Engine.Actor.OnRep_Owner
	// (Native, Protected)
	void OnRep_Owner();// sub_A57A70()

	// Function Engine.Actor.OnRep_Instigator
	// (Native, Public)
	void OnRep_Instigator();// sub_E99680()

	// Function Engine.Actor.OnRep_AttachmentReplication
	// (Native, Public)
	void OnRep_AttachmentReplication();// sub_C56030()

	// Function Engine.Actor.MakeNoise
	// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
	void MakeNoise(float Loudnessclass APawn* NoiseInstigatorconst struct FVector& NoiseLocationfloat MaxRangeconst struct FName& Tag);// sub_E994F0()

	// Function Engine.Actor.MakeMIDForMaterial
	// (Final, Native, Public, BlueprintCallable)
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);// sub_E99460()

	// Function Engine.Actor.K2_TeleportTo
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	unsigned char K2_TeleportTo(const struct FVector& DestLocationconst struct FRotator& DestRotation);// sub_E99370()

	// Function Engine.Actor.K2_SetActorTransform
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char K2_SetActorTransform(const struct FTransform& NewTransformunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E99180()

	// Function Engine.Actor.K2_SetActorRotation
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	unsigned char K2_SetActorRotation(const struct FRotator& NewRotationunsigned char bTeleportPhysics);// sub_E990A0()

	// Function Engine.Actor.K2_SetActorRelativeTransform
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransformunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E98EB0()

	// Function Engine.Actor.K2_SetActorRelativeRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E98D00()

	// Function Engine.Actor.K2_SetActorRelativeLocation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E98B50()

	// Function Engine.Actor.K2_SetActorLocationAndRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char K2_SetActorLocationAndRotation(const struct FVector& NewLocationconst struct FRotator& NewRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E98960()

	// Function Engine.Actor.K2_SetActorLocation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char K2_SetActorLocation(const struct FVector& NewLocationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E987B0()

	// Function Engine.Actor.K2_OnReset
	// (Event, Public, BlueprintEvent)
	void K2_OnReset();// sub_1B0A820()

	// Function Engine.Actor.K2_OnEndViewTarget
	// (Event, Public, BlueprintEvent)
	void K2_OnEndViewTarget(class APlayerController* PC);// sub_1B0A820()

	// Function Engine.Actor.K2_OnBecomeViewTarget
	// (Event, Public, BlueprintEvent)
	void K2_OnBecomeViewTarget(class APlayerController* PC);// sub_1B0A820()

	// Function Engine.Actor.K2_GetRootComponent
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class USceneComponent* K2_GetRootComponent();// sub_E98730()

	// Function Engine.Actor.K2_GetActorRotation
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FRotator K2_GetActorRotation();// sub_E98630()

	// Function Engine.Actor.K2_GetActorLocation
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector K2_GetActorLocation();// sub_E98570()

	// Function Engine.Actor.K2_DetachFromActor
	// (Final, Native, Public, BlueprintCallable)
	void K2_DetachFromActor(EDetachmentRule LocationRuleEDetachmentRule RotationRuleEDetachmentRule ScaleRule);// sub_E98470()

	// Function Engine.Actor.K2_DestroyComponent
	// (Final, Native, Public, BlueprintCallable)
	void K2_DestroyComponent(class UActorComponent* Component);// sub_E983F0()

	// Function Engine.Actor.K2_DestroyActor
	// (Native, Public, BlueprintCallable)
	void K2_DestroyActor();// sub_E983D0()

	// Function Engine.Actor.K2_AttachToComponent
	// (Final, Native, Public, BlueprintCallable)
	void K2_AttachToComponent(class USceneComponent* Parentconst struct FName& SocketNameEAttachmentRule LocationRuleEAttachmentRule RotationRuleEAttachmentRule ScaleRuleunsigned char bWeldSimulatedBodies);// sub_E98210()

	// Function Engine.Actor.K2_AttachToActor
	// (Final, Native, Public, BlueprintCallable)
	void K2_AttachToActor(class AActor* ParentActorconst struct FName& SocketNameEAttachmentRule LocationRuleEAttachmentRule RotationRuleEAttachmentRule ScaleRuleunsigned char bWeldSimulatedBodies);// sub_E98050()

	// Function Engine.Actor.K2_AttachRootComponentToActor
	// (Final, Native, Public, BlueprintCallable)
	void K2_AttachRootComponentToActor(class AActor* InParentActorconst struct FName& InSocketNameTEnumAsByte<EAttachLocation> AttachLocationTypeunsigned char bWeldSimulatedBodies);// sub_E97F00()

	// Function Engine.Actor.K2_AttachRootComponentTo
	// (Final, Native, Public, BlueprintCallable)
	void K2_AttachRootComponentTo(class USceneComponent* InParentconst struct FName& InSocketNameTEnumAsByte<EAttachLocation> AttachLocationTypeunsigned char bWeldSimulatedBodies);// sub_E97DB0()

	// Function Engine.Actor.K2_AddActorWorldTransform
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddActorWorldTransform(const struct FTransform& DeltaTransformunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E97BC0()

	// Function Engine.Actor.K2_AddActorWorldRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddActorWorldRotation(const struct FRotator& DeltaRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E97A10()

	// Function Engine.Actor.K2_AddActorWorldOffset
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddActorWorldOffset(const struct FVector& DeltaLocationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E97860()

	// Function Engine.Actor.K2_AddActorLocalTransform
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddActorLocalTransform(const struct FTransform& NewTransformunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E97670()

	// Function Engine.Actor.K2_AddActorLocalRotation
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddActorLocalRotation(const struct FRotator& DeltaRotationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E974C0()

	// Function Engine.Actor.K2_AddActorLocalOffset
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void K2_AddActorLocalOffset(const struct FVector& DeltaLocationunsigned char bSweepstruct FHitResult* SweepHitResultunsigned char bTeleport);// sub_E97310()

	// Function Engine.Actor.IsOverlappingActor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsOverlappingActor(class AActor* Other);// sub_E97280()

	// Function Engine.Actor.IsChildActor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsChildActor();// sub_E97250()

	// Function Engine.Actor.IsActorTickEnabled
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsActorTickEnabled();// sub_E97220()

	// Function Engine.Actor.IsActorBeingDestroyed
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsActorBeingDestroyed();// sub_E971F0()

	// Function Engine.Actor.HasAuthority
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char HasAuthority();// sub_E971C0()

	// Function Engine.Actor.GetVerticalDistanceTo
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetVerticalDistanceTo(class AActor* OtherActor);// sub_E97120()

	// Function Engine.Actor.GetVelocity
	// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetVelocity();// sub_E970E0()

	// Function Engine.Actor.GetTransform
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FTransform GetTransform();// sub_E96F90()

	// Function Engine.Actor.GetTickableWhenPaused
	// (Final, Native, Public, BlueprintCallable)
	unsigned char GetTickableWhenPaused();// sub_E96F60()

	// Function Engine.Actor.GetSquaredDistanceTo
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetSquaredDistanceTo(class AActor* OtherActor);// sub_E96EC0()

	// Function Engine.Actor.GetRemoteRole
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TEnumAsByte<ENetRole> GetRemoteRole();// sub_E96EA0()

	// Function Engine.Actor.GetParentComponent
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UChildActorComponent* GetParentComponent();// sub_E96E70()

	// Function Engine.Actor.GetParentActor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class AActor* GetParentActor();// sub_E96E40()

	// Function Engine.Actor.GetOwner
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class AActor* GetOwner();// sub_E96DC0()

	// Function Engine.Actor.GetOverlappingComponents
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);// sub_E96D10()

	// Function Engine.Actor.GetOverlappingActors
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetOverlappingActors(TArray<class AActor*>* OverlappingActorsclass AActor* ClassFilter);// sub_E96C20()

	// Function Engine.Actor.GetLifeSpan
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetLifeSpan();// sub_E96BE0()

	// Function Engine.Actor.GetInstigatorController
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class AController* GetInstigatorController();// sub_E96BB0()

	// Function Engine.Actor.GetInstigator
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class APawn* GetInstigator();// sub_E96B80()

	// Function Engine.Actor.GetInputVectorAxisValue
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetInputVectorAxisValue(const struct FKey& InputAxisKey);// sub_E96A80()

	// Function Engine.Actor.GetInputAxisValue
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetInputAxisValue(const struct FName& InputAxisName);// sub_E969E0()

	// Function Engine.Actor.GetInputAxisKeyValue
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetInputAxisKeyValue(const struct FKey& InputAxisKey);// sub_E968F0()

	// Function Engine.Actor.GetHorizontalDotProductTo
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetHorizontalDotProductTo(class AActor* OtherActor);// sub_E96850()

	// Function Engine.Actor.GetHorizontalDistanceTo
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetHorizontalDistanceTo(class AActor* OtherActor);// sub_E967B0()

	// Function Engine.Actor.GetGameTimeSinceCreation
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	float GetGameTimeSinceCreation();// sub_E96780()

	// Function Engine.Actor.GetDotProductTo
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetDotProductTo(class AActor* OtherActor);// sub_E966E0()

	// Function Engine.Actor.GetDistanceTo
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetDistanceTo(class AActor* OtherActor);// sub_E96640()

	// Function Engine.Actor.GetComponentsByTag
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TArray<class UActorComponent*> GetComponentsByTag(class UActorComponent* ComponentClassconst struct FName& Tag);// sub_E96540()

	// Function Engine.Actor.GetComponentsByClass
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TArray<class UActorComponent*> GetComponentsByClass(class UActorComponent* ComponentClass);// sub_E96460()

	// Function Engine.Actor.GetComponentByClass
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UActorComponent* GetComponentByClass(class UActorComponent* ComponentClass);// sub_E963D0()

	// Function Engine.Actor.GetAttachParentSocketName
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FName GetAttachParentSocketName();// sub_E962E0()

	// Function Engine.Actor.GetAttachParentActor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class AActor* GetAttachParentActor();// sub_E962B0()

	// Function Engine.Actor.GetAttachedActors
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetAttachedActors(TArray<class AActor*>* OutActors);// sub_E96320()

	// Function Engine.Actor.GetAllChildActors
	// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	void GetAllChildActors(TArray<class AActor*>* ChildActorsunsigned char bIncludeDescendants);// sub_E961B0()

	// Function Engine.Actor.GetActorUpVector
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetActorUpVector();// sub_E96100()

	// Function Engine.Actor.GetActorTimeDilation
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetActorTimeDilation();// sub_E960D0()

	// Function Engine.Actor.GetActorTickInterval
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetActorTickInterval();// sub_E960A0()

	// Function Engine.Actor.GetActorScale3D
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetActorScale3D();// sub_E96060()

	// Function Engine.Actor.GetActorRightVector
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetActorRightVector();// sub_E95FB0()

	// Function Engine.Actor.GetActorRelativeScale3D
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetActorRelativeScale3D();// sub_E95F70()

	// Function Engine.Actor.GetActorForwardVector
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetActorForwardVector();// sub_E95EC0()

	// Function Engine.Actor.GetActorEyesViewPoint
	// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	void GetActorEyesViewPoint(struct FVector* OutLocationstruct FRotator* OutRotation);// sub_E95DD0()

	// Function Engine.Actor.GetActorEnableCollision
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetActorEnableCollision();// sub_E95DA0()

	// Function Engine.Actor.GetActorBounds
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	void GetActorBounds(unsigned char bOnlyCollidingComponentsstruct FVector* Originstruct FVector* BoxExtent);// sub_E95C70()

	// Function Engine.Actor.ForceNetUpdate
	// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	void ForceNetUpdate();// sub_A89A10()

	// Function Engine.Actor.FlushNetDormancy
	// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	void FlushNetDormancy();// sub_E95C50()

	// Function Engine.Actor.EnableInput
	// (Native, Public, BlueprintCallable)
	void EnableInput(class APlayerController* PlayerController);// sub_E95BC0()

	// Function Engine.Actor.DisableInput
	// (Native, Public, BlueprintCallable)
	void DisableInput(class APlayerController* PlayerController);// sub_E95B30()

	// Function Engine.Actor.DetachRootComponentFromParent
	// (Final, Native, Public, BlueprintCallable)
	void DetachRootComponentFromParent(unsigned char bMaintainWorldPosition);// sub_E95AA0()

	// Function Engine.Actor.AddTickPrerequisiteComponent
	// (Native, Public, BlueprintCallable)
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);// sub_E95A10()

	// Function Engine.Actor.AddTickPrerequisiteActor
	// (Native, Public, BlueprintCallable)
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);// sub_E95980()

	// Function Engine.Actor.AddComponent
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	class UActorComponent* AddComponent(const struct FName& TemplateNameunsigned char bManualAttachmentconst struct FTransform& RelativeTransformclass UObject* ComponentTemplateContext);// sub_E957C0()

	// Function Engine.Actor.ActorHasTag
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char ActorHasTag(const struct FName& Tag);// sub_E95730()


}

