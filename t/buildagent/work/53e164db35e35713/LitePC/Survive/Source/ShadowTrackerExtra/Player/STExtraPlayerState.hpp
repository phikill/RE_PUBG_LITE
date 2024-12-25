

// Class ShadowTrackerExtra.STExtraPlayerState
// //Class ShadowTrackerExtra.STExtraPlayerState
//0x0198 (0x0700 - 0x0568)
class ASTExtraPlayerState : public AUAEPlayerState
{
public:
	float                                              EnegyBuffStage3RecoverHealthTime;                         // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      isLostConnection : 1;                                     // 0x056C(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x056D(0x0001)
	unsigned char                                      IsLagConnection : 1;                                      // 0x056D(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x056E(0x0006) MISSED OFFSET
	unsigned char                                      bGodSon : 1;                                              // 0x0574(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	float                                              EnegyBuffStage2RecoverHealthTime;                         // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnegyBuffStage4;                                          // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnegyBuffReduceSpeedPerSec;                               // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0584(0x0004) MISSED OFFSET
	struct FVector                                     MapMark;                                                  // 0x0588(0x000C) (BlueprintVisible, Net, IsPlainOldData)
	int                                                MarkerInfoIndex;                                          // 0x0594(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsTacticalMarkerShow : 1;                                 // 0x0598(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	float                                              EnegyBuffStage4RecoverHealthVal;                          // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLocalCharacterHPChangeDel;                              // 0x05A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              EnegyBuffStage2;                                          // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerDeadLocation;                                       // 0x05B4(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	float                                              EnegyBuffStage1RecoverHealthVal;                          // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	struct FDriveCarNotify                             DriveCarNotify;                                           // 0x05C8(0x0018) (Edit, BlueprintVisible, EditConst)
	int                                                Breath;                                                   // 0x05E0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              EnegyBuffStage3;                                          // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PingPosition;                                             // 0x05E8(0x000C) (BlueprintVisible, Net, IsPlainOldData)
	float                                              EnegyBuffStage2RecoverHealthVal;                          // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayersCountOnPlane;                                      // 0x05F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FCharacterLocAndRot                         SelfLocAndRot;                                            // 0x05FC(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      isReconnected : 1;                                        // 0x0614(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0615(0x0003) MISSED OFFSET
	float                                              PlayerHealthMax;                                          // 0x0618(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x061C(0x000C) MISSED OFFSET
	unsigned char                                      IsShowingRescueingUI : 1;                                 // 0x0628(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	int                                                AirDropBoxFirstPickUpNum;                                 // 0x062C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerKillsChangeDelegate;                              // 0x0630(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<TWeakObjectPtr<class ASTExtraPlayerState>>  TeamMatePlayerStateList;                                  // 0x0640(0x0010) (Net, ZeroConstructor)
	ExtraPlayerLiveState                               LiveState;                                                // 0x0650(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0651(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMakeMarker;                                             // 0x0658(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0668(0x0004) MISSED OFFSET
	float                                              PlayerHealth;                                             // 0x066C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              PiningTimeSeconds;                                        // 0x0670(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                TeamMatePlayerStateIndex;                                 // 0x0674(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              EnegyBuffStage1RecoverHealthTime;                         // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	TArray<int>                                        TeamMatesExitState;                                       // 0x0680(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	struct FCharacterLocAndRot                         ServerSelfLocAndRot;                                      // 0x0690(0x0018) (Net)
	float                                              EnegyBuffStage4RecoverHealthTime;                         // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x06AC(0x0004) MISSED OFFSET
	struct FCharacterAutoFollowStruct                  AutoFollowInfo;                                           // 0x06B0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	class ASTExtraBaseCharacter*                       CharacterOwner;                                           // 0x06C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EnegyBuffStage1;                                          // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnegyBuffStage3RecoverHealthVal;                          // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x06D0(0x0004) MISSED OFFSET
	float                                              CurEnegyBuff;                                             // 0x06D4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x28];                                      // 0x06D8(0x0028) MISSED OFFSET

	// Function ShadowTrackerExtra.STExtraPlayerState.SetPingPosition
	// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	void SetPingPosition(const struct FVector& InPingPosition);// sub_107B830()

	// Function ShadowTrackerExtra.STExtraPlayerState.ServerSetPingPosition
	// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
	void ServerSetPingPosition(const struct FVector& InPingPosition);// sub_107B480()

	// Function ShadowTrackerExtra.STExtraPlayerState.RespondToPawnRescueingStatusChange
	// (Final, Native, Public)
	void RespondToPawnRescueingStatusChange(class ACharacter* _helpWhoclass ACharacter* _ownerPawnunsigned char IsTurningIntofloat RemainingRescueTimeunsigned char IsFirstPlayerHelper);// sub_107B2E0()

	// Function ShadowTrackerExtra.STExtraPlayerState.RespondToPawnCanRescueOtherStatusChange
	// (Final, Native, Public)
	void RespondToPawnCanRescueOtherStatusChange(class ASTExtraBaseCharacter* _helpWhoclass ASTExtraBaseCharacter* _ownerPawnunsigned char IsTurningInto);// sub_107B1D0()

	// Function ShadowTrackerExtra.STExtraPlayerState.RespondToPawnBreathChange
	// (Final, Native, Public)
	void RespondToPawnBreathChange(float _healthTEnumAsByte<ECharacterHealthStatus> _healthStatusclass ASTExtraBaseCharacter* param2);// sub_107B0C0()

