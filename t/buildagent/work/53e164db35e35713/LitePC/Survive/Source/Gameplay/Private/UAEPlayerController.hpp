

// Class Gameplay.UAEPlayerController
// //Class Gameplay.UAEPlayerController
//0x0200 (0x0938 - 0x0738)
class AUAEPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0738(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerControllerAboutToRespawnDelegate;                   // 0x0740(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToExitDelegate;                      // 0x0750(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0760(0x0005) MISSED OFFSET
	unsigned char                                      bReconnected : 1;                                         // 0x0765(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0766(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerControllerRecoveredDelegate;                        // 0x0768(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FString>                             EmoteList;                                                // 0x0778(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsGM : 1;                                                // 0x0788(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x23];                                      // 0x0789(0x0023) MISSED OFFSET
	TWeakObjectPtr<class UUAEUserWidget>               InGameUIRoot;                                             // 0x07AC(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bIsObserver : 1;                                          // 0x07B4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x07B5(0x0001) MISSED OFFSET
	ECharacterGender                                   DefaultCharacterGender;                                   // 0x07B6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x07B7(0x0001) MISSED OFFSET
	unsigned char                                      bIsSpectating : 1;                                        // 0x07B8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07B9(0x0003) MISSED OFFSET
	int                                                PlayerStartID;                                            // 0x07BC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    PlayerControllerReconnectedDelegate;                      // 0x07C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     CharacterLocation;                                        // 0x07D0(0x000C) (Net, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerControllerLostDelegate;                             // 0x07E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<int>                                        InitialWeaponAvatarList;                                  // 0x07F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<int>                                        InitialVehicleAvatarList;                                 // 0x0800(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<int>                                        InitialEquipmentAvatarList;                               // 0x0810(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FVoiceParam>                         InitialVoiceList;                                         // 0x0820(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData08[0x10];                                      // 0x0830(0x0010) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          // 0x0840(0x0010) (Net, ZeroConstructor)
	struct FGameModePlayerEquipmentAvatar              InitialEquipmentAvatarType;                               // 0x0850(0x000C) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData09[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	struct FString                                     Emotes;                                                   // 0x0860(0x0010) (Net, ZeroConstructor)
	TMap<int, int>                                     VehicleAvatarList;                                        // 0x0870(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData10[0x8];                                       // 0x08C0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerControllerRespawnedDelegate;                        // 0x08C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FPlayerNetStats                             NetStats;                                                 // 0x08D8(0x0040)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0918(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerControllerAboutToReconnectDelegate;                 // 0x0920(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0930(0x0008) MISSED OFFSET

	// Function Gameplay.UAEPlayerController.TestRespawn
	// (Final, Exec, Native, Public)
	void TestRespawn();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.TestReqScreenshot
	// (Final, Exec, Native, Public)
	void TestReqScreenshot();// sub_E048C0()

	// Function Gameplay.UAEPlayerController.SetPanels
	// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	void SetPanels(TArray<class UUAEUserWidget*> panels);// sub_E04DA0()

	// Function Gameplay.UAEPlayerController.SetCustomDepth
	// (Final, Native, Public, BlueprintCallable)
	void SetCustomDepth(unsigned char bOn);// sub_E04BD0()

	// Function Gameplay.UAEPlayerController.ServerSetVoiceId
	// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	void ServerSetVoiceId(int VoiceID);// sub_E04B10()

	// Function Gameplay.UAEPlayerController.ServerKickSelf
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerKickSelf();// sub_E04AC0()

	// Function Gameplay.UAEPlayerController.ServerExitGame
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerExitGame();// sub_E049C0()

	// Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerAcknowledgeReconnection_2(uint32_t Token);// sub_E04900()

	// Function Gameplay.UAEPlayerController.Respawn
	// (Native, Public, BlueprintCallable)
	void Respawn();// sub_6CD830()

	// Function Gameplay.UAEPlayerController.RequestScreenshot
	// (Final, Native, Public, BlueprintCallable)
	void RequestScreenshot();// sub_E048C0()

	// Function Gameplay.UAEPlayerController.ReleaseInGameUI
	// (Native, Public, BlueprintCallable)
	void ReleaseInGameUI();// sub_E048A0()

	// Function Gameplay.UAEPlayerController.PrintStatistics
	// (Final, Exec, Native, Public)
	void PrintStatistics();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.PrintLocation
	// (Final, Exec, Native, Public)
	void PrintLocation();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.PlayerStartIDReceived
	// (Final, Native, Protected)
	void PlayerStartIDReceived();// sub_E03E70()

	// Function Gameplay.UAEPlayerController.OnRep_IsSpectating
	// (Native, Public)
	void OnRep_IsSpectating();// sub_E03DD0()

	// Function Gameplay.UAEPlayerController.OnRep_IsObserver
	// (Native, Public)
	void OnRep_IsObserver();// sub_E03D90()

	// Function Gameplay.UAEPlayerController.OnRep_InitialWeaponAvatarList
	// (Final, Native, Public)
	void OnRep_InitialWeaponAvatarList();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.OnRep_InitialVoiceList
	// (Final, Native, Public)
	void OnRep_InitialVoiceList();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.OnRep_InitialVehicleAvatarList
	// (Final, Native, Public)
	void OnRep_InitialVehicleAvatarList();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.OnRep_InitialItemList
	// (Final, Native, Public)
	void OnRep_InitialItemList();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatarList
	// (Final, Native, Public)
	void OnRep_InitialEquipmentAvatarList();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.OnRep_Emotes
	// (Final, Native, Public)
	void OnRep_Emotes();// sub_E03D50()

	// Function Gameplay.UAEPlayerController.OnCharacterDestroyed
	// (Final, Native, Public)
	void OnCharacterDestroyed(class AActor* Actor);// sub_445A50()

	// Function Gameplay.UAEPlayerController.ObjectReports
	// (Final, Exec, Native, Public)
	void ObjectReports(const struct FString& InFileName);// sub_6D3590()

	// Function Gameplay.UAEPlayerController.ObjectPathReport
	// (Final, Exec, Native, Public)
	void ObjectPathReport(const struct FString& InFileName);// sub_6D3590()

	// Function Gameplay.UAEPlayerController.ObjectCountReport
	// (Final, Exec, Native, Public)
	void ObjectCountReport(const struct FString& InFileName);// sub_6D3590()

	// Function Gameplay.UAEPlayerController.LobbyMemberVoice
	// (Event, Public, BlueprintEvent)
	void LobbyMemberVoice(int Memberint State);// sub_1B0A820()

	// Function Gameplay.UAEPlayerController.KickSelf
	// (Final, Exec, Native, Public)
	void KickSelf();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.IsSpectator
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsSpectator();// sub_E03A90()

	// Function Gameplay.UAEPlayerController.IsObserver
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsObserver();// sub_E03A30()

	// Function Gameplay.UAEPlayerController.IsInSpectating
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsInSpectating();// sub_E03A00()

	// Function Gameplay.UAEPlayerController.InitWithPlayerParams
	// (Final, Native, Public, HasOutParms)
	void InitWithPlayerParams(const struct FGameModePlayerParams& Params);// sub_E03850()

	// Function Gameplay.UAEPlayerController.InitInGameUI
	// (Native, Public, BlueprintCallable)
	void InitInGameUI();// sub_E03830()

	// Function Gameplay.UAEPlayerController.ExitGame
	// (Native, Public, BlueprintCallable)
	void ExitGame();// sub_E027E0()

	// Function Gameplay.UAEPlayerController.ExcuteIntRecord
	// (Final, Native, Public)
	void ExcuteIntRecord(const struct FString& Keyint Count);// sub_E026C0()

	// Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord
	// (Final, Native, Public)
	void ExcuteIntCounterRecord(const struct FString& Keyint Count);// sub_E025A0()

	// Function Gameplay.UAEPlayerController.EnableInGameUI
	// (Final, Exec, Native, Public)
	void EnableInGameUI();// sub_E02580()

	// Function Gameplay.UAEPlayerController.DumpNetActors
	// (Final, Exec, Native, Public)
	void DumpNetActors();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.DumpAllUI
	// (Final, Exec, Native, Public)
	void DumpAllUI();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.DumpAllObjects
	// (Final, Exec, Native, Public)
	void DumpAllObjects();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.DumpAllActors
	// (Final, Exec, Native, Public)
	void DumpAllActors();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.DoCrash
	// (Final, Exec, Native, Public)
	void DoCrash();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.DisableInGameUI
	// (Final, Exec, Native, Public)
	void DisableInGameUI();// sub_E02560()

	// Function Gameplay.UAEPlayerController.CopyDebugInfoRotation
	// (Final, Exec, Native, Public)
	void CopyDebugInfoRotation();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.CopyDebugInfoLocation
	// (Final, Exec, Native, Public)
	void CopyDebugInfoLocation();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.CopyDebugInfo
	// (Final, Exec, Native, Public)
	void CopyDebugInfo();// sub_3170E0()

	// Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientBroadcastRespawnComplete();// sub_E02520()

	// Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientBroadcastReconnectionSuccessful();// sub_E02500()

	// Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientAcknowledgeReconnection_4(uint32_t Token);// sub_E02470()

	// Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn
	// (Native, Public, BlueprintCallable)
	unsigned char CheckAcknowledgedPawn(class APawn* InPawn);// sub_E023D0()

	// Function Gameplay.UAEPlayerController.CastUIMsg
	// (Exec, Native, Public, BlueprintCallable)
	void CastUIMsg(const struct FString& strMsgconst struct FString& module);// sub_E022E0()

	// Function Gameplay.UAEPlayerController.ActorReports
	// (Final, Exec, Native, Public)
	void ActorReports(const struct FString& InFileName);// sub_6D3590()


}

