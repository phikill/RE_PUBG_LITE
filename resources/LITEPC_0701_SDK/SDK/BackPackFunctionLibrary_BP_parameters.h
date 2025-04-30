#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachmentSlotIDByResID
struct UBackPackFunctionLibrary_BP_C_GetWeaponAttachmentSlotIDByResID_Params
{
	int                                                attachresID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSlotID                            WeaponAttachmentSlotID;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsPistolGun
struct UBackPackFunctionLibrary_BP_C_IsPistolGun_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPistolGun;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGrenadeWeapon
struct UBackPackFunctionLibrary_BP_C_IsGrenadeWeapon_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGrenadeWeapon;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsMeleeWeapon
struct UBackPackFunctionLibrary_BP_C_IsMeleeWeapon_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMeleeWeapon;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachments
struct UBackPackFunctionLibrary_BP_C_GetWeaponAttachments_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsContainBullet;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Attachs;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByResID
struct UBackPackFunctionLibrary_BP_C_IsGunSupportAttachByResID_Params
{
	int                                                gunResID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                attachresID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               support;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByDefineID
struct UBackPackFunctionLibrary_BP_C_IsGunSupportAttachByDefineID_Params
{
	struct FItemDefineID                               gunDefine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               attachDefine;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UUAEUserWidget*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               support;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponSupportSocket
struct UBackPackFunctionLibrary_BP_C_GetWeaponSupportSocket_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EWeaponAttachmentSocketType>                socketList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponSupportAttachResID
struct UBackPackFunctionLibrary_BP_C_GetWeaponSupportAttachResID_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        attachID;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachPosByResID
struct UBackPackFunctionLibrary_BP_C_GetWeaponAttachPosByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        socket;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportBullet
struct UBackPackFunctionLibrary_BP_C_IsGunSupportBullet_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               bulletDefineID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSupport;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsBullet
struct UBackPackFunctionLibrary_BP_C_IsBullet_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBullet;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getItemTypeByDefineID
struct UBackPackFunctionLibrary_BP_C_getItemTypeByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByRes
struct UBackPackFunctionLibrary_BP_C_IsGunSupportAttachByRes_Params
{
	int                                                gunResID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                attachresID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               support;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getBPIDbyResID
struct UBackPackFunctionLibrary_BP_C_getBPIDbyResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getBPIDbyDefineID
struct UBackPackFunctionLibrary_BP_C_getBPIDbyDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByDefine
struct UBackPackFunctionLibrary_BP_C_IsGunSupportAttachByDefine_Params
{
	struct FItemDefineID                               gunDefine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               attachDefine;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UUAEUserWidget*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               support;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetVolAvatarConfigByResID
struct UBackPackFunctionLibrary_BP_C_GetVolAvatarConfigByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandle_AvatarBP_C*                Config;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsAttach
struct UBackPackFunctionLibrary_BP_C_IsAttach_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAttach;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGun
struct UBackPackFunctionLibrary_BP_C_IsGun_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGun;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetBattleItemByDefineID
struct UBackPackFunctionLibrary_BP_C_GetBattleItemByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemData                             BattleItemData;                                           // (Parm, OutParm)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponHandleByBPID
struct UBackPackFunctionLibrary_BP_C_GetWeaponHandleByBPID_Params
{
	int                                                BPID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandle_MainWeapon_C*              Handle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponHandleByResID
struct UBackPackFunctionLibrary_BP_C_GetWeaponHandleByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandle_MainWeapon_C*              Handle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachConfigByResID
struct UBackPackFunctionLibrary_BP_C_GetWeaponAttachConfigByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponAttachmentConfig                     Config;                                                   // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
