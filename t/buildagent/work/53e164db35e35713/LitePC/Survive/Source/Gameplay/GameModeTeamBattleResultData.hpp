

// ScriptStruct Gameplay.GameModeTeamBattleResultData
// 0x0068
struct FGameModeTeamBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                RemainTeamCount;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RemainAlivePlayerCount;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               PlayersLogoutTime;                                        // 0x0018(0x0050) (ZeroConstructor)
};


