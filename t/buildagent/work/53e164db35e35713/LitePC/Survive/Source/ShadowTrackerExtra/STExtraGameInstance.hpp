

// Class ShadowTrackerExtra.STExtraGameInstance
// //Class ShadowTrackerExtra.STExtraGameInstance
//0x0630 (0x0970 - 0x0340)
class USTExtraGameInstance : public UUAEGameInstance
{
public:
	struct FScriptMulticastDelegate                    OnUserQualitySettingChanged;                              // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FRenderQualitySettings                      renderQualitySettingsLastSet;                             // 0x0350(0x0003)
	struct FRenderQualitySettings                      renderQualitySettingsApplying;                            // 0x0353(0x0003)
	struct FRenderQualitySettings                      renderQualitySettingsInit;                                // 0x0356(0x0003)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	struct FUserDetailSetting                          UserDetailSetting;                                        // 0x035C(0x0058)
	unsigned char                                      LobbyRenderSwitch : 1;                                    // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 8;                                        // 0x03B5(0x0001)
	unsigned char                                      LobbyRenderSwitchLow : 1;                                 // 0x03B5(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02 : 8;                                        // 0x03B6(0x0001)
	unsigned char                                      LobbyRenderSwitchMid : 1;                                 // 0x03B6(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03 : 8;                                        // 0x03B7(0x0001)
	unsigned char                                      LobbyRenderSwitchHigh : 1;                                // 0x03B7(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FRenderItem>                         LobbyBackupRenderSettings;                                // 0x03B8(0x0010) (ZeroConstructor)
	TArray<struct FRenderItem>                         LobbyRenderSettings;                                      // 0x03C8(0x0010) (ZeroConstructor, Config)
	TArray<struct FRenderItem>                         LowFPSBackupRenderSettings;                               // 0x03D8(0x0010) (ZeroConstructor)
	TArray<struct FRenderItem>                         LowFPSRenderSettingProfileHigh;                           // 0x03E8(0x0010) (ZeroConstructor, Config)
	TArray<struct FRenderItem>                         LowFPSRenderSettingProfileMid;                            // 0x03F8(0x0010) (ZeroConstructor, Config)
	TArray<struct FRenderItem>                         MobileHDROpenConfig;                                      // 0x0408(0x0010) (ZeroConstructor, Config)
	TArray<struct FRenderItem>                         MobileHDRCloseConfig;                                     // 0x0418(0x0010) (ZeroConstructor, Config)
	TArray<struct FRenderItem>                         MobileMSAAOpenConfig;                                     // 0x0428(0x0010) (ZeroConstructor, Config)
	TArray<struct FRenderItem>                         Mobile2xMSAAOpenConfig;                                   // 0x0438(0x0010) (ZeroConstructor, Config)
	TArray<struct FRenderItem>                         MobileMSAACloseConfig;                                    // 0x0448(0x0010) (ZeroConstructor, Config)
	TArray<struct FRenderItem>                         MobilePPOpenConfig;                                       // 0x0458(0x0010) (ZeroConstructor, Config)
	TArray<struct FRenderItem>                         MobilePPCloseConfig;                                      // 0x0468(0x0010) (ZeroConstructor, Config)
	unsigned char                                      AutoTestTriggle : 1;                                      // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FString                                     AutoTestMissionType;                                      // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   FOVRange;                                                 // 0x0490(0x0008) (Config, IsPlainOldData)
	struct FVector2D                                   FOVScreenSizeCullingFactorRange;                          // 0x0498(0x0008) (Config, IsPlainOldData)
	unsigned char                                      bFOVChanged : 1;                                          // 0x04A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	float                                              SwimRotateX;                                              // 0x04A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSearchGameCompleteDel;                                  // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0xF0];                                      // 0x04B8(0x00F0) MISSED OFFSET
	class UWonderfulRecordingCut*                      WonderfulRecordingCut;                                    // 0x05A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDeathPlayback*                              DeathPlayback;                                            // 0x05B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x05B8(0x0004) MISSED OFFSET
	int                                                PlayerNum;                                                // 0x05BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBattleHasStarted : 1;                                    // 0x05C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08 : 8;                                        // 0x05C1(0x0001)
	unsigned char                                      bNeedJumpPlane : 1;                                       // 0x05C1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x46];                                      // 0x05C2(0x0046) MISSED OFFSET
	class ULobbyLink*                                  LobbyLink;                                                // 0x0608(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTslStartParameter                          StartParamter;                                            // 0x0610(0x0080)
	unsigned char                                      UnknownData10[0x170];                                     // 0x0690(0x0170) MISSED OFFSET
	class UFpsCountStatistics*                         FpsCountStatstics;                                        // 0x0800(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x28];                                      // 0x0808(0x0028) MISSED OFFSET
	TMap<int, struct FTeamInfo>                        TeamInfoMap;                                              // 0x0830(0x0050) (ZeroConstructor, Transient)
	struct FString                                     SelectedModeNameInLobby;                                  // 0x0880(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData12[0x88];                                      // 0x0890(0x0088) MISSED OFFSET
	class UReporterManager*                            ReporterManager;                                          // 0x0918(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x18];                                      // 0x0920(0x0018) MISSED OFFSET
	class URichPresenceManager*                        RichPresenceManager;                                      // 0x0938(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<TScriptInterface<class URichPresenceObserverInterface>> RichPresence;                                             // 0x0940(0x0010) (ZeroConstructor, Transient)
	TArray<struct FQualityLevelInfo>                   CacheQualityLevelInfo;                                    // 0x0950(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData14[0x10];                                      // 0x0960(0x0010) MISSED OFFSET

