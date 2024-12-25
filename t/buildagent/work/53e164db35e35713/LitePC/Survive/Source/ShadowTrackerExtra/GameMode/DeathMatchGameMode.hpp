

// Class ShadowTrackerExtra.DeathMatchGameMode
// //Class ShadowTrackerExtra.DeathMatchGameMode
//0x00E0 (0x17F0 - 0x1710)
class ADeathMatchGameMode : public ABattleRoyaleGameMode
{
public:
	float                                              PointTeamKill;                                            // 0x1710(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointKill;                                                // 0x1714(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsItemDrop : 1;                                           // 0x1718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x1719(0x0001)
	unsigned char                                      IsBlackOut : 1;                                           // 0x1719(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x171A(0x0002) MISSED OFFSET
	float                                              RespawnTime;                                              // 0x171C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InvincibilityTime;                                        // 0x1720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEquipmentMaintain : 1;                                   // 0x1724(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1725(0x0003) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 StartEquipment;                                           // 0x1728(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 RevivalEquipment;                                         // 0x1738(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGameModeRevivePlayerBullet>         RevivalBullet;                                            // 0x1748(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      IsTeamDamage : 1;                                         // 0x1758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 8;                                        // 0x1759(0x0001)
	unsigned char                                      IsReload : 1;                                             // 0x1759(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04 : 8;                                        // 0x175A(0x0001)
	unsigned char                                      bApplyHealing : 1;                                        // 0x175A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x175B(0x0001) MISSED OFFSET
	float                                              HealingConditionWithHpRate;                               // 0x175C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealingLatencyTime;                                       // 0x1760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealingInterval;                                          // 0x1764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealingPercentagePerInterval;                             // 0x1768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReadyCountDownTime;                                       // 0x176C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DropItemLifeTime;                                         // 0x1770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AssistTimeLimit;                                          // 0x1774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APlayerTombBox*                              DeadFakeInventoryBoxTemplete;                             // 0x1778(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<int, class ALPCPlayerStart*>                  MapTeamPlyaerStartInfo;                                   // 0x1780(0x0050) (ZeroConstructor)
	TArray<class ALPCPlayerStart*>                     ArrPlayerStart;                                           // 0x17D0(0x0010) (ZeroConstructor)
	unsigned char                                      IsAbortGame : 1;                                          // 0x17E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xF];                                       // 0x17E1(0x000F) MISSED OFFSET

}

