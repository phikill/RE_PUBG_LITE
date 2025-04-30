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

// UserDefinedStruct BP_STRUCT_MessageBoxData.BP_STRUCT_MessageBoxData
// 0x0030
struct FBP_STRUCT_MessageBoxData
{
	struct FString                                     Content_0_A3552EAA435B329EEAEAF7913B4F5FD7;               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Title_1_C26E66014646F367D6D5D0BFD2C43642;                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MessageBoxButton>         BP_ARRAY_Buttons_2_750369104543639636DC8FB1B1D63DC5;      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