	// DelegateFunction ShadowTrackerExtra.STExtraGameInstance.UserQualitySettingChanged__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void UserQualitySettingChanged__DelegateSignature(int UserQualitySettingLevel);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraGameInstance.StopStat
	// (Final, Native, Private)
	void StopStat(TEnumAsByte<EServerStatType> StatType);// sub_10EF6D0()

	// Function ShadowTrackerExtra.STExtraGameInstance.StartStat
	// (Final, Native, Private)
	unsigned char StartStat(TEnumAsByte<EServerStatType> StatType);// sub_10EF640()

	// Function ShadowTrackerExtra.STExtraGameInstance.StartSinglePlayerGame
	// (Final, Native, Public, BlueprintCallable)
	void StartSinglePlayerGame(const struct FString& MapName);// sub_10EF560()

	// Function ShadowTrackerExtra.STExtraGameInstance.StartMultiplayerPlayerGame
	// (Final, Native, Public, BlueprintCallable)
	void StartMultiplayerPlayerGame(const struct FString& MapName);// sub_10EF480()

	// Function ShadowTrackerExtra.STExtraGameInstance.ShowSessionStatus
	// (Final, Native, Public, BlueprintCallable)
	void ShowSessionStatus();// sub_10EF410()

	// Function ShadowTrackerExtra.STExtraGameInstance.ShowLoadingScreen
	// (Final, Native, Public, BlueprintCallable, Const)
	void ShowLoadingScreen();// sub_10EF3F0()

	// Function ShadowTrackerExtra.STExtraGameInstance.SetWorldCompositionRelativeDistance
	// (Final, Native, Public, BlueprintCallable)
	void SetWorldCompositionRelativeDistance(int LODIndexfloat Distance);// sub_10EF1C0()

	// Function ShadowTrackerExtra.STExtraGameInstance.SetUserSetingShadowQuality
	// (Final, Native, Public, BlueprintCallable)
	void SetUserSetingShadowQuality(int shadowQuality);// sub_10EF140()

	// Function ShadowTrackerExtra.STExtraGameInstance.SetUserSetingMobilceContentSCale
	// (Final, Native, Public, BlueprintCallable)
	void SetUserSetingMobilceContentSCale(float mcs);// sub_10EF0C0()

	// Function ShadowTrackerExtra.STExtraGameInstance.SettingNetIdForLocalPlayer
	// (Final, Native, Public, BlueprintCallable, Const)
	void SettingNetIdForLocalPlayer();// sub_10EF3D0()

	// Function ShadowTrackerExtra.STExtraGameInstance.SetRenderQuality
	// (Final, Native, Public, BlueprintCallable)
	void SetRenderQuality(const struct FRenderQualitySettings& RenderQualitySettings);// sub_10EEF90()

	// Function ShadowTrackerExtra.STExtraGameInstance.SetFOVScreenSizeCullingFactor
	// (Final, Native, Public, BlueprintCallable)
	void SetFOVScreenSizeCullingFactor(float FOV);// sub_10EEDF0()

	// Function ShadowTrackerExtra.STExtraGameInstance.SetAutoMissionType
	// (Final, Native, Static, Public, BlueprintCallable)
	static void STATIC_SetAutoMissionType();// sub_10EECD0()

	// Function ShadowTrackerExtra.STExtraGameInstance.SearchGames
	// (Final, Native, Public, BlueprintCallable)
	void SearchGames();// sub_10EE9C0()

