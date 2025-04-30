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

// UserDefinedStruct BP_STRUCT_MyCorpsRankInfo.BP_STRUCT_MyCorpsRankInfo
// 0x0034
struct FBP_STRUCT_MyCorpsRankInfo
{
	int                                                award_num_0_526D5DF44DBC39B145E503BEDCDB0FF0;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_1_5974A1AD48BB5382B2A5C1A6F3C9EE5C;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                corps_id_2_DEEF23314F740D1BBD57D99718E7827D;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                members_cnt_3_0D92778040BE909D142283A6DE140AA5;           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                award_id_4_AEE493C64A37B22114DB26B98B483EA6;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     name_5_AC47844F49506F3B9CD77E9D9BB045BA;                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                icon_6_998E80204DB2E7A62A9977894210EB73;                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                score_7_310F7A5D443BC5A9DBB281B00DA55C3B;                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_cnt_8_35EC56AE48BB4E4F6FE5BCB56E4ED532;               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
