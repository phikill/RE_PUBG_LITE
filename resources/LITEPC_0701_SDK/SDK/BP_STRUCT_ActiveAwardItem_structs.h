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

// UserDefinedStruct BP_STRUCT_ActiveAwardItem.BP_STRUCT_ActiveAwardItem
// 0x0020
struct FBP_STRUCT_ActiveAwardItem
{
	TArray<struct FBP_STRUCT_TaskDropItem>             BP_ARRAY_FixItemList_9_073B04D24ABA4D580D1CAEB934268E72;  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_TaskDropItem>             BP_ARRAY_RandomItemList_10_3D526F394D28F7AA28A03586B29F936A;// 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
