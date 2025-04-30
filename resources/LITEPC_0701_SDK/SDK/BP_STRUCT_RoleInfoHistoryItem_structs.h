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

// UserDefinedStruct BP_STRUCT_RoleInfoHistoryItem.BP_STRUCT_RoleInfoHistoryItem
// 0x0085
struct FBP_STRUCT_RoleInfoHistoryItem
{
	struct FString                                     battle_id_0_BAB16CA04FAF0AF37CB29691FFCF7F53;             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     rating_1_FC2885A443B768AEB436EF9EF09BD3E1;                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                rank_2_FBC02A2844C3AA084AF7ACB389423D22;                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     time_4_A5EC36DA4C11C12025D78F955A301A2B;                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     battle_type_5_8E4F69C241A968E63097F8A84C91D992;           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     change_rating_6_B99EC66D4E63D0A094FB70AFA09E066C;         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_7_BC3A2CF44BCED11FE4E41F99E3DC55F2;               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     final_level_10_94646C7646C6FAE43BA207B1646AA7F6;          // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     kill_9_EC73003B44C2B3048F209E920B929681;                  // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                title_id_12_123BE31B4B73FB554A31FB810D99B5CE;             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               show_score_13_1A5FF40049621D6C1FDB3C2F06E40CC5;           // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
