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

// UserDefinedStruct BP_STRUCT_FriendProfile_ForGift.BP_STRUCT_FriendProfile_ForGift
// 0x01C4
struct FBP_STRUCT_FriendProfile_ForGift
{
	int                                                expertArea_1_0_361933C01E48C1F72FAAC21B024A81A1;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                qq_vip_1_41FB0F804BB4503051BA4AAE0B8C3710;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     remarks_name_2_432268C0234373993795E23309132695;          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                rank_3_413AF68074D9E5DE5ECF55D50A1B8B1B;                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     applyMsg_4_75863EC05FD80C6D64566AC40A49DE17;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     createTimeStr_5_02779A8070F4FA5443CDA62700BD81B2;         // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                kill_6_634FD6805857541A5E94062A0A1B137C;                  // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                history_max_segment_level_7_135F8B800D1BADA663D0772503806DBC;// 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                distance_8_2563BE40111B88C955C9874F0DF07E25;              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     militaryRank_9_483B2940414534310F47FABB03AD0EFB;          // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                timeSinceGameBegin_10_76636B80594D78847FFDC9E8067243FE;   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                exp_11_1BA21EC04D1A32036034C1DC05A1AC20;                  // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastLoginTime_12_4E14DA804C7669CE0897A16B0FBC9CD5;        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                expertArea_2_13_361A34001E48C1F82FAAC21A024A81A2;         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     picUrl_14_19AC474014B2EBA9502A675D0B62D69C;               // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     modeStr_15_3A7283007641E57427ADFA6F048F0B02;              // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     signature_16_0D39200017173B8868E5891009E905A5;            // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                game_mode_17_03D0130061F985EA2DFCA1830615A815;            // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ladder_18_04CD468074A9F92A1B3463DD0B2AF0D2;               // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamState_19_05767580592C7B0215D68E2B038B12C5;            // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cityId_20_6A352500106EF66C6F8DB83A0AADE7E4;               // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                startup_type_21_184DD88057B9AB8E1C7B3DA0080173C5;         // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bPresentedCoin_22_645130C02D77324F5B943AB7006E27DE;       // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                tendency_23_6B7D6200066E9A9A3FE921A40710BF09;             // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_squad_24_06F8CA40476A246144CB3F270B79F6F4;   // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastOnlineTime_25_006055800C63B40005931F1D0BB9D035;       // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isFriend_26_3877D8805254A2A43B81CADB0A82E144;             // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	int                                                playTime_27_2EB29CC0067C905F1B1E1EB20FD4B545;             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FString                                     gid_28_0E7E78802CA6B3AE6034AD8B05A1AD24;                  // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                lastPresentCoinTime_29_479C96C0696A7C072D8FD9650B46C285;  // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FString                                     nickName_30_35D1950001C6990A7CD6C9AD02C65D75;             // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                mode_31_7A2F94C07A6409D75ECE92490A1B48F5;                 // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FString                                     endtimeStr_32_330173402F8775A57445831200F96352;           // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                total_33_1729548014E0813E5270559901BBBFDC;                // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                intimacy_34_17324300490ACF1273BCAED308F62CA9;             // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     score_35_40B1728018FBF6B8575213FF01B95325;                // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                endtime_36_5DFAE500160FD1D257899B780C9E0F95;              // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FString                                     platName_37_704E580037D313DC1EB1FAFF0FD35D45;             // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_solo_38_6D59F200283B11A204F78DE508B7B3FF;    // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                relation_39_462C03001ABA7904493B50210772B5DE;             // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_40_278C11804D8AF4124F98CEF301B2191C;                // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_41_4EC4A080092CCF2856461DEA0BA63BE4;               // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     timeSinceGameBeginStr_42_3DB839C007C75F9725568D1804405D92;// 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                createTime_43_55AFEC4043ED73E760DFA81402B00BD5;           // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FString                                     lastOnlineTimeStr_44_4BB623C071BF38DB2FCA5FB20D031122;    // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                currentTeamAmount_45_49CC8B00497E4E685DBA39F20A91DD34;    // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isInnerFriendNotPlatFriend_46_660A1E0024606C9214D887A50C815B34;// 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	struct FString                                     gameModeStr_47_7902A180675566B60BF1693E03F71CF2;          // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                sex_48_0BA7FF80573F70726034B9B605A1B918;                  // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_49_4D208CC019BDC369354917950B6A7655;               // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxTeamAmount_50_0AE91BC04F1284BB7E1E81EC023C6284;        // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                friendType_51_2B9CF20007956986684164D8025375C5;           // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_duo_52_6DAEF4C063BFF82F0F3FB7960D8B48CF;     // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                vipLevel_53_50161D406DC0CB5703760F7E0D28D76C;             // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bXiaoYue_54_6B3AB5003AE2E5B04DC6A97A03AE6AC5;             // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_55_5248EA803D1EF12007A9F2CE0CF47E64;    // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastInviteTime_56_0E7C9800770E37BA0D7CD80D055852C5;       // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                playDate_57_1344B88003ECD1501E87A6750FD7B3D5;             // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bNewMessage_58_3B471FC0718C609575F85149026D0EF5;          // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                showInviteIcon_59_298CD9C018F49405775232480498083E;       // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                create_time_60_3A974C00689BC96055735C790B1CF215;          // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
