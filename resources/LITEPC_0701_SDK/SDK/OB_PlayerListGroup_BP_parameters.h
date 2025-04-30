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

// Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.OBPlayerChange
struct UOB_PlayerListGroup_BP_C_OBPlayerChange_Params
{
	struct FString                                     OBPlayerName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.RefreshData
struct UOB_PlayerListGroup_BP_C_RefreshData_Params
{
	TArray<struct FPlayerInfoInOB>                     PlayerDataList;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ObserverPlayerName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.Init
struct UOB_PlayerListGroup_BP_C_Init_Params
{
};

// Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.Construct
struct UOB_PlayerListGroup_BP_C_Construct_Params
{
};

// Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.ExecuteUbergraph_OB_PlayerListGroup_BP
struct UOB_PlayerListGroup_BP_C_ExecuteUbergraph_OB_PlayerListGroup_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
