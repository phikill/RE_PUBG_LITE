

// ScriptStruct Gameplay.GameEndFlow
// 0x0110
struct FGameEndFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0040(0x0010) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        MrpcsFlow;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0078(0x0010) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     ClientVersion;                                            // 0x0098(0x0010) (ZeroConstructor)
	uint32_t                                           OverTime;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             EndType;                                                  // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillCount;                                                // 0x00AD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AssistsCount;                                             // 0x00AE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DropCount;                                                // 0x00AF(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveCount;                                                // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RebornCount;                                              // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AliveType : 1;                                            // 0x00B2(0x0001)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00B3(0x0001) MISSED OFFSET
	int                                                GoldGet;                                                  // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DiamondGet;                                               // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpGet;                                                   // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WinRank;                                                  // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TotalPlayers;                                             // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	int                                                PlayerRank;                                               // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankEnd;                                                  // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x00D0(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      TeamPlayer1AliveType : 1;                                 // 0x0100(0x0001)
	unsigned char                                      TeamPlayer2AliveType : 1;                                 // 0x0100(0x0001)
	unsigned char                                      TeamPlayer3AliveType : 1;                                 // 0x0100(0x0001)
	unsigned char                                      TeamPlayer1Kill;                                          // 0x0101(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer2Kill;                                          // 0x0102(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer3Kill;                                          // 0x0103(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GameEndFlowID;                                            // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AIKillCount;                                              // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillHeadShotCount;                                        // 0x0109(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RoundCircleCount;                                         // 0x010A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x010B(0x0005) MISSED OFFSET
};

