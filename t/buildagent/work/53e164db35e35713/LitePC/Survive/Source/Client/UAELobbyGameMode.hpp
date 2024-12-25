

// Class Client.UAELobbyGameMode
// //Class Client.UAELobbyGameMode
//0x0000 (0x0490 - 0x0490)
class AUAELobbyGameMode : public AUAEClientGameMode
{
public:

	// Function Engine.GameMode.StartMatch
	// (Native, Public, BlueprintCallable)
	void StartMatch();// sub_15E4870()

	// Function Engine.GameMode.SetBandwidthLimit
	// (Exec, Native, Public)
	void SetBandwidthLimit(float AsyncIOBandwidthLimit);// sub_15E39E0()

	// Function Engine.GameMode.Say
	// (Exec, Native, Public, BlueprintCallable)
	void Say(const struct FString& Msg);// sub_15E3940()

	// Function Engine.GameMode.RestartGame
	// (Native, Public, BlueprintCallable)
	void RestartGame();// sub_15E36A0()

	// Function Engine.GameMode.ReadyToStartMatch
	// (Native, Event, Protected, BlueprintEvent)
	unsigned char ReadyToStartMatch();// sub_15E3670()

	// Function Engine.GameMode.ReadyToEndMatch
	// (Native, Event, Protected, BlueprintEvent)
	unsigned char ReadyToEndMatch();// sub_15E3640()

	// Function Engine.GameMode.K2_OnSetMatchState
	// (Event, Protected, BlueprintEvent)
	void K2_OnSetMatchState(const struct FName& NewState);// sub_1B0A820()

	// Function Engine.GameMode.IsMatchInProgress
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsMatchInProgress();// sub_15E3360()

	// Function Engine.GameMode.HasMatchEnded
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char HasMatchEnded();// sub_15E3230()

	// Function Engine.GameMode.GetMatchState
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FName GetMatchState();// sub_15E3120()

	// Function Engine.GameMode.EndMatch
	// (Native, Public, BlueprintCallable)
	void EndMatch();// sub_15E2F70()

	// Function Engine.GameMode.AbortMatch
	// (Native, Public, BlueprintCallable)
	void AbortMatch();// sub_15E28C0()


}


