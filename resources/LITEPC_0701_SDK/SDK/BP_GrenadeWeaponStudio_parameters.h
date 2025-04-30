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

// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.ShowWeapon
struct ABP_GrenadeWeaponStudio_C_ShowWeapon_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.SetGrenadeItem
struct ABP_GrenadeWeaponStudio_C_SetGrenadeItem_Params
{
	TEnumAsByte<EGrenadeType>                          grenadeType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.OnLoaded
struct ABP_GrenadeWeaponStudio_C_OnLoaded_Params
{
};

// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.UserConstructionScript
struct ABP_GrenadeWeaponStudio_C_UserConstructionScript_Params
{
};

// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.SetItem
struct ABP_GrenadeWeaponStudio_C_SetItem_Params
{
	class ASTExtraWeapon**                             Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.ExecuteUbergraph_BP_GrenadeWeaponStudio
struct ABP_GrenadeWeaponStudio_C_ExecuteUbergraph_BP_GrenadeWeaponStudio_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
