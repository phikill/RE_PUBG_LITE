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

// UserDefinedStruct BP_STRUCT_MasterApplyInfo.BP_STRUCT_MasterApplyInfo
// 0x00F5
struct FBP_STRUCT_MasterApplyInfo
{
	int                                                segment_info_duo_0_881CB0844DDA51AB40EDEA9ABA4B96DA;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                createTime_1_12D27A024FC14E10A1560490C52FC260;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_squad_2_90E05F834BDB935548464ABA713084B0;    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                isFlag_3_F54287A441F932EEEB7F3DBD10A5DB7F;                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_4_19B9BAA844F3478D83652A9CED12CF81;     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastOnlineTime_5_066033A544F1A332C47D048F928121B3;        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                friendType_6_8D67D9B44150B7C41125A6A6A83CC97A;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_7_53794C224EE23B010379A9BADE72115C;                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_8_A90D85C9480A3BD841FF98B89DF1EB88;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_9_072D6E3B474867DE923004A44985A9F8;                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxTeamAmount_10_973571D047EB2BF3830ACE8734AFBD50;        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                timeSinceGameBegin_11_E9CF914D443C8C31577C748E3F78145A;   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     platName_12_1CC72E41495ED1FB6092CF922606EEF5;             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                teamState_13_3D6F1A73442E96D2ED2B23AD6AC285B1;            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_14_BC5924FC4EDA17EBFEB68BB73E6CC400;    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     timeSinceGameBeginStr_15_797CAE4C41D4269FB172CB994919E85F;// 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_16_CCD28905446AEF5446BF75BBBE679AF7;                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     createTimeStr_17_323D6A2B414792E3EB7831B958AF27CB;        // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ladder_18_6D85E42048829677B56996A04588BD73;               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                exp_19_3F50EEC24448C12C2B1B15A182550C30;                  // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                vipLevel_20_89EC686A4B094AFC2021A4AEFACC9BAC;             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     gid_21_06756CFD42ED8AE6C8327DB2C5A00C25;                  // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     militaryRank_22_5F3982BE443F19640DEA649F7379ED82;         // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     picUrl_23_6D0E34FA44D9C0FFCE7647B4E2588AA1;               // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     lastOnlineTimeStr_24_1A92CF96480930A0AEA1B3958769D608;    // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     nickName_25_DE3E8C244CCB7635F107AEBEA287B125;             // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_solo_26_8AED5EE34F77A7C1DBD5EC809C1E450A;    // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastLoginTime_27_5122FC3843E78EAAF2960BBE4A3C3496;        // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     applyMsg_28_977DA5D54A8BCE9467C1659B09FDE1F9;             // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                history_max_segment_level_29_CF8C78FA41722D46B2D604B9A411548F;// 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                qq_vip_30_69577E974FF372260DDE508163899D72;               // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                startup_type_31_612F50704710FDAA7B251DA3AEFBD38D;         // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isInnerFriend_32_7932A8C007832DCF12F5E43D09C2A0A4;        // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
