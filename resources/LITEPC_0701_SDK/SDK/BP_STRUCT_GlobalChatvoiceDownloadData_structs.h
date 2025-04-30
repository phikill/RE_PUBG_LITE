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

// UserDefinedStruct BP_STRUCT_GlobalChatvoiceDownloadData.BP_STRUCT_GlobalChatvoiceDownloadData
// 0x0040
struct FBP_STRUCT_GlobalChatvoiceDownloadData
{
	struct FString                                     fileId_0_27A7E9814AFBC6BF898DD088626C4C44;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                msgLength_1_AA0B7A75470EBDA4A1B263A9DF37786C;             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     msgSenderGID_2_A17583F444CD82A19E60DBB86D8EBDD7;          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     msgContextGID_3_4DC6B36A4ADBF5BA22228B9262D45E49;         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                msgId_4_6367BF0A434687426F510F81D8518471;                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                msgChannel_5_B110640C4860EF195694518E5BD4BA4E;            // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
