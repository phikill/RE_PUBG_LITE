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

// Function KillInfoItem_BP.KillInfoItem_BP_C.RefreshWeaponIcon
struct UKillInfoItem_BP_C_RefreshWeaponIcon_Params
{
	class UObject*                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillInfoItem_BP.KillInfoItem_BP_C.GetIsDeadIcon
struct UKillInfoItem_BP_C_GetIsDeadIcon_Params
{
	bool                                               IsHeadshot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealthStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillInfoItem_BP.KillInfoItem_BP_C.GetIconByItemID
struct UKillInfoItem_BP_C_GetIconByItemID_Params
{
	int                                                inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KillInfoItem_BP.KillInfoItem_BP_C.GetWeapIcon
struct UKillInfoItem_BP_C_GetWeapIcon_Params
{
	int                                                DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalParam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PreviousHealthStatus;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  AsTexture_2D;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KillInfoItem_BP.KillInfoItem_BP_C.FileItem
struct UKillInfoItem_BP_C_FileItem_Params
{
	struct FClientFatalDamageRecordData                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function KillInfoItem_BP.KillInfoItem_BP_C.SwitchToMode2
struct UKillInfoItem_BP_C_SwitchToMode2_Params
{
};

// Function KillInfoItem_BP.KillInfoItem_BP_C.EventBeginAnim
struct UKillInfoItem_BP_C_EventBeginAnim_Params
{
};

// Function KillInfoItem_BP.KillInfoItem_BP_C.ExecuteUbergraph_KillInfoItem_BP
struct UKillInfoItem_BP_C_ExecuteUbergraph_KillInfoItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
