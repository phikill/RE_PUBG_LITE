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

// UserDefinedStruct BP_STRUCT_MailInfo.BP_STRUCT_MailInfo
// 0x0170
struct FBP_STRUCT_MailInfo
{
	struct FString                                     mail_title_0_216B7FC5446291EA75F46C8DEFBDE96B;            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                mail_id_3_CC8DE62C49B7A354DAD93B9F072AB68F;               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     mail_sender_4_97426852480411196A98308104BE4FEF;           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               mail_withattach_5_B91D765C400654ACF633BA9476F63058;       // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mail_attachtag_6_DE072A3A451AFBAC8E1B1EA22B86FD19;        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mail_readtag_7_F69D0D54487CEEF39542A4B275D25F9B;          // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FString                                     mail_content_8_63BACD6E408325F7FF91B2ABF832A284;          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     mail_time_15_95FF7D1345F73CFAC902FBA65404B267;            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                mail_sort_10_80B93CF8496B1FC8EA4FCC924E3DD4CC;            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_MailAttach>               BP_ARRAY_MailAttachList_11_77FB3C624D2FC92ED437938E2822CD5E;// 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               mail_top_12_7253FD7F4E2A9B48CB6EA9A82424590D;             // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     mail_lefttime_13_785456674240DC583B44519DAEE61087;        // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                mail_type_14_71A2FCC14C95F5B99D016589C1F72DC5;            // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mail_subtype_22_FF67A7FF4895E20D7CFEC1A12ED4873E;         // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mail_sender_presentedcoin_23_86FA7D104D446EAF93C185BC7C13E3C1;// 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     mail_sender_uid_24_5E104E1C43512918AD9DA6B81849D7B6;      // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     mail_sender_iconUrl_25_B006B0DD41009627452966995624C118;  // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                mail_sender_gender_26_F82B3DFB499564BD08058C8623D70BB2;   // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FString                                     mail_sendername_27_DA997FAA45FB9B54926573B900D7C50B;      // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               mail_msgcenter_alliance_finish_flag_29_3C23FF744AE28419702E9287307AB269;// 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	int                                                mail_msgcenter_msgtype_30_48840CA64B22A429C2AF0CA03F7CD8EE;// 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mail_msgcenter_styletype_31_2A4C767E4B7792AB49900BAA8E675243;// 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mail_msgcenter_btntype_32_FB27B26E4560DE1380843F987A3997AC;// 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     mail_msgcenter_golink_33_C87D4EF4444C4F7C442817BAD2D8B243;// 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     mail_msgcenter_alliance_announcement_34_A9DD2ACA4916A8173D5E409BCC6BB7A6;// 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     mail_msgcenter_alliance_team_id_35_AC51F8BD44361F1BA689C5927FA0534B;// 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                mail_msgcenter_alliance_bonus_36_3CC887704E858CB8CCE2D49546A4229E;// 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FString                                     mail_msgcenter_alliance_captain_name_37_44950174446FF8D6FBEEFEABE87356F9;// 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     mail_msgcenter_alliance_team_name_38_47DFB0014B3A9C7A7B32199B481DB20B;// 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     mail_msgcenter_alliance_invite_name_39_71946D0B406053A0B35FA6AA641AAE95;// 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                mail_msgcenter_alliance_teamwork_value_40_3A2F76854607927FDE899C970049FA69;// 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mail_msgcenter_finish_flag_41_3B21690C48753FC98CA886A8C9EC8036;// 0x0144(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	int                                                mail_msgcenter_can_invalid_42_6239DF9449ABF8E8E2380A98BE510062;// 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FString                                     mail_msgcenter_team_inviterid_43_511CA04079D5D18134410D7602D691D4;// 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     mail_msgcenter_btntext_44_3A74ED804CB9B6FC79BBA8C304DE3CB4;// 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
