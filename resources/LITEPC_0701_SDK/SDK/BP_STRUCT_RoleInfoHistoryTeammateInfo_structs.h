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

// UserDefinedStruct BP_STRUCT_RoleInfoHistoryTeammateInfo.BP_STRUCT_RoleInfoHistoryTeammateInfo
// 0x0079
struct FBP_STRUCT_RoleInfoHistoryTeammateInfo
{
	bool                                               is_mvp_0_0B0B95FE4CFB1F8548FCE1972BC1B131;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     name_1_CE76FBC4494E05AFBB22B3815A06A8C3;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     final_score_2_533DC27E457610E5A4D5B08BAA26513A;           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                heal_amount_3_564EAAFA43C7D7BF0D9AFE94A9D499C9;           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     survive_time_4_E40CCA9A42848366C106AFA93B1EB202;          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                damage_amount_5_4FEC9F7C4319713F2CA448B72C61390D;         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     uid_6_59013A4A49EE431BD6E28291C4B47D92;                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                kill_7_7086D5CE4AEA168CDFC3B8BBAEA2AEDB;                  // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                assist_num_9_4F3E2ABC4FFBB50F4D652C82DB91B953;            // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gender_10_53DFC03747411F08DB84F789539C624B;               // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_TitleIDList_11_E1AE0C264409BA68DD165DB3895E6CB7; // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_friend_12_741ED7B444B6FF54CB3266972F131835;            // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
