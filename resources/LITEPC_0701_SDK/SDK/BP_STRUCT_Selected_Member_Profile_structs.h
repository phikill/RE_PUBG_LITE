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

// UserDefinedStruct BP_STRUCT_Selected_Member_Profile.BP_STRUCT_Selected_Member_Profile
// 0x011C
struct FBP_STRUCT_Selected_Member_Profile
{
	int                                                exp_0_CDD52E554AF3B340FA9365AD79149F00;                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_1_1A3BC1C940A662E6B8C0E988003C1336;                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     lastOnlineTimeStr_2_3B3DF6184835282EDEF52BBDD65147B6;     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     militaryRank_3_38250D9945CDA64965778AB62A3F9275;          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                timeSinceGameBegin_4_CCE99D3E406EE9D493AA9BB487D4D935;    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastLoginTime_5_7FCF4515431C43143430939841776EB5;         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxTeamAmount_6_4A638CEE420D7091817EA7AF2A25AA6C;         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isCaptain_7_0E756887477C16624F3409AF8BA86385;             // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                vipLevel_8_E9728EF74CEBFC74DD55C8897BC76720;              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastOnlineTime_9_A3D7D17B477CFA7570E8248F852F49AF;        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamState_10_08F9BF9B4A68A3EA7DB192B7111E322D;            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_11_E2BE74ED4F8F679CA63BE89EBA461FA9;               // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_12_53D1575B43A96841371340B3BE555CA0;    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     applyMsg_13_532D041F4C322AD6AF1F519051E779B1;             // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                online_14_0E1EC2B144312B7DDEAF7AA79F4A4AC7;               // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_15_0367F5184BB9A39FE4108C8C36749367;                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ladder_16_5BD56EC44BD76322A36E10AF474DB2A2;               // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_duo_17_7104347749C5AF57E6A0DEA57B8D5B72;     // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     timeSinceGameBeginStr_18_59EAA9934CBF4BA9D45238891A5186BD;// 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                friendType_19_8E69B0214AF58BCF46FACE8771042C6B;           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_solo_20_581EC0394730EF04E8394B8382F4685C;    // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     nickName_21_9E4D507F4B532FCA633781BDDC087B09;             // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_squad_22_92DC8E9F4B8BC5D0664863A4F32A1D89;   // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     createTimeStr_23_7E82E8334BA6B7925F76769B7A8BB09E;        // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                createTime_24_9049FB7D4CC8AF29F52B7E9B4F9393CE;           // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FString                                     platName_25_DE30935043F6C7AA97EF63AB410E3772;             // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     gid_26_250F3F9343917154D3DA199C7D0565F8;                  // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     picUrl_27_C03FBB004FE6C113E5FED1BB4B3C3ABC;               // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     allianceId_28_C6587EEE46309F044E8BAAB3E6C65B5B;           // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isMyFriend_29_44E5A29244D90784F4D2B7830217216D;           // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	int                                                cur_avatar_box_id_30_5DE9FF7042384EEC2EB52CB25F7BB852;    // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     openId_33_39816482455140FC28E282A2C06FBDBC;               // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isInSnsGroup_34_2F8B87984F2975F20F5AC483F7B3C3EA;         // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	int                                                qq_vip_35_228069FF454F2A91160A13B6BB3BB244;               // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                startup_type_36_02DDC9F34260FF658D301694FEBCA81B;         // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
