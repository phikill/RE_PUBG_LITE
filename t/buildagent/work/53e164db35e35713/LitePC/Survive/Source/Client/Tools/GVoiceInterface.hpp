

// Class Client.GVoiceInterface
// //Class Client.GVoiceInterface
//0x00F8 (0x0120 - 0x0028)
class UGVoiceInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0028(0x000C) MISSED OFFSET
	unsigned char                                      bEnableWithRegionInLobby : 1;                             // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0035(0x0013) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD0];                                      // 0x0050(0x00D0) MISSED OFFSET

	// Function Client.GVoiceInterface.UploadRecordFile
	// (Final, Native, Public, BlueprintCallable)
	void UploadRecordFile();// sub_3170E0()

	// Function Client.GVoiceInterface.TeamSpeakerEnable
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char TeamSpeakerEnable();// sub_56A0C0()

	// Function Client.GVoiceInterface.TeamMicphoneEnable
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char TeamMicphoneEnable();// sub_56A0A0()

	// Function Client.GVoiceInterface.StopRecord
	// (Final, Native, Public, BlueprintCallable)
	void StopRecord();// sub_3170E0()

	// Function Client.GVoiceInterface.StopPlayRecordFile
	// (Final, Native, Public, BlueprintCallable)
	void StopPlayRecordFile();// sub_3170E0()

	// Function Client.GVoiceInterface.StartRecord
	// (Final, Native, Public, BlueprintCallable)
	void StartRecord();// sub_3170E0()

	// Function Client.GVoiceInterface.SpeechToText
	// (Final, Native, Public, BlueprintCallable)
	void SpeechToText();// sub_3170E0()

	// Function Client.GVoiceInterface.ShowOpenSpeakerAtFirstMsg
	// (Final, Native, Public, BlueprintCallable)
	void ShowOpenSpeakerAtFirstMsg();// sub_3170E0()

	// Function Client.GVoiceInterface.SetVoiceServer
	// (Final, Native, Public, BlueprintCallable)
	void SetVoiceServer(TEnumAsByte<EGVoiceServer> InType);// sub_56A020()

	// Function Client.GVoiceInterface.SetVadSensitive
	// (Final, Native, Public, BlueprintCallable)
	void SetVadSensitive(int VadSensitive);// sub_569FA0()

	// Function Client.GVoiceInterface.SetSpeakerVolume
	// (Final, Native, Public, BlueprintCallable)
	void SetSpeakerVolume(float Value);// sub_569F20()

	// Function Client.GVoiceInterface.SetSpeakerStatus
	// (Final, Native, Public, BlueprintCallable)
	void SetSpeakerStatus(unsigned char Flag);// sub_317670()

	// Function Client.GVoiceInterface.SetMicphoneVolume
	// (Final, Native, Public, BlueprintCallable)
	void SetMicphoneVolume(float Value);// sub_569EA0()

	// Function Client.GVoiceInterface.SetMicphoneStatus
	// (Final, Native, Public, BlueprintCallable)
	void SetMicphoneStatus(unsigned char Flag);// sub_317670()

	// Function Client.GVoiceInterface.SetLbsRoomEnableStatus
	// (Final, Native, Public, BlueprintCallable)
	void SetLbsRoomEnableStatus(unsigned char Flag);// sub_317670()

	// Function Client.GVoiceInterface.ResetWhenLogOut
	// (Final, Native, Public, BlueprintCallable)
	void ResetWhenLogOut();// sub_569E80()

	// Function Client.GVoiceInterface.ReactiveLbsStatus
	// (Final, Native, Public, BlueprintCallable)
	void ReactiveLbsStatus();// sub_3170E0()

	// Function Client.GVoiceInterface.QuitTeamRoom
	// (Final, Native, Public, BlueprintCallable)
	void QuitTeamRoom();// sub_569E60()

	// Function Client.GVoiceInterface.PlayRecordFile
	// (Final, Native, Public, BlueprintCallable)
	void PlayRecordFile();// sub_3170E0()

	// Function Client.GVoiceInterface.OpenTeamSpeakerOnly
	// (Final, Native, Public, BlueprintCallable)
	void OpenTeamSpeakerOnly(unsigned char showTips);// sub_569DD0()

	// Function Client.GVoiceInterface.OpenTeamMicphoneOnly
	// (Final, Native, Public, BlueprintCallable)
	int OpenTeamMicphoneOnly(unsigned char showTips);// sub_569D40()

	// Function Client.GVoiceInterface.OpenTeamMicAndSpeaker
	// (Final, Native, Public, BlueprintCallable)
	void OpenTeamMicAndSpeaker();// sub_569D20()

	// Function Client.GVoiceInterface.OpenSpeaker
	// (Final, Native, Public, BlueprintCallable)
	int OpenSpeaker();// sub_569CF0()

	// Function Client.GVoiceInterface.OpenMicPtt
	// (Final, Native, Public, BlueprintCallable)
	void OpenMicPtt();// sub_569CD0()

	// Function Client.GVoiceInterface.OpenMic
	// (Final, Native, Public, BlueprintCallable)
	int OpenMic();// sub_569CA0()

	// Function Client.GVoiceInterface.OpenAllSpeaker
	// (Final, Native, Public, BlueprintCallable)
	void OpenAllSpeaker(unsigned char showTips);// sub_569C10()

	// Function Client.GVoiceInterface.OpenAllMicphone
	// (Final, Native, Public, BlueprintCallable)
	int OpenAllMicphone(unsigned char showTips);// sub_569B80()

	// Function Client.GVoiceInterface.OpenAllMicAndSpeaker
	// (Final, Native, Public, BlueprintCallable)
	void OpenAllMicAndSpeaker();// sub_569B60()

	// Function Client.GVoiceInterface.LbsSpeakerEnable
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char LbsSpeakerEnable();// sub_569B40()

	// Function Client.GVoiceInterface.LbsMicphoneEnable
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char LbsMicphoneEnable();// sub_569B20()

	// Function Client.GVoiceInterface.JoinTeamRoom
	// (Final, Native, Public, BlueprintCallable)
	void JoinTeamRoom(const struct FString& TeamRoomconst struct FString& userId);// sub_5699B0()

	// Function Client.GVoiceInterface.JoinRangeRoom
	// (Final, Native, Public, BlueprintCallable)
	void JoinRangeRoom(const struct FString& RangeRoomconst struct FString& userId);// sub_569840()

	// Function Client.GVoiceInterface.InitGVoiceComponent
	// (Final, Native, Public, BlueprintCallable)
	void InitGVoiceComponent(const struct FString& userId);// sub_569760()

	// Function Client.GVoiceInterface.HaveTeamRoom
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char HaveTeamRoom();// sub_569740()

	// Function Client.GVoiceInterface.HaveRangeRoom
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char HaveRangeRoom();// sub_569720()

	// Function Client.GVoiceInterface.GetVoiceLength
	// (Final, Native, Public, BlueprintCallable)
	float GetVoiceLength();// sub_5696F0()

	// Function Client.GVoiceInterface.GetVadSensitive
	// (Final, Native, Public, BlueprintCallable)
	int GetVadSensitive();// sub_5696C0()

	// Function Client.GVoiceInterface.GetTeammateUserIDByMemberID
	// (Final, Native, Public, BlueprintCallable)
	struct FString GetTeammateUserIDByMemberID(int InMemberID);// sub_5695F0()

	// Function Client.GVoiceInterface.GetRegionFromSessionID
	// (Final, Native, Public, BlueprintCallable)
	TEnumAsByte<EGVoiceServer> GetRegionFromSessionID(const struct FString& SessionID);// sub_569500()

	// Function Client.GVoiceInterface.GetAuthKey
	// (Final, Native, Public, BlueprintCallable)
	void GetAuthKey();// sub_3170E0()

	// Function Client.GVoiceInterface.ForbidTeammateVoiceById
	// (Final, Native, Public, BlueprintCallable)
	void ForbidTeammateVoiceById(int memberIDunsigned char IsEnable);// sub_569440()

	// Function Client.GVoiceInterface.DownloadRecordFile
	// (Final, Native, Public, BlueprintCallable)
	void DownloadRecordFile();// sub_3170E0()

	// Function Client.GVoiceInterface.CloseSpeaker
	// (Final, Native, Public, BlueprintCallable)
	void CloseSpeaker();// sub_569420()

	// Function Client.GVoiceInterface.CloseMicPtt
	// (Final, Native, Public, BlueprintCallable)
	void CloseMicPtt();// sub_569400()

	// Function Client.GVoiceInterface.CloseMic
	// (Final, Native, Public, BlueprintCallable)
	void CloseMic();// sub_5693E0()

	// Function Client.GVoiceInterface.CloseAllSpeaker
	// (Final, Native, Public, BlueprintCallable)
	void CloseAllSpeaker(unsigned char showTips);// sub_569350()

	// Function Client.GVoiceInterface.CloseAllMicphone
	// (Final, Native, Public, BlueprintCallable)
	void CloseAllMicphone(unsigned char showTips);// sub_5692C0()

	// Function Client.GVoiceInterface.CloseAllMicAndSpeaker
	// (Final, Native, Public, BlueprintCallable)
	void CloseAllMicAndSpeaker();// sub_5692A0()


}

