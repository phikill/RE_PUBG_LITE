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

// UserDefinedStruct BP_STRUCT_TeamUpMapInfo.BP_STRUCT_TeamUpMapInfo
// 0x008C
struct FBP_STRUCT_TeamUpMapInfo
{
	struct FString                                     tips_0_2096CAC0672F66D75BA5B0D706375413;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     map_name_1_72B6AA407EF05B0949FB10AF0C4471E5;              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     icon_path_2_4BE548004EC279884BA979A604650948;             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                map_id_3_30D675406035231F67F82E3707DC43C4;                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_selected_4_088CDBC0432AD41302B66DB309557A44;           // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                size_type_5_245F71C071A1CED57BAAC39406D5D835;             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     forbid_tips_7_219E00004961152074EB6F050D059E93;           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     level_limit_8_223A804049F9751F22AA3EBD033E8AE4;           // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     sub_info_9_2E01B0004D438FB83FF8296E0F23D38F;              // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               can_select_10_7E877F00093A4E3E726E624E00AE5FC4;           // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FString                                     model_sub_name_11_7313A94046CD4DBB3B26ADE90ACC7775;       // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                model_sub_name_type_12_76E2D1802C3056E20449A80A071A8715;  // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
