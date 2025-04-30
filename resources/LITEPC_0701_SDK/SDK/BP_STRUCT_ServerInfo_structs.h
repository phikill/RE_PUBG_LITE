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

// UserDefinedStruct BP_STRUCT_ServerInfo.BP_STRUCT_ServerInfo
// 0x002C
struct FBP_STRUCT_ServerInfo
{
	int                                                serverStatus_5_AEDDF3FA4A37992E108EA0AA5982079C;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     showAddrInfo_2_FDBE340F451DB94E00B768A4C096D728;          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     channelInfo_3_5222FFEB4CC4DAB49C08898168365359;           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                tab_6_285185794F40DFFC140092BA1EC9B864;                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
