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

// Function BP_WeaponStudio.BP_WeaponStudio_C.ShowWeapon
struct ABP_WeaponStudio_C_ShowWeapon_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponStudio.BP_WeaponStudio_C.SetWeaponAvatar
struct ABP_WeaponStudio_C_SetWeaponAvatar_Params
{
	class UMeshComponent*                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponAvatarID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponStudio.BP_WeaponStudio_C.InitAttachmentMesh
struct ABP_WeaponStudio_C_InitAttachmentMesh_Params
{
};

// Function BP_WeaponStudio.BP_WeaponStudio_C.IsEqualWeapon
struct ABP_WeaponStudio_C_IsEqualWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEqual;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponStudio.BP_WeaponStudio_C.IsFindScopeSocket
struct ABP_WeaponStudio_C_IsFindScopeSocket_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFind;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponStudio.BP_WeaponStudio_C.UpdateAttachmentMesh
struct ABP_WeaponStudio_C_UpdateAttachmentMesh_Params
{
};

// Function BP_WeaponStudio.BP_WeaponStudio_C.OnLoaded
struct ABP_WeaponStudio_C_OnLoaded_Params
{
};

// Function BP_WeaponStudio.BP_WeaponStudio_C.UserConstructionScript
struct ABP_WeaponStudio_C_UserConstructionScript_Params
{
};

// Function BP_WeaponStudio.BP_WeaponStudio_C.SetItem
struct ABP_WeaponStudio_C_SetItem_Params
{
	class ASTExtraWeapon**                             Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponStudio.BP_WeaponStudio_C.ExecuteUbergraph_BP_WeaponStudio
struct ABP_WeaponStudio_C_ExecuteUbergraph_BP_WeaponStudio_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
