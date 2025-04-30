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

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.CreateMeshData
struct UCharacterAvatarComp_BP_C_CreateMeshData_Params
{
	struct FMeshPackage                                MeshPackage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FMeshData                                   Output;                                                   // (Parm, OutParm)
};

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.CheckShouldEquipItem
struct UCharacterAvatarComp_BP_C_CheckShouldEquipItem_Params
{
	int                                                slotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.PutOnDefaultEquipment
struct UCharacterAvatarComp_BP_C_PutOnDefaultEquipment_Params
{
	class UBackpackAvatarHandle*                       ItemHandle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.InitBodyMeshByHead
struct UCharacterAvatarComp_BP_C_InitBodyMeshByHead_Params
{
	int*                                               Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.GetBPID
struct UCharacterAvatarComp_BP_C_GetBPID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BPID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.GetBattleItemFromResID
struct UCharacterAvatarComp_BP_C_GetBattleItemFromResID_Params
{
	int                                                RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBackpackAvatarHandle*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.PutOffEquimentByResID
struct UCharacterAvatarComp_BP_C_PutOffEquimentByResID_Params
{
	int*                                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.PutOnEquipmentByResID
struct UCharacterAvatarComp_BP_C_PutOnEquipmentByResID_Params
{
	int*                                               resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.ReceiveBeginPlay
struct UCharacterAvatarComp_BP_C_ReceiveBeginPlay_Params
{
};

// Function CharacterAvatarComp_BP.CharacterAvatarComp_BP_C.ExecuteUbergraph_CharacterAvatarComp_BP
struct UCharacterAvatarComp_BP_C_ExecuteUbergraph_CharacterAvatarComp_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
