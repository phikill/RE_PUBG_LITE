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

// UserDefinedStruct BP_STRUCT_Intimacy_Data.BP_STRUCT_Intimacy_Data
// 0x0074
struct FBP_STRUCT_Intimacy_Data
{
	int                                                level_0_7E68CE0D4941D712809799ACF0877723;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     nickName_1_3E5D3B3442796412EB503AB1C7843B31;              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     picUrl_2_67F164524B65C16B9774AC8F87702490;                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     signature_3_24C9002246F648F6B830778920EBFF0D;             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                vipLevel_4_D9D1E6024950B860062C5A9EF7D757E2;              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_5_EBD809D347C068036473C8BD8DA70D98;                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid_6_FDE92E1E40AD4942355D7C9B04BB6D14;                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                param_7_CD78BCB5430771FD7B3FA783C6D0F4E7;                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                state_8_1C66488844262395339163BFF772C68D;                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_squad_9_7E9F0BA8457E1C067159B483A4EB818F;    // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_solo_10_16E6071C4BFAA6ACF6D3D490BF22AA7D;    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_duo_11_7561816D4166C1361FA5FFAC09436C15;     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                intimacy_12_A40101234C232AB187CE219B4DE8F98B;             // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_13_FA196E2744F0265650F6AC8F856AD89F;    // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                relationSortPriority_14_A9B94E3347974FC07483EA90826CEEE7; // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                stateSortPriority_15_30C568F84F455B363AF654B4993B36D8;    // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
