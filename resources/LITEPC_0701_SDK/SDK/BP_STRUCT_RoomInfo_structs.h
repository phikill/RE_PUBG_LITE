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

// UserDefinedStruct BP_STRUCT_RoomInfo.BP_STRUCT_RoomInfo
// 0x0084
struct FBP_STRUCT_RoomInfo
{
	int                                                player_count_7_3C511CFC47DBC696B9C74790AFA73D83;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     owner_id_1_EC8BB0664920BD7961262791BFC2F3FB;              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     state_2_98C921C84A16218020746FAAABDB13E4;                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_3_4D2491D0400DCB399113168B562B27C9;                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                id_9_E0E04E1B4356DD24D82151AC8F3E8CD3;                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     owner_name_5_F933685E47BD8C88B9063EB06ABD7B60;            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                map_id_8_C36827ED47ACE4F3692212BA2948A845;                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                group_type_12_2579951649F014C9A6DE85906F80F49C;           // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                create_time_13_49E1E18F4D6C152561542D99BDD37F51;          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                game_start_14_E7C4BD4B4457B3F0720AFA98BBD026BC;           // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               lock_state_15_397B694144C77EE7DF88B4B628E86BEB;           // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FString                                     version_16_DF55A7EE4F7F54F7CB22968980FC1EE3;              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                max_room_ob_17_9F27B3614D3E06009605DB90DC56C70B;          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_room_player_18_918EBF384269FDDA4527FB950E0D0F43;      // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ob_count_19_C0D112D7448C794CAFABA084763A6B59;             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
