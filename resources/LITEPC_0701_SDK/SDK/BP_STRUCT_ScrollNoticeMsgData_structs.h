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

// UserDefinedStruct BP_STRUCT_ScrollNoticeMsgData.BP_STRUCT_ScrollNoticeMsgData
// 0x0028
struct FBP_STRUCT_ScrollNoticeMsgData
{
	int                                                prior_0_ECE8EC0C40712EAC28B1CCAE40BA0694;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                endtime_1_D3003A39494B60BEB1EFF293FB61FAD0;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rollSpeed_2_BC19B7F84B413E1FB6564F92491950B6;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                msgID_3_12A2A4D843DD1B16D37F72AEE7364762;                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                msgType_4_31946F6A41E1FC0572A986A808A0D94C;               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rollCnt_5_14852FED4790AA11F54E3B8351CC96F9;               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     content_6_B6543CDA43C969590212D4A37F2FE9C1;               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
