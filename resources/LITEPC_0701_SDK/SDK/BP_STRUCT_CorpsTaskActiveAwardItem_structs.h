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

// UserDefinedStruct BP_STRUCT_CorpsTaskActiveAwardItem.BP_STRUCT_CorpsTaskActiveAwardItem
// 0x0020
struct FBP_STRUCT_CorpsTaskActiveAwardItem
{
	TArray<struct FBP_STRUCT_CorpsTaskDropItem>        BP_ARRAY_CorpsTaskFixItemList_0_2E5DC0F445939224D6F92880055E46F5;// 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsTaskDropItem>        BP_ARRAY_CorpsTaskRandomItemList_1_6FB5DC2B416EFFDCF67D2C9540656ECF;// 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
