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

// UserDefinedStruct ItemGeneratorSuperDrop.ItemGeneratorSuperDrop
// 0x0058
struct FItemGeneratorSuperDrop
{
	float                                              Weight_15_D39EA947430537D3E70885B388CD24DA;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<class UClass*, int>                           Items_35_00B8FE774645EBD2506309863CDC0E91;                // 0x0008(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
