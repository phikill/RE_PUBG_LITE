

// Class ShadowTrackerExtra.PickUpListWrapperActor
// //Class ShadowTrackerExtra.PickUpListWrapperActor
//0x0020 (0x0590 - 0x0570)
class APickUpListWrapperActor : public APickUpWrapperActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0570(0x0020) MISSED OFFSET

	// Function ShadowTrackerExtra.PickUpListWrapperActor.RPC_Broadcast_NotifyAllClientsModifyCount
	// (Net, NetReliable, Native, Event, NetMulticast, Protected, BlueprintCallable, NetValidate)
	void RPC_Broadcast_NotifyAllClientsModifyCount(int ItemInstanceIDint RetCount);// sub_1524EF0()

	// Function ShadowTrackerExtra.PickUpListWrapperActor.RPC_Broadcast_ForceSyncAllData
	// (Net, NetReliable, Native, Event, NetMulticast, Protected, BlueprintCallable, NetValidate)
	void RPC_Broadcast_ForceSyncAllData(TArray<struct FPickUpItemData> DataList);// sub_1524D60()

	// DelegateFunction ShadowTrackerExtra.PickUpListWrapperActor.OnBoxEmptyDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnBoxEmptyDelegate__DelegateSignature(int boxId);// sub_1B0A820()

	// Function ShadowTrackerExtra.PickUpListWrapperActor.GetDataList
	// (Native, Public)
	TArray<struct FPickUpItemData> GetDataList();// sub_15240A0()

	// Function ShadowTrackerExtra.PickUpListWrapperActor.FinishPickedUp
	// (Native, Protected)
	void FinishPickedUp(class AActor* OwnerTargetint AdditionalParamconst struct FName& EquipSlotNameint PickUpCount);// sub_1523CE0()


}

