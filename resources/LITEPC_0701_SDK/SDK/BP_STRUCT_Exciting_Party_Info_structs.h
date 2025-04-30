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

// UserDefinedStruct BP_STRUCT_Exciting_Party_Info.BP_STRUCT_Exciting_Party_Info
// 0x00A0
struct FBP_STRUCT_Exciting_Party_Info
{
	int                                                mainActID_0_A7F589774B068F4A4F8D74B8B58E2CB5;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_Exciting_Party_Award_Info> BP_ARRAY_Exciting_Party_Award_Infos_1_CF05F085455BEC91B821E3A741AD5250;// 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     shareNum_2_69CC498744E4B0FB8FFE7B8B698B6AB6;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     title_3_885B6403449B299B9DE56FB7F24F8D35;                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemIdx_4_1913E6744DC0CDA00C15DDA82F7E797C;               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                status_5_AC2A1B644C589A681341868104DC8B71;                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     titleHide_6_59B1F9C24CDFA601A6D012849EBEE039;             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                openTime_7_F96BEB784A23D2F3AFD96D948773A79A;              // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     bigProgress_8_6ADF3FA940792CB1B19C3BB5398ED697;           // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     showName_9_325C6C9C4F2CD774DBA6EE9D5C1768D7;              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     openTimeStr_10_052991954CD18E0B2E4E32AF51D40402;          // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                actID_11_8D1D839A4E4EA971F762DCAC47F585DE;                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     targetNum_12_8CBE54CB459BA4047B5CA68162543D92;            // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
