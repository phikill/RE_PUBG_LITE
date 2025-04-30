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

// UserDefinedStruct BP_STRUCT_Lobby_Friend_Apply_Data.BP_STRUCT_Lobby_Friend_Apply_Data
// 0x0110
struct FBP_STRUCT_Lobby_Friend_Apply_Data
{
	int                                                createTime_0_21DACAEB4CC617495264179A7CF7C40D;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     createTimeStr_1_412056E04A4BE626C5C22F91B85716CF;         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     applyMsg_2_03B0433D402D76770EB76B9E9AF105E0;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Lobby_Friend_Common_Data         BP_STRUCT_Lobby_Friend_Common_Data_3_F371DBF6475646D2EF5804AE141A6568;// 0x0028(0x00E8) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
