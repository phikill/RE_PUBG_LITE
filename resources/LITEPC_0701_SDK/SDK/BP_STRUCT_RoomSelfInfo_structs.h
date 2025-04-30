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

// UserDefinedStruct BP_STRUCT_RoomSelfInfo.BP_STRUCT_RoomSelfInfo
// 0x0060
struct FBP_STRUCT_RoomSelfInfo
{
	struct FString                                     openid_0_0A1285C04EE96896A10B3EA4F4DFD669;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_1_1C45BD134A290840F10DBFB768BB9565;                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     name_2_DEDDBA474442D739A7E6ABB8774E692B;                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                svr_3_5FE9036844753186FBFDE2A62D64479E;                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gender_4_F2F5EAF04D5CA44A0D02BDA3C9143AC1;                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                frame_level_5_496CB4FE48F43AF05508278EAEB8CF81;           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isRoomMaster_6_759A24614B691043C28C9F934BD264DD;          // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                pos_7_54DF2FB64C05B904666FCEBE75A48444;                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     state_8_6C5A3C9648FCA56DFFD9ACA85AB3BC43;                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     head_url_9_F203D8474DA7BCBD70D59DAB70E67875;              // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
