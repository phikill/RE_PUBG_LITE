

// ScriptStruct Gameplay.HitFlow
// 0x0030
struct FHitFlow
{
	int                                                AimType;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Distance;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IsKill;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damage;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFallOnGround : 1;                                        // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<unsigned char>                              PlayerStates;                                             // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      HitPos;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

