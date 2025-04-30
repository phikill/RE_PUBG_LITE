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

// UserDefinedStruct BP_STRUCT_CorpsManager_PanelInfo.BP_STRUCT_CorpsManager_PanelInfo
// 0x000C
struct FBP_STRUCT_CorpsManager_PanelInfo
{
	bool                                               isAcceptApply_6_8B37B3F741FBE3844F5709AD5AC9913B;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isNeedApproval_7_C4395732449575DAA9AB5EA587D54EF7;        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                joinLevel_2_9173843D42569766DD5E93899F731966;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                joinSegment_3_593036E7453DDB5555B848A4ED2930AB;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
