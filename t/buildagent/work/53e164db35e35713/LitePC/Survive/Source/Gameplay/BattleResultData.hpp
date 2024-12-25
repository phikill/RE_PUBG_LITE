

// ScriptStruct Gameplay.BattleResultData
// 0x0088
struct FBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           RemainingPlayerCount;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalPlayerCount;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RemainingTeamCount;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalTeamCount;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsSolo : 1;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	uint32_t                                           ShootWeaponShotNum;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShootWeaponShotAndHitPlayerNum;                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HealTimes;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              marchDistance;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              driveDistance;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           destroyVehicleNum;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           add_exp;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           add_gold;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           battle_id;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           max_game_num;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           person_rank;                                              // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           team_rank;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FMemBTResultData>                    BP_ARRAY_TeammateList;                                    // 0x0060(0x0010) (ZeroConstructor)
	struct FResultRatingData                           BP_STRUCT_BTRating;                                       // 0x0070(0x0018)
};

