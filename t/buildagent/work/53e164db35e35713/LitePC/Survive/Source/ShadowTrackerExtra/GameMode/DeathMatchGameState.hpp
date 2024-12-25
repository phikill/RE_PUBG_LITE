

// Class ShadowTrackerExtra.DeathMatchGameState
// //Class ShadowTrackerExtra.DeathMatchGameState
//0x0148 (0x0938 - 0x07F0)
class ADeathMatchGameState : public ASTExtraGameStateBase
{
public:
	TArray<int>                                        TeamIds;                                                  // 0x07F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	TArray<int>                                        TeamIndices;                                              // 0x0800(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	float                                              TimeLimitSeconds;                                         // 0x0810(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GoalScore;                                                // 0x0814(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RespawnDelayTime;                                         // 0x0818(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RespawnInvincibilityTime;                                 // 0x081C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<float>                                      TeamScores;                                               // 0x0820(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnScoreChanged;                                           // 0x0830(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInitModePropertyReplicated;                             // 0x0840(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartModePropertyRelicated;                             // 0x0850(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0860(0x00C8) MISSED OFFSET
	TArray<class ADeathMatchSharedPlayerState*>        SharedPlayerArray;                                        // 0x0928(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)

	// Function ShadowTrackerExtra.DeathMatchGameState.OnRep_TeamScores
	// (Final, Native, Protected)
	void OnRep_TeamScores();// sub_1637630()

	// Function ShadowTrackerExtra.DeathMatchGameState.OnRep_TeamProperties
	// (Final, Native, Protected)
	void OnRep_TeamProperties();// sub_1637610()

	// Function ShadowTrackerExtra.DeathMatchGameState.OnRep_StartModeProperties
	// (Final, Native, Protected)
	void OnRep_StartModeProperties();// sub_16375F0()

	// Function ShadowTrackerExtra.DeathMatchGameState.OnRep_InitModeProperties
	// (Final, Native, Protected)
	void OnRep_InitModeProperties();// sub_1637590()

	// Function ShadowTrackerExtra.DeathMatchGameState.GetTeamMatchResult
	// (Final, Native, Public, BlueprintCallable)
	ETeamMatchResult GetTeamMatchResult(int TeamID);// sub_16371F0()


}

