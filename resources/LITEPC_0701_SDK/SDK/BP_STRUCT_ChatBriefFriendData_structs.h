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

// UserDefinedStruct BP_STRUCT_ChatBriefFriendData.BP_STRUCT_ChatBriefFriendData
// 0x00B0
struct FBP_STRUCT_ChatBriefFriendData
{
	int                                                maxTeamAmount_0_E7ACA51649B9BA1082CC6BAF96FA7656;         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastOnlineTime_1_9069ECD84C10BCC1D33725A622884B9D;        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_2_F642812E4F7D4AE6EB5F9FB0687062A9;     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_squad_3_31DDABB64F46646D3655868C277EBA28;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_4_466B28A7420169ED925E1A97A8E7E2D5;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     militaryRank_5_630EC01A4A03D211AA1B11ADCD1038FD;          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_6_D3E27B0A4AD65089AFAACEA116523E3E;                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     nickName_7_68867FAE47CD38028C659B80A7D4F9C8;              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_duo_8_522E8C694A89E515CF6C988BE9AA9F33;      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     gid_9_BCDAB468440D6CDB1C3B198B38D600A6;                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     applyMsg_10_D02514704273EE94FBACEF82BCE7CAF8;             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     platName_11_4A0901624B1C6800661CEA98EAAAAF2C;             // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                teamState_12_ACF002CC478BAD409C8EFDAC5F0C54B8;            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_13_97B985ED418D97E7A3C462BB2AAE2479;                  // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                vipLevel_14_B72D115440B143A8DAAF0EBCEF886129;             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_15_FA56B32F4D33D980EBDFEAB398542C51;    // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     picUrl_16_13E61944448F9DB1133BEFA3971FF9E7;               // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_solo_17_2943343541B3FC95FDC1009C01B430EB;    // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                timeSinceGameBegin_18_2FB6548243B006C8EB113F90802B364C;   // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                op_19_34C91D28457379A0BC54B79D4AD40DA7;                   // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_20_114A00FD44301BF1CC15B0B7A771D620;               // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ladder_21_38A2C27344746F842735BB91AF21BEFF;               // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                history_max_segment_level_22_16BCD6B64EBBB0F09AB10FAE0004389B;// 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
