

// Class ShadowTrackerExtra.AvatarComponent
// //Class ShadowTrackerExtra.AvatarComponent
//0x02E0 (0x05B0 - 0x02D0)
class UAvatarComponent : public USceneComponent
{
public:
	class UMeshComponent*                              MasterBoneComponent;                                      // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<int, struct FMeshData>                        avatarMeshList;                                           // 0x02D8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance)
	TMap<int, class UMeshComponent*>                   meshComponentList;                                        // 0x0328(0x0050) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst)
	TMap<int, struct FName>                            slotToSocket;                                             // 0x0378(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EAvatarSlotType, struct FMeshData>            DefaultAvataConfig;                                       // 0x03C8(0x0050) (BlueprintVisible, ZeroConstructor, Transient)
	int                                                gender;                                                   // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      isNeedRefresh : 1;                                        // 0x041C(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	TMap<struct FSoftObjectPath, class UBattleItemHandleBase*> PendingLoadRes;                                           // 0x0420(0x0050) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnAvatarEquipped;                                         // 0x0470(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x130];                                     // 0x0480(0x0130) MISSED OFFSET

	// Function ShadowTrackerExtra.AvatarComponent.ShowAttachmentByIndex
	// (Final, Native, Public, BlueprintCallable)
	void ShowAttachmentByIndex(int Indexunsigned char bIsVisible);// sub_1395520()

	// Function ShadowTrackerExtra.AvatarComponent.ResetComponentMaster
	// (Final, Native, Public, BlueprintCallable)
	void ResetComponentMaster();// sub_1394EC0()

	// Function ShadowTrackerExtra.AvatarComponent.ResetAllAvataSlot
	// (Final, Native, Public, BlueprintCallable)
	void ResetAllAvataSlot();// sub_1394EA0()

	// Function ShadowTrackerExtra.AvatarComponent.PutOnEquipmentByResID
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char PutOnEquipmentByResID(int resID);// sub_1394E00()

	// Function ShadowTrackerExtra.AvatarComponent.PutOnEquipmentByItemHandle
	// (Native, Public, BlueprintCallable)
	unsigned char PutOnEquipmentByItemHandle(class UBattleItemHandleBase* ItemHandleclass USkeletalMesh* skMeshclass UStaticMesh* stMesh);// sub_1394CF0()

	// Function ShadowTrackerExtra.AvatarComponent.PutOffEquimentByResID
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char PutOffEquimentByResID(int resID);// sub_1394C50()

	// Function ShadowTrackerExtra.AvatarComponent.PutOffEquiment
	// (Final, Native, Public, BlueprintCallable)
	unsigned char PutOffEquiment(int Slot);// sub_1394BC0()

	// Function ShadowTrackerExtra.AvatarComponent.OnAsyncLoadMesh
	// (Final, Native, Public, HasDefaults)
	void OnAsyncLoadMesh(const struct FSoftObjectPath& AssetRefunsigned char isReplaced);// sub_1394940()

	// Function ShadowTrackerExtra.AvatarComponent.LoadMeshsAsync
	// (Native, Public, BlueprintCallable)
	void LoadMeshsAsync(class UBattleItemHandleBase* handleListunsigned char needDirectLoad);// sub_1394870()

	// Function ShadowTrackerExtra.AvatarComponent.IsTeammate
	// (Native, Public, BlueprintCallable)
	unsigned char IsTeammate();// sub_1394840()

	// Function ShadowTrackerExtra.AvatarComponent.IsSlotHasEquipped
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsSlotHasEquipped(int Slot);// sub_13947B0()

	// Function ShadowTrackerExtra.AvatarComponent.IsNeedReplaced
	// (Native, Public, BlueprintCallable)
	unsigned char IsNeedReplaced(class UBackpackAvatarHandle* doReplaceHandle);// sub_1394710()

	// Function ShadowTrackerExtra.AvatarComponent.InitDefaultMesh
	// (Native, Public, BlueprintCallable)
	void InitDefaultMesh(class UBattleItemHandleBase* Handle);// sub_1394680()

	// Function ShadowTrackerExtra.AvatarComponent.GetStaticMesh
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	class UStaticMesh* GetStaticMesh(const struct FMeshPackage& meshPack);// sub_1394440()

	// Function ShadowTrackerExtra.AvatarComponent.GetSlotDefinedID
	// (Native, Public)
	struct FItemDefineID GetSlotDefinedID(int slotID);// sub_1394390()

	// Function ShadowTrackerExtra.AvatarComponent.GetSkeletalMesh
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	class USkeletalMesh* GetSkeletalMesh(const struct FMeshPackage& meshPack);// sub_13942D0()

	// Function ShadowTrackerExtra.AvatarComponent.GetMaterial
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	class UMaterialInstance* GetMaterial(const struct FMeshPackage& meshPack);// sub_1394210()

	// Function ShadowTrackerExtra.AvatarComponent.GetEquimentMeshBySlot
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	unsigned char GetEquimentMeshBySlot(int Slotstruct FMeshData* meshPack);// sub_13940E0()

	// Function ShadowTrackerExtra.AvatarComponent.GetApplyMeshType
	// (Native, Public, BlueprintCallable)
	EMeshType GetApplyMeshType(int Slot);// sub_1393E20()

	// Function ShadowTrackerExtra.AvatarComponent.ClearMeshBySlot
	// (Native, Public, BlueprintCallable)
	void ClearMeshBySlot(int Slotunsigned char putDefault);// sub_1393B60()

	// Function ShadowTrackerExtra.AvatarComponent.ClearMeshByItemHandle
	// (Native, Public, BlueprintCallable)
	void ClearMeshByItemHandle(class UBattleItemHandleBase* ItemHandle);// sub_1393AD0()

	// Function ShadowTrackerExtra.AvatarComponent.ApplyStaticMeshByID
	// (Native, Public, BlueprintCallable)
	unsigned char ApplyStaticMeshByID(int Slotclass UStaticMesh* pSMclass UMaterialInstance* Matclass UBattleItemHandleBase* Handle);// sub_1393810()

	// Function ShadowTrackerExtra.AvatarComponent.ApplySkeletalMeshByID
	// (Native, Public, BlueprintCallable)
	unsigned char ApplySkeletalMeshByID(int Slotclass USkeletalMesh* Meshclass UMaterialInstance* Matclass UBattleItemHandleBase* Handle);// sub_13936D0()

	// Function ShadowTrackerExtra.AvatarComponent.ApplyMesh
	// (Final, Native, Public, BlueprintCallable)
	void ApplyMesh(class UMeshComponent* Componentclass USkeletalMesh* SkeletalMeshclass UStaticMesh* StaticMesh);// sub_13935D0()

	// Function ShadowTrackerExtra.AvatarComponent.ApplyMaterial
	// (Native, Public, BlueprintCallable)
	void ApplyMaterial(class UBattleItemHandleBase* ItemHandleclass UMeshComponent* meshComp);// sub_1393500()

	// Function ShadowTrackerExtra.AvatarComponent.ApplyConfig
	// (Final, Native, Public, BlueprintCallable)
	void ApplyConfig();// sub_13934E0()


}

