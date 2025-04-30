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

// UserDefinedStruct BP_STRUCT_CurSelectedModelInfo.BP_STRUCT_CurSelectedModelInfo
// 0x0078
struct FBP_STRUCT_CurSelectedModelInfo
{
	struct FString                                     model_name_0_CB3BADBB4BD883CD6B1A0F9C87F1A1E6;            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                player_num_1_BC2FAE3F4379F2AF1F0D0DB7DFAFB64C;            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                model_type_2_2B8CAF114104C94413FF8C936D0D4CEC;            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_open_3_B78D0EAF4AF6EA9E1BE7E78BC5B3BEF6;               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_lock_4_3780925B468CAC6A826F5F958640090C;               // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	struct FString                                     player_num_name_5_67C164A244EF0D63CBF624A05E552AD0;       // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                model_id_6_28D62CBC4078754CEFEEA1AAE916C294;              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_selected_7_A44DADCB4CA544C9B122FBA40D53B2BF;           // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                seq_8_68BFF84442DB799648B856829B7AFE0E;                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     model_name_hide_9_111BF3C036335C4F20EAB72A0618BBE5;       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     model_sub_name_10_636F3FC06DB233291CFE07350F409195;       // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                model_sub_name_type_11_488E2800668AB75E726A98060962C975;  // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                perspective_type_12_049084003E1F62F8267EACF90413C805;     // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     perspective_name_13_2DC41BC05FBE664B264C3D5C04115055;     // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
