

// Class ShadowTrackerExtra.STExtraShootWeapon
// //Class ShadowTrackerExtra.STExtraShootWeapon
//0x04E0 (0x0B70 - 0x0690)
class ASTExtraShootWeapon : public ASTExtraWeapon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0690(0x0008) MISSED OFFSET
	unsigned char                                      bHasFinishConfirmedFromServer : 1;                        // 0x0698(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0699(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    StartReloadMagazineDelegate;                              // 0x06A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EGunFireMode                                       InitialFireMode;                                          // 0x06B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06B1(0x0003) MISSED OFFSET
	float                                              SilenceVoiceCheckDis;                                     // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAttrModifyComponent*                        AttrModifierCompoment;                                    // 0x06B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              nowVoiceCheckDis;                                         // 0x06C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    StartReloadByOneDelegate;                                 // 0x06C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FWeaponAttrModifyConfig>             WeaponAttrModifyConfigList;                               // 0x06D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponReloadEndDelegage;                                // 0x06F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UStaticMeshComponent*                        DefaultGunstockComponent;                                 // 0x0700(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWeaponEquipDelegate;                                    // 0x0708(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EGunFireMode                                       FireMode;                                                 // 0x0718(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0719(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnShootWeaponAutoReloadDel;                               // 0x0720(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UTslBallisticsComp*                          TslBallisticsComp;                                        // 0x0730(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAkAudioEvent*                               MagazineINSound;                                          // 0x0738(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USTExtraShootWeaponComponent*                ShootWeaponComponent;                                     // 0x0740(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWeaponShootHitDelegate;                                 // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAkAudioEvent*                               ToggleFiringMode;                                         // 0x0758(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0760(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChangeAvailableAmmoInBackpack;                          // 0x0768(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0778(0x0008) MISSED OFFSET
	struct FVector                                     BulletDecalScale;                                         // 0x0780(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStopFireDelegate;                                       // 0x0790(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCurBulletChange;                                        // 0x07A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponReloadStartDelegate;                              // 0x07B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                CurBulletNumInClipOnSimulatedClients;                     // 0x07C0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                CurrentZeroLevel;                                         // 0x07C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               MagazineOUTSound;                                         // 0x07C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x78];                                      // 0x07D0(0x0078) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartFireDelegate;                                      // 0x0848(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData10[0x8];                                       // 0x0858(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        DefaultScopeComponent;                                    // 0x0860(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              LastImpactEffectTime;                                     // 0x0868(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x086C(0x0004) MISSED OFFSET
	TArray<struct FMeshSynData>                        synData;                                                  // 0x0870(0x0010) (Net, ZeroConstructor, Transient)
	int                                                TotalFireMode;                                            // 0x0880(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0xC];                                       // 0x0884(0x000C) MISSED OFFSET
	struct FName                                       MagTag;                                                   // 0x0890(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurBulletNumInBarrel;                                     // 0x0898(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShootWeaponShootMode>                 ShootMode;                                                // 0x089C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	int                                                ClientShootTimes;                                         // 0x08A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x08A4(0x0004) MISSED OFFSET
	class UShootWeaponEntity*                          ShootWeaponEntityComp;                                    // 0x08A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkAudioEvent*                               PullBoltSound;                                            // 0x08B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurBulletNumInClip;                                       // 0x08B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	struct FName                                       PlayerMagTag;                                             // 0x08C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetFPPCrouchRotation;                                  // 0x08C8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0xC];                                       // 0x08D4(0x000C) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x08E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x08E1(0x0003) MISSED OFFSET
	struct FRotator                                    OffsetFPPProneRotation;                                   // 0x08E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x08F0(0x0004) MISSED OFFSET
	struct FVector                                     OffsetFPPProneLocation;                                   // 0x08F4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsPistol : 1;                                            // 0x0900(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19 : 8;                                        // 0x0901(0x0001)
	unsigned char                                      IsEquipFiringSuppressor : 1;                              // 0x0901(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1E];                                      // 0x0902(0x001E) MISSED OFFSET
	struct FVector                                     OffsetFPPLocation;                                        // 0x0920(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              voiceCheckCD;                                             // 0x092C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurMaxBulletNumInOneClip;                                 // 0x0930(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastImpactEffectLocation;                                 // 0x0934(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0940(0x0004) MISSED OFFSET
	unsigned char                                      DefaultScopeVisiable : 1;                                 // 0x0944(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EShootWeaponState>                     CurShootWeaponState;                                      // 0x0945(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x12];                                      // 0x0946(0x0012) MISSED OFFSET
	struct FWeaponPPSettings                           WeaponGunPostprocessSettings;                             // 0x0958(0x00A8) (Edit, DisableEditOnInstance)
	class UAkAudioEvent*                               BulletFlySound;                                           // 0x0A00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsAIOwner : 1;                                           // 0x0A08(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0A09(0x0003) MISSED OFFSET
	struct FVector                                     ShootTargetLoc;                                           // 0x0A0C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBulletNumChangeDelegate;                                // 0x0A18(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UReticlePostprocessData*                     ReticlePostprocessData;                                   // 0x0A28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetFPPCrouchLocation;                                  // 0x0A30(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              VoiceCheckDis;                                            // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        DefaultPlayerMagComponent;                                // 0x0A40(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData24[0x10];                                      // 0x0A48(0x0010) MISSED OFFSET
	struct FRotator                                    OffsetFPPScopeRotation;                                   // 0x0A58(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0A64(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponSecurityLogShootActorDelegate;                    // 0x0A68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FItemDefineID>                       AttachedAttachmentID;                                     // 0x0A78(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData26[0x8];                                       // 0x0A88(0x0008) MISSED OFFSET
	struct FTransform                                  BoltActionTransform;                                      // 0x0A90(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              voiceCheckShowCD;                                         // 0x0AC0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0AC4(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        DefaultGripComponent;                                     // 0x0AC8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      isDefaultSlienceWeapon : 1;                               // 0x0AD0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x0AD1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponShootDelegate;                                    // 0x0AD8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UStaticMesh*                                 DefaultMagMesh;                                           // 0x0AE8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ChangeMagazineSound;                                      // 0x0AF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LoadBulletSound;                                          // 0x0AF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurBurstShootIndex;                                       // 0x0B00(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x14];                                      // 0x0B04(0x0014) MISSED OFFSET
	EGunFireMode                                       PrevFireMode;                                             // 0x0B18(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsEquipCompensator : 1;                                   // 0x0B19(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x0B1A(0x0002) MISSED OFFSET
	struct FRotator                                    OffsetFPPRotation;                                        // 0x0B1C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBulletHitInfoUploadData>            HitDataArray;                                             // 0x0B28(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	class UStaticMeshComponent*                        DefaultMagComponent;                                      // 0x0B38(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      IsEquipSilencer : 1;                                      // 0x0B40(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x0B41(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponUnEquipDelegate;                                  // 0x0B48(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData32[0x18];                                      // 0x0B58(0x0018) MISSED OFFSET

	// Function ShadowTrackerExtra.STExtraShootWeapon.ZeroingLevelUp
	// (Final, Native, Public, BlueprintCallable)
	void ZeroingLevelUp();// sub_107BD70()

	// Function ShadowTrackerExtra.STExtraShootWeapon.ZeroingLevelDown
	// (Final, Native, Public, BlueprintCallable)
	void ZeroingLevelDown();// sub_107BD50()

	// Function ShadowTrackerExtra.STExtraShootWeapon.StopFireFilter
	// (Native, Event, Public, BlueprintEvent)
	unsigned char StopFireFilter();// sub_8C16A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.StopFire
	// (Native, Public, BlueprintCallable)
	void StopFire(TEnumAsByte<EFreshWeaponStateType> ToState);// sub_107BCD0()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.StartReloadMagazine__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void StartReloadMagazine__DelegateSignature(EWeaponReloadAnimExec AnimExec);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.StartReloadByOne__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void StartReloadByOne__DelegateSignature(EWeaponReloadAnimExec AnimExec);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraShootWeapon.StartReload
	// (Native, Public, BlueprintCallable)
	int StartReload();// sub_107BCA0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.StartFireFilter
	// (Native, Event, Public, BlueprintEvent)
	unsigned char StartFireFilter();// sub_107BC70()

	// Function ShadowTrackerExtra.STExtraShootWeapon.StartFire
	// (Native, Public, BlueprintCallable)
	void StartFire();// sub_8C3320()

	// Function ShadowTrackerExtra.STExtraShootWeapon.StartDoPreBarrel
	// (Native, Public, BlueprintCallable)
	void StartDoPreBarrel(float HandledTime);// sub_107BBF0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.StartDoBarrel
	// (Native, Public, BlueprintCallable)
	void StartDoBarrel();// sub_107BBD0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.SimulateWeaponReload
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void SimulateWeaponReload(EWeaponReloadAnimExec ReloadAnimExecuint32_t AmmoToReload);// sub_107BB00()

	// Function ShadowTrackerExtra.STExtraShootWeapon.ShowDefaultScope
	// (Final, Native, Public, BlueprintCallable)
	void ShowDefaultScope(unsigned char bShow);// sub_107BA70()

	// Function ShadowTrackerExtra.STExtraShootWeapon.ShowDefaultAttachmentComponentByType
	// (Final, Native, Public, BlueprintCallable)
	void ShowDefaultAttachmentComponentByType(EWeaponAttachmentSocketType Typeunsigned char bVisible);// sub_107B9A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.SetWeaponAttrModifierEnable
	// (Final, Native, Public, BlueprintCallable)
	void SetWeaponAttrModifierEnable(const struct FString& AttrModifierIDunsigned char Enable);// sub_107B8C0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.SetFireMode
	// (Final, Native, Public, BlueprintCallable)
	unsigned char SetFireMode(EGunFireMode NewFireMode);// sub_107B7A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.SetCurrentBulletNumInClipOnServer
	// (Final, Native, Public, BlueprintCallable)
	void SetCurrentBulletNumInClipOnServer(int Count);// sub_107B720()

	// Function ShadowTrackerExtra.STExtraShootWeapon.SetCurrentBulletNumInClipOnClient
	// (Final, Native, Public, BlueprintCallable)
	void SetCurrentBulletNumInClipOnClient(int Count);// sub_107B6A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.SetCurReloadMethod
	// (Final, Native, Public, BlueprintCallable)
	void SetCurReloadMethod(TEnumAsByte<EWeaponReloadMethod> method);// sub_107B620()

	// Function ShadowTrackerExtra.STExtraShootWeapon.SetAvailableWeaponAttachmentSocketTypeList
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void SetAvailableWeaponAttachmentSocketTypeList(TArray<EWeaponAttachmentSocketType>* List);// sub_107B530()

	// Function ShadowTrackerExtra.STExtraShootWeapon.RPC_ClientSetCurReloadMethod
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void RPC_ClientSetCurReloadMethod(TEnumAsByte<EWeaponReloadMethod> method);// sub_107AE60()

	// Function ShadowTrackerExtra.STExtraShootWeapon.RPC_Client_SetBulletNumInClip
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void RPC_Client_SetBulletNumInClip(int Count);// sub_107AF10()

	// Function ShadowTrackerExtra.STExtraShootWeapon.ResetZeroingLevel
	// (Final, Native, Public, BlueprintCallable)
	void ResetZeroingLevel();// sub_107B0A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.ResetInitialBulletNumInClip
	// (Final, Native, Public, BlueprintCallable)
	void ResetInitialBulletNumInClip(unsigned char bSetZero);// sub_107B010()

	// Function ShadowTrackerExtra.STExtraShootWeapon.ResetGunAimingParameters
	// (Final, Native, Public, BlueprintCallable)
	void ResetGunAimingParameters();// sub_107AFF0()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnWeaponUnEquipDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnWeaponUnEquipDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnWeaponShootHitDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate, HasOutParms)
	void OnWeaponShootHitDelegate__DelegateSignature(const struct FShootWeaponDamageEvent& DamageDetailconst struct FBulletHitInfoUploadData& HitDataconst struct FLocalShootHitData& LocalHitData);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnWeaponShootDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnWeaponShootDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnWeaponSecurityLogShootActorDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate, HasOutParms)
	void OnWeaponSecurityLogShootActorDelegate__DelegateSignature(class AActor* InHitActorconst struct FSecurityLogHitTargetInfo& TargetInfo);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnWeaponReloadStartDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnWeaponReloadStartDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnWeaponReloadEndDelegage__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnWeaponReloadEndDelegage__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnWeaponEquipDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnWeaponEquipDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnStopFireDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnStopFireDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnStartFireDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnStartFireDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnShootWeaponAutoReloadDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnShootWeaponAutoReloadDelegate__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnScopeMeshPreDetach
	// (Final, Native, Private)
	void OnScopeMeshPreDetach(EWeaponAttachmentSocketType AtttachmentSocketType);// sub_107ADB0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnScopeMeshDetached
	// (Final, Native, Private)
	void OnScopeMeshDetached(EWeaponAttachmentSocketType AtttachmentSocketType);// sub_107AD30()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnScopeMeshAttached
	// (Final, Native, Private)
	void OnScopeMeshAttached(EWeaponAttachmentSocketType AtttachmentSocketType);// sub_107ACB0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnRep_HitDataArray
	// (Final, Native, Public)
	void OnRep_HitDataArray();// sub_107AB10()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnRep_FireModeChange
	// (Final, Native, Public)
	void OnRep_FireModeChange();// sub_107AAF0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnRep_CurMaxBulletNumChange
	// (Final, Native, Public)
	void OnRep_CurMaxBulletNumChange();// sub_107AAD0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnRep_CurBulletNumInClipOnSimulatedClients
	// (Final, Native, Protected)
	void OnRep_CurBulletNumInClipOnSimulatedClients();// sub_107AAB0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnRep_AvatarMeshChanged
	// (Final, Native, Public)
	void OnRep_AvatarMeshChanged();// sub_107AA70()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnPreVaultServer
	// (Final, Native, Public)
	void OnPreVaultServer();// sub_107AA50()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnPlayerPickUpActorServer
	// (Final, Native, Public)
	void OnPlayerPickUpActorServer();// sub_107AA50()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnMaxBulletChange__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnMaxBulletChange__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnDoorInteractionServer
	// (Final, Native, Public)
	void OnDoorInteractionServer();// sub_107AA50()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnDetachFromVehicle
	// (Final, Native, Public)
	void OnDetachFromVehicle();// sub_107AA50()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnCurBulletChange__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnCurBulletChange__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnChangeAvailableAmmoInBackpack__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnChangeAvailableAmmoInBackpack__DelegateSignature(int AvailableAmmoCount);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraShootWeapon.OnBulletNumChangeDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnBulletNumChangeDelegate__DelegateSignature();// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnBackpackUpdate
	// (Final, Native, Public)
	void OnBackpackUpdate();// sub_107AA30()

	// Function ShadowTrackerExtra.STExtraShootWeapon.OnAttachToVehicle
	// (Final, Native, Public)
	void OnAttachToVehicle(class ASTExtraVehicleBase* Vehicle);// sub_107A9B0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.NotifyServerNoneShootAction
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void NotifyServerNoneShootAction();// sub_107A960()

	// Function ShadowTrackerExtra.STExtraShootWeapon.NotifyClientNoneShootAction
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void NotifyClientNoneShootAction();// sub_107A910()

	// Function ShadowTrackerExtra.STExtraShootWeapon.LocalSetBulletNumInClip
	// (Final, Native, Protected, BlueprintCallable)
	void LocalSetBulletNumInClip(int Count);// sub_107A890()

	// Function ShadowTrackerExtra.STExtraShootWeapon.IsInPreFire
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsInPreFire();// sub_107A800()

	// Function ShadowTrackerExtra.STExtraShootWeapon.IsAttachmentSlotAlreadyAttachedToWeapon
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsAttachmentSlotAlreadyAttachedToWeapon(EWeaponAttachmentSlotID slotID);// sub_107A770()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetWeaponReloadType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TEnumAsByte<EWeaponReloadType> GetWeaponReloadType();// sub_107A710()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetWeaponPostprocessSettings
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FWeaponPPSettings GetWeaponPostprocessSettings();// sub_107A670()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetWeaponOrScopePostprocessSettings
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FWeaponPPSettings GetWeaponOrScopePostprocessSettings();// sub_107A5D0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetWeaponBodyLength
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetWeaponBodyLength();// sub_107A5A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetTraceDistanceFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetTraceDistanceFromEntity();// sub_107A570()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetSilencerSocketNameFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FName GetSilencerSocketNameFromEntity();// sub_107A3A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetShootWeaponEntityComponent
	// (Final, Native, Public, BlueprintCallable)
	class UShootWeaponEntity* GetShootWeaponEntityComponent();// sub_107A370()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetShootIntervalFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetShootIntervalFromEntity();// sub_107A340()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetShootInputIntervalFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetShootInputIntervalFromEntity();// sub_107A340()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetShellDropSocketNameFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FName GetShellDropSocketNameFromEntity();// sub_107A300()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetScopeAimCameraTransform
	// (Final, Native, Public, BlueprintCallable)
	class UMeshComponent* GetScopeAimCameraTransform(const struct FName& SocketNameint SocketIndexEScopeType ScopeType);// sub_107A200()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetReloadTimeMagOutFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetReloadTimeMagOutFromEntity();// sub_107A1D0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetReloadTimeFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetReloadTimeFromEntity();// sub_107A1A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetReloadTIDName
	// (Native, Public, BlueprintCallable)
	struct FName GetReloadTIDName(TEnumAsByte<EWeaponReloadMethod> method);// sub_107A0D0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetReloadTacticalTimeFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetReloadTacticalTimeFromEntity();// sub_107A170()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetReloadDurationStartFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetReloadDurationStartFromEntity();// sub_107A0A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetReloadDurationLoopFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetReloadDurationLoopFromEntity();// sub_107A070()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetReloadAnimRate
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetReloadAnimRate();// sub_107A040()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetRelativeMuzzleTransform
	// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	struct FTransform GetRelativeMuzzleTransform();// sub_1079FD0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetReferenceDistance
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetReferenceDistance();// sub_1079FA0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetRecoilInfoFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FSRecoilInfo GetRecoilInfoFromEntity();// sub_1079F30()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetRecoilDebugInfo
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FRecoilDebugInfo GetRecoilDebugInfo();// sub_1079EE0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetRecoilDebugCurrentBullet
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetRecoilDebugCurrentBullet();// sub_1079EC0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetRangeModifier
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetRangeModifier();// sub_1079E90()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetRangeAttenuateFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TArray<struct FSRangeAttenuateConfig> GetRangeAttenuateFromEntity();// sub_1079E10()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetPreFireTimeFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetPreFireTimeFromEntity();// sub_1079DE0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetPostFireTimeFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetPostFireTimeFromEntity();// sub_1079DB0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetMuzzleTransform
	// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	struct FTransform GetMuzzleTransform();// sub_1079C10()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetMuzzleSocketNameFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FName GetMuzzleSocketNameFromEntity();// sub_1079BD0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetMaxValidHitTimeFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetMaxValidHitTimeFromEntity();// sub_1079BA0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetMaxImpactEffectSkipTimeFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetMaxImpactEffectSkipTimeFromEntity();// sub_1079B70()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetMaxBulletNumInOneClipFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetMaxBulletNumInOneClipFromEntity();// sub_1079B00()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetImpactEffectSkipDistanceFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetImpactEffectSkipDistanceFromEntity();// sub_1079AD0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetHitPartCoff
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FWeaponHitPartCoff GetHitPartCoff();// sub_1079A90()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetGameDeviationFactor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetGameDeviationFactor();// sub_1079A60()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetFiringSuppressorSocketNameFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FName GetFiringSuppressorSocketNameFromEntity();// sub_1079A20()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetFireSensitiveYawRate
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetFireSensitiveYawRate();// sub_10799F0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetFireSensitivePitchRate
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetFireSensitivePitchRate();// sub_10799C0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetFireModeFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	EGunFireMode GetFireModeFromEntity();// sub_1079990()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetDefaultAttachmentComponentByType
	// (Final, Native, Public, BlueprintCallable)
	class UStaticMeshComponent* GetDefaultAttachmentComponentByType(EWeaponAttachmentSocketType Type);// sub_1079900()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetDefaultADSFOV
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetDefaultADSFOV();// sub_10798D0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetCurSightType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	ESightType GetCurSightType();// sub_1079720()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetCurrentZeroingLevel
	// (Final, Native, Public, BlueprintCallable)
	int GetCurrentZeroingLevel(EScopeType ScopeType);// sub_1079840()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetCurrentZeroingDistance
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetCurrentZeroingDistance(EScopeType ScopeType);// sub_10797B0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetCurrentActiveScopeType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	EScopeType GetCurrentActiveScopeType();// sub_1079780()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetCurrentActiveScopeSlot
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	EWeaponAttachmentSlotID GetCurrentActiveScopeSlot();// sub_1079750()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetCurReloadTime
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetCurReloadTime();// sub_10796F0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetCurReloadMethod
	// (Final, Native, Public, BlueprintCallable)
	TEnumAsByte<EWeaponReloadMethod> GetCurReloadMethod();// sub_10796C0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetCrossHairInitSize
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetCrossHairInitSize();// sub_1079690()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetCrossHairBurstSpeed
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetCrossHairBurstSpeed();// sub_1079660()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetCrossHairBurstIncreaseSpeed
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetCrossHairBurstIncreaseSpeed();// sub_1079630()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetClipHasInfiniteBulletsFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetClipHasInfiniteBulletsFromEntity();// sub_1079600()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetChildMeshComp
	// (Final, Native, Public, BlueprintCallable)
	class UMeshComponent* GetChildMeshComp(const struct FName& compTag);// sub_1079570()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetBurstShootIntervalFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetBurstShootIntervalFromEntity();// sub_1079540()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetBurstShootInputIntervalFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetBurstShootInputIntervalFromEntity();// sub_1079510()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetBurstShootBulletsNumFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetBurstShootBulletsNumFromEntity();// sub_10794E0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetBulletTypeFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FItemDefineID GetBulletTypeFromEntity();// sub_10794A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetBulletRangeEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetBulletRangeEntity();// sub_1079470()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetBulletNumSingleShotFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetBulletNumSingleShotFromEntity();// sub_1079440()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetBulletFireSpeedFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetBulletFireSpeedFromEntity();// sub_1079410()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetBaseImpactDamageEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetBaseImpactDamageEntity();// sub_5696F0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetAvailableWeaponAttachmentSocketTypeList
	// (Final, Native, Public, BlueprintCallable)
	TArray<EWeaponAttachmentSocketType> GetAvailableWeaponAttachmentSocketTypeList();// sub_1079320()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetAutoReloadFromEntity
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetAutoReloadFromEntity();// sub_10792F0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetAttachmentSpecificID
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	int GetAttachmentSpecificID(EWeaponAttachmentSlotID slotID);// sub_1079260()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetADSManualStop
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char GetADSManualStop();// sub_1079170()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetAccessoriesVRecoilFactor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetAccessoriesVRecoilFactor();// sub_1079230()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetAccessoriesRecoveryFactor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetAccessoriesRecoveryFactor();// sub_1079200()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetAccessoriesHRecoilFactor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetAccessoriesHRecoilFactor();// sub_10791D0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.GetAccessoriesDeviationFactor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetAccessoriesDeviationFactor();// sub_10791A0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.EnableInfiniteBullets
	// (Final, Native, Public, BlueprintCallable)
	void EnableInfiniteBullets(unsigned char bEnable);// sub_10790E0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.ClientNotifyAmmo
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientNotifyAmmo(int InCurrentAmmoDatauint32_t ClipID);// sub_1079020()

	// Function ShadowTrackerExtra.STExtraShootWeapon.ClearWeaponAttrModifier
	// (Final, Native, Public, BlueprintCallable)
	void ClearWeaponAttrModifier();// sub_1079000()

	// Function ShadowTrackerExtra.STExtraShootWeapon.AutoSelectFireMode
	// (Final, Native, Public, BlueprintCallable)
	void AutoSelectFireMode();// sub_1078FB0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.AnimCall_ReloadTacticalWeapon
	// (Final, Native, Public, BlueprintCallable)
	void AnimCall_ReloadTacticalWeapon();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.AnimCall_ReloadChargeWeapon
	// (Final, Native, Public, BlueprintCallable)
	void AnimCall_ReloadChargeWeapon();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraShootWeapon.Anim_AmmoIn
	// (Final, Native, Public, BlueprintCallable)
	void Anim_AmmoIn();// sub_1078F90()


}