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

// UserDefinedStruct BP_STRUCT_RADAR.BP_STRUCT_RADAR
// 0x0078
struct FBP_STRUCT_RADAR
{
	float                                              HurtScore_f_5_BA7BC0E2410473C96E889B90C774CFA9;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SupplyScore_f_6_3B70F44A4C26F3D5E2AF978609A29693;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SupportScore_f_7_C3C0205449AAD2E0D022A4985FAFC81F;        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurviveScore_f_8_E413266A4B99E9A5DABE2BB86EF186C3;        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KillScore_f_9_57EEE9E3434084A0E6A9A59E8E33DA56;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SupportScore_10_BF14E86A482A67CBBC83FD87187B1103;         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HurtScore_11_DF9FB2194D267C00883424B8A98E3E4F;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SurviveScore_12_6AF8DB494CF432AEE3F08EB7892E8173;         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KillScore_13_A1F6F54C4B706ED3E4201EADD6FB2159;            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SupplyScore_14_0FB4C2F14DFF0CD079B1E89AC57298C0;          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SurviveScore_s_15_A468943A48EA3F1E894C0F988F31A11A;       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     HurtScore_s_16_F4072A2C4ACA1F0D43784CAF58F2B6CD;          // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SupplyScore_s_17_681958D443E971BB0048309510150F6E;        // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SupportScore_s_18_1A6143844378E891CBC4FAB5F4361FAF;       // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     KillScore_s_19_E7BDD1494A9E7A258266409F3CA00FC4;          // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
