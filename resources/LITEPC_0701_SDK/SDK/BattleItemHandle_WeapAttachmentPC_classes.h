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

// BlueprintGeneratedClass BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C
// 0x0030 (0x0278 - 0x0248)
class UBattleItemHandle_WeapAttachmentPC_C : public UBackpackWeaponAttachHandle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class ASTExtraShootWeapon*                         Weapon;                                                   // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBackpackComponent*                          OwningBackpackComponent;                                  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraBaseCharacter*                       OwningCharacter;                                          // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandle_MainWeaponPC_C*            CachedWeaponHandle;                                       // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_WeapAttachmentPC.BattleItemHandle_WeapAttachmentPC_C");
		return ptr;
	}


	void CurBackpackCapacity(class UBattleItemHandle_WeapAttachmentPC_C* ItemHandle, bool* IsDrop);
	void CanSwap(class UBackpackWeaponAttachHandle* SpecificID, bool* Can);
	void FilterWeaponItemHandle(class UBattleItemHandleBase_BP_C* InputItemHandle, bool IsPickupDirectlyEquip, const struct FBattleItemPickupInfo& PickupInfo, struct FBattleItemUseTarget* Target, bool* HasTarget, class UBattleItemHandle_MainWeaponPC_C** TargetWeaponHandle, class ASTExtraWeapon** WeaponActor);
	struct FBattleItemData ExtractItemData();
	class UWorld* GetWorldInternal();
	void CreateWrapperOnGround(int Count);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	void ReturnWeaponAdditionalBulletsToBackpack(class ASTExtraShootWeapon** Weapon, int* BulletNum);
	void ExecuteUbergraph_BattleItemHandle_WeapAttachmentPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
