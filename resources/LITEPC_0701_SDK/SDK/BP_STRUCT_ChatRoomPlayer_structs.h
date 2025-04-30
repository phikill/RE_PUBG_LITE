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

// UserDefinedStruct BP_STRUCT_ChatRoomPlayer.BP_STRUCT_ChatRoomPlayer
// 0x007C
struct FBP_STRUCT_ChatRoomPlayer
{
	bool                                               isHost_0_F2CF40FB4C2BCA9C34EE1D831EA8B33B;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     id_2_C6C357DA4A610D710BA27C9DFE903782;                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     headUrl_4_5141DEF349472CC1BF1D59B58652495E;               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_5_30338FEB4696ABDD4B9A008C23D38A14;                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                gender_6_0EEFA2FA4E5A13C56359EDAF5FFC35DF;                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_13_E673F49E4A2B0948C6A132A9B4938648;    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_14_334C842B47838E52A4D4BDB8D4A8AB92;               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamState_15_3DB5300A4FC96A9B6576859FF98A29EE;            // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_16_AAF7EEFC4D6E732C2F645EB50877C1A5;               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                timeSinceGameBegin_17_5ED90A07408FA87CA8AA40AB12C44AE7;   // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxTeamAmount_18_91AAFEE84A4851707366E4BE3AC7031F;        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isSelf_19_17B0B5924EA03B1652C4089E8E5B6AEB;               // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isFriend_21_AE2924DA409BD9521FD380A4974E3D10;             // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isPullBlack_22_CC3B955C4F6D9125E73D92A1DA1B9635;          // 0x0056(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
	int                                                segmentInfoDuo_23_1A9621A946BD245E10D2D58570EB5F35;       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segmentInfoSquad_24_61ABA9E2428E16A0D5295DA3BD2DF976;     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segmentInfoSolo_25_3E947BEA40C945F917BF54BC6679D1DC;      // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_26_A4B1E05B489BD200093D24AB5DD0407B;    // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_27_B6B2FF50484F3A692DE8CE8F04D8A9BC;                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                history_max_segment_level_28_7A2B220442392AC04381E3BBAB0382B9;// 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segmentInfoFppSolo_29_2F3DF0404AD9F36D6644E85E0E39442F;   // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segmentInfoFppSquad_30_3A41A88068C55376646F83B40390EB94;  // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segmentInfoFppDuo_31_61BE130072BFCB427699E26E00E381DF;    // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
