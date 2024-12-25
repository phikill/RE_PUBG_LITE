

// ScriptStruct Gameplay.ClientGameEndFlow
// 0x0090
struct FClientGameEndFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ClientVersion;                                            // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           OverTime;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             EndType;                                                  // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillCount;                                                // 0x002D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AssistsCount;                                             // 0x002E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DropCount;                                                // 0x002F(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveCount;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RebornCount;                                              // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AliveType : 1;                                            // 0x0032(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	int                                                GoldGet;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DiamondGet;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpGet;                                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WinRank;                                                  // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TotalPlayers;                                             // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	int                                                PlayerRank;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankEnd;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      TeamPlayer1AliveType : 1;                                 // 0x0080(0x0001)
	unsigned char                                      TeamPlayer2AliveType : 1;                                 // 0x0080(0x0001)
	unsigned char                                      TeamPlayer3AliveType : 1;                                 // 0x0080(0x0001)
	unsigned char                                      TeamPlayer1Kill;                                          // 0x0081(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer2Kill;                                          // 0x0082(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer3Kill;                                          // 0x0083(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GameEndFlowID;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RoundCircleCount;                                         // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

