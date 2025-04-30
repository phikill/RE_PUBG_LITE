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

// UserDefinedStruct BP_STRUCT_RoomMemberInfo.BP_STRUCT_RoomMemberInfo
// 0x0060
struct FBP_STRUCT_RoomMemberInfo
{
	struct FString                                     openid_0_B7B1CCC1466A8CCE41C6E3A5100F1634;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                level_1_87DF754540F124BEF6071B92A3E0AFED;                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     name_2_F98F3D0B47A0191B26798FA7A96371FA;                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                svr_3_C4A42FD0462B8AEEA33153935D743585;                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gender_4_38FF7FF84711A7F5405F9D97FA23D1B4;                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                frame_level_5_C155DF8E481E15556962A99AAEE5AF56;           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isRoomMaster_6_D3F447214E2501E056A437B35FE76699;          // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                pos_7_48633E4D49B0CBA499EC33A098E8698F;                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     state_8_C387AE89499568F6EB50F3AFC6D62A8F;                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     head_url_9_8632DDD64E3EB3C3098AECABFD368A5B;              // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
