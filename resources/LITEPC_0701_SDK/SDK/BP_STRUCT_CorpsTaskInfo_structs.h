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

// UserDefinedStruct BP_STRUCT_CorpsTaskInfo.BP_STRUCT_CorpsTaskInfo
// 0x0030
struct FBP_STRUCT_CorpsTaskInfo
{
	int                                                progress_0_3E4DD48A4665528EC95B8C845A4BB540;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     status_1_ED77F1BE4DE7A71CB81200B12B05760B;                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                id_2_80478D294C1001B64ED99F905D6DDE48;                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsTaskDropItem>        BP_ARRAY_CorpsTaskCurrDropList_3_FF1760FB44CB0A214A0EDD9FAB5ECB35;// 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
