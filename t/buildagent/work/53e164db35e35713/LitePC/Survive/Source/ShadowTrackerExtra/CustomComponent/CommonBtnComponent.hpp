

// Class ShadowTrackerExtra.CommonBtnComponent
// //Class ShadowTrackerExtra.CommonBtnComponent
//0x0020 (0x0128 - 0x0108)
class UCommonBtnComponent : public UActorComponent
{
public:
	TArray<TWeakObjectPtr<class APUBGDoor>>            TriggeredDoors;                                           // 0x0108(0x0010) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnDoorInteractable;                                       // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	// Function ShadowTrackerExtra.CommonBtnComponent.SetAutoOpenDoorMode
	// (Final, Native, Public, BlueprintCallable)
	void SetAutoOpenDoorMode(int Mode);// sub_A58710()

	// Function ShadowTrackerExtra.CommonBtnComponent.SetAutoOpenDoorEnable
	// (Final, Native, Public, BlueprintCallable)
	void SetAutoOpenDoorEnable(unsigned char bEnable);// sub_A58680()

	// Function ShadowTrackerExtra.CommonBtnComponent.IsAimingExtraDoor
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsAimingExtraDoor(class APUBGDoor* actionDoor);// sub_A57FA0()

	// Function ShadowTrackerExtra.CommonBtnComponent.DoorRequireRPC
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void DoorRequireRPC(class APUBGDoor* actionDoorunsigned char bAimingExtraDoor);// sub_A57BC0()

	// Function ShadowTrackerExtra.CommonBtnComponent.BP_SimulateUIClick
	// (Event, Public, BlueprintEvent)
	void BP_SimulateUIClick(unsigned char bExtraDoor);// sub_1B0A820()

	// Function ShadowTrackerExtra.CommonBtnComponent.BP_ShowDoorBtn
	// (Event, Public, BlueprintEvent)
	void BP_ShowDoorBtn(unsigned char bShowunsigned char bOpenint doorOpenMode);// sub_1B0A820()


}

