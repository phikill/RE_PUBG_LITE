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

// UserDefinedStruct BP_STRUCT_Reflux_Award_Info.BP_STRUCT_Reflux_Award_Info
// 0x0038
struct FBP_STRUCT_Reflux_Award_Info
{
	int                                                expireTime_1_6542F0005FD76F8433B22D3E0A1041E5;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                status_3_22E23200152D87F85B97400B0B8A2153;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                needInviteCount_4_3E8DAE00201056C01BB889E20BBF81E4;       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentInviteCount_5_01DEE7C059A10CA569E74535059E0564;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemIdx_6_7E9E3E002F72759A418E754602A2B608;               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                awardID_7_38CB10005371F2BA4517CBAF0AD22174;               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     iconPath_8_7801F68076B5247C7D9FE9D20B09F278;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     iconOpenPath_9_7A869B0046CFA48C10E93AF90C786158;          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
