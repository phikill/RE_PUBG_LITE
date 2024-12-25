

// Class ShadowTrackerExtra.CharacterAvatarComponent
// //Class ShadowTrackerExtra.CharacterAvatarComponent
//0x0110 (0x06C0 - 0x05B0)
class UCharacterAvatarComponent : public UAvatarComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05B0(0x0008) MISSED OFFSET
	TArray<struct FMeshSynData>                        defaultSynData;                                           // 0x05B8(0x0010) (Net, ZeroConstructor, Transient)
	int                                                Head;                                                     // 0x05C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	TMap<int, class UBackpackAvatarHandle*>            loadedItemList;                                           // 0x05D0(0x0050) (ZeroConstructor)
	TArray<class UBackpackAvatarHandle*>               itemHandleCache;                                          // 0x0620(0x0010) (ZeroConstructor)
	TMap<int, class UBackpackAvatarHandle*>            battleItemHandleMap;                                      // 0x0630(0x0050) (ZeroConstructor)
	TArray<int>                                        CleanSlot;                                                // 0x0680(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<int>                                        UpdateSlot;                                               // 0x0690(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x06A0(0x0020) MISSED OFFSET

	// Function ShadowTrackerExtra.CharacterAvatarComponent.UpdateSkinCharacterStudio
	// (Final, Native, Public, BlueprintCallable)
	void UpdateSkinCharacterStudio(int slotIDint ItemID);// sub_1D5A280()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.SetSkinMaterial
	// (Final, Native, Public, BlueprintCallable)
	unsigned char SetSkinMaterial(int slotIDunsigned char bHideBraunsigned char bHideUnderpant);// sub_1D59FC0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.SetNormalMaterial
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void SetNormalMaterial(struct FMeshPackage* meshPackclass UMeshComponent* meshCompint slotIDunsigned char bHideBraunsigned char bHideUnderpant);// sub_1D59DF0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.SetBodySuitsMaterial
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	unsigned char SetBodySuitsMaterial(struct FMeshPackage* meshPackclass UMeshComponent* meshCompunsigned char bHideBraunsigned char bHideUnderpants);// sub_1D59C50()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.SetAvatarVisibility
	// (Final, Native, Public, BlueprintCallable)
	void SetAvatarVisibility(EAvatarSlotType NULLunsigned char visibleunsigned char IsForCE);// sub_1D59B40()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.SetAvatarGender
	// (Final, Native, Public, BlueprintCallable)
	void SetAvatarGender(int AGender);// sub_1D59AC0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.SetAllMeshCollisionState
	// (Final, Native, Public, BlueprintCallable)
	void SetAllMeshCollisionState(unsigned char IsEnable);// sub_1D59A30()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.ServerUpdateAvatar
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void ServerUpdateAvatar(int slotIDint ItemID);// sub_1D59930()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.ServerCleanAvatar
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void ServerCleanAvatar(int slotID);// sub_1D59870()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.ReloadItemHandle
	// (Final, Native, Public, BlueprintCallable)
	class UBattleItemHandleBase* ReloadItemHandle(class UBattleItemHandleBase* Handle);// sub_1D59740()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.RefreshAvatar
	// (Final, Native, Public, BlueprintCallable)
	void RefreshAvatar();// sub_1D59720()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.PutOnEquipmentByItemHandle
	// (Native, Public, BlueprintCallable)
	unsigned char PutOnEquipmentByItemHandle(class UBattleItemHandleBase* ItemHandleclass USkeletalMesh* skMeshclass UStaticMesh* stMesh);// sub_1394CF0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.OnRep_SetDefaultCfg
	// (Final, Native, Public)
	void OnRep_SetDefaultCfg();// sub_1D596A0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.OnRep_CleanAvatar
	// (Final, Native, Public)
	void OnRep_CleanAvatar();// sub_1D59680()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.OnRep_AvatarMeshChanged
	// (Final, Native, Public)
	void OnRep_AvatarMeshChanged();// sub_1D59660()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.OnDefaultItemLoaded
	// (Final, Native, Public, BlueprintCallable)
	void OnDefaultItemLoaded(const struct FItemDefineID& DefineIDclass UBattleItemHandleBase* ItemHandle);// sub_1D59560()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.NetSyncDefData
	// (Final, Native, Public, BlueprintCallable)
	void NetSyncDefData(int Slotclass UBattleItemHandleBase* Handle);// sub_1D594A0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.NetSyncData
	// (Final, Native, Public, BlueprintCallable)
	void NetSyncData(int SlotESyncOperation Typeconst struct FItemDefineID& DefineIDTArray<EAvatarSlotType> hiddenFlags);// sub_1D59300()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.NetApplyHeadMesh
	// (Final, Native, Public, BlueprintCallable)
	void NetApplyHeadMesh(class UBattleItemHandleBase* Handle);// sub_1D59280()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.LoadAvatarAsyncCount
	// (Final, Native, Public)
	void LoadAvatarAsyncCount();// sub_1D59260()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.LoadAvatarAsync
	// (Final, Native, Public)
	void LoadAvatarAsync();// sub_1D59240()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.IsNeedReplaced
	// (Native, Protected, BlueprintCallable)
	unsigned char IsNeedReplaced(class UBackpackAvatarHandle* doReplaceHandle);// sub_1394710()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.InitMasterComponent
	// (Native, Public, BlueprintCallable)
	void InitMasterComponent(int AGender);// sub_1D58F20()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.InitialAvatarParam
	// (Native, Public, BlueprintCallable)
	void InitialAvatarParam(int AGender);// sub_1D2D850()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.InitDefaultMesh
	// (Native, Public, BlueprintCallable)
	void InitDefaultMesh(class UBattleItemHandleBase* Handle);// sub_1394680()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.InitDefaultAvatarByResID
	// (Native, Public, BlueprintCallable)
	void InitDefaultAvatarByResID(int avatarGenderint Headint Hair);// sub_1D58E30()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.InitDefaultAvatar
	// (Native, Public, BlueprintCallable)
	void InitDefaultAvatar(class UBattleItemHandleBase* Handle);// sub_1D58DA0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.InitBodyMeshByHead
	// (Native, Event, Public, BlueprintEvent)
	unsigned char InitBodyMeshByHead(int Head);// sub_1D58D00()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.GetSlotDefinedID
	// (Native, Public)
	struct FItemDefineID GetSlotDefinedID(int slotID);// sub_1394390()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.GetReplacedMeshResRef
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char GetReplacedMeshResRef(class UBackpackAvatarHandle* Handlestruct FSoftObjectPath* AssetRef);// sub_1D58BC0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.GetMeshResRef
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	unsigned char GetMeshResRef(class UBackpackAvatarHandle* Handlestruct FSoftObjectPath* AssetRef);// sub_1D58AC0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.GetFindSkinItemID
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	int GetFindSkinItemID(int InItemID);// sub_1D58A20()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.GetEquipmentSkinItemID
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	int GetEquipmentSkinItemID(int InItemID);// sub_1D58980()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.GetBaseSkinItemID
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	int GetBaseSkinItemID(int InItemID);// sub_1D58830()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.ClearMeshBySlot
	// (Native, Public, BlueprintCallable)
	void ClearMeshBySlot(int Slotunsigned char putDefault);// sub_1393B60()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.CleanSkinCharacterStudio
	// (Final, Native, Public, BlueprintCallable)
	void CleanSkinCharacterStudio(int slotIDint ItemID);// sub_1D58750()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.CheckShouldEquipDefaultItem
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char CheckShouldEquipDefaultItem(int Slot);// sub_1D58690()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.CheckIsDefaultAvatar
	// (Final, Native, Public, BlueprintCallable)
	unsigned char CheckIsDefaultAvatar(const struct FItemDefineID& definedID);// sub_1D585F0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.CheckEquippedHiddenSlot
	// (Final, Native, Public, BlueprintCallable)
	void CheckEquippedHiddenSlot(class UBackpackAvatarHandle* Handle);// sub_1D58570()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.CheckAlreadyEquipped
	// (Final, Native, Public, BlueprintCallable)
	void CheckAlreadyEquipped(int slotID);// sub_1D584F0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.CallItemHandleLoaded
	// (Final, Native, Public, BlueprintCallable)
	void CallItemHandleLoaded(const struct FItemDefineID& DefineIDclass UBattleItemHandleBase* ItemHandle);// sub_1D58410()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.ApplyStaticMeshByID
	// (Native, Public, BlueprintCallable)
	unsigned char ApplyStaticMeshByID(int Slotclass UStaticMesh* pSMclass UMaterialInstance* Matclass UBattleItemHandleBase* Handle);// sub_1393810()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.ApplySkeletalMeshByID
	// (Native, Public, BlueprintCallable)
	unsigned char ApplySkeletalMeshByID(int Slotclass USkeletalMesh* Meshclass UMaterialInstance* Matclass UBattleItemHandleBase* Handle);// sub_13936D0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.ApplyMeshCompCollision
	// (Final, Native, Public, BlueprintCallable)
	void ApplyMeshCompCollision(int slotID);// sub_1D582C0()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.ApplyMaterial
	// (Native, Public, BlueprintCallable)
	void ApplyMaterial(class UBattleItemHandleBase* ItemHandleclass UMeshComponent* meshComp);// sub_1393500()

	// Function ShadowTrackerExtra.CharacterAvatarComponent.ApplyAnimation
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void ApplyAnimation(int Slotstruct FMeshPackage* meshPack);// sub_1D581D0()


}

