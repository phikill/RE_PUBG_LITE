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

// BlueprintGeneratedClass BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C
// 0x0000 (0x0028 - 0x0028)
class UBackPackFunctionLibrary_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C");
		return ptr;
	}


	void STATIC_GetWeaponAttachmentSlotIDByResID(int attachresID, class UUAEUserWidget* Widget, class UObject* __WorldContext, EWeaponAttachmentSlotID* WeaponAttachmentSlotID);
	void STATIC_IsPistolGun(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsPistolGun);
	void STATIC_IsGrenadeWeapon(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsGrenadeWeapon);
	void STATIC_IsMeleeWeapon(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsMeleeWeapon);
	void STATIC_GetWeaponAttachments(int WeaponId, bool IsContainBullet, class UObject* __WorldContext, TArray<int>* Attachs);
	void STATIC_IsGunSupportAttachByResID(int gunResID, int attachresID, class UUAEUserWidget* Widget, class UObject* __WorldContext, bool* support);
	void STATIC_IsGunSupportAttachByDefineID(const struct FItemDefineID& gunDefine, const struct FItemDefineID& attachDefine, class UUAEUserWidget* Widget, class UObject* __WorldContext, bool* support);
	void STATIC_GetWeaponSupportSocket(int WeaponId, class UUAEUserWidget* Widget, class UObject* __WorldContext, TArray<EWeaponAttachmentSocketType>* socketList);
	void STATIC_GetWeaponSupportAttachResID(int WeaponId, class UUAEUserWidget* Widget, class UObject* __WorldContext, TArray<int>* attachID);
	void STATIC_GetWeaponAttachPosByResID(int resID, class UUAEUserWidget* Widget, class UObject* __WorldContext, EWeaponAttachmentSocketType* socket);
	void STATIC_IsGunSupportBullet(class ASTExtraWeapon* Weapon, const struct FItemDefineID& bulletDefineID, class UObject* __WorldContext, bool* isSupport);
	void STATIC_IsBullet(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsBullet);
	void STATIC_getItemTypeByDefineID(const struct FItemDefineID& DefineID, class UObject* __WorldContext, int* ItemType);
	void STATIC_IsGunSupportAttachByRes(int gunResID, int attachresID, class UUAEUserWidget* Widget, class UObject* __WorldContext, bool* support);
	void STATIC_getBPIDbyResID(int resID, class UObject* __WorldContext, int* BPID);
	void STATIC_getBPIDbyDefineID(const struct FItemDefineID& DefineID, class UObject* __WorldContext, int* BPID);
	void STATIC_IsGunSupportAttachByDefine(const struct FItemDefineID& gunDefine, const struct FItemDefineID& attachDefine, class UUAEUserWidget* Widget, class UObject* __WorldContext, bool* support);
	void STATIC_GetVolAvatarConfigByResID(int resID, class UObject* Outer, class UObject* __WorldContext, class UBattleItemHandle_AvatarBP_C** Config);
	void STATIC_IsAttach(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsAttach);
	void STATIC_IsGun(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsGun);
	void STATIC_GetBattleItemByDefineID(const struct FItemDefineID& DefineID, class UUserWidget* Widget, class UObject* __WorldContext, struct FBattleItemData* BattleItemData);
	void STATIC_GetWeaponHandleByBPID(int BPID, class UObject* Outer, class UObject* __WorldContext, class UBattleItemHandle_MainWeapon_C** Handle);
	void STATIC_GetWeaponHandleByResID(int resID, class UObject* Outer, class UObject* __WorldContext, class UBattleItemHandle_MainWeapon_C** Handle);
	void STATIC_GetWeaponAttachConfigByResID(int resID, class UObject* Outer, class UObject* __WorldContext, struct FWeaponAttachmentConfig* Config);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
