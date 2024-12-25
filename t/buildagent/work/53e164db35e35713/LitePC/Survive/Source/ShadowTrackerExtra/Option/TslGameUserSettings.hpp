

// Class ShadowTrackerExtra.TslGameUserSettings
// //Class ShadowTrackerExtra.TslGameUserSettings
//0x02E8 (0x03F0 - 0x0108)
class UTslGameUserSettings : public UGameUserSettings
{
public:
	float                                              ScreenScale;                                              // 0x0108(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	EFrameRateLimitType                                LobbyFrameRateLimitType;                                  // 0x010C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EFrameRateLimitType                                InGameFrameRateLimitType;                                 // 0x010D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	float                                              InGameCustomFrameRateLimit;                               // 0x0110(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bUseInGameSmoothedFrameRate : 1;                          // 0x0114(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	float                                              DynResTargetFrameRate;                                    // 0x0118(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bShowDynResInfo : 1;                                      // 0x011C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02 : 8;                                        // 0x011D(0x0001)
	unsigned char                                      bShowFpsInfo : 1;                                         // 0x011D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x011E(0x0002) MISSED OFFSET
	int                                                MaxFps;                                                   // 0x0120(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsLanMatch : 1;                                          // 0x0124(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04 : 8;                                        // 0x0125(0x0001)
	unsigned char                                      bIsMasterSoundMute : 1;                                   // 0x0125(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0126(0x0002) MISSED OFFSET
	float                                              MasterSoundVolume;                                        // 0x0128(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsEffectSoundMute : 1;                                   // 0x012C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	float                                              EffectSoundVolume;                                        // 0x0130(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsUISoundMute : 1;                                       // 0x0134(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	float                                              UISoundVolume;                                            // 0x0138(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsBGMSoundMute : 1;                                      // 0x013C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              BGMSoundVolume;                                           // 0x0140(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsEnabledHrtfRemoteWeaponSound : 1;                      // 0x0144(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09 : 8;                                        // 0x0145(0x0001)
	unsigned char                                      bIsVoiceInputMute : 1;                                    // 0x0145(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10 : 8;                                        // 0x0146(0x0001)
	unsigned char                                      bIsVoiceOutputMute : 1;                                   // 0x0146(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0147(0x0001) MISSED OFFSET
	int                                                VoiceInputSensitivity;                                    // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                VoiceInputVolume;                                         // 0x014C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                VoiceOutputVolume;                                        // 0x0150(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bUsePushToTalk : 1;                                       // 0x0154(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData12 : 8;                                        // 0x0155(0x0001)
	unsigned char                                      bUseGlobalVoice : 1;                                      // 0x0155(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData13 : 8;                                        // 0x0156(0x0001)
	unsigned char                                      bUseTeamVoice : 1;                                        // 0x0156(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData14 : 8;                                        // 0x0157(0x0001)
	unsigned char                                      bSavedGraphicOption : 1;                                  // 0x0157(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData15 : 8;                                        // 0x0158(0x0001)
	unsigned char                                      bMotionBlur : 1;                                          // 0x0158(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	struct FString                                     CultureName;                                              // 0x0160(0x0010) (ZeroConstructor, Config)
	struct FString                                     LastCultureName;                                          // 0x0170(0x0010) (ZeroConstructor, Config)
	struct FCustomInputSettings                        CustomInputSettins;                                       // 0x0180(0x00C8) (Config)
	int                                                SelectMiniMapIndex;                                       // 0x0248(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              FpsCameraFov;                                             // 0x024C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bAllowLighting : 1;                                       // 0x0250(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData17 : 8;                                        // 0x0251(0x0001)
	unsigned char                                      bUseForceFeedback : 1;                                    // 0x0251(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x0252(0x0002) MISSED OFFSET
	float                                              ForceFeedbackMultiplier;                                  // 0x0254(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ColorBlindType;                                           // 0x0258(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bAutoReloadOnOutOfAmmoFire : 1;                           // 0x025C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGunFireMode                                       HGsFiringMode;                                            // 0x025D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGunFireMode                                       SMGsFiringMode;                                           // 0x025E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGunFireMode                                       ARsFiringMode;                                            // 0x025F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGunFireMode                                       DMRsFiringMode;                                           // 0x0260(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      IsClanNameDisplay : 1;                                    // 0x0261(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData19[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	struct FString                                     CrosshairColorString;                                     // 0x0268(0x0010) (ZeroConstructor, Config)
	struct FColor                                      CustomCrosshairColor;                                     // 0x0278(0x0004) (Config, IsPlainOldData)
	EMinimapColorType                                  MinimapColorType;                                         // 0x027C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x027D(0x0003) MISSED OFFSET
	TMap<int, int>                                     DefaultReticleMap;                                        // 0x0280(0x0050) (ZeroConstructor, Config)
	TMap<int, float>                                   DefaultReticleBrightnessMap;                              // 0x02D0(0x0050) (ZeroConstructor, Config)
	EUiShowType                                        FppWeaponIconShowType;                                    // 0x0320(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EUiShowType                                        TpsWeaponIconShowType;                                    // 0x0321(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EUiShowType                                        FppEquipableItemIconShowType;                             // 0x0322(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bUseCharacterCapture : 1;                                 // 0x0323(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WorldMapZoomSpeedLevel;                                   // 0x0324(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bEnableMinimapViewScale : 1;                              // 0x0328(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData21 : 8;                                        // 0x0329(0x0001)
	unsigned char                                      bShowNetworkInfo : 1;                                     // 0x0329(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData22 : 8;                                        // 0x032A(0x0001)
	unsigned char                                      bHideNicknameOnKillfeed : 1;                              // 0x032A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData23 : 8;                                        // 0x032B(0x0001)
	unsigned char                                      bShowTracerDisplay : 1;                                   // 0x032B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData24 : 8;                                        // 0x032C(0x0001)
	unsigned char                                      bUseTracerTeamColor : 1;                                  // 0x032C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	int                                                KillMessageListSizeLimit;                                 // 0x0330(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIconKillfeedEnabled : 1;                                 // 0x0334(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeCrouch;                                          // 0x0335(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeProne;                                           // 0x0336(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeWalk;                                            // 0x0337(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     bToggleSprint;                                            // 0x0338(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeHoldRotation;                                    // 0x0339(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeHoldBreath;                                      // 0x033A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModePeek;                                            // 0x033B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeMap;                                             // 0x033C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeADS;                                             // 0x033D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	ETslInputModes                                     InputModeAim;                                             // 0x033E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bEditorApplyOverrideScalability : 1;                      // 0x033F(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGamepadPresets                                    GamepadPresetType;                                        // 0x0340(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bUseKeyHint : 1;                                          // 0x0341(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData26 : 8;                                        // 0x0342(0x0001)
	unsigned char                                      bUseFreeLookInterp : 1;                                   // 0x0342(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData27 : 8;                                        // 0x0343(0x0001)
	unsigned char                                      bUseClientReplay : 1;                                     // 0x0343(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData28 : 8;                                        // 0x0344(0x0001)
	unsigned char                                      bUseKillcam : 1;                                          // 0x0344(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData29 : 8;                                        // 0x0345(0x0001)
	unsigned char                                      bPreloadingMap : 1;                                       // 0x0345(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x0346(0x0002) MISSED OFFSET
	TArray<struct FString>                             ErangelPreloadingMaps;                                    // 0x0348(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             MiramarPreloadingMaps;                                    // 0x0358(0x0010) (ZeroConstructor, Config)
	struct FScriptMulticastDelegate                    OnGameUserSettingApplied;                                 // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FOutgameUserData>                    OutgameUserDatas;                                         // 0x0378(0x0010) (ZeroConstructor, Config)
	float                                              MapOpacityAndBlurMultiplier;                              // 0x0388(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	float                                              Gamma;                                                    // 0x0390(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TMap<struct FString, float>                        GammasForMap;                                             // 0x0398(0x0050) (ZeroConstructor, Config)
	unsigned char                                      bEnableUniversalGamma : 1;                                // 0x03E8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET

}

