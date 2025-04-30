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

// UserDefinedStruct BP_STRUCT_TaskCategory.BP_STRUCT_TaskCategory
// 0x0028
struct FBP_STRUCT_TaskCategory
{
	bool                                               reddot_0_C9CDFD574D802906049300BEF6991A7A;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_TaskInfo>                 BP_ARRAY_Task_1_2D81696042CAE74F81A0FD833B658CF7;         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_2_27D155254A02C9DBEDDF0293D24C0EC0;                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
