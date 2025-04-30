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

// UserDefinedStruct BP_STRUCT_Invite_Alliance_Info.BP_STRUCT_Invite_Alliance_Info
// 0x00A5
struct FBP_STRUCT_Invite_Alliance_Info
{
	struct FString                                     aid_0_DA3BA3664FFF087EEB6289B67B25F233;                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                iconId_1_A08A6F9F4145404882335890DAFF45D6;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     icon_2_680082784B5FB29CF8417AA7422574E1;                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                teamworkValue_3_E0D082F24AA460571FE132AAFD8ECD53;         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     notice_4_F9DE3BF74B1A2DA8258F01BCDDD8F075;                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_AllianceMemberID_List_5_465156E24F24D3715D083085ABCFB230;// 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                bonusPercent_6_96A568A047741E0A48F1288747769921;          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     bind_group_7_D1E698404DA7EFEBB43D10B94CF2CB78;            // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                memberNum_8_399BAAC6430F7A69BFF6219970E45E9A;             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     name_9_A0809F99482CD4B8EA3E939890CEEC58;                  // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     captainName_10_9107EF004714EA4DE93FC9AE1199EABC;          // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     captainId_11_3C8D40864E280636B865E5B179E1DC3A;            // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                friendNum_12_7378E96D40CA7C7426F8E8BFB9B9B6DB;            // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isApplyed_13_BE1092A2477E7DB7889D44A8EB5AE6CE;            // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
