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

// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.SetWeaponAvatar
struct ABP_MeleeWeaponStudio_C_SetWeaponAvatar_Params
{
	class UMeshComponent*                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponAvatarID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.ShowWeapon
struct ABP_MeleeWeaponStudio_C_ShowWeapon_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.OnLoaded
struct ABP_MeleeWeaponStudio_C_OnLoaded_Params
{
};

// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.UserConstructionScript
struct ABP_MeleeWeaponStudio_C_UserConstructionScript_Params
{
};

// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.SetItem
struct ABP_MeleeWeaponStudio_C_SetItem_Params
{
	class ASTExtraWeapon**                             Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.ExecuteUbergraph_BP_MeleeWeaponStudio
struct ABP_MeleeWeaponStudio_C_ExecuteUbergraph_BP_MeleeWeaponStudio_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
