

// ScriptStruct Gameplay.ClientGameStartFlow
// 0x0080
struct FClientGameStartFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0018(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     ItemList;                                                 // 0x0030(0x0010) (ZeroConstructor)
	int8_t                                             TeamType;                                                 // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0068(0x0010) (ZeroConstructor)
	uint32_t                                           SecGameStartFlowFlowID;                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

