

// Class ShadowTrackerExtra.BackpackBlueprintUtils
// //Class ShadowTrackerExtra.BackpackBlueprintUtils
//0x0240 (0x0268 - 0x0028)
class UBackpackBlueprintUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET
	TArray<struct FCreateBattleItemHandleAsyncRequest> PendingAsyncRequests;                                     // 0x00F8(0x0010) (ZeroConstructor)
	TMap<int, struct FItemRecordData>                  mapItemRecord;                                            // 0x0108(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, EWeaponAttachmentSocketType>             mapAttachPos;                                             // 0x0158(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPickupSetting                              PickupSetting;                                            // 0x01A8(0x0040) (Edit, BlueprintVisible)
	struct FPickupProposeData                          proposeData;                                              // 0x01E8(0x007C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0264(0x0004) MISSED OFFSET

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.MakeSkinDataFromItemDefineID
	// (Native, Event, Protected, HasOutParms, BlueprintEvent)
	struct FSkinData MakeSkinDataFromItemDefineID(const struct FItemDefineID& DefineID);// sub_1B3FA00()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.IsVirtualItemData
	// (Native, Event, Protected, HasOutParms, BlueprintEvent, Const)
	unsigned char IsVirtualItemData(const struct FBattleItemData& ItemData);// sub_1B3F940()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.InitialItemTable
	// (Native, Event, Protected, BlueprintEvent)
	void InitialItemTable();// sub_A57A70()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GetRawBattleTextByType
	// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
	struct FString GetRawBattleTextByType(EBattleTextType Type);// sub_1B3EDB0()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GetRawBattleTextByRawTextID
	// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
	struct FString GetRawBattleTextByRawTextID(int ID);// sub_1B3EC10()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GetItemSubTypeID
	// (Event, Public, BlueprintEvent)
	int GetItemSubTypeID(int SpecificID);// sub_1B0A820()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GetItemDataForGameLog
	// (Event, Protected, BlueprintEvent)
	struct FLogItem GetItemDataForGameLog(int ItemID);// sub_1B0A820()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GetCharacterVirtualItemInBackpack
	// (Native, Event, Protected, BlueprintEvent, Const)
	struct FBattleItemData GetCharacterVirtualItemInBackpack(class UBackpackComponent* BackpackComp);// sub_1B3E570()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GetCharacterVirtualItemHandleInBackpack
	// (Native, Event, Protected, BlueprintEvent, Const)
	class UBattleItemHandleBase* GetCharacterVirtualItemHandleInBackpack(class UBackpackComponent* BackpackComp);// sub_1B3E450()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GetBattleWeaponItemNameTextByDefineID
	// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	struct FText GetBattleWeaponItemNameTextByDefineID(const struct FItemDefineID& DefineID);// sub_1B3E290()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GetBattleWeaponItemDisplayDataByDefineID
	// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	struct FBattleWeaponItemDisplayData GetBattleWeaponItemDisplayDataByDefineID(const struct FItemDefineID& DefineID);// sub_1B3E100()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GetBattleItemHandlePath
	// (Native, Event, Public, BlueprintEvent, Const)
	struct FString GetBattleItemHandlePath(const struct FItemDefineID& DefineID);// sub_1B3DF40()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GetBattleItemFeatureDataByDefineID
	// (Native, Event, Protected, BlueprintEvent, Const)
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID);// sub_1B3DDD0()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.GenerateItemDefineIDByItemTableID
	// (Native, Event, Protected, HasOutParms, BlueprintEvent, Const)
	void GenerateItemDefineIDByItemTableID(int ItemTableIDint* Typeint* TypeSpecificID);// sub_1B3D790()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.CreateBattleItemHandle
	// (Native, Event, Protected, BlueprintEvent, Const)
	class UBattleItemHandleBase* CreateBattleItemHandle(const struct FItemDefineID& DefineIDclass UObject* Outer);// sub_1B3D1C0()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.ConstructBattleItemDataByItemTableID
	// (Native, Event, Protected, BlueprintEvent, Const)
	struct FBattleItemData ConstructBattleItemDataByItemTableID(int ItemTableID);// sub_1B3D050()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.ConstructBattleItemDataByDefineID
	// (Native, Event, Protected, BlueprintEvent, Const)
	struct FBattleItemData ConstructBattleItemDataByDefineID(const struct FItemDefineID& DefineID);// sub_1B3CEE0()

	// Function ShadowTrackerExtra.BackpackBlueprintUtils.AddCharacterVirtualItemToBackpack
	// (Native, Event, Protected, BlueprintEvent, Const)
	void AddCharacterVirtualItemToBackpack(class UBackpackComponent* BackpackCompclass ASTExtraBaseCharacter* Character);// sub_1B3CD20()


}

