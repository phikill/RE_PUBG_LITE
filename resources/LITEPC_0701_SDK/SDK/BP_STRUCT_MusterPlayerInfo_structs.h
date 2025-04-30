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

// UserDefinedStruct BP_STRUCT_MusterPlayerInfo.BP_STRUCT_MusterPlayerInfo
// 0x0068
struct FBP_STRUCT_MusterPlayerInfo
{
	int                                                gender_0_5F9D18C06869FD9B45CC02810810DB42;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     url_1_056A50402CE336C351AD90BC091891CC;                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                qq_vip_2_11307F8000260EF067B4F3900953FE80;                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_3_767981807E4715F4245BA6B4089F85AC;                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     platName_4_5413C800008C231A364A8759061ACFF5;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                startup_type_5_75334880022466F876C0999F0538B855;          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_6_5C965A8052C9E07814500BDA05DA02B4;     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_solo_7_44AA7F405D207E030ADF057C0CE9D86F;          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_duo_8_164222004D18534844E7AE7F04CEAE9F;           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_squad_9_4456B78023E71B40544044890E9FAFB4;         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     uid_10_5E366C000A07CEF451AD92CE091896B4;                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_11_57E303C03B3799B93B855A92018994A5;                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
