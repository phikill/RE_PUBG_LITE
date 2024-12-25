

// Class ShadowTrackerExtra.WeaponAvatarComponent
// //Class ShadowTrackerExtra.WeaponAvatarComponent
//0x0180 (0x0730 - 0x05B0)
class UWeaponAvatarComponent : public UAvatarComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05B0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnScopePreUnequipDelegate;                                // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScopeUnequipDelegate;                                   // 0x05C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<struct FMiniItem, struct FWeaponAttachmentConfig> attachmentRef;                                            // 0x05D8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x108];                                     // 0x0628(0x0108) MISSED OFFSET

	// Function ShadowTrackerExtra.WeaponAvatarComponent.SwapAttachment
	// (Final, Native, Public, BlueprintCallable)
	void SwapAttachment(EWeaponAttachmentSocketType slotIDunsigned char isExchange);// sub_1D2F170()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.PutOnEquipmentByItemHandle
	// (Native, Public, BlueprintCallable)
	unsigned char PutOnEquipmentByItemHandle(class UBattleItemHandleBase* ItemHandleclass USkeletalMesh* skMeshclass UStaticMesh* stMesh);// sub_1394CF0()

	// DelegateFunction ShadowTrackerExtra.WeaponAvatarComponent.OnScopeUnequipDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnScopeUnequipDelegate__DelegateSignature(EWeaponAttachmentSocketType AttachmentSocketType);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.WeaponAvatarComponent.OnScopeEquipDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnScopeEquipDelegate__DelegateSignature(EWeaponAttachmentSocketType AttachmentSocketType);// sub_1B0A820()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.OnMeshLoaded
	// (Final, Native, Public, HasDefaults, BlueprintCallable)
	void OnMeshLoaded(const struct FSoftObjectPath& AssetListclass UBattleItemHandleBase* itemHandlesunsigned char isReplaced);// sub_1D2DD80()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.OnItemHandleLoaded
	// (Final, Native, Public, BlueprintCallable)
	void OnItemHandleLoaded(const struct FItemDefineID& DefineIDclass UBattleItemHandleBase* ItemHandle);// sub_1D2DCA0()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.OnAttachItemLoaded
	// (Final, Native, Public, BlueprintCallable)
	void OnAttachItemLoaded(const struct FItemDefineID& DefineIDclass UBattleItemHandleBase* ItemHandle);// sub_1D2DBA0()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.NetSyncData
	// (Final, Native, Public, BlueprintCallable)
	void NetSyncData(int SlotESyncOperation Typeclass UBattleItemHandleBase* Handle);// sub_1D2DAA0()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.LoadMeshsAsync
	// (Native, Public, BlueprintCallable)
	void LoadMeshsAsync(class UBattleItemHandleBase* handleListunsigned char needDirectLoad);// sub_1394870()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.IsTeammate
	// (Native, Public, BlueprintCallable)
	unsigned char IsTeammate();// sub_1394840()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.IsAutonomousAvatar
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsAutonomousAvatar();// sub_1D2D8E0()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.InitialAvatarParam
	// (Native, Public, BlueprintCallable)
	void InitialAvatarParam(int AGender);// sub_1D2D850()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.InitDefaultMesh
	// (Native, Public, BlueprintCallable)
	void InitDefaultMesh(class UBattleItemHandleBase* Handle);// sub_1394680()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.GetStaticMesh
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	class UStaticMesh* GetStaticMesh(const struct FWeaponMeshCfg& meshPack);// sub_1D2D590()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.GetSocketName
	// (Native, Public, BlueprintCallable)
	struct FName GetSocketName(int slotIDint subSlotID);// sub_1D2D4C0()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.GetSkeletalMesh
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	class USkeletalMesh* GetSkeletalMesh(const struct FWeaponMeshCfg& meshPack);// sub_1D2D3D0()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.GetMeshResRef
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char GetMeshResRef(class UBackpackWeaponAttachHandle* Handlestruct FSoftObjectPath* AssetRef);// sub_1D2D2B0()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.GetAttachmentSocketTransform
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UMeshComponent* GetAttachmentSocketTransform(int slotID);// sub_1D2D1F0()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.GetAttachmentAnim
	// (Final, Native, Public, BlueprintCallable)
	class UAnimationAsset* GetAttachmentAnim(EWeaponAttachmentSocketType slotIDint AnimIdx);// sub_1D2D130()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.ClearMeshBySlot
	// (Native, Public, BlueprintCallable)
	void ClearMeshBySlot(int Slotunsigned char putDefault);// sub_1393B60()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.ClearMeshByItemHandle
	// (Native, Public, BlueprintCallable)
	void ClearMeshByItemHandle(class UBattleItemHandleBase* ItemHandle);// sub_1393AD0()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.ApplyStaticMeshByID
	// (Native, Public, BlueprintCallable)
	unsigned char ApplyStaticMeshByID(int Slotclass UStaticMesh* pSMclass UMaterialInstance* Matclass UBattleItemHandleBase* Handle);// sub_1393810()

	// Function ShadowTrackerExtra.WeaponAvatarComponent.ApplySkeletalMeshByID
	// (Native, Public, BlueprintCallable)
	unsigned char ApplySkeletalMeshByID(int Slotclass USkeletalMesh* Meshclass UMaterialInstance* Matclass UBattleItemHandleBase* Handle);// sub_13936D0()


}

