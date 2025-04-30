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

// UserDefinedStruct BP_STRUCT_LevelTaskInfos.BP_STRUCT_LevelTaskInfos
// 0x0032
struct FBP_STRUCT_LevelTaskInfos
{
	bool                                               reddot_0_026A96BD45E129C991B4F8AF3CFF281A;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_LevelTaskInfo>            BP_ARRAY_LevelTask_1_4489F7C741A559F586333BBA72247A76;    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                currentLevel_2_010C4848461EC8BFCA83C2AD3F0E9766;          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_TaskDropItem>             BP_ARRAY_SpecialDropList_3_13E08D4248CE07326528EFB328E54F56;// 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isIOSCheck_4_43B334E84D6271053171D58B6135FAEE;            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isTourist_5_D4F8A83744F394E90F5E7ABC453D9398;             // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
