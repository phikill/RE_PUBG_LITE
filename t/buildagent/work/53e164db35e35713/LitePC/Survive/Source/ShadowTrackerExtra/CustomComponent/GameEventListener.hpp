

// Class ShadowTrackerExtra.GameEventListener
// //Class ShadowTrackerExtra.GameEventListener
//0x0028 (0x0130 - 0x0108)
class UGameEventListener : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnGameEventListener;                                      // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              HeightCheck_High;                                         // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightCheck_Mid;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightCheck_Low;                                          // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	float                                              ScreenSizeCullingFactor;                                  // 0x0128(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceCullingFactor;                                    // 0x012C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)

	// Function ShadowTrackerExtra.GameEventListener.StarCalcJump
	// (Final, Native, Public)
	void StarCalcJump();// sub_3178B0()

	// Function ShadowTrackerExtra.GameEventListener.OnChangeViewTarget
	// (Final, Native, Public)
	void OnChangeViewTarget();// sub_316FC0()

	// Function ShadowTrackerExtra.GameEventListener.IsPlayerLanded
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsPlayerLanded();// sub_316F90()

	// Function ShadowTrackerExtra.GameEventListener.IsPlayerFlying
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsPlayerFlying();// sub_316F60()

	// Function ShadowTrackerExtra.GameEventListener.HeightCheck
	// (Final, Native, Public)
	void HeightCheck();// sub_316F40()

	// Function ShadowTrackerExtra.GameEventListener.GameEventReBirth
	// (Final, Native, Public)
	void GameEventReBirth();// sub_316E00()

	// Function ShadowTrackerExtra.GameEventListener.GameEventPlane
	// (Final, Native, Public)
	void GameEventPlane();// sub_316DE0()

	// Function ShadowTrackerExtra.GameEventListener.GameEventParachute
	// (Final, Native, Public)
	void GameEventParachute();// sub_316DC0()

	// Function ShadowTrackerExtra.GameEventListener.GameEventLanded
	// (Final, Native, Public)
	void GameEventLanded();// sub_316DA0()

	// Function ShadowTrackerExtra.GameEventListener.GameEventJump
	// (Final, Native, Public)
	void GameEventJump();// sub_316D80()

	// Function ShadowTrackerExtra.GameEventListener.GameEventFighting
	// (Final, Native, Public)
	void GameEventFighting();// sub_316D60()

	// Function ShadowTrackerExtra.GameEventListener.GameEventDie
	// (Final, Native, Public)
	void GameEventDie(float currentHPfloat ratioHP);// sub_316CA0()

	// Function ShadowTrackerExtra.GameEventListener.GameEventBirth
	// (Final, Native, Public)
	void GameEventBirth();// sub_316C80()


}

