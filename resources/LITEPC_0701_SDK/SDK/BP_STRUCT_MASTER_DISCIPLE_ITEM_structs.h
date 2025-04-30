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

// UserDefinedStruct BP_STRUCT_MASTER_DISCIPLE_ITEM.BP_STRUCT_MASTER_DISCIPLE_ITEM
// 0x007C
struct FBP_STRUCT_MASTER_DISCIPLE_ITEM
{
	struct FString                                     uid_7_1E7D692E4A9B9FD6050D159119CAB00D;                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                gender_1_093AD33842A9A6413136CFA9A1761059;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     nickName_2_D810519142A44610DEA84EAB466139F2;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_squad_3_A1271179463CDCB9252010A0D1DD3DEE;    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_duo_4_10EF73B04E4DCB443E4561BDE2343C67;      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_solo_5_41DDBF7F471F2ABF62102AB57E4B6974;     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     url_6_1E9B3F574D43FF901A30DFA0771928C2;                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_friend_8_3DA2D7074E78078D313DF4AE051C995E;             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                platform_9_5F895BEE45120A6172B759B1832811F6;              // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               can_be_teacher_10_B957CBC64D00BB5A9D710CBA99D59847;       // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FString                                     logout_time_11_5C0C42DF41D14952121FC0B851EB635E;          // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                sex_12_EB79948A45C06E5BBEFF9BBEDF208123;                  // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_13_0CF4E06C45BF30189CFCFD985BFC9229;    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                startup_type_14_C3F2A80D4EA31A8BE46E208B00EDB163;         // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_15_C475B2C14FAA6E8B939087AF207F0FB5;                // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                qq_vip_16_AF9BF1A04E3D26B6D2DA42B8C50599EC;               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
