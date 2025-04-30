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

// UserDefinedStruct BP_STRUCT_RoomWaitingInfo.BP_STRUCT_RoomWaitingInfo
// 0x0084
struct FBP_STRUCT_RoomWaitingInfo
{
	int                                                game_start_0_DB98D70E450D5F1C2CBE3AA11538E773;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                map_id_1_776BECA545D38EE4FDD3D1AECF733145;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     owner_name_2_DD7007704A9D0E714C2676A29AEFD1C6;            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                group_type_3_5D229F3D4158DB32A881AE8F82520499;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     name_4_227DD90047E11F7515483C8510697D06;                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     state_5_26BE14D04F72D98DFA8DA191292EA4D3;                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                id_6_2FCD4C5143826807F4BC1CB2539D8EC3;                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     owner_id_7_08C2A2C54381C8A26B70B886BEF82A5D;              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                player_count_8_E60306904F3F6BF80B25108DEB6406FC;          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     version_9_2B313E3A4D0AC5492D33A9A156C9A865;               // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               lock_state_10_F3674EC7420B12176706A5A900154DBB;           // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                create_time_11_60CE1E854D18D76D97180F9527517A71;          // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_room_player_12_59E51E40432978D1292898A5E2CF48D3;      // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_room_ob_13_0518A49E4262AF2A46B3F78E16267A5C;          // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ob_count_14_ECC4D8804E208750E4288087D6F96672;             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
