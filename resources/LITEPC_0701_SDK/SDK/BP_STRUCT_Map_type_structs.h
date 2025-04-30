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

// UserDefinedStruct BP_STRUCT_Map_type.BP_STRUCT_Map_type
// 0x0060
struct FBP_STRUCT_Map_type
{
	struct FString                                     MapName_0_99C86D5F4EEAC838D927A895ABB469F4;               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ResId_3_6A18D49C4C648A6B96E15C9CD0C9406D;                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     MapPath_2_556AB4C74A5227AA1355AA8C60EF15BB;               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MiniMapPath_7_626C20754C65FDF1DF3BE882DFD06DB2;           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ShowImg_9_997F417E43ACA5F7ADE34991024B8A47;               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MainMode_10_F894E3F44BC17997549883BAE6037772;             // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                IsJoinRoomMode_28_0F8BB6C54704B98FA2011CADA36AB28D;       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                minimapscale_32_E4ECE97A44F7DE9AF5EB46A14C18F27E;         // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
