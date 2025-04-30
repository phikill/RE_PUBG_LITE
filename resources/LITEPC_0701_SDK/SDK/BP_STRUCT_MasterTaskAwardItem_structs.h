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

// UserDefinedStruct BP_STRUCT_MasterTaskAwardItem.BP_STRUCT_MasterTaskAwardItem
// 0x0019
struct FBP_STRUCT_MasterTaskAwardItem
{
	struct FString                                     LimitTimeStr_0_407A8E304C83C672039537829D5418AC;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Count_1_C7E60F0F43E3525B2604B1A6B02FE7C9;                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResId_2_0B78C08F42B24383AE7C1F8B71783E2F;                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMasterAward_3_0BE36B3E4BA5B66864CC4F9BE452C110;         // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
