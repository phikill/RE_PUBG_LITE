

// Class ShadowTrackerExtra.STExtraGameStateBase
// //Class ShadowTrackerExtra.STExtraGameStateBase
//0x03B8 (0x07F0 - 0x0438)
class ASTExtraGameStateBase : public AUAEGameState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	int                                                PlayerNumPerTeam;                                         // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsPickUpFillBulletMode : 1;                              // 0x0444(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0445(0x0013) MISSED OFFSET
	TArray<class AAirDropBoxActor*>                    AirDropItems;                                             // 0x0458(0x0010) (ZeroConstructor)
	int                                                TotalStartPlayers;                                        // 0x0468(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	int                                                TrainingCountdownTimer;                                   // 0x0470(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0474(0x0008) MISSED OFFSET
	int                                                AliveAIPlayerNum;                                         // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsEventMode : 1;                                         // 0x0480(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04 : 8;                                        // 0x0481(0x0001)
	unsigned char                                      bForbitAudioVisual : 1;                                   // 0x0481(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0482(0x0002) MISSED OFFSET
	int                                                ReadyStateTime;                                           // 0x0484(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerNumChange;                                        // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterCircleWaveOver;                                // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              TrainingModePickUpColdCD;                                 // 0x04A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InviteCountDownTime;                                      // 0x04AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrainingModeDropLifeTime;                                 // 0x04B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropItemLifeTime;                                         // 0x04B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      IsEquipmentMaintain : 1;                                  // 0x04B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameEnd;                                                // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeGameModeState;                                    // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBlueCircleSizeAndPosition;                              // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bGunSamePriority : 1;                                     // 0x0500(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0xF];                                       // 0x0501(0x000F) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMatchStarted;                                           // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamNumChange;                                          // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bIsTrainingMode : 1;                                      // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	int                                                NumStartPlayers;                                          // 0x0534(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCharacterLastCircle;                                    // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ULevelEventCenter*                           LevelEventCenter;                                         // 0x0548(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsWeaponAutoReloadMode : 1;                              // 0x0550(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0551(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBeKilledNumChange;                                      // 0x0558(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWeaponsPenetrationConfig*                   WeaponsPenetrationConfig;                                 // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MatchStartTimeServerSec;                                  // 0x0570(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bFlareGun : 1;                                            // 0x0574(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	int                                                Deploy_InWhiteCarepackagesLeft;                           // 0x0578(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Deploy_OutsideCarepackagesLeft;                           // 0x057C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                AliveTeamNum;                                             // 0x0580(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0584(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBlueCirclePreWarning;                                   // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAirplanePath                               AirplanePath;                                             // 0x0598(0x0030) (Net)
	struct FScriptMulticastDelegate                    OnSafeZoneTips;                                           // 0x05C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData13[0x1];                                       // 0x05D8(0x0001) MISSED OFFSET
	unsigned char                                      IsFPPGameMode : 1;                                        // 0x05D9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0xE];                                       // 0x05DA(0x000E) MISSED OFFSET
	TArray<struct FString>                             OpenTagCullingMaps;                                       // 0x05E8(0x0010) (ZeroConstructor, Config)
	struct FScriptMulticastDelegate                    ReConnectGameStateInfoNotify;                             // 0x05F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     GameModeDisplayName;                                      // 0x0608(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                PlayerNum;                                                // 0x0618(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	unsigned char                                      bDebugEnableDamageEffectInTrainingMode : 1;               // 0x0620(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0621(0x0003) MISSED OFFSET
	int                                                NumJoinPlayers;                                           // 0x0624(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bCanKillerSpectate : 1;                                   // 0x0628(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	int                                                NumTeams;                                                 // 0x062C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      IsUseGameStartCountDown : 1;                              // 0x0630(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAirAttack;                                              // 0x0638(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                AlivePlayerNum;                                           // 0x0648(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AirAttackArea;                                            // 0x064C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData19[0x10];                                      // 0x0658(0x0010) MISSED OFFSET
	unsigned char                                      bUseTracerReplication : 1;                                // 0x0668(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnJoinedPlayerNumChange;                                  // 0x0670(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FCarepackageDeployInfo>              CarepackageDeployInfos;                                   // 0x0680(0x0010) (Net, ZeroConstructor)
	unsigned char                                      bForbitHurtEffect : 1;                                    // 0x0690(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBlueCircleRun;                                          // 0x0698(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FCircleDataMining>                   CircleDataMining;                                         // 0x06A8(0x0010) (ZeroConstructor)
	unsigned char                                      bEnablePickUpTrainingMode : 1;                            // 0x06B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGameModeType                                      GameModeType;                                             // 0x06B9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsTest : 1;                                               // 0x06BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22 : 8;                                        // 0x06BB(0x0001)
	unsigned char                                      bReadyStateCountingDown : 1;                              // 0x06BB(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23 : 8;                                        // 0x06BC(0x0001)
	unsigned char                                      bIsCustomGame : 1;                                        // 0x06BC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x06BD(0x0003) MISSED OFFSET
	struct FString                                     MatchId;                                                  // 0x06C0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	struct FString                                     MatchShortGuid;                                           // 0x06D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FAirAttackOrder                             AirAttackOrder;                                           // 0x06E0(0x0028)
	struct FScriptMulticastDelegate                    OnMatchHasEnded;                                          // 0x0708(0x0010) (ZeroConstructor, InstancedReference)
	TMap<struct FString, float>                        BeInvitedPlayers;                                         // 0x0718(0x0050) (ZeroConstructor)
	int                                                PlayerNumOnPlane;                                         // 0x0768(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bEnableAutoAimTrainingMode : 1;                           // 0x076C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x076D(0x0003) MISSED OFFSET
	struct FVector                                     BlueCircle;                                               // 0x0770(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WhiteCircle;                                              // 0x077C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsGasRelease : 1;                                        // 0x0788(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0789(0x0003) MISSED OFFSET
	struct FVector                                     SafetyZone;                                               // 0x078C(0x000C) (BlueprintVisible, Net, Transient, IsPlainOldData)
	struct FVector                                     SafetyZoneBegin;                                          // 0x0798(0x000C) (BlueprintVisible, Net, Transient, IsPlainOldData)
	int                                                CurCircleWave;                                            // 0x07A4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              TotalReleaseDuration;                                     // 0x07A8(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedReleaseDuration;                                   // 0x07AC(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedGasReleaseDuration;                                // 0x07B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsGasWarning : 1;                                        // 0x07B4(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x07B5(0x0003) MISSED OFFSET
	float                                              TotalWarningDuration;                                     // 0x07B8(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedWarningDuration;                                   // 0x07BC(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedWarningDurationForClient;                          // 0x07C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData28[0xC];                                       // 0x07C4(0x000C) MISSED OFFSET
	class UTslRadioMessageManager*                     RadioMessageManager;                                      // 0x07D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTslRadioMessageManager*                     RadioMessageManagerClass;                                 // 0x07D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GameModeState;                                            // 0x07E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForbitAutoPick : 1;                                      // 0x07E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29 : 8;                                        // 0x07E9(0x0001)
	unsigned char                                      bUseFootPrint : 1;                                        // 0x07E9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x6];                                       // 0x07EA(0x0006) MISSED OFFSET

	// Function ShadowTrackerExtra.STExtraGameStateBase.SyncAirplaneRoute
	// (Final, Native, Public, HasDefaults)
	void SyncAirplaneRoute(const struct FVector& StartLocconst struct FVector& StopLocconst struct FVector& CanJumpLocconst struct FVector& ForceJumpLoc);// sub_10EF750()

	// Function ShadowTrackerExtra.STExtraGameStateBase.SimulateAirAttackOver
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void SimulateAirAttackOver();// sub_10EF430()

	// Function ShadowTrackerExtra.STExtraGameStateBase.SetTagCulling
	// (Final, Native, Public, BlueprintCallable)
	void SetTagCulling(unsigned char IsUse);// sub_10EF030()

	// Function ShadowTrackerExtra.STExtraGameStateBase.SetReConnectGameStateInfo
	// (Final, Native, Public)
	void SetReConnectGameStateInfo(const struct FReConnectGameStateInfo& ReConnectInfo);// sub_10EEE70()

	// Function ShadowTrackerExtra.STExtraGameStateBase.SetCurAirAttackWave
	// (Final, Native, Public)
	void SetCurAirAttackWave(int AirAttackWave);// sub_10EED70()

	// Function ShadowTrackerExtra.STExtraGameStateBase.SetCurAirAttackType
	// (Final, Native, Public)
	void SetCurAirAttackType(TEnumAsByte<EAirAttackInfo> airattacktype);// sub_10EECF0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_SafetyZoneRelease
	// (Final, Native, Protected)
	void OnRep_SafetyZoneRelease();// sub_10EE090()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_ReadyStateTime
	// (Final, Native, Public)
	void OnRep_ReadyStateTime();// sub_10EE070()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_ReadyStateCountingDown
	// (Final, Native, Public)
	void OnRep_ReadyStateCountingDown();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_PlayerNumPerTeam
	// (Final, Native, Public)
	void OnRep_PlayerNumPerTeam();// sub_10EE050()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_PlayerNumOnPlane
	// (Final, Native, Public)
	void OnRep_PlayerNumOnPlane();// sub_10EE030()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_PlayerNumChange
	// (Final, Native, Public)
	void OnRep_PlayerNumChange();// sub_10EE010()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_MatchId
	// (Final, Native, Public)
	void OnRep_MatchId();// sub_10EDFF0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_IsTrainingMode
	// (Final, Native, Public)
	void OnRep_IsTrainingMode();// sub_10EDFD0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_IsFPPMode
	// (Final, Native, Public)
	void OnRep_IsFPPMode();// sub_10EDFB0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_GasRelease
	// (Final, Native, Protected)
	void OnRep_GasRelease();// sub_10EDF90()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_GameModeState
	// (Final, Native, Public)
	void OnRep_GameModeState();// sub_10EDF70()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_ElapsedWarningDuration
	// (Final, Native, Protected)
	void OnRep_ElapsedWarningDuration();// sub_10EDF50()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_AliveTeamNum
	// (Final, Native, Public)
	void OnRep_AliveTeamNum();// sub_10EDF30()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_AlivePlayerNum
	// (Final, Native, Public)
	void OnRep_AlivePlayerNum();// sub_10EDF10()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnRep_AirplanePath
	// (Final, Native, Public)
	void OnRep_AirplanePath();// sub_10EDEF0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.OnGameModeDisplayNameChange
	// (Final, Native, Protected)
	void OnGameModeDisplayNameChange();// sub_10EDED0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.IsTeamMatch
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsTeamMatch();// sub_10EDD30()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetRepServerWorldTimeSeconds
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	float GetRepServerWorldTimeSeconds();// sub_10ED690()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetReportUiType
	// (Native, Public, BlueprintCallable, BlueprintPure, Const)
	EReportUiType GetReportUiType();// sub_10ED6C0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetReConnectGameStateInfo
	// (Final, Native, Public)
	struct FReConnectGameStateInfo GetReConnectGameStateInfo();// sub_10ED560()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetGameModeState
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	struct FName GetGameModeState();// sub_10ED400()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetForceJumpLoc
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	struct FVector GetForceJumpLoc();// sub_10ED3C0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetFlareDeploymentType
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	EFlareDeploymentType GetFlareDeploymentType(const struct FVector2D& InLocation);// sub_10ED340()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetCurCircleWave
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	int GetCurCircleWave();// sub_10ED1D0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetCurCircleState
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	TEnumAsByte<ECircleInfo> GetCurCircleState();// sub_10ED190()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetCarepackagesLeft
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetCarepackagesLeft(EFlareDeploymentType FlareDeploymentType);// sub_10ED100()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetCarepackageItems
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	TArray<class AAirDropBoxActor*> GetCarepackageItems();// sub_10ED070()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetCarepackageDeployInfo
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	TArray<struct FCarepackageDeployInfo> GetCarepackageDeployInfo();// sub_10ECFE0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetCanJumpLoc
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	struct FVector GetCanJumpLoc();// sub_10ECFA0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetAirplaneStopLoc
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	struct FVector GetAirplaneStopLoc();// sub_10ECE30()

	// Function ShadowTrackerExtra.STExtraGameStateBase.GetAirplaneStartLoc
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	struct FVector GetAirplaneStartLoc();// sub_10ECDF0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.CanDeployFlareInZone
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char CanDeployFlareInZone();// sub_10EC4F0()

	// Function ShadowTrackerExtra.STExtraGameStateBase.BroadcastRoute
	// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
	void BroadcastRoute(const struct FVector& StartLocconst struct FVector& StopLocconst struct FVector& CanJumpLocconst struct FVector& ForceJumpLoc);// sub_10EC370()

	// Function ShadowTrackerExtra.STExtraGameStateBase.BroadcastMidGameBanMessage
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void BroadcastMidGameBanMessage(const struct FString& BannedPlayerNameconst struct FString& BanCodeconst struct FString& BanType);// sub_10EC230()

	// Function ShadowTrackerExtra.STExtraGameStateBase.BroadcastLastCircle
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void BroadcastLastCircle();// sub_10EC210()

	// Function ShadowTrackerExtra.STExtraGameStateBase.BroadcastCircleWaveOver
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastCircleWaveOver(int Indexint bp);// sub_10EC110()

	// Function ShadowTrackerExtra.STExtraGameStateBase.BroadcastCircleInfo
	// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
	void BroadcastCircleInfo(TEnumAsByte<ECircleInfo> circleInfofloat Time);// sub_10EC010()

	// Function ShadowTrackerExtra.STExtraGameStateBase.BroadcastAirAttackWarning
	// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
	void BroadcastAirAttackWarning(const struct FVector& airAttackAreaSrcint waveindex);// sub_10EBF50()

	// Function ShadowTrackerExtra.STExtraGameStateBase.BroadcastAirAttackOrder
	// (Net, NetReliable, Native, Event, NetMulticast, Public)
	void BroadcastAirAttackOrder(const struct FAirAttackOrder& airAttackOrderSrcint waveindex);// sub_10EBE60()


}

