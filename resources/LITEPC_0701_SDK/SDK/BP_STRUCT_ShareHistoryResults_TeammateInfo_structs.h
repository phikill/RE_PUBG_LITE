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

// UserDefinedStruct BP_STRUCT_ShareHistoryResults_TeammateInfo.BP_STRUCT_ShareHistoryResults_TeammateInfo
// 0x0071
struct FBP_STRUCT_ShareHistoryResults_TeammateInfo
{
	int                                                assist_num_0_7290347B4E1B139BC7CC4295B6EBF5FC;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     uid_1_927954AE443AABA0BFB5FE9E379CBE11;                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                kill_2_950F87AD422E90186D58E5B52DA3195E;                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gender_3_910CAA8541D83C0D08003B89145A84C6;                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     name_4_2F01287D44161B063E27EA94758BAEAE;                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_mvp_5_1E09E15041FB2BD28DDF68AD57DBAE64;                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                heal_amount_6_F68695DB486E26B407D9B29C7D3E5BB3;           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     final_score_8_0E7133204C3D46A4EF6C7F8188941184;           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                damage_amount_9_1D832F724EC2F216948EAE82CF41359C;         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     survive_time_10_179AFEBB4BBE7273176A8A93AC675485;         // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_TitleIDList_11_893728ED4BDB4AAD33802C8000B39986; // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_myself_12_CBDF81224803BE3F4E80D9A3A17BBEDB;            // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
