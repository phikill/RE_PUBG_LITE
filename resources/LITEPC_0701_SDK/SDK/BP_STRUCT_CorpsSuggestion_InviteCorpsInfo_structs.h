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

// UserDefinedStruct BP_STRUCT_CorpsSuggestion_InviteCorpsInfo.BP_STRUCT_CorpsSuggestion_InviteCorpsInfo
// 0x0088
struct FBP_STRUCT_CorpsSuggestion_InviteCorpsInfo
{
	int                                                friend_num_0_21CBEB002829DDBE1A0252C60F580CED;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     name_1_74AAC98038C1722E56049A4F05203795;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     recomm_name_2_73CF820009E5ADB05363B8CC03DBE425;           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     city_3_590C0F801A16C53057B2FA3C051FF119;                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_4_003A674035DE9013202456480205D6EC;                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                activeness_5_2D3D4E805347667C3AFBF00C05D547B3;            // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                invite_status_6_08AE65C04F9434617A009D240FEDD0A3;         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     icon_8_28BFEB8001BE6F8657BDCAA2051F89FE;                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_Corps_MemberList_11_1B6DEB802EB4861E166E0E05099DBCB4;// 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     corps_id_str_10_1C0A44005C51B7CC2ADCC4640A0F5812;         // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     commander_id_12_1F9039C0086D08270F954E450B59E384;         // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
