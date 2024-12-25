

// ScriptStruct Gameplay.PlayerNetStats
// 0x0040
struct FPlayerNetStats
{
	struct FString                                     ClientAddr;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     LocalAddr;                                                // 0x0010(0x0010) (ZeroConstructor)
	float                                              AvgPing;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxPing;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HighPingPercent;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x002C(0x0014) MISSED OFFSET
};

