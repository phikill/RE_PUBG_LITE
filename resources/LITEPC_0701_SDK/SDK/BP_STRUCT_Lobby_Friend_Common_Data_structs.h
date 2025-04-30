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

// UserDefinedStruct BP_STRUCT_Lobby_Friend_Common_Data.BP_STRUCT_Lobby_Friend_Common_Data
// 0x00E8
struct FBP_STRUCT_Lobby_Friend_Common_Data
{
	int                                                intimacy_0_A1F88D54457D8DFDFAA62B947015418F;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_1_4202DE0E4611F429C641FD99A067E943;                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     remarks_name_2_7384D1C0491A70D576AE409381E2DAC8;          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     picUrl_3_1A80C04D437DB1BE8D660F96B48DD4AD;                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ladder_4_339DA3AD4E5B72BBA4DC7794234517A2;                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                vipLevel_5_F9591E374665503E471671BBCED76FD8;              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isInnerFriendNotPlatFriend_6_0168DF3744CE474690944E974596619A;// 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                history_max_segment_level_7_664854C74C8141D245797584B7ED3850;// 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastLoginTime_8_8FB11EBD4AEC1B59BCAF6281BD277470;         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     militaryRank_9_6CA0DC134AAF6918EF606BAAAD586EF3;          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                exp_10_8FD371924744034DFE25769CC289FD47;                  // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                showInviteIcon_11_D03E96494D58F5ABB11465982247E5CF;       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_12_FB1DD38E412542D4779C9C88C090029B;               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_13_A07B9ECD45F3CD43F617E88A8DCB9D47;    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     nickName_14_285B4F264594D8CD512E71967CE1CCFC;             // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                startup_type_15_7EF574224C04CC2B0E45F5B8D907A647;         // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     signature_16_651E23AA4D2F27AFD7CF3E83C63E3346;            // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                bNewMessage_17_4BCCFA3A4F1B0C6390C50F8688C81D69;          // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     gid_18_EDBC7DE84715B27B127F97B65077A8AE;                  // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     platName_19_D926F3394081F8527A43D982EC5A06DB;             // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                lastOnlineTime_20_6796F4A54D87ED837A2A5083F0A78180;       // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bXiaoYue_21_4B81058049B681C6481D2B8F6A94573B;             // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     lastOnlineTimeStr_22_62D40C6E4D39E71A6E7A989140B9932B;    // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                lastInviteTime_23_F5BA90B3404A43907086E69F12A6E921;       // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                friendType_24_15F2A97043AA52A3FE9B7A9513761999;           // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_solo_25_83165FEA4B0C905F36E63B8DD884DC2D;    // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_26_0CA2AB6E46D895F17999739984621140;                // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_squad_27_4854C73B421BF937F1F1A3BB444942CF;   // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_duo_28_8226ACEB4D49307736CD7B96169455E7;     // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                qq_vip_29_874B9870414F7E96843D8494DD472794;               // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                relation_30_3B59A6534B489078C867089C407716BD;             // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
