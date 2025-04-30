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

// UserDefinedStruct BP_STRUCT_CurrentScrollNoticeMsgData.BP_STRUCT_CurrentScrollNoticeMsgData
// 0x0018
struct FBP_STRUCT_CurrentScrollNoticeMsgData
{
	int                                                rollSpeed_0_23FF858D402CCCAF6B94399CC7418C3B;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                msgId_1_8B1CABB54D0FE4693A7082BD4F123A1E;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     content_2_3C8F4ED045265498AA5B7EBBAB891807;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
