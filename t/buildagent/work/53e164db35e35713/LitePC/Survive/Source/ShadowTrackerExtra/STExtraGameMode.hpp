

// Class ShadowTrackerExtra.STExtraGameMode
// //Class ShadowTrackerExtra.STExtraGameMode
//0x0060 (0x0E80 - 0x0E20)
class ASTExtraGameMode : public AUAEGameMode
{
public:
	float                                              PlaneFlyHeight;                                           // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlaneStartDistance;                                       // 0x0E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlaneFlySpeed;                                            // 0x0E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlaneFlyPathRandomRadius;                                 // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HaveToJumpDistance;                                       // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrachuteHaveToOpeningHeight;                              // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParachuteHaveToLandHeight;                                // 0x0E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E3C(0x0004) MISSED OFFSET
	struct FString                                     MapName;                                                  // 0x0E40(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0E50(0x0030) MISSED OFFSET

	// Function ShadowTrackerExtra.STExtraGameMode.OnGameEnd
	// (Final, Native, Public)
	void OnGameEnd();// sub_3170E0()


}

