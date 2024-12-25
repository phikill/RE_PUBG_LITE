

// ScriptStruct Gameplay.GameModeTeammateBattleResultData
// 0x0058
struct FGameModeTeammateBattleResultData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	uint64_t                                           UID;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Kill;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     State;                                                    // 0x0020(0x0010) (ZeroConstructor)
	float                                              travelDistance;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              marchDistance;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              driveDistance;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AssistNum;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              surviveTime;                                              // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DestroyVehicles;                                          // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
};