	// Function ShadowTrackerExtra.STExtraGameInstance.ReSetFOVScreenSizeCullingFactor
	// (Final, Native, Public, BlueprintCallable)
	void ReSetFOVScreenSizeCullingFactor();// sub_10EE720()

	// Function ShadowTrackerExtra.STExtraGameInstance.RenderForLowFPS
	// (Final, Native, Public, BlueprintCallable)
	void RenderForLowFPS();// sub_10EE760()

	// Function ShadowTrackerExtra.STExtraGameInstance.RefuseRenderForLowFPS
	// (Final, Native, Public, BlueprintCallable)
	void RefuseRenderForLowFPS();// sub_10EE740()

	// Function ShadowTrackerExtra.STExtraGameInstance.QuitGame
	// (Final, Native, Public, BlueprintCallable)
	void QuitGame();// sub_10EE700()

	// Function ShadowTrackerExtra.STExtraGameInstance.PreSetRenderQuality
	// (Final, Native, Public, HasOutParms)
	void PreSetRenderQuality(const struct FRenderQualitySettings& RenderQualitySettingsunsigned char* renderLevelChanged);// sub_10EE290()

	// DelegateFunction ShadowTrackerExtra.STExtraGameInstance.OnSearchGameCompleteDelegate__DelegateSignature
	// (MulticastDelegate, Public, Delegate)
	void OnSearchGameCompleteDelegate__DelegateSignature(unsigned char bRet);// sub_1B0A820()

	// Function ShadowTrackerExtra.STExtraGameInstance.OnSearchGameComplete
	// (Final, Native, Private)
	void OnSearchGameComplete(unsigned char bRet);// sub_10EE0B0()

	// Function ShadowTrackerExtra.STExtraGameInstance.OnCreatePresenceSessionComplete
	// (Final, Native, Private)
	void OnCreatePresenceSessionComplete(unsigned char bWasSuccessful);// sub_10EDE40()

	// Function ShadowTrackerExtra.STExtraGameInstance.JoinGameByName
	// (Final, Native, Public, BlueprintCallable)
	void JoinGameByName(const struct FString& TargetSessionOwnerID);// sub_10EDD60()

	// Function ShadowTrackerExtra.STExtraGameInstance.IsSupportTagCulling
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsSupportTagCulling();// sub_10EDD10()

	// Function ShadowTrackerExtra.STExtraGameInstance.IsSupportSwitchRenderLevelRuntime
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	unsigned char IsSupportSwitchRenderLevelRuntime();// sub_10EDCE0()

	// Function ShadowTrackerExtra.STExtraGameInstance.IsSupportMSAA
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsSupportMSAA();// sub_10EDCB0()

	// Function ShadowTrackerExtra.STExtraGameInstance.IsSupportLDR
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsSupportLDR();// sub_10EDC80()

	// Function ShadowTrackerExtra.STExtraGameInstance.IsOpenHDR
	// (Final, Native, Public, BlueprintCallable)
	unsigned char IsOpenHDR();// sub_10EDBD0()

	// Function ShadowTrackerExtra.STExtraGameInstance.IsNetworkCompatible
	// (Final, Native, Public)
	unsigned char IsNetworkCompatible(uint32_t LocalNetworkVersionuint32_t RemoteNetworkVersion);// sub_10EDB10()

	// Function ShadowTrackerExtra.STExtraGameInstance.IsAutoRunTestGame
	// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	static unsigned char STATIC_IsAutoRunTestGame();// sub_10EDAE0()

	// Function ShadowTrackerExtra.STExtraGameInstance.IsAutoRunRoomOwner
	// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	static unsigned char STATIC_IsAutoRunRoomOwner();// sub_10EDAB0()

