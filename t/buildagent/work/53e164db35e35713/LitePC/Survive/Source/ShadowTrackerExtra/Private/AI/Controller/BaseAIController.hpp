

// Class ShadowTrackerExtra.BaseAIController
// //Class ShadowTrackerExtra.BaseAIController
//0x01B8 (0x0690 - 0x04D8)
class ABaseAIController : public AAIController
{
public:
	TArray<class UBehaviorTree*>                       BehaviorTree;                                             // 0x04D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              CheckPeriod;                                              // 0x04E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x04EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProtectCountdownTime;                                     // 0x04F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnEquipDelayTime;                                      // 0x04F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnEquipFreezeRadius;                                   // 0x04F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ProtectShootRadius;                                       // 0x04FC(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnVelocity;                                             // 0x0504(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DarkMaxAttackDistRange;                                   // 0x0508(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	TMap<EWeatherStatusType, EWeatherStatusType>       WeatherToAttackDist;                                      // 0x0510(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0560(0x00E8) MISSED OFFSET
	class UBackpackComponent*                          BackpackComponent;                                        // 0x0648(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAIControllerCachedData                     AIControllerCachedData;                                   // 0x0650(0x0030)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0680(0x0010) MISSED OFFSET

	// Function ShadowTrackerExtra.BaseAIController.Respawn
	// (Native, Public, BlueprintCallable)
	void Respawn();// sub_1B3FF30()


}

