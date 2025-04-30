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

// UserDefinedStruct BP_STRUCT_TeamUpModelInfo.BP_STRUCT_TeamUpModelInfo
// 0x0080
struct FBP_STRUCT_TeamUpModelInfo
{
	bool                                               is_lock_0_2E7309D54FB26E458BBDFAA66854FBAC;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     model_name_1_5ACC25D24EBC9AB20DBAF0B48829381D;            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                model_id_2_B3215FC948B4AE45510379B25112A6D6;              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_open_3_8E5C3D3B4BCD9E69A3A0E799E96D1D6E;               // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                player_num_4_AC57BF59478CE15C32BF28B5C2EF302A;            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                model_type_5_77F892B0492F323611706180EDAD6AFE;            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     player_num_name_6_9567C51843DA2781CF08DE992C5ADE82;       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_selected_7_38186D83479CD0AD9891158316D68AAF;           // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                seq_8_710D469C45762F078B547FA2328324E6;                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     model_sub_name_9_7A831E007C501B600B3DEA0209A07FB5;        // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                model_sub_name_type_10_488A664057A6C62F66B25A8F0B4CC795;  // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     model_name_hide_11_3FA4B20005279B4C225DFDD30C1659C5;      // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                perspective_type_12_1E1E2240156E3AB91E0AD4F8050262A5;     // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     perspective_name_13_4751BA0075E25FAE1E0A1C1F0502A6F5;     // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
