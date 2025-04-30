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

// UserDefinedStruct BP_STRUCT_MasterPrivilegeItem.BP_STRUCT_MasterPrivilegeItem
// 0x0042
struct FBP_STRUCT_MasterPrivilegeItem
{
	struct FString                                     itemGiftTitle_0_53BA3DA942E009B5E4F4FF83E3833ED1;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     itemMasterName_1_99B77F8C46DC44E36B0A30A382E85A08;        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemHasGet_2_FEFD3686435611F342DC4EA97D8CFB72;            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               itemRightArrow_3_3AEB4B564C1E9CD3A86B47BDDD4990B1;        // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               itemReach_4_A6EBD29A4F54A16806C493AD6C119C4C;             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               itemLeftArrow_5_672CC75B43C7CCF0A4945EB28521EC19;         // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
	struct FString                                     itemPrivilegeTitle_6_3C1D02D4400EB88378C024B81E21CBB2;    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                itemLevel_7_812DE4904C75834E10754C9CA9C332AD;             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemMaxPoint_8_0C695CED4554BCD2C2E5A89825130C21;          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               itemNextRedPoint_9_2564FEC7488569E82BA43B9E6A550D1B;      // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               itemPreRedPoint_10_7A60787645B538D5768067B2091F031A;      // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
