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

// UserDefinedStruct BP_STRUCT_Promotion_Friend_Info.BP_STRUCT_Promotion_Friend_Info
// 0x0038
struct FBP_STRUCT_Promotion_Friend_Info
{
	int                                                inviteStatus_0_6C6FAE6F4B6B79001E76C1B9BB408BFE;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     nickName_1_858922934482602207899BABECA2C87C;              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     headUrl_2_C8E5486D41FE974E72CB9588EA05E687;               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     openID_3_E7605A4A43E998949D7D068321039AF5;                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