	// Function ShadowTrackerExtra.STExtraGameInstance.GMStandalone
	// (Final, Exec, Native, Public, BlueprintCallable)
	void GMStandalone(const struct FString& Map);// sub_10ECD10()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetWonderfulRecordingCut
	// (Final, Native, Public, BlueprintCallable)
	class UWonderfulRecordingCut* GetWonderfulRecordingCut();// sub_10EDA80()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetUserQualitySettingLevel
	// (Final, Native, Public, BlueprintCallable)
	int GetUserQualitySettingLevel();// sub_10EDA60()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetUnderFpsCount
	// (Final, Native, Public, Const)
	int GetUnderFpsCount(int Fpsint DuringSeconds);// sub_10ED9A0()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetStartParameterStringValue
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FString GetStartParameterStringValue(const struct FString& Keyconst struct FString& NotFoundValue);// sub_10ED7F0()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetSearchGameResults
	// (Final, Native, Public, BlueprintCallable)
	TArray<struct FString> GetSearchGameResults();// sub_10ED770()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetRenderQualityLastSet
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	struct FRenderQualitySettings GetRenderQualityLastSet();// sub_10ED640()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetRenderQualityApplying
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	struct FRenderQualitySettings GetRenderQualityApplying();// sub_10ED5F0()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetMinFps
	// (Final, Native, Public, Const)
	int GetMinFps(int DuringSeconds);// sub_10ED4D0()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetMaxFPS
	// (Final, Native, Public, Const)
	int GetMaxFPS(int DuringSeconds);// sub_10ED440()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetDeviceUpdateVersionFlag
	// (Native, Public, BlueprintCallable)
	int GetDeviceUpdateVersionFlag();// sub_10ED310()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetDeviceMaxSupportLevel
	// (Final, Native, Public, BlueprintCallable)
	TEnumAsByte<ERenderQuality> GetDeviceMaxSupportLevel();// sub_10ED2E0()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetDeviceMaxFPSByDeviceLevel
	// (Final, Native, Public, BlueprintCallable)
	int GetDeviceMaxFPSByDeviceLevel(TEnumAsByte<ERenderQuality> renderlevel);// sub_10ED250()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetDeviceLimit
	// (Final, Native, Public, BlueprintCallable)
	int GetDeviceLimit();// sub_10ED220()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetDeviceLevel
	// (Final, Native, Public, BlueprintCallable)
	int GetDeviceLevel();// sub_B59120()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetDeathPlayback
	// (Final, Native, Public, BlueprintCallable)
	class UDeathPlayback* GetDeathPlayback();// sub_10ED1F0()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetAutoRunTestServerIdx
	// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	static int STATIC_GetAutoRunTestServerIdx();// sub_10ECF70()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetAutoRunPassWD
	// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	static struct FString STATIC_GetAutoRunPassWD();// sub_10ECEF0()

	// Function ShadowTrackerExtra.STExtraGameInstance.GetAutoRunAccount
	// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	static struct FString STATIC_GetAutoRunAccount();// sub_10ECE70()

	// Function ShadowTrackerExtra.STExtraGameInstance.ExitGame
	// (Final, Native, Public, BlueprintCallable)
	void ExitGame();// sub_10ECCF0()

	// Function ShadowTrackerExtra.STExtraGameInstance.ExecuteCMD
	// (Final, Native, Public, BlueprintCallable)
	void ExecuteCMD(const struct FString& CMDkeyconst struct FString& CMDvalue);// sub_10ECB80()

	// Function ShadowTrackerExtra.STExtraGameInstance.EnableStreamingLevelLOD
	// (Final, Native, Public, BlueprintCallable)
	void EnableStreamingLevelLOD(unsigned char bEnable);// sub_10ECAF0()

	// Function ShadowTrackerExtra.STExtraGameInstance.DeleteSavedFiles
	// (Final, Exec, Native, Public, BlueprintCallable)
	unsigned char DeleteSavedFiles(unsigned char allfilesSaved);// sub_10ECA60()

	// Function ShadowTrackerExtra.STExtraGameInstance.ClearSession
	// (Final, Native, Private)
	void ClearSession();// sub_10EC540()

	// Function ShadowTrackerExtra.STExtraGameInstance.CancelSearchGame
	// (Final, Native, Public, BlueprintCallable)
	void CancelSearchGame();// sub_10EC520()

	// Function ShadowTrackerExtra.STExtraGameInstance.AutoActiveLDR
	// (Final, Native, Public, BlueprintCallable)
	void AutoActiveLDR();// sub_10EBE40()

	// Function ShadowTrackerExtra.STExtraGameInstance.ActiveStyle_PP
	// (Final, Native, Public)
	void ActiveStyle_PP(TEnumAsByte<ERenderStyle> Level);// sub_10EBDC0()

	// Function ShadowTrackerExtra.STExtraGameInstance.ActiveStyle
	// (Final, Native, Public)
	void ActiveStyle(TEnumAsByte<ERenderStyle> Level);// sub_10EBD40()

	// Function ShadowTrackerExtra.STExtraGameInstance.ActiveMSAA
	// (Final, Native, Public)
	void ActiveMSAA(unsigned char bOpenMSAA);// sub_10EBCB0()


}

