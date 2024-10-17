v 1.4.2.423
# <img src="web_help_files/pubg_lite_logo.png" width="40" height="40" />   slow reverse engineering Sorry!
PUBG LITE game reverse engineering test

you can find some old backup files in my google drive including 2019 launcher and game with version 1.4.2.423  
[PUBG LITE Backup April 2020 - Google Drive](https://drive.google.com/drive/u/0/folders/1IWccZ7mIpKqnnrxmyTDGBmvkkb2tyOqD)  
includes the 2019 launcher but some update servers are still active.  

and includes the game with its files. 

### TOOLS

.PAK files exploring [PUBG Lite Explorer by Warranty Voider](https://github.com/zeroKilo/PUBGLiteExplorerWV)  
UMODEL = bug

depends22_x64  
depends22_x86  
FModel  
JWlink  
SmartSteamEmu143  
uasm256_x86  
umodel_win32  
CheatEngine  
node.js  
UAssetGUI  
UnrealLocres  
Wireshark  
Xenos_2.3.2  
Ghidra  
7zip  
xvolkolak  
ForceToolKit  
SublimeText  
RegShot  
winapiexec64  
QuickUnpack 4.3  
Process Explorer  
Detect It Easy DIE  
OpenHashTab  
EchoMirage  
FakeNet https://github.com/fireeye/flare-fakenet-ng/releases  
Nmap  
HXD  
ImHex  
FileGrab  
Error Lookup  
dnSpyEx64  
ILSpy  
Delphi IDR  
X64DBG  
CyberChef  
XOpcodeCalc  
Hollows_Hunter  
Cain & Abel  
  
## code tree 

``` 
T
└───buildagent
    └───work
        └───53e164db35e35713
            └───LitePC
                ├───client-launcher
                │   └───launcher
                │       └───LauncherView
                │           │   MainWindow.xaml.cs
                │           │
                │           └───JsInterop
                │                   LauncherObject.cs
                │
                ├───Survive
                │   ├───Plugins
                │   │   ├───GVoiceSDK
                │   │   │   └───Source
                │   │   │       └───GVoiceSDK
                │   │   │           └───Private
                │   │   │                   GVoiceSDK.cpp
                │   │   │
                │   │   ├───OceanPlugin
                │   │   │   └───Private
                │   │   │       │   BuoyancyForceComponent.cpp
                │   │   │       │   OceanManager.cpp
                │   │   │       │
                │   │   │       └───BuoyantMesh
                │   │   │               BuoyantMeshComponent.cpp
                │   │   │               WaterHeightmapComponent.cpp
                │   │   │
                │   │   ├───PUBGLauncher
                │   │   │   └───Source
                │   │   │       └───PUBGLauncher
                │   │   │           └───Private
                │   │   │                   PUBGLauncher.cpp
                │   │   │
                │   │   ├───RuntimeMeshComponent
                │   │   │   └───Source
                │   │   │       └───RuntimeMeshComponent
                │   │   │           ├───Private
                │   │   │           │       RuntimeMeshComponent.cpp
                │   │   │           │
                │   │   │           └───Public
                │   │   │                   RuntimeMeshCore.h
                │   │   │
                │   │   ├───SkillEditor
                │   │   │   └───Source
                │   │   │       └───Skill
                │   │   │           └───Private
                │   │   │                   UTSkill.cpp
                │   │   │                   UTSkillManagerComponent.cpp
                │   │   │                   UTSkillPhase.cpp
                │   │   │
                │   │   ├───TApm
                │   │   │   └───Source
                │   │   │       └───TApm
                │   │   │           └───Private
                │   │   │                   TApmHelper.cpp
                │   │   │
                │   │   ├───UAETrigger
                │   │   │   └───Source
                │   │   │       └───UAETrigger
                │   │   │           └───Private
                │   │   │               │   UAELevelDirector.cpp
                │   │   │               │   UAETriggerObject.cpp
                │   │   │               │
                │   │   │               ├───Event
                │   │   │               │       LevelEventCenter.cpp
                │   │   │               │
                │   │   │               └───FlowControll
                │   │   │                       TriggersFlowTree.cpp
                │   │   │
                │   │   └───WWise
                │   │       └───Source
                │   │           └───AkAudio
                │   │               └───Private
                │   │                   │   AkAudioDevice.cpp
                │   │                   │   AkComponent.cpp
                │   │                   │   AkComponentCallbackManager.cpp
                │   │                   │   AkGameplayStatics.cpp
                │   │                   │
                │   │                   └───filePackageio
                │   │                           AkFilePackagerLowLevelIO.inl
                │   │
                │   └───Source
                │       ├───Basic
                │       │   ├───Buff
                │       │   │       STBaseBuffSystemCompnent.cpp
                │       │   │
                │       │   └───Private
                │       │           AttrModifyComponent.cpp
                │       │           BattleItem.cpp
                │       │           BPClassManager.cpp
                │       │           ItemContainer.cpp
                │       │           PackTool.cpp
                │       │           UAEGameEngine.cpp
                │       │           UAELoadedClassManager.cpp
                │       │           UAENetConnection.cpp
                │       │           UAENetDriver.cpp
                │       │           UAETableManager.cpp
                │       │           UAEVersion.cpp
                │       │
                │       ├───Client
                │       │   ├───BpToolLib
                │       │   │       BusinessHelper.cpp
                │       │   │
                │       │   ├───HotUpdate
                │       │   │       HotUpdater.cpp
                │       │   │
                │       │   ├───Private
                │       │   │       GameBackendHUD.cpp
                │       │   │       GameBusinessManager.cpp
                │       │   │       GameFrontendHUD.cpp
                │       │   │       InGameUIManager.cpp
                │       │   │       LuaClassObj.cpp
                │       │   │       TssManager.cpp
                │       │   │
                │       │   ├───ScriptHelp
                │       │   │       ScriptHelperClient.cpp
                │       │   │
                │       │   ├───Tools
                │       │   │       GVoiceInterface.cpp
                │       │   │       LoadTexture.cpp
                │       │   │
                │       │   └───Widgets
                │       │           SUTRichTextBlock.cpp
                │       │           UAERichTextBlock.cpp
                │       │
                │       ├───Gameplay
                │       │   └───Private
                │       │           BackpackComponent.cpp
                │       │           BaseGeneratorComponent.cpp
                │       │           ChaVehAnimListComponent.cpp
                │       │           GlobalConfigActor.cpp
                │       │           ItemGeneratorComponent.cpp
                │       │           ItemSpotSceneComponent.cpp
                │       │           UAECharacter.cpp
                │       │           UAECharacterAnimListComponent.cpp
                │       │           UAEGameMode.cpp
                │       │           UAEHouseActor.cpp
                │       │           UAEOBState.cpp
                │       │           UAEPlayerController.cpp
                │       │           UAEPlayerState.cpp
                │       │           UAEProjectile.cpp
                │       │           VehicleSpotSceneComponent.cpp
                │       │
                │       ├───ShadowTrackerExtra
                │       │   │   STExtraGameInstance.cpp
                │       │   │   STExtraGameMode.cpp
                │       │   │   STExtraGameplayStatics.cpp
                │       │   │
                │       │   ├───Animation
                │       │   │       STExtraAnimInstance.cpp
                │       │   │
                │       │   ├───BackPack
                │       │   │       BackpackAvatarItem.cpp
                │       │   │       BackpackAvatarItemCustom.cpp
                │       │   │       BackpackUtils.cpp
                │       │   │       BackpackWeaponAttachHandle.cpp
                │       │   │
                │       │   ├───Buff
                │       │   │       STExtraBuffAction_AdjustStunPostMat.cpp
                │       │   │       STExtraBuffAction_DrowningDamage.cpp
                │       │   │
                │       │   ├───Caching
                │       │   │       CachingManager.cpp
                │       │   │
                │       │   ├───ChallengeLevel
                │       │   │       DrivingChallengeLevelRules.cpp
                │       │   │       OnTimeSpawnChallengeLevelRules.cpp
                │       │   │
                │       │   ├───Character
                │       │   │       CharacterWeaponManagerComponent.cpp
                │       │   │       SceneCaptureCharacter.cpp
                │       │   │       STCharacterFollowComp.cpp
                │       │   │       STCharacterMovementComponent.cpp
                │       │   │       STCharacterNearDeathComp.cpp
                │       │   │       STCharacterRescueOtherComp.cpp
                │       │   │       STExtraBaseCharacter.cpp
                │       │   │
                │       │   ├───Chat
                │       │   │       ChatComponent.cpp
                │       │   │
                │       │   ├───CustomActor
                │       │   │       AirDropBoxActor.cpp
                │       │   │       AirDropPlane.cpp
                │       │   │       CircleAreaVolume.cpp
                │       │   │       PUBGDoor.cpp
                │       │   │
                │       │   ├───CustomComponent
                │       │   │       AirAttackComponent.cpp
                │       │   │       AirAttackCS.cpp
                │       │   │       AirDropComponent.cpp
                │       │   │       AvatarComponent.cpp
                │       │   │       CharacterAvatarComponent.cpp
                │       │   │       CircleMgrComponent.cpp
                │       │   │       CommonBtnComponent.cpp
                │       │   │       CustomParticleSystemComponent.cpp
                │       │   │       GameEventListener.cpp
                │       │   │       LandScapeLODByHeight.cpp
                │       │   │       NewbieGuideComponent.cpp
                │       │   │       ParachuteFollowComponent.cpp
                │       │   │       PlaneComponent.cpp
                │       │   │       SecuryInfoComponent.cpp
                │       │   │       ServerSwitchComponent.cpp
                │       │   │       STExtraUnderWaterEffectComp.cpp
                │       │   │       STScreenAppearanceComponent.cpp
                │       │   │       TimerRegistComponent.cpp
                │       │   │       VehicleSpringArmComponent.cpp
                │       │   │       WeaponAvatarComponent.cpp
                │       │   │
                │       │   ├───Effect
                │       │   │       Effect.cpp
                │       │   │       EffectComponent.cpp
                │       │   │       EffectConsumeItem.cpp
                │       │   │       EffectDamage.cpp
                │       │   │       EffectGraph.cpp
                │       │   │       EffectRefreshWeapon.cpp
                │       │   │       EffectReloadWait.cpp
                │       │   │       EffectTakeItem.cpp
                │       │   │       EffectWait.cpp
                │       │   │       EffectWeaponCheckReload.cpp
                │       │   │
                │       │   ├───Game
                │       │   │       STExtraGameStateBase.cpp
                │       │   │
                │       │   ├───GameMode
                │       │   │   │   BattleRoyaleGameMode.cpp
                │       │   │   │   BattleRoyaleGameModeGroup.cpp
                │       │   │   │   BattleRoyaleGameModeTeam.cpp
                │       │   │   │   DeathMatchGameMode.cpp
                │       │   │   │   DeathMatchGameState.cpp
                │       │   │   │   FreeForAllGameMode.cpp
                │       │   │   │   GameModeDataAsset.cpp
                │       │   │   │   GameModeStateActive.cpp
                │       │   │   │   GameModeStateEmpty.cpp
                │       │   │   │   GameModeStateFighting.cpp
                │       │   │   │   GameModeStateFinished.cpp
                │       │   │   │   GameModeStateFinishedGroup.cpp
                │       │   │   │   GameModeStateFinishedTeam.cpp
                │       │   │   │   GameModeStateFinishedWar.cpp
                │       │   │   │   GameModeStateFlying.cpp
                │       │   │   │   GameModeStateFlyingGroup.cpp
                │       │   │   │   GameModeStateFlyingTeam.cpp
                │       │   │   │   GameModeStateFlyingWar.cpp
                │       │   │   │   GameModeStateReady.cpp
                │       │   │   │   GameModeState_Challenge.cpp
                │       │   │   │   GameModeState_Training.cpp
                │       │   │   │   WarGameMode.cpp
                │       │   │   │
                │       │   │   ├───FreeForAllMatch
                │       │   │   │       GameModeStateActive_FreeForAll.cpp
                │       │   │   │       GameModeStateFighting_FreeForAll.cpp
                │       │   │   │       GameModeStateFinished_FreeForAll.cpp
                │       │   │   │       GameModeStateReady_FreeForAll.cpp
                │       │   │   │
                │       │   │   └───TeamMatch
                │       │   │           GameModeStateActive_TeamMatch.cpp
                │       │   │           GameModeStateFighting_TeamMatch.cpp
                │       │   │           GameModeStateFinished_TeamMatch.cpp
                │       │   │           GameModeStateReady_TeamMatch.cpp
                │       │   │           GameModeStateStartScene_TeamMatch.cpp
                │       │   │
                │       │   ├───GunPlay
                │       │   │       AimingComp.cpp
                │       │   │
                │       │   ├───Landscape
                │       │   │       MyLandscape.cpp
                │       │   │
                │       │   ├───Online
                │       │   │       STExtraGameSession.cpp
                │       │   │       STExtraOnlineSession.cpp
                │       │   │
                │       │   ├───Option
                │       │   │       TslGameUserSettings.cpp
                │       │   │
                │       │   ├───Pickup
                │       │   │       PickupManagerComponent.cpp
                │       │   │
                │       │   ├───Player
                │       │   │   │   AutoRunTest.cpp
                │       │   │   │   AutoRunTestInfoOut.cpp
                │       │   │   │   PlayerControllerStateActive.cpp
                │       │   │   │   PlayerControllerStateFighting.cpp
                │       │   │   │   PlayerControllerStateFinished.cpp
                │       │   │   │   PlayerControllerStateFlying.cpp
                │       │   │   │   PlayerControllerStateJumping.cpp
                │       │   │   │   PlayerControllerStateLanding.cpp
                │       │   │   │   PlayerControllerStateMachine.cpp
                │       │   │   │   STExtraPlayerCharacter.cpp
                │       │   │   │   STExtraPlayerController.cpp
                │       │   │   │   STExtraPlayerController_Spectator.cpp
                │       │   │   │   STExtraPlayerScreenCheck.cpp
                │       │   │   │   STExtraPlayerState.cpp
                │       │   │   │   VehicleUserComponent.cpp
                │       │   │   │
                │       │   │   └───ItemAvatarComponent
                │       │   │           ItemAvatarComponentBase.cpp
                │       │   │           VehicleAvatarComponent.cpp
                │       │   │
                │       │   ├───Private
                │       │   │   │   GMCheatManager.cpp
                │       │   │   │   HackReporterComponent.cpp
                │       │   │   │   InteractorComponent.cpp
                │       │   │   │   LPCLevelScriptActor.cpp
                │       │   │   │   TargetKeyOperation.cpp
                │       │   │   │   TslStatics.cpp
                │       │   │   │   TslWebSocket.cpp
                │       │   │   │
                │       │   │   ├───AI
                │       │   │   │   ├───Assist
                │       │   │   │   │       AIActingComponent.cpp
                │       │   │   │   │       AIWorldVolume.cpp
                │       │   │   │   │       UAEAIOcclusion.cpp
                │       │   │   │   │       UAERecastNavMesh.cpp
                │       │   │   │   │
                │       │   │   │   ├───Component
                │       │   │   │   │       NewPathFollowingComponent.cpp
                │       │   │   │   │
                │       │   │   │   ├───Controller
                │       │   │   │   │       BaseAIController.cpp
                │       │   │   │   │       FakePlayerAIController.cpp
                │       │   │   │   │
                │       │   │   │   ├───Service
                │       │   │   │   │       BTService_AdvancedShooting.cpp
                │       │   │   │   │
                │       │   │   │   └───Task
                │       │   │   │           BTTaskNode_EquipOrUnWeapon.cpp
                │       │   │   │           BTTaskNode_FindItemSpot.cpp
                │       │   │   │           BTTaskNode_NewParachuteJump.cpp
                │       │   │   │           BTTaskNode_ParachuteJumpV3.cpp
                │       │   │   │           BTTaskNode_PickItemsAtSpot.cpp
                │       │   │   │           BTTask_Escape.cpp
                │       │   │   │           BTTask_MoveAround.cpp
                │       │   │   │           BTTask_MoveToOcclusion.cpp
                │       │   │   │           BTTask_PickUpItemAtTombBox.cpp
                │       │   │   │           BTTask_TeleportToSpecLoc.cpp
                │       │   │   │
                │       │   │   ├───AntiCheat
                │       │   │   │   ├───SteamNetworkStatusControl
                │       │   │   │   │       SteamNetworkStatusControl.cpp
                │       │   │   │   │
                │       │   │   │   └───Xenuine
                │       │   │   │           XenuineHelper.cpp
                │       │   │   │
                │       │   │   ├───InterfaceForLobbyLink
                │       │   │   │       GameInstanceForLobbyLink.h
                │       │   │   │       GameModeForLobbyLink.h
                │       │   │   │
                │       │   │   ├───Online
                │       │   │   │       TslLPCGameMode.cpp
                │       │   │   │       TslPCPlayerState.cpp
                │       │   │   │
                │       │   │   ├───Tests
                │       │   │   │       AutoRunPlayerTestActor.cpp
                │       │   │   │
                │       │   │   ├───Trigger
                │       │   │   │   ├───Action
                │       │   │   │   │       TriggerAction_PrintMsg.cpp
                │       │   │   │   │
                │       │   │   │   └───Item
                │       │   │   │           TriggerItem_TriggerClock.cpp
                │       │   │   │
                │       │   │   └───UI
                │       │   │       │   CoherentCommonBinder.cpp
                │       │   │       │   LobbyHUD.cpp
                │       │   │       │   TslBaseHUD.cpp
                │       │   │       │   TslNaviWidgetInterface.h
                │       │   │       │
                │       │   │       └───HUD
                │       │   │               TslBoostGaugeWidget.cpp
                │       │   │
                │       │   ├───Props
                │       │   │       ItemGeneratorBase.cpp
                │       │   │       PickUpListWrapperActor.cpp
                │       │   │       PickUpWrapperActor.cpp
                │       │   │       PlayerTombBox.cpp
                │       │   │       STExtraProp.cpp
                │       │   │
                │       │   ├───Replay
                │       │   │       DeathPlayback.cpp
                │       │   │       WonderfulRecordingCut.cpp
                │       │   │
                │       │   ├───Security
                │       │   │       SecurityLogWeaponCollector.cpp
                │       │   │
                │       │   ├───Skill
                │       │   │       UAEBaseSkill.cpp
                │       │   │       UAESkill.cpp
                │       │   │       UAESkillAction_AttachActor.cpp
                │       │   │       UAESkillAction_BreakGlass.cpp
                │       │   │       UAESkillAction_PlayMontage.cpp
                │       │   │       UAESkillAction_ReplaceCharAnim.cpp
                │       │   │       UAESkillAction_SetRecoveryPrompt.cpp
                │       │   │       UAESkillAction_ShowSkillPrompt.cpp
                │       │   │       UAESkillAction_TakeDamage.cpp
                │       │   │       UAESkillPicker_Fan.cpp
                │       │   │       UAESkillPicker_FanForClient.cpp
                │       │   │       UTSkillAppearance_SoundCue.cpp
                │       │   │
                │       │   ├───Templates
                │       │   │       TemplateMgr.cpp
                │       │   │       TemplateUtil.cpp
                │       │   │
                │       │   ├───UI
                │       │   │   │   VoiceCheckObject.cpp
                │       │   │   │
                │       │   │   ├───KeyHint
                │       │   │   │   └───KeyboardAndMouse
                │       │   │   │           TslKeyboardAndMouseHintWidget.cpp
                │       │   │   │
                │       │   │   └───Widget
                │       │   │           CustomScrollBox.cpp
                │       │   │           ParachutingWidget.cpp
                │       │   │           SCustomScrollBox.cpp
                │       │   │           SRadarChartUserWidget.cpp
                │       │   │
                │       │   ├───Utility
                │       │   │       ActorCacheMgr.cpp
                │       │   │       BitMsg.cpp
                │       │   │       STExtraBlueprintFunctionLibrary.cpp
                │       │   │       STExtraMapFunctionLibrary.cpp
                │       │   │       STExtraUIUtils.cpp
                │       │   │
                │       │   ├───Vehicle
                │       │   │   │   STExtraVehicleBase.cpp
                │       │   │   │   STExtraVehicleUtils.cpp
                │       │   │   │   VehicleDamageComponent.cpp
                │       │   │   │   VehicleSeatComponent.cpp
                │       │   │   │   VehicleSyncComponent.cpp
                │       │   │   │
                │       │   │   └───Wheeled
                │       │   │           STExtraVehicleMovementComponent4W.cpp
                │       │   │           STExtraWheeledVehicle.cpp
                │       │   │
                │       │   └───Weapons
                │       │           FireWeaponState.cpp
                │       │           IdleWeaponState.cpp
                │       │           STEFlareGunProjectComponent.cpp
                │       │           STEShootWeaponProjectComponent.cpp
                │       │           STExtraShootWeapon.cpp
                │       │           STExtraShootWeaponComponent.cpp
                │       │           STExtraWeapon.cpp
                │       │           WeaponAntiCheatComp.cpp
                │       │           WeaponManagerComponent.cpp
                │       │           WeaponPostFireState.cpp
                │       │           WeaponPreFireState.cpp
                │       │           WeaponSpecificHandler.cpp
                │       │           WeaponStateManager.cpp
                │       │
                │       ├───ThirdParty
                │       │   ├───BGPrimary
                │       │   │       BGPrimary.cpp
                │       │   │       BGPrimaryRunnable.cpp
                │       │   │
                │       │   └───Discord
                │       │           BGDiscord.cpp
                │       │
                │       ├───TslCommon
                │       │   └───Private
                │       │           TslGameLog.cpp
                │       │           TslWebSocket.cpp
                │       │           TslWebSocketRunnable.cpp
                │       │
                │       └───UnrealArchExt
                │           └───Private
                │                   BackendHUD.cpp
                │                   FrontendHUD.cpp
                │                   LogicManagerBase.cpp
                │                   UAEUserWidget.cpp
                │
                └───UE4181

```
