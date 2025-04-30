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

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.MakeSkinDataFromItemDefineID
struct UBackpackBlueprintUtils_BP_C_MakeSkinDataFromItemDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSkinData                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemDataForGameLog
struct UBackpackBlueprintUtils_BP_C_GetItemDataForGameLog_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLogItem                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddToWeaponAttachPos
struct UBackpackBlueprintUtils_BP_C_AddToWeaponAttachPos_Params
{
	int                                                attachID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSocketType                        socket;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitItemTable
struct UBackpackBlueprintUtils_BP_C_InitItemTable_Params
{
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandlePath
struct UBackpackBlueprintUtils_BP_C_GetBattleItemHandlePath_Params
{
	struct FItemDefineID*                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByRawTextID
struct UBackpackBlueprintUtils_BP_C_GetRawBattleTextByRawTextID_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByType
struct UBackpackBlueprintUtils_BP_C_GetRawBattleTextByType_Params
{
	EBattleTextType*                                   Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemSubTypeID
struct UBackpackBlueprintUtils_BP_C_GetItemSubTypeID_Params
{
	int*                                               SpecificID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleWeaponItemDisplayDataByDefineID
struct UBackpackBlueprintUtils_BP_C_GetBattleWeaponItemDisplayDataByDefineID_Params
{
	struct FItemDefineID*                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleWeaponItemDisplayData                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GenerateItemDefineIDByItemTableID
struct UBackpackBlueprintUtils_BP_C_GenerateItemDefineIDByItemTableID_Params
{
	int*                                               ItemTableID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TypeSpecificID;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsVirtualItemData
struct UBackpackBlueprintUtils_BP_C_IsVirtualItemData_Params
{
	struct FBattleItemData                             ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBPTableName
struct UBackpackBlueprintUtils_BP_C_GetBPTableName_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TypeSpecificID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BPTableName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemHandleInBackpack
struct UBackpackBlueprintUtils_BP_C_GetCharacterVirtualItemHandleInBackpack_Params
{
	class UBackpackComponent**                         BackpackComp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Character
struct UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Character_Params
{
	class UObject*                                     Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       BattleItemHandle;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Default
struct UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Default_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       BattleItemHandle;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureData
struct UBackpackBlueprintUtils_BP_C_GetBattleItemFeatureData_Params
{
	struct FItemDefineID                               DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemFeatureData                      FeatureData;                                              // (Parm, OutParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureDataByDefineID
struct UBackpackBlueprintUtils_BP_C_GetBattleItemFeatureDataByDefineID_Params
{
	struct FItemDefineID*                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemFeatureData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle
struct UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Params
{
	struct FItemDefineID*                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    Outer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemInBackpack
struct UBackpackBlueprintUtils_BP_C_GetCharacterVirtualItemInBackpack_Params
{
	class UBackpackComponent**                         BackpackComp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByItemTableID
struct UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByItemTableID_Params
{
	int*                                               ItemTableID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByDefineID
struct UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByDefineID_Params
{
	struct FItemDefineID*                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemTableRowByItemTableID
struct UBackpackBlueprintUtils_BP_C_GetItemTableRowByItemTableID_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Item_type                        ItemTableRow;                                             // (Parm, OutParm)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddCharacterVirtualItemToBackpack
struct UBackpackBlueprintUtils_BP_C_AddCharacterVirtualItemToBackpack_Params
{
	class UBackpackComponent**                         BackpackComp;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter**                      Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitialItemTable
struct UBackpackBlueprintUtils_BP_C_InitialItemTable_Params
{
};

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ExecuteUbergraph_BackpackBlueprintUtils_BP
struct UBackpackBlueprintUtils_BP_C_ExecuteUbergraph_BackpackBlueprintUtils_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
