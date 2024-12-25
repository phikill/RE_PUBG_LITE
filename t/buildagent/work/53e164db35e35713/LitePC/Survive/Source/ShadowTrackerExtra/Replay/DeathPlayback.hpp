

// Class ShadowTrackerExtra.DeathPlayback
// //Class ShadowTrackerExtra.DeathPlayback
//0x00A0 (0x00C8 - 0x0028)
class UDeathPlayback : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	unsigned char                                      bDeathPlaybackEnable : 1;                                 // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0031(0x003F) MISSED OFFSET
	class ASTExtraPlayerController*                    PlayerController;                                         // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FDeathPlayCharacterTrans> CharacterTransMap;                                        // 0x0078(0x0050) (ZeroConstructor)

	// Function ShadowTrackerExtra.DeathPlayback.StopRecordingReplay
	// (Final, Native, Public, BlueprintCallable)
	void StopRecordingReplay();// sub_1637E60()

	// Function ShadowTrackerExtra.DeathPlayback.StopPlay
	// (Final, Native, Public, BlueprintCallable)
	void StopPlay();// sub_1637E40()

	// Function ShadowTrackerExtra.DeathPlayback.StartRecordingReplay
	// (Final, Native, Public, BlueprintCallable)
	void StartRecordingReplay();// sub_1637E20()

	// Function ShadowTrackerExtra.DeathPlayback.PlayReplay
	// (Final, Native, Public, BlueprintCallable)
	void PlayReplay();// sub_1637650()

	// Function ShadowTrackerExtra.DeathPlayback.IsInRecordState
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsInRecordState();// sub_1637360()

	// Function ShadowTrackerExtra.DeathPlayback.IsInPlayState
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsInPlayState();// sub_1637330()

	// Function ShadowTrackerExtra.DeathPlayback.HaveRecordingData
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char HaveRecordingData();// sub_1637300()

	// Function ShadowTrackerExtra.DeathPlayback.GetSpectatorName
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FString GetSpectatorName();// sub_16370E0()


}

