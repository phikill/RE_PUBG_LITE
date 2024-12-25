

// Class ShadowTrackerExtra.STExtraWeapon
// //Class ShadowTrackerExtra.STExtraWeapon
//0x02D0 (0x0690 - 0x03C0)
class ASTExtraWeapon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	class AActor*                                      SimulatedOwnerActor;                                      // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                LogWeaponFirePerFireCount;                                // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        WeaponStaticMeshComp;                                     // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET
	class UWeaponEntity*                               WeaponEntityComp;                                         // 0x03F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET
	class USkeletalMesh*                               OriginalSkeletalMesh;                                     // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponMeshChangedDelegate;                              // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USkeletalMeshComponent*                      WeaponMeshComp;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FSpawnAndBackpackWeaponReplicatedData       OwnerClientCreateWeaponData;                              // 0x0428(0x0058) (Net)
	TArray<class USceneComponent*>                     UpdateOptimizationList;                                   // 0x0480(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0490(0x0008) MISSED OFFSET
	TEnumAsByte<EFreshWeaponStateType>                 CurFreshWeaponState;                                      // 0x0498(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWeaponState                                       CurWeaponState;                                           // 0x0499(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableCompUpdateOptimization : 1;                        // 0x049A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x049B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    WeaponEffectActionDelegate;                               // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWeaponOwnerProxy*                           OwnerProxy;                                               // 0x04B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    CachePlayerController;                                    // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET
	class UObject*                                     OriginalSkeletalMeshAnimClass;                            // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET
	struct FTransform                                  FPPWeaponOffset;                                          // 0x04E0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UStaticMesh*                                 OriginalStaticMesh;                                       // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       WeaponStaticMeshCompTag;                                  // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWeaponAvatarComponent*                      WeaponAvatarComponent;                                    // 0x0520(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWeaponReconnectReplicateData               WeaponReconnectReplicateData;                             // 0x0528(0x0060) (BlueprintVisible, Net)
	int                                                WeaponAvatarID;                                           // 0x0588(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnShootWeaponChangeState;                                 // 0x0590(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData10[0x10];                                      // 0x05A0(0x0010) MISSED OFFSET
	struct FTransform                                  FPPWeaponOffsetNonShooting;                               // 0x05B0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TMap<class USceneComponent*, struct FSceneCompUpdateOptimizationItem> SceneCompsUpdateOpCatche;                                 // 0x05E0(0x0050) (ZeroConstructor)
	struct FTransform                                  FPPWeaponOffsetSprint;                                    // 0x0630(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0660(0x0008) MISSED OFFSET
	class APawn*                                       SimulatedOwnerPawn;                                       // 0x0668(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x10];                                      // 0x0670(0x0010) MISSED OFFSET
	EAnimWeaponType                                    AnimWeaponType;                                           // 0x0680(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0681(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      PawnMesh;                                                 // 0x0688(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	// DelegateFunction ShadowTrackerExtra.STExtraWeapon.WeaponNotifyChangeStateDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void WeaponNotifyChangeStateDelegate__DelegateSignature(TEnumAsByte<EFreshWeaponStateType> State);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraWeapon.WeaponEffectActionDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void WeaponEffectActionDelegate__DelegateSignature(TEnumAsByte<EWeaponAction> Action);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraWeapon.SetWeaponAvatarMaterial
	// (Final, Native, Public, BlueprintCallable)
	void SetWeaponAvatarMaterial(class UMaterialInstance* InAvatarMaterial);// sub_C56930()

	// Function ShadowTrackerExtra.STExtraWeapon.ServerUpdateAvatar
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void ServerUpdateAvatar();// sub_C568E0()

	// Function ShadowTrackerExtra.STExtraWeapon.ServerLogFireWeapon
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerLogFireWeapon(const struct FAttackId& AttackId);// sub_C565F0()

	// Function ShadowTrackerExtra.STExtraWeapon.ServerCleanAvatar
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void ServerCleanAvatar();// sub_C565A0()

	// Function ShadowTrackerExtra.STExtraWeapon.RPC_ClientSyncPostFireHandledTime
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void RPC_ClientSyncPostFireHandledTime(float InPostFireHandledTime);// sub_C564F0()

	// Function ShadowTrackerExtra.STExtraWeapon.RPC_ClientChangeFreshWeaponState
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void RPC_ClientChangeFreshWeaponState(TEnumAsByte<EFreshWeaponStateType> State);// sub_C56440()

	// Function ShadowTrackerExtra.STExtraWeapon.PlayLocalShellDropFX
	// (Event, Public, BlueprintEvent)
	void PlayLocalShellDropFX();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraWeapon.OnWeaponMeshChangedDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnWeaponMeshChangedDelegate__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraWeapon.OnUserQualitySettingChanged
	// (Final, Native, Private)
	void OnUserQualitySettingChanged(int renderlevel);// sub_C561B0()

	// DelegateFunction ShadowTrackerExtra.STExtraWeapon.OnShootWeaponChangeStateDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnShootWeaponChangeStateDelegate__DelegateSignature(TEnumAsByte<EFreshWeaponStateType> State);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraWeapon.OnRep_WeaponReconnectReplicateData
	// (Final, Native, Protected)
	void OnRep_WeaponReconnectReplicateData();// sub_C56110()

	// Function ShadowTrackerExtra.STExtraWeapon.OnRep_WeaponAvatarID
	// (Final, Native, Public)
	void OnRep_WeaponAvatarID();// sub_C560F0()

	// Function ShadowTrackerExtra.STExtraWeapon.OnRep_SimulatedOwnerPawn
	// (Final, Native, Protected)
	void OnRep_SimulatedOwnerPawn();// sub_C560B0()

	// Function ShadowTrackerExtra.STExtraWeapon.OnRep_OwnerClientCreateWeaponData
	// (Final, Native, Protected)
	void OnRep_OwnerClientCreateWeaponData();// sub_C56090()

	// Function ShadowTrackerExtra.STExtraWeapon.OnRep_AttachmentReplication
	// (Native, Public)
	void OnRep_AttachmentReplication();// sub_C56030()

	// Function ShadowTrackerExtra.STExtraWeapon.OnReleaseTrigger
	// (Native, Public, BlueprintCallable)
	void OnReleaseTrigger();// sub_C56010()

	// Function ShadowTrackerExtra.STExtraWeapon.OnPushTrigger
	// (Native, Public, BlueprintCallable)
	void OnPushTrigger();// sub_C55FF0()

	// Function ShadowTrackerExtra.STExtraWeapon.JudgeHasEquipedComponentSlot
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char JudgeHasEquipedComponentSlot(TEnumAsByte<EWeaponComponentType> Slot);// sub_C55D10()

	// Function ShadowTrackerExtra.STExtraWeapon.IsEquipping
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsEquipping();// sub_C55C30()

	// Function ShadowTrackerExtra.STExtraWeapon.HasComponentSlot
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char HasComponentSlot(TEnumAsByte<EWeaponComponentType> Slot);// sub_C55A50()

	// Function ShadowTrackerExtra.STExtraWeapon.GetWeaponStaticMeshComponent
	// (Final, Native, Public, BlueprintCallable)
	class UStaticMeshComponent* GetWeaponStaticMeshComponent();// sub_C55280()

	// Function ShadowTrackerExtra.STExtraWeapon.GetWeaponSkeletalMeshComponent
	// (Final, Native, Public, BlueprintCallable)
	class USkeletalMeshComponent* GetWeaponSkeletalMeshComponent();// sub_C55250()

	// Function ShadowTrackerExtra.STExtraWeapon.GetWeaponName
	// (Final, Native, Public, BlueprintCallable)
	struct FString GetWeaponName();// sub_C551D0()

	// Function ShadowTrackerExtra.STExtraWeapon.GetWeaponMeshComponent
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UMeshComponent* GetWeaponMeshComponent();// sub_C551A0()

	// Function ShadowTrackerExtra.STExtraWeapon.GetWeaponID
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	int GetWeaponID();// sub_C55170()

	// Function ShadowTrackerExtra.STExtraWeapon.GetWeaponEntityComponent
	// (Final, Native, Public, BlueprintCallable)
	class UWeaponEntity* GetWeaponEntityComponent();// sub_C55140()

	// Function ShadowTrackerExtra.STExtraWeapon.GetWeaponAttachSocket
	// (Native, Public, BlueprintCallable, BlueprintPure)
	struct FName GetWeaponAttachSocket();// sub_C55100()

	// Function ShadowTrackerExtra.STExtraWeapon.GetSpecificHandler
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UWeaponSpecificHandler* GetSpecificHandler();// sub_C54E60()

	// Function ShadowTrackerExtra.STExtraWeapon.GetOwnerPlayerController
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class APlayerController* GetOwnerPlayerController();// sub_C54AD0()

	// Function ShadowTrackerExtra.STExtraWeapon.GetOwnerPawn
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class APawn* GetOwnerPawn();// sub_C54AA0()

	// Function ShadowTrackerExtra.STExtraWeapon.GetOwnerName
	// (Final, Native, Public, BlueprintCallable)
	struct FString GetOwnerName();// sub_C54A20()

	// Function ShadowTrackerExtra.STExtraWeapon.GetOwnerController
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class AController* GetOwnerController();// sub_C549F0()

	// Function ShadowTrackerExtra.STExtraWeapon.GetOwnerActor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class AActor* GetOwnerActor();// sub_C549C0()

	// Function ShadowTrackerExtra.STExtraWeapon.GetItemDefineID
	// (Final, Native, Public, BlueprintCallable)
	struct FItemDefineID GetItemDefineID();// sub_C54980()

	// Function ShadowTrackerExtra.STExtraWeapon.GetComponentSlotTarget
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FWeaponComponentItemData GetComponentSlotTarget(TEnumAsByte<EWeaponComponentType> Slot);// sub_C54440()

	// Function ShadowTrackerExtra.STExtraWeapon.GetBackpackItemHandle
	// (Final, Native, Public, BlueprintCallable)
	class UItemHandleBase* GetBackpackItemHandle();// sub_C541F0()

	// Function ShadowTrackerExtra.STExtraWeapon.GetAnimWeaponType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	EAnimWeaponType GetAnimWeaponType();// sub_C541C0()

	// Function ShadowTrackerExtra.STExtraWeapon.ChangeSequenceState
	// (Native, Public, BlueprintCallable)
	void ChangeSequenceState(TEnumAsByte<EFreshWeaponStateType> StateType);// sub_C53ED0()


}

