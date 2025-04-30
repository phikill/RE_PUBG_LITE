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

// Function OB_TeammateList_BP.OB_TeammateList_BP_C.RefreshData
struct UOB_TeammateList_BP_C_RefreshData_Params
{
	TArray<struct FPlayerInfoInOB>                     TeammateList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OB_TeammateList_BP.OB_TeammateList_BP_C.Construct
struct UOB_TeammateList_BP_C_Construct_Params
{
};

// Function OB_TeammateList_BP.OB_TeammateList_BP_C.ExecuteUbergraph_OB_TeammateList_BP
struct UOB_TeammateList_BP_C_ExecuteUbergraph_OB_TeammateList_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
