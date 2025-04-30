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

// UserDefinedStruct BP_STRUCT_AllianceRecruit.BP_STRUCT_AllianceRecruit
// 0x00EC
struct FBP_STRUCT_AllianceRecruit
{
	int                                                maxTeamAmount_0_E902600D4F2504485EA85C8D4C8E3358;         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_1_A240836C424D30C23F9E7F9F03105F8F;                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                vipLevel_2_69A66EFF41C4BBD56625C0A60298C363;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                createTime_3_6856CA9D4A97AA65797F8DB0DCA73F9C;            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_4_74F56B8344ABB88EF401E685970D9FB2;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                exp_5_C906C6E84DBE40E7869E00B8EA1DBD1E;                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_duo_6_54713A264DCF20F37E340C9847C5C029;      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_7_7FEDA2FC455D6E037E90858A006FB04B;                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     lastOnlineTimeStr_8_3565651F4CB68525C14C44A56C1607F4;     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                timeSinceGameBegin_9_F0B9C2E144EE09866F5A3AAA9EB05C52;    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     applyMsg_10_3D87E51E40E552233616A681FED9423A;             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                teamState_11_95B6E504458A62A98234D997F0304329;            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     createTimeStr_12_DC8676FC45EB1DE00DB4489A98FAE929;        // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     picUrl_13_86E5F4F74357F136EECCC7B95CBEE00A;               // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     platName_14_EB61752D489CD3B3690796B64863A383;             // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                friendType_15_B9980EC24BEB45080626C1A3ED8F1583;           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_16_9FA756FE4160635F285463A5B2DAC2AB;               // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     militaryRank_17_5DD43F02403D20B318B1C0A9A903EF28;         // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                currentTeamAmount_18_96493F9D4BE617AB41060C8A434B331D;    // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_squad_19_93147F65474EDE615DC6BCAEEB47D9F9;   // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastOnlineTime_20_3FEAEB0A4AA914C3B0A038B891AF2AC2;       // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ladder_21_F210BF9D4C43C764BA074F85D429B85A;               // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid_22_40F7E73341A6C718653C2F94CB45F10D;                  // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                lastLoginTime_23_C141EEE04E8D371D9BEA0390C2127386;        // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_solo_24_8C90F09C4AC9399D1B38AE9B05E896B6;    // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     nickName_25_71B5E2894E58AB8CDDB7FDBB0873951F;             // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     timeSinceGameBeginStr_26_E8002EAE49AEDA6CEA06C192B26B637E;// 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               hasSendInvite_27_6F8346414D0ADB95FDE65F975029614D;        // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	int                                                cur_avatar_box_id_28_888E18AE43A4F9451C29B9BFEF71DF22;    // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                history_max_segment_level_29_D055BA7348F67656FAB15299BC81E618;// 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
