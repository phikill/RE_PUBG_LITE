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

// UserDefinedStruct BP_STRUCT_FriendProfile.BP_STRUCT_FriendProfile
// 0x01BC
struct FBP_STRUCT_FriendProfile
{
	int                                                sex_0_51770F314E97A4E85B85A283DEE1B898;                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                vipLevel_1_09F7328D426B1F997B84C98A9B6DBFF3;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastOnlineTime_3_A23193DB4F4D8DBF8A3585A84BA3A951;        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_4_68C1CAAF40C31038219DC0A179B37593;                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     platName_5_BCC4A9D74054617B341A44B7A356AB99;              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ladder_6_66B2CDA946B1B5D2D2A8D4AF452E2D01;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     picUrl_7_13A061C24E845B250CEABDBB0BC30D59;                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     gid_8_88BCB9CA4E6BC1B534A5E0B88A448EF1;                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     nickName_10_A0BB006C40A7F58195208E8A8E80CD46;             // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     applyMsg_12_D1916EAA4D2B47395FA30E94B1D42244;             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                teamState_19_F8685C3540B419C2089C2FBDBD641631;            // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_20_EA61FCB14B2074ABAED0D98F91A4BC88;               // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_21_4AA42FFB4FBC270C77DA9EAF117F8F33;    // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxTeamAmount_22_21D156A945651C42192BF9971E768909;        // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                timeSinceGameBegin_23_1C74E3FD466673D11616F3A04DDC837B;   // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_24_570786B0478A0089A73F5FB2EBA58EB4;               // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                createTime_30_8E7A2C6747B691DBEB68DBB2F4D0CDBE;           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                exp_31_57CB093F40CF21C108F544892CD45F3F;                  // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastLoginTime_32_D22C16C7467B94B3286167AFDECB0135;        // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                friendType_33_FDD913874EBCB7DA4D0B96833F938B97;           // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     createTimeStr_36_B0152FAF4D81C926D38B8797DACEC14A;        // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     lastOnlineTimeStr_37_3971926E4E07461BCACDDA9CD353337C;    // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     militaryRank_38_846230904D03F77AEE9624BFA9E3B5E6;         // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     timeSinceGameBeginStr_39_2703957043059A4511890C900BC32086;// 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_duo_40_2829E5D045D309EDC12C9290A2643CD1;     // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_solo_41_AE449EC14BB42B896029D2B9286CE9F4;    // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_squad_43_F6C69CCF45F0BB0CDFA396830A2296CA;   // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                endtime_44_AC2DD02D45CFE857BC9B018BE005E5C0;              // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rank_45_B5F45CB040C38B4E65FB45BB2CD2130B;                 // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FString                                     endtimeStr_46_09802CB9477DF0F0699EE092ADAFEF52;           // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                mode_47_C0B7C2B741C8376940C44F9CC7D7FBB5;                 // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                kill_48_EFF118CD46899F9F8F7F9787F4B3D893;                 // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                total_49_061D823946AA07152B4B4AA8CD440EDD;                // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FString                                     score_51_56A729ED472243B95F99D29152556FDF;                // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     modeStr_52_32FAC5354F59CD9CFFE0B3AE7CFBFE2B;              // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                lastInviteTime_53_893B9B504BAC0132E9BAB9882F4064E7;       // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                intimacy_54_044A5DD14AE5F829231C6D935DD35B40;             // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                showInviteIcon_55_AF5C9EA949A9AE721DC1249611AA7801;       // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastPresentCoinTime_56_81D481014B43D0F9D08427A6745A1523;  // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bPresentedCoin_58_173EEA844C986BF64C50CBB1303BF93A;       // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_59_4FA31B904F4BEDE7C86D58ADE0A20BA8;    // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                startup_type_60_CBF2A75F476270CA61453DA92D2449A4;         // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                qq_vip_61_3E6123544BA9E53B9D4454B8DF1300FA;               // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     remarks_name_62_F2C0036A4B8ECABC5DF2D58B887EDE1D;         // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                bNewMessage_63_EB2FCD5D4ED24C49C41DA290A42B091C;          // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bXiaoYue_64_D9EB0FD048953AEBC20056AB0500CA04;             // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     signature_65_9869494840E3EEAB94857CB4655F834C;            // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isFriend_66_2E17A2C3424B879EC525EE982C0031B1;             // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	int                                                distance_67_54CD86D84CA6706529022CA05776F3EE;             // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                playDate_68_FC860A5043DE519663796EA6A1A3D35D;             // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                playTime_69_DE572F604D59A7EEE9FDAF8ED04001EA;             // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cityId_73_CBE50B9B445A43A2513B838848A7AA29;               // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                tendency_74_80647A5F4D30A0CDB7F559AE6E2B4BF4;             // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                expertArea_2_82_4D6FDB504A4063597E7E0ABF334979C2;         // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                expertArea_1_83_2D32A52742CDB2B076FBF29DF8992A54;         // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                relation_84_505A4F03428259D42A677691DCB2A486;             // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isInnerFriendNotPlatFriend_85_345C4E524076CA80E1CAF5B770D44AF4;// 0x0194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	int                                                game_mode_86_380F3B07461500A45EFDC09EC3AC4B9F;            // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	struct FString                                     gameModeStr_87_5614E82647ADE4FB5E38ADBA3D554D1E;          // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                history_max_segment_level_88_0280A715492E563C3CE2B3A7F4CDF1A9;// 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isPlatFriend_89_02B938C051A9222B336584890B9AEA64;         // 0x01B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01B5(0x0003) MISSED OFFSET
	int                                                create_time_90_27802800398EE97A6875DAD1009883B5;          // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
