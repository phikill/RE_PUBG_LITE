

// ScriptStruct Gameplay.HurtFlow
// 0x0120
struct FHurtFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0028(0x0010) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             AreaID;                                                   // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
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
	struct FString                                     EnemyOpenID;                                              // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     EnemyUserName;                                            // 0x00A8(0x0010) (ZeroConstructor)
	uint64_t                                           EnemyRoleID;                                              // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EnemyRoleType;                                            // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HurtTime;                                                 // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HurtType;                                                 // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageStart;                                              // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageReduce;                                             // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorDef;                                                 // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPstart;                                                  // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPEnd;                                                    // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart1;                                            // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd1;                                              // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart2;                                            // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd2;                                              // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPStart;                                               // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPEnd;                                                 // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FallHeight;                                               // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HypoxiaTime;                                              // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HypoxiaHurtTotal;                                         // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKilled;                                             // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorKill;                                                // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarKill;                                                  // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IfIsAI;                                                   // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HurtFlowID;                                               // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

