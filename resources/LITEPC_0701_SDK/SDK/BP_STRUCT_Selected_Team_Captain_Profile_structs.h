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

// UserDefinedStruct BP_STRUCT_Selected_Team_Captain_Profile.BP_STRUCT_Selected_Team_Captain_Profile
// 0x011C
struct FBP_STRUCT_Selected_Team_Captain_Profile
{
	int                                                teamState_0_40BBD44A4C22F7629A1E0CB3E94FA564;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                exp_1_611B7D934711A3368C4E3092FEC3BE33;                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isCaptain_2_08E9125A478CD205B4EC03BC4CDC5FC7;             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                sex_3_5C8157A449BE394ED8CC8E90950D3A13;                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid_4_C5913D334DC5FA1FA1EE189D5FA8ACE6;                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ladder_5_5718B4824390BA04AA0755AE1E59DBC4;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_6_17C2FA284CEBD185B746A19C1B4E91D4;     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxTeamAmount_7_9552F7FA4649905402F77B967FDE28D1;         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isInSnsGroup_8_615F47FE4ED339D65A303593FF532F89;          // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                segment_info_solo_9_9174762041EAF51E8568538FB578ADDF;     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     applyMsg_10_56409A7D4DFB7BBF59C1CA91F9591AD1;             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     lastOnlineTimeStr_11_133DAF884C095DC8E433C5A9FD59039F;    // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                createTime_12_CA2F13BF4659B5E27F822086811777F7;           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_13_F3A02498479545B7A3811485A5EF5FAC;               // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastOnlineTime_14_C68EA26C4F2AC1F630D11A9CF7FA62DE;       // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     picUrl_15_4E4615854308186AE7B39AA29BE11AC1;               // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                lastLoginTime_16_2C0C568D4944A099ECE039A2483FD5BE;        // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     openId_17_D8A31E964087A583353BF3BFE06A9953;               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     timeSinceGameBeginStr_18_C91F8CC74B62FF45ED806EB9C6D5A75E;// 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     allianceId_19_3684DA82482D9C2449E3FD9FB14C2F89;           // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                qq_vip_20_EC401137494C863C9C5C88BAACB38F45;               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_duo_21_F257290B477D37D6CB190890EAC59387;     // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     nickName_22_45828F0A487DB36E6E2497A175F487E4;             // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                cur_avatar_box_id_23_F1FC65AF45F0425FC25A9A9157A9642C;    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isMyFriend_24_81A6F81241D2C01AEA54D88B93417580;           // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                timeSinceGameBegin_25_D50AF3C6467466EB0698AFAE2E66BC27;   // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_26_6DB66EDE4A8D4DB444FC6491096468B3;               // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     createTimeStr_27_FF0185E9464C9B19AA32018AA76B351C;        // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                friendType_28_CAED91294F3F18A072283E958B4D4073;           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_squad_29_53FD11844E1240503ACAB6AA96663B09;   // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_30_9835B96D41DA5C23F8B2C3A0DE437B21;                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                vipLevel_31_1706EC344C15985A30EF0881400F919C;             // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     militaryRank_32_6AD8403E412666AE0E5FA9A731800360;         // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     platName_33_EF7922FB49327BC262B827912918A815;             // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                startup_type_34_35AB82E74B488E65CCEA04BA7791126E;         // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
