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

// UserDefinedStruct BP_STRUCT_ListItemInfo.BP_STRUCT_ListItemInfo
// 0x0020
struct FBP_STRUCT_ListItemInfo
{
	int                                                id_0_7BEDB2E245CF52A994D9CE98FA79E479;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     text_1_372DC9B94184E5EA174226961541D5A1;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_selected_2_B3BB4A3644C6675DE078609367C0BE75;           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_lock_3_FAFD3EC14AB6725E1AF168B5C908D871;               // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_open_4_278EF14E48085B8E849CDB93FAED4128;               // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	int                                                item_type_7_081BFFB4460235DD973BA3806727804F;             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
