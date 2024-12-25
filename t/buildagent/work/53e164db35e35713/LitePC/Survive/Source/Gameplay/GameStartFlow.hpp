

// ScriptStruct Gameplay.GameStartFlow
// 0x0180
struct FGameStartFlow
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
	struct FString                                     PicUrl;                                                   // 0x0098(0x0010) (ZeroConstructor)
	uint32_t                                           SvrUserMoney1;                                            // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SvrUserMoney2;                                            // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SvrUserMoney3;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank1;                                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank2;                                            // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank3;                                            // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	uint64_t                                           SvrRoleID;                                                // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SvrRoleType;                                              // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FString                                     SvrMapName;                                               // 0x00D8(0x0010) (ZeroConstructor)
	int8_t                                             SvrWeatherid;                                             // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FString                                     SvrItemList;                                              // 0x00F0(0x0010) (ZeroConstructor)
	int64_t                                            WaitStartTime;                                            // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            WaitEndTime;                                              // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x0110(0x0010) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FString                                     ItemList;                                                 // 0x0128(0x0010) (ZeroConstructor)
	int8_t                                             GameType;                                                 // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             TeamType;                                                 // 0x0139(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoMatch;                                                // 0x013A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      playerCount;                                              // 0x013B(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0140(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0150(0x0010) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0160(0x0010) (ZeroConstructor)
	int                                                TeamPlayer1Rank;                                          // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamPlayer2Rank;                                          // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamPlayer3Rank;                                          // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SecGameStartFlowFlowID;                                   // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
};

