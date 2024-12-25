

// Class ShadowTrackerExtra.ParachuteFollowComponent
// //Class ShadowTrackerExtra.ParachuteFollowComponent
//0x0000 (0x0108 - 0x0108)
class UParachuteFollowComponent : public UActorComponent
{
public:

	// Function Engine.ActorComponent.ToggleActive
	// (Native, Public, BlueprintCallable)
	void ToggleActive();// sub_F30ED0()

	// Function Engine.ActorComponent.SetTickGroup
	// (Final, Native, Public, BlueprintCallable)
	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);// sub_F30DA0()

	// Function Engine.ActorComponent.SetTickableWhenPaused
	// (Final, Native, Public, BlueprintCallable)
	void SetTickableWhenPaused(unsigned char bTickableWhenPaused);// sub_F30E20()

	// Function Engine.ActorComponent.SetIsReplicated
	// (Final, Native, Public, BlueprintCallable)
	void SetIsReplicated(unsigned char ShouldReplicate);// sub_F30D10()

	// Function Engine.ActorComponent.SetComponentTickInterval
	// (Final, Native, Public, BlueprintCallable)
	void SetComponentTickInterval(float TickInterval);// sub_F30C90()

	// Function Engine.ActorComponent.SetComponentTickEnabled
	// (Native, Public, BlueprintCallable)
	void SetComponentTickEnabled(unsigned char bEnabled);// sub_F30C00()

	// Function Engine.ActorComponent.SetAutoActivate
	// (Native, Public, BlueprintCallable)
	void SetAutoActivate(unsigned char bNewAutoActivate);// sub_8C4B60()

	// Function Engine.ActorComponent.SetActive
	// (Native, Public, BlueprintCallable)
	void SetActive(unsigned char bNewActiveunsigned char bReset);// sub_F30B30()

	// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
	// (Native, Public, BlueprintCallable)
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);// sub_F30AA0()

	// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
	// (Native, Public, BlueprintCallable)
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);// sub_F30A10()

	// Function Engine.ActorComponent.ReceiveTick
	// (Event, Public, BlueprintEvent)
	void ReceiveTick(float DeltaSeconds);// sub_1B0A820()

	// Function Engine.ActorComponent.ReceiveEndPlay
	// (Event, Public, BlueprintEvent)
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);// sub_1B0A820()

	// Function Engine.ActorComponent.ReceiveBeginPlay
	// (Event, Public, BlueprintEvent)
	void ReceiveBeginPlay();// sub_1B0A820()

	// Function Engine.ActorComponent.OnRep_IsActive
	// (Final, Native, Public)
	void OnRep_IsActive();// sub_F30970()

	// Function Engine.ActorComponent.K2_DestroyComponent
	// (Final, Native, Public, BlueprintCallable)
	void K2_DestroyComponent(class UObject* Object);// sub_F308F0()

	// Function Engine.ActorComponent.IsComponentTickEnabled
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsComponentTickEnabled();// sub_F308C0()

	// Function Engine.ActorComponent.IsBeingDestroyed
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsBeingDestroyed();// sub_F30890()

	// Function Engine.ActorComponent.IsActive
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsActive();// sub_F30860()

	// Function Engine.ActorComponent.GetOwner
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class AActor* GetOwner();// sub_F30840()

	// Function Engine.ActorComponent.GetComponentTickInterval
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetComponentTickInterval();// sub_F30810()

	// Function Engine.ActorComponent.Deactivate
	// (Native, Public, BlueprintCallable)
	void Deactivate();// sub_A57A70()

	// Function Engine.ActorComponent.ComponentHasTag
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char ComponentHasTag(const struct FName& Tag);// sub_F30600()

	// Function Engine.ActorComponent.AddTickPrerequisiteComponent
	// (Native, Public, BlueprintCallable)
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);// sub_F304B0()

	// Function Engine.ActorComponent.AddTickPrerequisiteActor
	// (Native, Public, BlueprintCallable)
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);// sub_F30420()

	// Function Engine.ActorComponent.Activate
	// (Native, Public, BlueprintCallable)
	void Activate(unsigned char bReset);// sub_F13850()


}

