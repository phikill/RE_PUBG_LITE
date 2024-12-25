

// ScriptStruct Gameplay.TotalWeaponReport
// 0x0028
struct FTotalWeaponReport
{
	struct FString                                     BattleID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                BattleMode;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FOnePlayerWeapon>                    TotalWeaponRecord;                                        // 0x0018(0x0010) (ZeroConstructor)
};

