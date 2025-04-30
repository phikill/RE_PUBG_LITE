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

// UserDefinedStruct BP_STRUCT_TaskInfo.BP_STRUCT_TaskInfo
// 0x0028
struct FBP_STRUCT_TaskInfo
{
	int                                                id_0_88834A424D4F392624399BAD12C8C127;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                progress_1_D5C076DA4B60F62188BFBD9F75E08A54;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     status_3_39DA97DB471A0C77A2D3A59A86E20795;                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_TaskDropItem>             BP_ARRAY_CurrentDropList_6_D6AE82F946297E943253AE820973C098;// 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
