

// ScriptStruct Gameplay.PlayerBehaviorFlow
// 0x0098
struct FPlayerBehaviorFlow
{
	uint64_t                                           FrameCounter;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           BattleID;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsTargetPlayer : 1;                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RelevantPlayerKey;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationX;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationP;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationY;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationR;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Stats;                                                    // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      IsDying : 1;                                              // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              Breath;                                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedX;                                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedY;                                                   // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedZ;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentWeaponID;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ammo;                                                     // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SightId;                                                  // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsBeAttacking : 1;                                        // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                BeAttackDirX;                                             // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeAttackDirY;                                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeAttackDirZ;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MedicineId;                                               // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsHaveSound : 1;                                          // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
};