	// Function ShadowTrackerExtra.STExtraPlayerState.RefreshFollowMark
	// (Final, Native, Public)
	void RefreshFollowMark();// sub_107AFD0()

	// Function ShadowTrackerExtra.STExtraPlayerState.PlayersCountOnMyPlane
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	int PlayersCountOnMyPlane();// sub_107AE30()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_TeamMatePlayerStateList
	// (Final, Native, Public)
	void OnRep_TeamMatePlayerStateList();// sub_107AC90()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_TeamMatePlayerStateIndex
	// (Final, Native, Public)
	void OnRep_TeamMatePlayerStateIndex();// sub_107AC70()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PlayersCountOnPlane
	// (Final, Native, Public)
	void OnRep_PlayersCountOnPlane();// sub_107AC50()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PlayerReconnectEvent
	// (Final, Native, Public)
	void OnRep_PlayerReconnectEvent();// sub_107AC30()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PlayerName
	// (Native, Public)
	void OnRep_PlayerName();// sub_394D10()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PlayerLostConnectionEvent
	// (Final, Native, Public)
	void OnRep_PlayerLostConnectionEvent();// sub_107AC10()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PlayerLiveState
	// (Final, Native, Public)
	void OnRep_PlayerLiveState();// sub_107ABF0()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PlayerLagConnectionEvent
	// (Final, Native, Public)
	void OnRep_PlayerLagConnectionEvent();// sub_107ABD0()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PlayerKillsChange
	// (Native, Public)
	void OnRep_PlayerKillsChange();// sub_E03DF0()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PlayerIsFollowing
	// (Final, Native, Public)
	void OnRep_PlayerIsFollowing();// sub_107ABB0()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PlayerHealth
	// (Final, Native, Public)
	void OnRep_PlayerHealth();// sub_107AB90()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PlayerExitGameEvent
	// (Final, Native, Public)
	void OnRep_PlayerExitGameEvent();// sub_107AB70()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_PingNotify
	// (Final, Native, Public)
	void OnRep_PingNotify();// sub_107AB50()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_MapMarkNotify
	// (Final, Native, Public)
	void OnRep_MapMarkNotify();// sub_107AB30()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_HPChanged
	// (Final, Native, Public)
	void OnRep_HPChanged();// sub_3170E0()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_BreathChanged
	// (Final, Native, Public)
	void OnRep_BreathChanged();// sub_107AA90()

	// Function ShadowTrackerExtra.STExtraPlayerState.OnRep_BPS
	// (Final, Native, Public)
	void OnRep_BPS();// sub_3170E0()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerState.OnPlayerKillsChangeDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnPlayerKillsChangeDelegate__DelegateSignature();// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerState.OnMakeMarker__DelegateSignature
	// (MulticastDelegate, Public, Delegate, HasDefaults)
	void OnMakeMarker__DelegateSignature(const struct FVector2D& InMarkerCood);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerState.OnLocalCharacterHPChangeDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnLocalCharacterHPChangeDelegate__DelegateSignature(float currentHPfloat ratioHP);// sub_1B0A820()

	// DelegateFunction ShadowTrackerExtra.STExtraPlayerState.OnLagConnection__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnLagConnection__DelegateSignature(int IDunsigned char IsLag);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraPlayerState.IsSurvivedAloneInTheTeam
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsSurvivedAloneInTheTeam();// sub_107A860()

	// Function ShadowTrackerExtra.STExtraPlayerState.IsSinglePlayer
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsSinglePlayer();// sub_107A830()

	// Function ShadowTrackerExtra.STExtraPlayerState.IsAlive
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsAlive();// sub_107A740()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetUserIDByMemberID
	// (Native, Public)
	uint32_t GetUserIDByMemberID(int memberID);// sub_E031A0()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetTeamMatePlayerStateList
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void GetTeamMatePlayerStateList(TArray<class ASTExtraPlayerState*>* OutListunsigned char ExcludeMyself);// sub_107A470()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetTeamMateIndex
	// (Final, Native, Public, BlueprintCallable)
	int GetTeamMateIndex(class ASTExtraPlayerState* Teammate);// sub_107A3E0()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetPlayerTeamIndex
	// (Final, Native, Public, BlueprintCallable)
	int GetPlayerTeamIndex();// sub_1079D80()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetPlayerMaxHealth
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetPlayerMaxHealth();// sub_1079D50()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetPlayerHealth
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetPlayerHealth();// sub_1079D20()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetPlayerCharacter
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ASTExtraBaseCharacter* GetPlayerCharacter();// sub_1079CF0()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetPiningTimeSeconds
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	float GetPiningTimeSeconds();// sub_1079CC0()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetPingPosition
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	struct FVector GetPingPosition();// sub_1079C80()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetMaxEnegyBuff
	// (Final, Native, Public, BlueprintCallable)
	float GetMaxEnegyBuff();// sub_1079B30()

	// Function ShadowTrackerExtra.STExtraPlayerState.GetBreathPercentage
	// (Final, Native, Public, BlueprintCallable)
	float GetBreathPercentage();// sub_10793E0()

	// Function ShadowTrackerExtra.STExtraPlayerState.CalculateEnegyStage
	// (Final, Native, Public, BlueprintCallable)
	TEnumAsByte<EPlayerEnegyStage> CalculateEnegyStage();// sub_1078FD0()

	// Function ShadowTrackerExtra.STExtraPlayerState.AddEnegySafety
	// (Final, Native, Public, BlueprintCallable)
	void AddEnegySafety(float AddVal);// sub_1078F10()


}

