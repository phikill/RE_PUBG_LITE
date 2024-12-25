

// ScriptStruct Gameplay.MemBTResultData
// 0x0058
struct FMemBTResultData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           Kill;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     State;                                                    // 0x0018(0x0010) (ZeroConstructor)
	float                                              travelDistance;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              surviveTime;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AssistNum;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HeadShotNum;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           rescueTimes;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           UID;                                                      // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             ShouldShowAddFriendBtn;                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};


