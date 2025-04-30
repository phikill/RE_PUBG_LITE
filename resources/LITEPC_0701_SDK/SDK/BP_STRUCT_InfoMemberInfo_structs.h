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

// UserDefinedStruct BP_STRUCT_InfoMemberInfo.BP_STRUCT_InfoMemberInfo
// 0x00A8
struct FBP_STRUCT_InfoMemberInfo
{
	int                                                online_state_9_38DD19FA4E6FE637E062AE93AA8BEDC0;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                position_10_4DEB70924CA487D6F5F63685047E8E90;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO_11_9BFEEA2242913DBB1C4BA684559EDA59;  // 0x0008(0x0050) (Edit, BlueprintVisible)
	int                                                svr_12_7F8F8D334B15943C9CD7079524B4C525;                  // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                day_active_13_FED44365481D477690841BB401372D8F;           // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                week_active_14_F43237FF40A443D012C3DA993132BF4C;          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FBP_STRUCT_GROUP_INFO                       BP_STRUCT_GROUP_INFO_18_4E466C800A17C1EC08DFF68B05D1598F; // 0x0068(0x0028) (Edit, BlueprintVisible)
	int                                                season_active_20_5BCCD240033ECCEB31121D2404F7CA05;        // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FString                                     strId_21_5A037AC00A66E1BD648D46240C828364;                // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
