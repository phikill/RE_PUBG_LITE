#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_MasterTaskInfo.BP_STRUCT_MasterTaskInfo
// 0x002C
struct FBP_STRUCT_MasterTaskInfo
{
	struct FString                                     TaskDesc_0_C251AEEE47E30E66AB5B608362836D82;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TaskType_1_9FD02BD044B5C901F081EFBD3EA903AB;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TaskStatus_2_B581798442EAC9748DAFE081897D5DDB;            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     TaskName_3_B2B4444B45F846DFF1FBECB5FD059A71;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TaskIndex_4_052F4F524F48A50D4993C680ECEECCF5;             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
