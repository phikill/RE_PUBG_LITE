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

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetWeaponSkin
struct ABP_PlayerLobbyPawn_C_SetWeaponSkin_Params
{
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SpawnWeapon
struct ABP_PlayerLobbyPawn_C_SpawnWeapon_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.WeaponAttachComponent
struct ABP_PlayerLobbyPawn_C_WeaponAttachComponent_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Set Anim Pose
struct ABP_PlayerLobbyPawn_C_Set_Anim_Pose_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBattleItemFromResID
struct ABP_PlayerLobbyPawn_C_GetBattleItemFromResID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackAvatarHandle*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBPID
struct ABP_PlayerLobbyPawn_C_GetBPID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetHiddenFlags
struct ABP_PlayerLobbyPawn_C_GetHiddenFlags_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EAvatarSlotType>                            hiddenFlags;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UserConstructionScript
struct ABP_PlayerLobbyPawn_C_UserConstructionScript_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetReady
struct ABP_PlayerLobbyPawn_C_SetReady_Params
{
	bool*                                              bReady;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetHost
struct ABP_PlayerLobbyPawn_C_SetHost_Params
{
	bool*                                              bHost;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ShowHUD
struct ABP_PlayerLobbyPawn_C_ShowHUD_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideHUD
struct ABP_PlayerLobbyPawn_C_HideHUD_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveBeginPlay
struct ABP_PlayerLobbyPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateEquipedWeapon
struct ABP_PlayerLobbyPawn_C_UpdateEquipedWeapon_Params
{
	int*                                               ItemID;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.DestroyLobbyWeapon
struct ABP_PlayerLobbyPawn_C_DestroyLobbyWeapon_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ResetAnimPose
struct ABP_PlayerLobbyPawn_C_ResetAnimPose_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideEquippedWeapon
struct ABP_PlayerLobbyPawn_C_HideEquippedWeapon_Params
{
	bool*                                              InVal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetNickName
struct ABP_PlayerLobbyPawn_C_SetNickName_Params
{
	struct FString*                                    NewNickName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetRankEmblem
struct ABP_PlayerLobbyPawn_C_SetRankEmblem_Params
{
	ERatingRankType*                                   NewRankType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetLogout
struct ABP_PlayerLobbyPawn_C_SetLogout_Params
{
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetState
struct ABP_PlayerLobbyPawn_C_SetState_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ExecuteUbergraph_BP_PlayerLobbyPawn
struct ABP_PlayerLobbyPawn_C_ExecuteUbergraph_BP_PlayerLobbyPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
