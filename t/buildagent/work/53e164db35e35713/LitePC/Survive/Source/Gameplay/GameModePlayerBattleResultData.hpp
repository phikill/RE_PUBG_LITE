

// ScriptStruct Gameplay.GameModePlayerBattleResultData
// 0x00E0
struct FGameModePlayerBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                RemainingPlayerCount;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPlayerCount;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RemainingTeamCount;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalTeamCount;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsSolo : 1;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	uint64_t                                           Killer;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotNum;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum;                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HealTimes;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FString>                             KillFlow;                                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  // 0x0050(0x0010) (ZeroConstructor)
	int                                                destroyVehicleNum;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                is_escape;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameModeTeammateBattleResultData>   TeammateList;                                             // 0x0068(0x0010) (ZeroConstructor)
	struct FVector                                     LandLocation;                                             // 0x0078(0x000C) (IsPlainOldData)
	struct FVector                                     DeadLocation;                                             // 0x0084(0x000C) (IsPlainOldData)
	struct FString                                     DeadDamangeType;                                          // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     DeadTimeStr;                                              // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     logoutime;                                                // 0x00B0(0x0010) (ZeroConstructor)
	float                                              Pronetime;                                                // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BeInWaterTime;                                            // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwimmingDistance;                                         // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeDownTimes;                                              // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PickUpAirDrops;                                           // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalScore;                                               // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

