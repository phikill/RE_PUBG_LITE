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

// UserDefinedStruct BP_STRUCT_TeamUpMenuInfo.BP_STRUCT_TeamUpMenuInfo
// 0x0070
struct FBP_STRUCT_TeamUpMenuInfo
{
	struct FString                                     player_name_0_AC4BB02B4BAB0A57C0CC8BB35C138548;           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     player_id_3_5E070A5A451350DFEA7B928AC411EFFF;             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                player_status_5_C32C3D8E4A811B12B86C0B8CA89E1BC3;         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               player_online_4_625C8CC9452657A2F278B897DF80ABEC;         // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               player_isFriend_6_02EE2E5B495C5B1FEF678691889CE37D;       // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	int                                                player_position_7_B50A33B94FC6B2EAE4B0E28EC3D2AED3;       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               player_isSpeaking_8_9A8A49094A203D9C6C087384F5EA1564;     // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               player_openVoice_9_7B74A3194F4C86F300FD62A3D76C381D;      // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	int                                                player_gameStart_10_41815B8A47C408F8B226D0AD90A07336;     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     player_carteamName_11_DE30791E4BEF6562FDFFEC931B696D7F;   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                player_sex_12_7A33C0EE4F0D241BD801898D51C3AFDE;           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                player_credit_13_4A2812401029B19F5A31E34F016D9704;        // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     player_corpsIconUrl_14_30206C40442425A75BB8E31E0F0787FC;  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     player_corpsName_15_7882BD805202D03C507DC99A0BB85205;     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
