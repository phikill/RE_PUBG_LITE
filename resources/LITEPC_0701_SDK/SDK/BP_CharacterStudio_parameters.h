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

// Function BP_CharacterStudio.BP_CharacterStudio_C.ChangeWeaponAttachment
struct ABP_CharacterStudio_C_ChangeWeaponAttachment_Params
{
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.ShowCharacter
struct ABP_CharacterStudio_C_ShowCharacter_Params
{
	bool                                               isShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.GetTPPWeaponSocketName
struct ABP_CharacterStudio_C_GetTPPWeaponSocketName_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WeaponSocketName;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.SetAnimPose
struct ABP_CharacterStudio_C_SetAnimPose_Params
{
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.PutOnWeapon
struct ABP_CharacterStudio_C_PutOnWeapon_Params
{
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.CreateWeapon
struct ABP_CharacterStudio_C_CreateWeapon_Params
{
	ESurviveWeaponPropSlot                             WeaponSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.PutOffWeapon
struct ABP_CharacterStudio_C_PutOffWeapon_Params
{
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.PutOffCharacterMesh
struct ABP_CharacterStudio_C_PutOffCharacterMesh_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.SetWeapon
struct ABP_CharacterStudio_C_SetWeapon_Params
{
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.InitCharacterState
struct ABP_CharacterStudio_C_InitCharacterState_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.PutOnCharacterMesh
struct ABP_CharacterStudio_C_PutOnCharacterMesh_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.UserConstructionScript
struct ABP_CharacterStudio_C_UserConstructionScript_Params
{
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.ReceiveBeginPlay
struct ABP_CharacterStudio_C_ReceiveBeginPlay_Params
{
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.ReceiveTick
struct ABP_CharacterStudio_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterStudio.BP_CharacterStudio_C.ExecuteUbergraph_BP_CharacterStudio
struct ABP_CharacterStudio_C_ExecuteUbergraph_BP_CharacterStudio_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
