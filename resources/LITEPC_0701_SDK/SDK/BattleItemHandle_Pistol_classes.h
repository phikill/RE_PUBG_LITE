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

// BlueprintGeneratedClass BattleItemHandle_Pistol.BattleItemHandle_Pistol_C
// 0x0058 (0x01A0 - 0x0148)
class UBattleItemHandle_Pistol_C : public UBattleItemHandleBase_BP_C
{
public:
	struct FName                                       socket;                                                   // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraWeapon*                              TargetWeaponActor;                                        // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LogicSlotName;                                            // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWeaponManagerComponent*                     weaponManager;                                            // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeaponAttachmentSlot>               AvailableWeaponAttachment;                                // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<EWeaponAttachmentSocketType>                WeaponAttachmentSockTypeList;                             // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_Pistol.BattleItemHandle_Pistol_C");
		return ptr;
	}


	void LocalHandleDisuse();
	void GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void CreateWrapperOnGround();
	void JudgeHasTargetAttachmentSlot(int TypeSpecificID, bool* Ret);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
