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

// UserDefinedStruct BP_STRUCT_ChatMessageSingleData.BP_STRUCT_ChatMessageSingleData
// 0x00B0
struct FBP_STRUCT_ChatMessageSingleData
{
	struct FString                                     msgSendDate_0_3C9DBBCD4A39D0DE8B02719C1F42F9E0;           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     msg_1_69410B7C492F84FAB1A6CD9B12A208F7;                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               selfMsg_2_67B3182D4873EF114014BEB1EB5FCE7B;               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                level_3_7E5E516B424C6A0BE2CFE692237E8D7C;                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     voiceMsgId_4_904A1EF14CEE1CDF5434FDB1E0AA64E4;            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     roomId_5_0384A14E4D7FCC950AE3699301C7DA35;                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                voiceMsgTime_6_1F71633F45AE41EDA09E38A3644F4F1D;          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     name_7_3EE7D9BF435F8A71F92DC4B601728CEF;                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     uid_8_94D7DFC648EA0089E0B4F29C59B5E72D;                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     roomType_9_FD99880147E35C4DF70270B3C056350B;              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     icon_10_9A32AB92434BD3D912C7E8849FD64AD5;                 // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                msgType_11_1146DF804E89D7C9C42CC5B9A2255207;              // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gender_12_1A78AE4F4AAD3D9924354584B26F6715;               // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                msgChannel_13_5CC8C10A4223255F623EE79B440FB3E0;           // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     msgSendTime_14_C06194A84145E12A7EDC67B15764DBEB;          // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
