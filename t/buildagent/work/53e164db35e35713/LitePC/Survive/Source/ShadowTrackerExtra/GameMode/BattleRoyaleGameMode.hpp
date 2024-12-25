

// Class ShadowTrackerExtra.BattleRoyaleGameMode
// //Class ShadowTrackerExtra.BattleRoyaleGameMode
//0x0340 (0x1710 - 0x13D0)
class ABattleRoyaleGameMode : public ATslLPCGameMode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x13D0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameModeEnterFlying;                                    // 0x13D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameModeExitFlying;                                     // 0x13E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameModeEnterPlane;                                     // 0x13F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              Radius0;                                                  // 0x1408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius1;                                                  // 0x140C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius2;                                                  // 0x1410(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius3;                                                  // 0x1414(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PlaneSpeed;                                               // 0x1418(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PlaneHeight;                                              // 0x141C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CanOpenParachuteHeight;                                   // 0x1420(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ForceOpenParachuteHeight;                                 // 0x1424(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeight;                                     // 0x1428(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlueCircleRadius;                                         // 0x142C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x1430(0x000C) MISSED OFFSET
	EGameModeType                                      GameModeType;                                             // 0x143C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForbitAudioVisual : 1;                                   // 0x143D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 8;                                        // 0x143E(0x0001)
	unsigned char                                      bForbitAutoPick : 1;                                      // 0x143E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03 : 8;                                        // 0x143F(0x0001)
	unsigned char                                      bForbitHurtEffect : 1;                                    // 0x143F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04 : 8;                                        // 0x1440(0x0001)
	unsigned char                                      bGunSamePriority : 1;                                     // 0x1440(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05 : 8;                                        // 0x1441(0x0001)
	unsigned char                                      bUseFootPrint : 1;                                        // 0x1441(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06 : 8;                                        // 0x1442(0x0001)
	unsigned char                                      bServerOpenPassWallCheck : 1;                             // 0x1442(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1D];                                      // 0x1443(0x001D) MISSED OFFSET
	class AAIController*                               AIControllerClass;                                        // 0x1460(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AAIController*                               NewAIControllerClass;                                     // 0x1468(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BornLocation;                                             // 0x1470(0x000C) (Edit, IsPlainOldData)
	float                                              BornRadius;                                               // 0x147C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastCircleCountToDestroyActorOnServer;                    // 0x1480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1481(0x0003) MISSED OFFSET
	int                                                MaxDynamicLoadingWorldPlayer;                             // 0x1484(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     GameModeDisplayName;                                      // 0x1488(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                bIsAutoReloadWeaponGameMode;                              // 0x1498(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                bIsPickUpFillBulletGameMode;                              // 0x149C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UGamemodeAIDataAsset*                        GamemodeAIDataAsset;                                      // 0x14A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragOnGroundDownTraceDistance;                            // 0x14A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DragOnGroundUpTraceDistance;                              // 0x14AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNeverDie : 1;                                            // 0x14B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09 : 8;                                        // 0x14B1(0x0001)
	unsigned char                                      bCheckGameEnd : 1;                                        // 0x14B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x16];                                      // 0x14B2(0x0016) MISSED OFFSET
	class UGameModeDataAsset*                          GameModeDataAsset;                                        // 0x14C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x14D0(0x0008) MISSED OFFSET
	float                                              OutBoundDamage;                                           // 0x14D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x14DC(0x0004) MISSED OFFSET
	class AActor*                                      PlanePawn;                                                // 0x14E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanJump : 1;                                             // 0x14E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13 : 8;                                        // 0x14E9(0x0001)
	unsigned char                                      bInitGlobalConfig : 1;                                    // 0x14E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x14EA(0x0006) MISSED OFFSET
	class UGameModeState*                              CurrentState;                                             // 0x14F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameModeState*                              GameModeStateActive;                                      // 0x14F8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameModeState*                              GameModeStateReady;                                       // 0x1500(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameModeState*                              GameModeStateFlying;                                      // 0x1508(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameModeState*                              GameModeStateFighting;                                    // 0x1510(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameModeState*                              GameModeStateFinished;                                    // 0x1518(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChallengeLevelRules*                        ChallengeLevelRulesClass;                                 // 0x1520(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UChallengeLevelRules*                        ChallengeLevelRules;                                      // 0x1528(0x0008) (ZeroConstructor, IsPlainOldData)
	class AUAELevelDirector*                           LevelDirectorClass;                                       // 0x1530(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCircleMgrComponent*                         CircleMgrComponent;                                       // 0x1538(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData15[0x80];                                      // 0x1540(0x0080) MISSED OFFSET
	class UAIActingComponent*                          AIActingComp;                                             // 0x15C0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AAIWorldVolume*                              AIWorldVolume;                                            // 0x15C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WorldLoadedType;                                          // 0x15D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x15D1(0x0003) MISSED OFFSET
	int                                                MaxNoConsiderActorNum;                                    // 0x15D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxDestoryActorNumPerFrame;                               // 0x15D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EditorGuidMode : 1;                                       // 0x15DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x43];                                      // 0x15DD(0x0043) MISSED OFFSET
	int                                                bEnableAIPolicyDecisionLog;                               // 0x1620(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                bEnableAIPolicyDecisionLogShipping;                       // 0x1624(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                AIPolicyDecisionTargetPlayerNum;                          // 0x1628(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIPolicyDecisionRelevantUpdateInterval;                   // 0x162C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RelevantPlayerAIPolicyDecisionCheckDistanceSqurad;        // 0x1630(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bVisibleCheck : 1;                                        // 0x1634(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18 : 8;                                        // 0x1635(0x0001)
	unsigned char                                      bReplacePistolWhenPickUpMainWeapon : 1;                   // 0x1635(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      LastCircleCountToDestroyActorOnServerConfig;              // 0x1636(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x1637(0x0001) MISSED OFFSET
	int                                                MaxDynamicLoadingWorldPlayerConfig;                       // 0x1638(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AirplaneUICheckDist;                                      // 0x163C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x5];                                       // 0x1640(0x0005) MISSED OFFSET
	unsigned char                                      bCannotGoFinishState : 1;                                 // 0x1645(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21 : 8;                                        // 0x1646(0x0001)
	unsigned char                                      bOpenWarModeSwitch : 1;                                   // 0x1646(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x1647(0x0001) MISSED OFFSET
	class UCrowdManagerComponent*                      CrowdManager;                                             // 0x1648(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x1650(0x0004) MISSED OFFSET
	float                                              MaxAIAllowJumpRadius;                                     // 0x1654(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalFlyDistanceAfterOpenParachute;                  // 0x1658(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x14];                                      // 0x165C(0x0014) MISSED OFFSET
	unsigned char                                      bIsPreventAISuicide : 1;                                  // 0x1670(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0xF];                                       // 0x1671(0x000F) MISSED OFFSET
	struct FDataTableRowHandle                         CharacterCostumeSetDataTableHandle;                       // 0x1680(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData26[0x80];                                      // 0x1690(0x0080) MISSED OFFSET

	// Function ShadowTrackerExtra.BattleRoyaleGameMode.SpawnAI
	// (Final, Native, Public, BlueprintCallable)
	void SpawnAI(int Num);// sub_568570()

	// Function ShadowTrackerExtra.BattleRoyaleGameMode.SetPlane
	// (Final, Native, Public, BlueprintCallable)
	void SetPlane(class AActor* Plane);// sub_5684F0()

	// Function ShadowTrackerExtra.BattleRoyaleGameMode.OnUpdateGamePhase
	// (Final, Native, Public, Const)
	void OnUpdateGamePhase(int PhaseIndexunsigned char bIsRelease);// sub_568430()

	// Function ShadowTrackerExtra.BattleRoyaleGameMode.GetPlane
	// (Native, Public, BlueprintCallable)
	class AActor* GetPlane(class APlayerController* PC);// sub_568390()

	// Function ShadowTrackerExtra.BattleRoyaleGameMode.GetChallengeLevelRules
	// (Final, Native, Public)
	class UChallengeLevelRules* GetChallengeLevelRules();// sub_568360()


}

