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

// UserDefinedStruct BP_VoiceCheckData.BP_VoiceCheckData
// 0x0024
struct FBP_VoiceCheckData
{
	TEnumAsByte<EBP_VoiceCheckType>                    CheckType_10_2979E20A4318FC5AA71D74A3D0883B0A;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              checkLength_7_8308F79F440D45E8F56E24B1C2AD54DB;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TriggerCD_18_171DDF784C3E66546F9B2CB5D1C76D40;            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShowCD_25_64DF62A84C699369733ED7B80CBCE887;               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxShowCDSCale_27_8612D6FB4C124C36D97566BCF37BD826;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinShowCDScale_29_A298B9864245E006365E61A11DE50DCE;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSizeScale_31_2E1C44054CCA97BE53C5C9A0221E98E2;         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSizeScale_33_94F893FB496FDAF0704CD39054BAF717;         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Minspeed_37_3455B4924DA5CB2D5F9BE8A0716073D5;             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
