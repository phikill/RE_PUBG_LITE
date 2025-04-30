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

// UserDefinedStruct BP_STRUCT_NoticeButtonInfo.BP_STRUCT_NoticeButtonInfo
// 0x0030
struct FBP_STRUCT_NoticeButtonInfo
{
	int                                                NoticeID_0_8385D5B449F5DCE9DA1FBAB43B3D675E;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Btn_TypeName_1_79C326E94B5E9E9A88148198D732DFD2;          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsRedPoint_2_36FBE0F548FB2C01BCC12EBD14A73399;            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                Btn_Type_3_08F9F07341EF2C586F90A0A409C3DAA8;              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Btn_Name_4_FD43B1E54D0A32532019B7A5514D0D07;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
