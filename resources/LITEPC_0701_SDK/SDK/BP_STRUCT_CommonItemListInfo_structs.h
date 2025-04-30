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

// UserDefinedStruct BP_STRUCT_CommonItemListInfo.BP_STRUCT_CommonItemListInfo
// 0x0024
struct FBP_STRUCT_CommonItemListInfo
{
	bool                                               is_selected_0_6D4166407231DE7359DC8E6E03CE8864;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                expireTS_1_238E52402D476C971E9E80F606341703;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                res_id_2_75FB02C045D506071805061C0CD5D164;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                itemType_3_338E79805CA11900206AFED704063E35;              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ins_id_4_0C9822C075F92C4F171069CE0DBCD164;                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                count_5_4BAC2F80375535F0115B651C09DE0014;                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
