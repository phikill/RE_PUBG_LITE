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

// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.SetWeaponAvatar
struct ASceneCaptureCharacterWeapon_C_SetWeaponAvatar_Params
{
	class UMeshComponent*                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponAvatarID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.SetMeleeWeapon
struct ASceneCaptureCharacterWeapon_C_SetMeleeWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.IsFindScopeSocket
struct ASceneCaptureCharacterWeapon_C_IsFindScopeSocket_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFind;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.UpdateAttachmentMesh
struct ASceneCaptureCharacterWeapon_C_UpdateAttachmentMesh_Params
{
	class ASTExtraWeapon*                              Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.SetShootWeapon
struct ASceneCaptureCharacterWeapon_C_SetShootWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.UserConstructionScript
struct ASceneCaptureCharacterWeapon_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
