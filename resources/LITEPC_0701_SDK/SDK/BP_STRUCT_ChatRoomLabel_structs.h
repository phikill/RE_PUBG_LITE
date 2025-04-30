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

// UserDefinedStruct BP_STRUCT_ChatRoomLabel.BP_STRUCT_ChatRoomLabel
// 0x0019
struct FBP_STRUCT_ChatRoomLabel
{
	int                                                id_3_E7AAA03247A743CD10EF53AE0695A6C6;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     name_1_7F80BDE2483A31C237D1189E8F36570E;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               selected_2_CBB4F04A48D13B84FE3B67BFD2ABFCC7;              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
