

// Class ShadowTrackerExtra.BackpackPlaneAvatarHandle
// //Class ShadowTrackerExtra.BackpackPlaneAvatarHandle
//0x0060 (0x0128 - 0x00C8)
class UBackpackPlaneAvatarHandle : public UBattleItemHandleBase
{
public:
	TArray<struct FPlaneAvatarData>                    PlaneAvatarMats;                                          // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BackpackPlaneAvatarHandle.PlaneSkletalMesh
	unsigned char                                      UnknownData01[0x28];                                      // 0x0100(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BackpackPlaneAvatarHandle.PlaneStaticMesh

	// Function ShadowTrackerExtra.BackpackPlaneAvatarHandle.HandleUse
	// (Native, Event, Public, BlueprintEvent)
	unsigned char HandleUse(const struct FBattleItemUseTarget& TargetEBattleItemUseReason Reason);// sub_B5A570()

	// Function ShadowTrackerExtra.BackpackPlaneAvatarHandle.HandlePickup
	// (Native, Event, Public, HasOutParms, BlueprintEvent)
	unsigned char HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainerconst struct FBattleItemPickupInfo& PickupInfoEBattleItemPickupReason Reason);// sub_B5A380()

	// Function ShadowTrackerExtra.BackpackPlaneAvatarHandle.HandleDrop
	// (Native, Event, Public, BlueprintEvent)
	unsigned char HandleDrop(int InCountEBattleItemDropReason Reason);// sub_B5A2B0()

	// Function ShadowTrackerExtra.BackpackPlaneAvatarHandle.HandleDisuse
	// (Native, Event, Public, BlueprintEvent)
	unsigned char HandleDisuse(EBattleItemDisuseReason Reason);// sub_B5A220()

	// Function ShadowTrackerExtra.BackpackPlaneAvatarHandle.GetBackpackComponent
	// (Final, Native, Public, BlueprintCallable)
	class UBackpackComponent* GetBackpackComponent();// sub_B838B0()

	// Function ShadowTrackerExtra.BackpackPlaneAvatarHandle.CheckCanPickUp
	// (Final, Native, Public, BlueprintCallable)
	unsigned char CheckCanPickUp(class UCharacterAvatarComponent* avatarCompint nowCapcity);// sub_1393A10()


}

