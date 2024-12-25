

// Class Gameplay.UAEOBState
// //Class Gameplay.UAEOBState
//0x0000 (0x0450 - 0x0450)
class AUAEOBState : public APlayerState
{
public:

	// Function Engine.PlayerState.ReceiveOverrideWith
	// (Event, Protected, BlueprintEvent)
	void ReceiveOverrideWith(class APlayerState* OldPlayerState);// sub_1B0A820()

	// Function Engine.PlayerState.ReceiveCopyProperties
	// (Event, Protected, BlueprintEvent)
	void ReceiveCopyProperties(class APlayerState* NewPlayerState);// sub_1B0A820()

	// Function Engine.PlayerState.OnRep_UniqueId
	// (Native, Public)
	void OnRep_UniqueId();// sub_394D50()

	// Function Engine.PlayerState.OnRep_Score
	// (Native, Public)
	void OnRep_Score();// sub_394CF0()

	// Function Engine.PlayerState.OnRep_PlayerName
	// (Native, Public)
	void OnRep_PlayerName();// sub_394D10()

	// Function Engine.PlayerState.OnRep_bIsInactive
	// (Native, Public)
	void OnRep_bIsInactive();// sub_394D30()


}

