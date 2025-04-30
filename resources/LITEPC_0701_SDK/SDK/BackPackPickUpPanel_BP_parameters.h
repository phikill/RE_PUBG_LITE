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

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.AddToWeaponAttachPos
struct UBackPackPickUpPanel_BP_C_AddToWeaponAttachPos_Params
{
	int                                                attachID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EWeaponAttachmentSocketType                        socket;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.IsGunSupportAttachByRes
struct UBackPackPickUpPanel_BP_C_IsGunSupportAttachByRes_Params
{
	int                                                gunResID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                attachresID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               support;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.IsGunSupportAttachByDefine
struct UBackPackPickUpPanel_BP_C_IsGunSupportAttachByDefine_Params
{
	struct FItemDefineID                               gunDefine;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               attachDefine;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               support;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponSupportSocket
struct UBackPackPickUpPanel_BP_C_GetWeaponSupportSocket_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EWeaponAttachmentSocketType>                socketList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponSupportAttachResID
struct UBackPackPickUpPanel_BP_C_GetWeaponSupportAttachResID_Params
{
	int                                                WeaponId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        attachID;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponAttachPosByResID
struct UBackPackPickUpPanel_BP_C_GetWeaponAttachPosByResID_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        socket;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.HideBackpackPanel
struct UBackPackPickUpPanel_BP_C_HideBackpackPanel_Params
{
};

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.OnCloseBackPack
struct UBackPackPickUpPanel_BP_C_OnCloseBackPack_Params
{
};

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.ReceivedInitWidget
struct UBackPackPickUpPanel_BP_C_ReceivedInitWidget_Params
{
};

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.Tick
struct UBackPackPickUpPanel_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.ExecuteUbergraph_BackPackPickUpPanel_BP
struct UBackPackPickUpPanel_BP_C_ExecuteUbergraph_BackPackPickUpPanel_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
