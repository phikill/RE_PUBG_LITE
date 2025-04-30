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

// UserDefinedStruct BP_STRUCT_SignInUIInfo.BP_STRUCT_SignInUIInfo
// 0x0060
struct FBP_STRUCT_SignInUIInfo
{
	int                                                sign_awardnum1_0_824CF28047E21479CB1BDAAD61154BCD;        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sign_awardnum2_1_B68801B644154A28711DA88ED33F34E1;        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     sign_awardimage2_2_FACEA9164563AFD924227684FC79DAB8;      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     sign_awardimage1_3_A3896BA243321F625181478E9563F50C;      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                sign_state_4_33EFB76A48184DC84EAA00A6C14C7E14;            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     sign_awardname1_5_A6EE8A96476127C55E19EF93D452F8E9;       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     sign_awardname2_6_F52AE4BC4D434E97B8EFA39E4E288664;       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                sign_awardID2_7_DACC3DD34FAA6201F0B7FCBB5D5E873B;         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sign_awardquality2_8_D45BE8D5489602C50459B8B509E57AD7;    // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sign_awardquality1_9_B7EF70E04E7FFFE00C77F2B073EEE2B5;    // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sign_awardID1_10_6F16D7EE49FB4F665B9255A20B890BD5;        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
