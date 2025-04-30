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

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_KillNum
struct UOB_PlayerInfoPanel_BP_C_SetInfo_KillNum_Params
{
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_Ammo
struct UOB_PlayerInfoPanel_BP_C_SetInfo_Ammo_Params
{
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.OnOBPlayerBulletChanged
struct UOB_PlayerInfoPanel_BP_C_OnOBPlayerBulletChanged_Params
{
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.OnOBPlayerWeaponChanged
struct UOB_PlayerInfoPanel_BP_C_OnOBPlayerWeaponChanged_Params
{
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_Weapon
struct UOB_PlayerInfoPanel_BP_C_SetInfo_Weapon_Params
{
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_PlayerNameID
struct UOB_PlayerInfoPanel_BP_C_SetInfo_PlayerNameID_Params
{
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.OnOBPlayerItemChanged
struct UOB_PlayerInfoPanel_BP_C_OnOBPlayerItemChanged_Params
{
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_PlayerHPEnergy
struct UOB_PlayerInfoPanel_BP_C_SetInfo_PlayerHPEnergy_Params
{
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetArmorHelmetHP
struct UOB_PlayerInfoPanel_BP_C_SetArmorHelmetHP_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBattleItemAdditionalData>           AdditionData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UProgressBar*                                TargetPB;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetLvByID
struct UOB_PlayerInfoPanel_BP_C_SetLvByID_Params
{
	class UImage*                                      TargetImg;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetImgByIcon
struct UOB_PlayerInfoPanel_BP_C_SetImgByIcon_Params
{
	class UImage*                                      TargetImage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PathString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_BackpackHelmetArmor
struct UOB_PlayerInfoPanel_BP_C_SetInfo_BackpackHelmetArmor_Params
{
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_HealingNum
struct UOB_PlayerInfoPanel_BP_C_SetInfo_HealingNum_Params
{
};

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.ShowPlayerInfo
struct UOB_PlayerInfoPanel_BP_C_ShowPlayerInfo_Params
{
	struct FObservedData                               PlayerData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn*                                       OBPlayerPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
