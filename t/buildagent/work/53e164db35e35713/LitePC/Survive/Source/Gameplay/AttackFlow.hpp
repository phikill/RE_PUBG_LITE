

// ScriptStruct Gameplay.AttackFlow
// 0x01D0
struct FAttackFlow
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
	struct FString                                     TargetOpenID;                                             // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     TargetUserName;                                           // 0x00A8(0x0010) (ZeroConstructor)
	uint64_t                                           TargetRoleID;                                             // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             TargetRoleType;                                           // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FString                                     GunName;                                                  // 0x00C8(0x0010) (ZeroConstructor)
	struct FString                                     GunPartsType;                                             // 0x00D8(0x0010) (ZeroConstructor)
	int8_t                                             SightType;                                                // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	int                                                BulletSpeed;                                              // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             MagazineMax;                                              // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             MagazineLeft;                                             // 0x00F1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	int                                                ShotFrequency;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamage;                                             // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            BulletDown;                                               // 0x00FC(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BulletDamageReduce;                                       // 0x00FE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x00FF(0x0001) MISSED OFFSET
	int                                                Recoil;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReloadTime;                                               // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerState;                                              // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      ShotPose;                                                 // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireType;                                                 // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x011A(0x0002) MISSED OFFSET
	unsigned char                                      bHoldBreath : 1;                                          // 0x011C(0x0001)
	unsigned char                                      UnknownData08[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	unsigned char                                      Sideways;                                                 // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int                                                ShootingDeviationX;                                       // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootingDeviationY;                                       // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ZeroDistance;                                             // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShotTime;                                                 // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitTime;                                                  // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionX;                                          // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionY;                                          // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionZ;                                          // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionX;                                             // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionY;                                             // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionZ;                                             // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionX;                                     // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionY;                                     // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionZ;                                     // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           LastHitTime;                                              // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BulletFlyDistance;                                        // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BulletFlyTime;                                            // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionX;                                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionY;                                             // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionZ;                                             // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitPart;                                                  // 0x0174(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	unsigned char                                      bHitCar : 1;                                              // 0x0178(0x0001)
	unsigned char                                      bTireOut : 1;                                             // 0x0178(0x0001)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	unsigned char                                      BulletCost;                                               // 0x017C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	int                                                HPstart;                                                  // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPEnd;                                                    // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart;                                             // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd;                                               // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPStart;                                               // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPEnd;                                                 // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerKill;                                               // 0x0198(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	unsigned char                                      bArmorKill : 1;                                           // 0x019C(0x0001)
	unsigned char                                      bCarKill : 1;                                             // 0x019C(0x0001)
	unsigned char                                      UnknownData14[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	int                                                RecoilMoveX;                                              // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoilMoveY;                                              // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponAimFOV;                                             // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamageDebuff;                                       // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamageBuff;                                         // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AtackFlowID;                                              // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimSpeed;                                             // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimSpeedRateMax;                                      // 0x01BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeMax;                                          // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeRateMax;                                      // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunID;                                                    // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
};

