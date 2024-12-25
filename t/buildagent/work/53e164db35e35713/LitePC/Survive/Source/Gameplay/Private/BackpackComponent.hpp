

// Class Gameplay.BackpackComponent
// //Class Gameplay.BackpackComponent
//0x0130 (0x0238 - 0x0108)
class UBackpackComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    ItemListUpdatedDelegate;                                  // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SingleItemUpdatedDelegate;                                // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SingleItemDeleteDelegate;                                 // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CapacityUpdatedDelegate;                                  // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationDelegate;                                    // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationFailedDelegate;                              // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemUpdatedDelegate;                                      // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ItemRemovedDelegate;                                      // 0x0188(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	TArray<struct FBattleItemData>                     ItemList;                                                 // 0x0198(0x0010) (Net, ZeroConstructor)
	TArray<struct FBattleItemData>                     CachItemList;                                             // 0x01A8(0x0010) (ZeroConstructor)
	TArray<class UItemHandleBase*>                     ItemHandleList;                                           // 0x01B8(0x0010) (ZeroConstructor)
	TMap<struct FItemDefineID, class UItemHandleBase*> ItemHandleMap;                                            // 0x01C8(0x0050) (ZeroConstructor)
	float                                              Capacity;                                                 // 0x0218(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OccupiedCapacity;                                         // 0x021C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0220(0x0018) MISSED OFFSET

	// Function Gameplay.BackpackComponent.UseItem
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char UseItem(const struct FItemDefineID& DefineIDconst struct FBattleItemUseTarget& TargetEBattleItemUseReason Reason);// sub_1993D90()

	// Function Gameplay.BackpackComponent.UpdateOccupiedCapacity
	// (Native, Event, Protected, BlueprintEvent)
	float UpdateOccupiedCapacity();// sub_3AD2B0()

	// Function Gameplay.BackpackComponent.UpdateCapacity
	// (Native, Event, Protected, BlueprintEvent)
	float UpdateCapacity();// sub_3AD2F0()

	// Function Gameplay.BackpackComponent.UnequipItem
	// (Final, Native, Public, BlueprintCallable)
	void UnequipItem(const struct FItemDefineID& DefineID);// sub_1993D00()

	// Function Gameplay.BackpackComponent.TryMergeItemHandles
	// (Final, Native, Protected, BlueprintCallable)
	void TryMergeItemHandles(const struct FItemDefineID& DefineID);// sub_1993C70()

	// Function Gameplay.BackpackComponent.TakeItem
	// (Final, Native, Public, BlueprintCallable)
	int TakeItem(const struct FItemDefineID& DefineIDint Countunsigned char bCallHandleDropunsigned char SaveLog);// sub_1993AE0()

	// Function Gameplay.BackpackComponent.SwapItem
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char SwapItem(const struct FItemDefineID& DefineID1const struct FItemDefineID& DefineID2);// sub_19939D0()

	// Function Gameplay.BackpackComponent.ReturnItem
	// (Final, Native, Public, BlueprintCallable)
	int ReturnItem(const struct FItemDefineID& DefineIDint Countunsigned char bCallHandlePickup);// sub_19932E0()

	// Function Gameplay.BackpackComponent.RemoveItemHandle
	// (Native, Public, BlueprintCallable)
	unsigned char RemoveItemHandle(const struct FItemDefineID& DefineID);// sub_1993090()

	// Function Gameplay.BackpackComponent.ReceiveItemList
	// (Native, Event, Protected, BlueprintEvent)
	void ReceiveItemList();// sub_E996C0()

	// Function Gameplay.BackpackComponent.ReceiveCapacity
	// (Native, Event, Protected, BlueprintEvent)
	void ReceiveCapacity();// sub_108F2A0()

	// Function Gameplay.BackpackComponent.PickupItem
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char PickupItem(const struct FItemDefineID& DefineIDconst struct FBattleItemPickupInfo& PickupInfoEBattleItemPickupReason Reason);// sub_1991F00()

	// Function Gameplay.BackpackComponent.OnRep_ItemList
	// (Final, Native, Protected)
	void OnRep_ItemList();// sub_1991EE0()

	// Function Gameplay.BackpackComponent.OnRep_Capacity
	// (Final, Native, Protected)
	void OnRep_Capacity();// sub_1991EC0()

	// Function Gameplay.BackpackComponent.NotifyItemUpdated
	// (Native, Public, BlueprintCallable)
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);// sub_1991E30()

	// Function Gameplay.BackpackComponent.NotifyItemRemoved
	// (Native, Public, BlueprintCallable)
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);// sub_1991DA0()

	// Function Gameplay.BackpackComponent.NotifyItemListUpdated
	// (Native, Public, BlueprintCallable)
	void NotifyItemListUpdated();// sub_1991D70()

	// Function Gameplay.BackpackComponent.NotifyCapacityUpdated
	// (Native, Public, BlueprintCallable)
	void NotifyCapacityUpdated();// sub_1991D40()

	// Function Gameplay.BackpackComponent.NewItemHandle
	// (Native, Event, Protected, BlueprintEvent, Const)
	class UBattleItemHandleBase* NewItemHandle(const struct FItemDefineID& DefineID);// sub_1991CA0()

	// Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState
	// (Final, Native, Protected, BlueprintCallable)
	void ModifyItemHandleEquippingState(class UItemHandleBase* ItemHandleunsigned char bEquipping);// sub_1991BD0()

	// Function Gameplay.BackpackComponent.ModifyItemHandleCount
	// (Final, Native, Protected, BlueprintCallable)
	void ModifyItemHandleCount(class UItemHandleBase* ItemHandleint Count);// sub_1991B10()

	// Function Gameplay.BackpackComponent.IsItemRedEmoteable
	// (Event, Public, BlueprintEvent)
	unsigned char IsItemRedEmoteable(const struct FItemDefineID& DefineID);// sub_1B0A820()

	// Function Gameplay.BackpackComponent.GetWorld_BP
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UWorld* GetWorld_BP();// sub_1991720()

	// Function Gameplay.BackpackComponent.GetItemListByDefineID
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TArray<struct FBattleItemData> GetItemListByDefineID(const struct FItemDefineID& DefineID);// sub_1991110()

	// Function Gameplay.BackpackComponent.GetItemHandleMap
	// (Native, Protected, BlueprintCallable)
	TMap<struct FItemDefineID, class UItemHandleBase*> GetItemHandleMap();// sub_19910D0()

	// Function Gameplay.BackpackComponent.GetItemHandleList
	// (Native, Protected, BlueprintCallable)
	TArray<class UItemHandleBase*> GetItemHandleList();// sub_1991040()

	// Function Gameplay.BackpackComponent.GetItemByDefineID
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FBattleItemData GetItemByDefineID(const struct FItemDefineID& DefineID);// sub_1990E70()

	// Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID);// sub_1990D00()

	// Function Gameplay.BackpackComponent.GetAllItemList
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	TArray<struct FBattleItemData> GetAllItemList();// sub_1990C00()

	// Function Gameplay.BackpackComponent.ForceNetUpdate
	// (Final, Native, Protected, BlueprintCallable)
	void ForceNetUpdate();// sub_1990A50()

	// Function Gameplay.BackpackComponent.EquipItem
	// (Final, Native, Public, BlueprintCallable)
	void EquipItem(const struct FItemDefineID& DefineID);// sub_1990990()

	// Function Gameplay.BackpackComponent.DropRedEmote
	// (Event, Public, BlueprintEvent)
	unsigned char DropRedEmote(const struct FItemDefineID& DefineID);// sub_1B0A820()

	// Function Gameplay.BackpackComponent.DropItem
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char DropItem(const struct FItemDefineID& DefineIDint CountEBattleItemDropReason Reason);// sub_1990870()

	// Function Gameplay.BackpackComponent.DisuseItem
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char DisuseItem(const struct FItemDefineID& DefineIDEBattleItemDisuseReason Reason);// sub_1990600()

	// Function Gameplay.BackpackComponent.CreateItemHandleInternal
	// (Native, Event, Protected, BlueprintEvent, Const)
	class UBattleItemHandleBase* CreateItemHandleInternal(const struct FItemDefineID& DefineID);// sub_1990520()

	// Function Gameplay.BackpackComponent.CreateItemHandle
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UItemHandleBase* CreateItemHandle(const struct FItemDefineID& DefineID);// sub_1990480()

	// Function Gameplay.BackpackComponent.ConsumeItem
	// (Final, Native, Public, BlueprintCallable)
	int ConsumeItem(const struct FItemDefineID& DefineIDint Count);// sub_1990370()

	// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate
	// (Net, NetReliable, Native, Event, Protected, NetClient)
	void ClientBroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineIDEBattleItemOperationType operationTypeEBattleItemOperationFailedReason FailedReason);// sub_1990260()

	// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate
	// (Net, NetReliable, Native, Event, Protected, NetClient)
	void ClientBroadcastItemOperationDelegate(const struct FItemDefineID& DefineIDEBattleItemOperationType operationTypeunsigned char Reason);// sub_1990150()

	// Function Gameplay.BackpackComponent.CheckCapacityForItem
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int CheckCapacityForItem(const struct FItemDefineID& DefineIDint Count);// sub_1990050()

	// Function Gameplay.BackpackComponent.ChangeItem
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	unsigned char ChangeItem(const struct FItemDefineID& DefineID1const struct FItemDefineID& DefineID2);// sub_198FF40()

	// Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate
	// (Final, Native, Public, BlueprintCallable)
	void BroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineIDEBattleItemOperationType operationTypeEBattleItemOperationFailedReason FailedReason);// sub_198FE30()

	// Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate
	// (Final, Native, Public, BlueprintCallable)
	void BroadcastItemOperationDelegate(const struct FItemDefineID& DefineIDEBattleItemOperationType operationTypeunsigned char Reason);// sub_198FD20()

	// Function Gameplay.BackpackComponent.AddRedEmote
	// (Event, Public, BlueprintEvent)
	unsigned char AddRedEmote(const struct FItemDefineID& DefineID);// sub_1B0A820()

	// Function Gameplay.BackpackComponent.AddItemHandle
	// (Native, Public, BlueprintCallable)
	unsigned char AddItemHandle(const struct FItemDefineID& DefineIDclass UItemHandleBase* ItemHandle);// sub_198FC30()


}

