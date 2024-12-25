

// Class ShadowTrackerExtra.STExtraPlayerCharacter
// //Class ShadowTrackerExtra.STExtraPlayerCharacter
//0x02B0 (0x20D0 - 0x1E20)
class ASTExtraPlayerCharacter : public ASTExtraBaseCharacter
{
public:
	float                                              VehicleForwardInputRate;                                  // 0x1E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDrawBoxEarBulletOverlapRay : 1;                          // 0x1E24(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1E25(0x0003) MISSED OFFSET
	float                                              VehicleRightInputRate;                                    // 0x1E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsStillParachuting : 1;                                  // 0x1E2C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1E2D(0x0003) MISSED OFFSET
	float                                              FootSoundObstructionCheckInterval;                        // 0x1E30(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootSoundObstructionCheckMaxDistance;                     // 0x1E34(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HaveToLandHeightToGround;                                 // 0x1E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndoorCheckHalfConeAngle;                                 // 0x1E3C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndoorCheckDistance;                                      // 0x1E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCameraSettings                             OpeningCameraSetting;                                     // 0x1E44(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      bInputMoveForward : 1;                                    // 0x1E58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x1E59(0x0017) MISSED OFFSET
	class UCharacterInterpRotationComp*                InterpRotationComp;                                       // 0x1E70(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	int                                                IndoorCheckAccuracyMultiplier;                            // 0x1E78(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndoorCheckSuccessRate;                                   // 0x1E7C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndoorCheckTime;                                          // 0x1E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IndoorCheckSamplingQueueSize;                             // 0x1E84(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x1E88(0x0010) MISSED OFFSET
	class USTScreenAppearanceComponent*                ScreenAppearaceComp;                                      // 0x1E98(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      Indoor : 1;                                               // 0x1EA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1EA1(0x0007) MISSED OFFSET
	class UWeaponAutoAimingComponent*                  AutoAimComp;                                              // 0x1EA8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FParachuteStateParams                       ParachuteOpeningParams;                                   // 0x1EB0(0x0034) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HaveToOpenHeightToGround;                                 // 0x1EE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x1EE8(0x0008) MISSED OFFSET
	unsigned char                                      bInputMoveRight : 1;                                      // 0x1EF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1F];                                      // 0x1EF1(0x001F) MISSED OFFSET
	unsigned char                                      UnknownData07[0x28];                                      // 0x1EF1(0x0028) UNKNOWN PROPERTY: SoftClassProperty ShadowTrackerExtra.STExtraPlayerCharacter.SettleAccountUI
	struct FParachuteStateParams                       ParachuteFreeFallingParams;                               // 0x1F38(0x0034) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x1F6C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSkillFinishedDelegate;                                  // 0x1F70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              IndoorLowerCameraHeight;                                  // 0x1F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x14];                                      // 0x1F84(0x0014) MISSED OFFSET
	struct FBulletFlySoundReplicatedData               BulletFlySoundReplicatedData;                             // 0x1F98(0x0018) (Edit, BlueprintVisible, Net)
	EEquipableItemSoundType                            ShoesSoundType;                                           // 0x1FB0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x1FB1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    SwimWaveEffectComponent;                                  // 0x1FB8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      bConvertForColorBlind : 1;                                // 0x1FC0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x1FC1(0x0007) MISSED OFFSET
	TMap<struct FName, struct FVector>                 VectorParameters;                                         // 0x1FC8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UBoxComponent*                               BoxEar;                                                   // 0x2018(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASTExtraPlayerController*                    STPlayerController;                                       // 0x2020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	struct FCameraSettings                             FreefallCameraSetting;                                    // 0x2028(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData12[0x4];                                       // 0x203C(0x0004) MISSED OFFSET
	class UAimingComp*                                 AimingComponent;                                          // 0x2040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnHasPickupPropsAvailableChanged;                         // 0x2048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHasTombBoxesAvailableChanged;                           // 0x2058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData13[0x14];                                      // 0x2068(0x0014) MISSED OFFSET
	TEnumAsByte<EParachuteState>                       LastParachuteState;                                       // 0x207C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x207D(0x0003) MISSED OFFSET
	float                                              SwimZDir;                                                 // 0x2080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x2084(0x0004) MISSED OFFSET
	TArray<struct FString>                             CurrentVisitingLocationNames;                             // 0x2088(0x0010) (ZeroConstructor, Transient)
	struct FSoftClassPath                              SkydivingComponentClass;                                  // 0x2098(0x0018) (Edit, DisableEditOnInstance)
	class UTslSkydiveComponent*                        SkydivingComponent;                                       // 0x20B0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x20B8(0x0008) MISSED OFFSET
	ESurviveWeaponPropSlot                             LastEquipedWeaponIndex;                                   // 0x20C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0xF];                                       // 0x20C1(0x000F) MISSED OFFSET

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.UpdateIndoorState
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void UpdateIndoorState(unsigned char IsIndoor);// sub_6DE140()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.TouchCancelSkillLock
	// (Final, Native, Public, BlueprintCallable)
	void TouchCancelSkillLock();// sub_6DDC70()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.Timer_StartSkydivingTraining
	// (Final, Native, Public)
	void Timer_StartSkydivingTraining();// sub_6DDBF0()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.SyncDeadTombBoxToController
	// (Native, Public)
	void SyncDeadTombBoxToController(class APlayerTombBox* _DeadTombBox);// sub_6DDB60()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.StartSkydivingTraining
	// (Final, Native, Public, HasOutParms, HasDefaults)
	void StartSkydivingTraining(const struct FVector& TrainingLocationconst struct FRotator& StartRotator);// sub_6DD370()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.ShouldTriggerEntryEvent
	// (Final, Native, Public, BlueprintCallable)
	unsigned char ShouldTriggerEntryEvent(EUTSkillEntry EntryEvent);// sub_6DCB00()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.ShouldDropBagItem
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	unsigned char ShouldDropBagItem(const struct FItemDefineID& SkillItemID);// sub_6DCA20()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.SetSwimRotateX_Ex
	// (Final, Native, Public, BlueprintCallable)
	void SetSwimRotateX_Ex(float NewSwimRotateX);// sub_6DC910()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.SetParachuteState
	// (Final, Native, Public, BlueprintCallable)
	void SetParachuteState(TEnumAsByte<EParachuteState> State);// sub_6DC5A0()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.SetAnimationAkSwitch
	// (Final, Native, Public, BlueprintCallable)
	void SetAnimationAkSwitch(const struct FString& SwitchGroupconst struct FString& SwitchState);// sub_6DB930()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.SetAnimationAkRTPC
	// (Final, Native, Public, BlueprintCallable)
	void SetAnimationAkRTPC(const struct FString& RTPCNamefloat RTPCValue);// sub_6DB800()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.ServerSetBulletFlySoundData
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	void ServerSetBulletFlySoundData(class ASTExtraPlayerCharacter* PlayerCharacterclass ASTExtraShootWeapon* InstigateWeaponconst struct FVector& FlySoundPos);// sub_6D9500()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.Server_SpawnSkydiveComponent
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void Server_SpawnSkydiveComponent();// sub_6DB5A0()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.Server_CreateSkyCompParachuteOpenState
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void Server_CreateSkyCompParachuteOpenState();// sub_6DB550()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.SendSystemMessage
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void SendSystemMessage(ESystemMessageType MessageTypeconst struct FText& Message);// sub_6D7CD0()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.ReleaseTrigger
	// (Native, Public, BlueprintCallable)
	void ReleaseTrigger(EControllerHand Hand);// sub_6D6F40()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.PushTrigger
	// (Native, Public, BlueprintCallable)
	void PushTrigger(EControllerHand Hand);// sub_6D5DA0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerCharacter.OnSkillFinishedDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnSkillFinishedDelegate__DelegateSignature(EUTSkillStopReason StopReason);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.OnRep_TriggerEarSoundNotify
	// (Final, Native, Public)
	void OnRep_TriggerEarSoundNotify();// sub_6D5870()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.OnRep_SkydiveComponent
	// (Final, Native, Public)
	void OnRep_SkydiveComponent();// sub_6D5830()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.OnRep_ShoesSoundType
	// (Final, Native, Public)
	void OnRep_ShoesSoundType();// sub_6D5810()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.OnRep_ParachuteState
	// (Final, Native, Public)
	void OnRep_ParachuteState(TEnumAsByte<EParachuteState> State);// sub_6D56F0()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.OnRank
	// (Final, Native, Public)
	void OnRank(int Killsint Rank);// sub_6D55B0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerCharacter.OnHasTombBoxesAvailableChanged__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnHasTombBoxesAvailableChanged__DelegateSignature(unsigned char bIsAvailable);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerCharacter.OnHasPickupPropsAvailableChanged__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnHasPickupPropsAvailableChanged__DelegateSignature(unsigned char bIsAvailable);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.OnAvatarEquippedSucc
	// (Final, Native, Protected)
	void OnAvatarEquippedSucc(EAvatarSlotType NULLunsigned char NULL02);// sub_6D4960()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.IsUnderRoof
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsUnderRoof();// sub_6D3470()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.IsIndoor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsIndoor();// sub_6D3070()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.IsGrenadeEmpty
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsGrenadeEmpty();// sub_6D2E90()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.IsAudioTestEnabled
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsAudioTestEnabled();// sub_3ADE80()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.InitilizeServerSkydiveComp
	// (Final, Exec, Native, Public)
	void InitilizeServerSkydiveComp();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.InitializeFreefall
	// (Final, Native, Public, HasDefaults)
	void InitializeFreefall(const struct FVector& InVelocity);// sub_6D2C60()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.HandleParachuteStateChanged
	// (Event, Public, BlueprintEvent)
	void HandleParachuteStateChanged(TEnumAsByte<EParachuteState> NewState);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.HandleBulletOverlap
	// (Final, Native, Public, HasOutParms)
	void HandleBulletOverlap(class AActor* BulletActorconst struct FHitResult& HitResultTArray<struct FHitResult> HitResults);// sub_6D2970()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.GetSwimRotateX_Ex
	// (Final, Native, Public, BlueprintCallable)
	float GetSwimRotateX_Ex();// sub_6D2680()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.GetPlayerControllerSafety
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraPlayerController* GetPlayerControllerSafety();// sub_6D24E0()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.GetIndoorFactor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetIndoorFactor();// sub_6D19B0()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.GetFPPSpringArm
	// (Event, Public, BlueprintEvent)
	class USpringArmComponent* GetFPPSpringArm();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.GetFPPCamera
	// (Event, Public, BlueprintCallable, BlueprintEvent)
	class UCameraComponent* GetFPPCamera();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.GetBonePos
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	struct FVector GetBonePos(const struct FName& BoneName);// sub_6D1510()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.FindWeaponAvatarIDFromWeaponAvatarList
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	int FindWeaponAvatarIDFromWeaponAvatarList(int weaponItemID);// sub_6D1020()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.FindEquipmentAvatarIDFromEquipmentAvatarList
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	int FindEquipmentAvatarIDFromEquipmentAvatarList(int equipmentItemID);// sub_6D0F80()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.DoMoveRight
	// (Event, Public, BlueprintEvent)
	void DoMoveRight(float Rate);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.DoMoveForward
	// (Event, Public, BlueprintEvent)
	void DoMoveForward(float Rate);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.CreateSkydiveComponent
	// (Final, Native, Public)
	void CreateSkydiveComponent();// sub_6CF2B0()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.ColorblindConvertCheck
	// (Final, Native, Protected, BlueprintCallable)
	void ColorblindConvertCheck(class UParticleSystemComponent* ParticleComp);// sub_6CF230()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.Client_TimerCheckSkydivingTrainingStart
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void Client_TimerCheckSkydivingTrainingStart();// sub_6CF190()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.ClearHPUI
	// (Native, Public)
	void ClearHPUI();// sub_6CD830()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.CheckScopePP
	// (Final, Native, Public)
	void CheckScopePP();// sub_6CD730()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.AddControllerYawInput
	// (Native, Public, BlueprintCallable)
	void AddControllerYawInput(float Val);// sub_6CB6E0()

	// Function ShadowTrackerExtra.STExtraPlayerCharacter.AddControllerPitchInput
	// (Native, Public, BlueprintCallable)
	void AddControllerPitchInput(float Val);// sub_6CB660()


}

