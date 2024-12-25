

// Class ShadowTrackerExtra.BackpackWeaponAttachHandle
// //Class ShadowTrackerExtra.BackpackWeaponAttachHandle
//0x0180 (0x0248 - 0x00C8)
class UBackpackWeaponAttachHandle : public UBattleItemHandleBase
{
public:
	struct FWeaponAttachmentConfig                     WeaponAttachmentConfig;                                   // 0x00C8(0x0160) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UBackpackComponent*                          BackpackComp;                                             // 0x0228(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTslWeaponAttachmentData*                    TslWeaponAttachmentData;                                  // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	unsigned char                                      bNeedReturnBulletsWhenDisuseExtendMaxBulletDJ : 1;        // 0x0240(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET

	// Function ShadowTrackerExtra.BackpackWeaponAttachHandle.ReturnWeaponAdditionalBulletsToBackpack
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	void ReturnWeaponAdditionalBulletsToBackpack(class ASTExtraShootWeapon* Weaponint BulletNum);// sub_1B400C0()

	// Function ShadowTrackerExtra.BackpackWeaponAttachHandle.ResetNeedReturnBulletsWhenDisuseExtendMaxBulletDJ
	// (Final, Native, Public, BlueprintCallable)
	void ResetNeedReturnBulletsWhenDisuseExtendMaxBulletDJ();// sub_1B3FF10()

	// Function ShadowTrackerExtra.BackpackWeaponAttachHandle.HandleDisuseReplaceByNew
	// (Final, Native, Public, BlueprintCallable)
	void HandleDisuseReplaceByNew(class UBackpackWeaponAttachHandle* NewHandle);// sub_1B3F240()

	// Function ShadowTrackerExtra.BackpackWeaponAttachHandle.EquipOrUnEuipAttachment
	// (Final, Native, Public, BlueprintCallable)
	unsigned char EquipOrUnEuipAttachment(class ASTExtraShootWeapon* InWeaponunsigned char IsEquip);// sub_1B3D4D0()


}

