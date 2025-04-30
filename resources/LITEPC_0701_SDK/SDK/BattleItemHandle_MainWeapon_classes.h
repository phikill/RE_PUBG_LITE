#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C
// 0x0108 (0x0250 - 0x0148)
class UBattleItemHandle_MainWeapon_C : public UBattleItemHandleBase_BP_C
{
public:
	class UWeaponManagerComponent*                     weaponManager;                                            // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       socket;                                                   // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0160(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeaponAttachmentSlot>               AvailableWeaponAttachment;                                // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ASTExtraWeapon*                              TargetWeaponActor;                                        // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MainLogicSlot1Name;                                       // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MainLogicSlot2Name;                                       // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EWeaponAttachmentSocketType, bool>            WeaponAttachmentSockTypeList;                             // 0x0198(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      BulletWrapperClass;                                       // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EWeaponAttachmentSocketType, class UBattleItemHandle_WeapAttachment_C*> EquipedWeapAttachments;                                   // 0x01F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bResetInitBulletInBullet;                                 // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPistol;                                                // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	struct FName                                       SubLogicSlotName;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C");
		return ptr;
	}


	void AutoEquipAttachments();
	void ReturnBullets(int Count);
	void UpdateEquipedAttach(EWeaponAttachmentSocketType WeapAttachSockType, class UBattleItemHandle_WeapAttachment_C* WeapAttachItemHandle, bool IsEquip);
	void LocalHandleDisuse(EBattleItemDisuseReason Reason);
	void CreateWrapperOnGround();
	void GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void JudgeHasTargetAttachmentSlot(int TypeSpecificID, EWeaponAttachmentSocketType AttachType, bool* CanEquip, bool* HasOcupied);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
