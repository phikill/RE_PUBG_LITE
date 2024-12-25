

// ScriptStruct Gameplay.AimFlow
// 0x0130
struct FAimFlow
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
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                AimTime;                                                  // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ShotCDTime;                                               // 0x0098(0x0010) (ZeroConstructor)
	int                                                ShotCount;                                                // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotHitCount;                                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotHeadHitCount;                                         // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotPersonHitCount;                                       // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotPersonKillCount;                                      // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FString                                     HitDistance;                                              // 0x00C0(0x0010) (ZeroConstructor)
	struct FString                                     HitEachDistance;                                          // 0x00D0(0x0010) (ZeroConstructor)
	struct FString                                     HitAngle;                                                 // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     HitEachCdTime;                                            // 0x00F0(0x0010) (ZeroConstructor)
	struct FString                                     HitPartInfo;                                              // 0x0100(0x0010) (ZeroConstructor)
	struct FString                                     PlayerState;                                              // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      bHoldBreath : 1;                                          // 0x0120(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int8_t                                             SightType;                                                // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	uint32_t                                           AimFlowID;                                                // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
};

