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

// UserDefinedStruct BP_STRUCT_GlobalTips_TimeInfo.BP_STRUCT_GlobalTips_TimeInfo
// 0x0018
struct FBP_STRUCT_GlobalTips_TimeInfo
{
	bool                                               is_limit_0_C44FFA274459A428B4E947B664175E8A;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     time_s_1_F3B38E0D4CA07B5A44179194CBB4AC32;                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
