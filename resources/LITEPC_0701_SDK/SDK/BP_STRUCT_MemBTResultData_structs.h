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

// UserDefinedStruct BP_STRUCT_MemBTResultData.BP_STRUCT_MemBTResultData
// 0x0090
struct FBP_STRUCT_MemBTResultData
{
	struct FString                                     Name_0_DFDA3DC143AAE955AA8105BAF2ADCD38;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     State_1_48C8DC874029DCADB2E3DBAEF5DD9D82;                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Kill_2_DA4DC35B4BB8501F720144829B85837B;                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                travelDistance_3_269F558844A85BC6B7EE85B4CDA706F4;        // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HealAmount_4_B8C060C243D8A53CC2FB25B014DAA2DD;            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DamageAmount_5_9798AED546B6451447073F88F94ECA1A;          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AssistNum_6_53E92D69472136A2FA572CA42AFF0F2D;             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                surviveTime_7_4095C08E4C9E9C36F3476BBBBDF7A7C7;           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes_8_22FDF96242283590BDDE31A6E4592C0F;           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum_9_CB4C63474DFB365351BFDF826A564311;           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShouldShowAddFriendBtn_10_F6E1B5B546973A68905B49A608F211F0;// 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     UID_11_3CF2C4FB440351FC6E2A819D5C9E3A95;                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TravelScore_12_E14E8FC742D3CA88E429B1BFFCD5D2DF;          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BattleScore_13_E763470E496A1859971915AF0ED432FC;          // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMVP_14_9FEBBB9A41D633DAEF4F7AA0AA50379E;                // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                SupportScore_16_E6685A2F4D4EED4000131FBCED53A176;         // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SurviveScore_17_B32B433B4A28BB930A2B69B437791D6D;         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                driveDistance_18_BE0AE86B448F9DD558B6459D4E5D42FB;        // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                marchDistance_19_E5AAD6E54F9230A68C4EA993BD9A8940;        // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SupplyScore_21_C702D2FE49ACF7EFBCFC4DA55B3DBE2B;          // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalScore_f_22_4840B559455CD01E651617BFC406BC82;         // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rela_sex_23_CF5FAC57495899E900B831ABC631AF50;             // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_Title_List_24_6F40C6A74B8804B877CBA3901BBCFEAD;  // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
