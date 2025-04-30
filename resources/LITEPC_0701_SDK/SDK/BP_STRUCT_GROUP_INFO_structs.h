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

// UserDefinedStruct BP_STRUCT_GROUP_INFO.BP_STRUCT_GROUP_INFO
// 0x0024
struct FBP_STRUCT_GROUP_INFO
{
	int                                                teamState_0_6D1A339D4AAFD69D9A86B4BF16263FC5;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     timeSinceGameBeginStr_1_CE0F6F8743EE7218AF61B9934503FDE7; // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                online_2_0AD278084CF2B25F525F9A9465E24180;                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_4_369244904E5EADA1B2642AA3922A741F;     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxTeamAmount_5_584CAEA14C49B0D1C849DE8D72A69F5A;         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
