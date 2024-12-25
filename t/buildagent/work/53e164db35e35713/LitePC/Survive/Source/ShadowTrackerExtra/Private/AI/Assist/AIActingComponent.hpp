

// Class ShadowTrackerExtra.AIActingComponent
// //Class ShadowTrackerExtra.AIActingComponent
//0x0268 (0x0370 - 0x0108)
class UAIActingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET
	TArray<struct FAIActingCandidateData>              CandidateAIList;                                          // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0128(0x00A0) MISSED OFFSET
	int                                                MaxActiveAI;                                              // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ActiveAI_n;                                               // 0x01CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ActiveAI_m;                                               // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AISpawnCircleOriginOffset;                                // 0x01D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoWhiteCirclesRadius;                                     // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectActionPeriod;                                       // 0x01DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnCheckHumanRadiusSquare;                              // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TryFindSpawnAILocNum;                                     // 0x01E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIActingItem>                       AIActingItemList;                                         // 0x01E8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIBeginAttackEachOther>             AIAttackEachOtherRatingTimeConfig;                        // 0x01F8(0x0010) (Edit, ZeroConstructor)
	int                                                FullFeedLimit;                                            // 0x0208(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	TArray<struct FDeliveryRatingConfig>               DeliveryWaveInterval;                                     // 0x0210(0x0010) (Edit, ZeroConstructor)
	float                                              DeliveryBeginTime;                                        // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeliveryFreq;                                             // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DeliveryAINumEachPeriod;                                  // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumWarmScore;                                         // 0x022C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIDeliveryAreaLimit>                AIDeliveryAreaLimit;                                      // 0x0230(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIRatingDamage>                     AIRatingDamageConfig;                                     // 0x0240(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIAttackAIRatingDamage>             AIAttackAIRatingDamage;                                   // 0x0250(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDeliveryPlayerConfig>               AIDeliveryPlayerConfig;                                   // 0x0260(0x0010) (Edit, ZeroConstructor)
	class ACirleAreaVolume*                            CircleAreaVolume;                                         // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCircleMgrComponent*                         CircleMgrComponent;                                       // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xE8];                                      // 0x0280(0x00E8) MISSED OFFSET
	int                                                CircleIndexFakeAIPoisonDamage;                            // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x036C(0x0004) MISSED OFFSET

	// Function ShadowTrackerExtra.AIActingComponent.BroadFinishLastBreathFunction
	// (Final, Native, Public)
	void BroadFinishLastBreathFunction(const struct FString& Killerconst struct FString& Killedint WeaponIdconst struct FString& KillerNationconst struct FString& KilledNationint KillerTeamIdint KilledTeamID);// sub_1B37B10()


}

