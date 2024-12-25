

// ScriptStruct Gameplay.WeaponReport
// 0x0030
struct FWeaponReport
{
	int                                                WeaponId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FireCount;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalDamage;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalOwnTime;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalUseTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FHitFlow>                            HitFlow;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

