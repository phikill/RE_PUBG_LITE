

// Class ShadowTrackerExtra.TslLPCGameMode
// //Class ShadowTrackerExtra.TslLPCGameMode
//0x05B0 (0x13D0 - 0x0E20)
class ATslLPCGameMode : public AUAEGameMode
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0E20(0x00E0) MISSED OFFSET
	class ATslTracerManager*                           ServerTracerManager;                                      // 0x0F00(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0F08(0x0004) MISSED OFFSET
	int                                                PostMatchWaitingTime;                                     // 0x0F0C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bEnableObserverInPIE : 1;                                 // 0x0F10(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0F11(0x0007) MISSED OFFSET
	TArray<struct FModeStringParameter>                ModeStringParameters;                                     // 0x0F18(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bStartPlayerAtMatchStart : 1;                             // 0x0F28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0F29(0x0003) MISSED OFFSET
	int                                                TeamSize;                                                 // 0x0F2C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseRandomWeather : 1;                                    // 0x0F30(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04 : 8;                                        // 0x0F31(0x0001)
	unsigned char                                      bIsCustomGame : 1;                                        // 0x0F31(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05 : 8;                                        // 0x0F32(0x0001)
	unsigned char                                      bIsEventMode : 1;                                         // 0x0F32(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06 : 8;                                        // 0x0F33(0x0001)
	unsigned char                                      bKillerSpectateMode : 1;                                  // 0x0F33(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	ECameraViewBehaviour                               CameraViewBehaviour;                                      // 0x0F34(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0F35(0x0003) MISSED OFFSET
	TMap<struct FString, class URewardData*>           RewardDataMap;                                            // 0x0F38(0x0050) (Edit, ZeroConstructor)
	class URewardData*                                 RewardData;                                               // 0x0F88(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MapCenter;                                                // 0x0F90(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0F9C(0x0004) MISSED OFFSET
	TArray<struct FCirCleCfg>                          BlueZoneCustomOptions;                                    // 0x0FA0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	TArray<struct FLimitCustomStringParameter>         LimitCustomStringParameters;                              // 0x0FB0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	class AMissionManager*                             MissionManager;                                           // 0x0FC0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0FC8(0x0008) MISSED OFFSET
	struct FGameModePlayerParams                       DefaultUserData;                                          // 0x0FD0(0x00E0) (Edit)
	unsigned char                                      UnknownData10[0x28];                                      // 0x10B0(0x0028) MISSED OFFSET
	class UCustomCarePackageRulesComponent*            CustomCarePackageRulesComponent;                          // 0x10D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSoftClassPath                              CustomCarepackageRulesComponentClassRef;                  // 0x10E0(0x0018) (Edit)
	unsigned char                                      UnknownData11[0x68];                                      // 0x10F8(0x0068) MISSED OFFSET
	TMap<struct FString, class APlayerState*>          JoinedUserPlayerStateMap;                                 // 0x1160(0x0050) (ZeroConstructor, Transient)
	TArray<class ASTExtraPlayerController*>            ObserverPlayerCtrls;                                      // 0x11B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData12[0x58];                                      // 0x11C0(0x0058) MISSED OFFSET
	class UDataTable*                                  BpRewardRuleDataTable;                                    // 0x1218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     BpRewardRowName;                                          // 0x1220(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FTslBpRewardRule                            BpRewardRule;                                             // 0x1230(0x0060) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAllowBpRewardInEventMode : 1;                            // 0x1290(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13 : 8;                                        // 0x1291(0x0001)
	unsigned char                                      bAllowBpRewardInCustomGame : 1;                           // 0x1291(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14 : 8;                                        // 0x1292(0x0001)
	unsigned char                                      bAllowJoinAnyMatchState : 1;                              // 0x1292(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x5];                                       // 0x1293(0x0005) MISSED OFFSET
	class UTslXpRewardRuleAsset*                       XpRewardRuleDataAsset;                                    // 0x1298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAllowXpRewardInEventMode : 1;                            // 0x12A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16 : 8;                                        // 0x12A1(0x0001)
	unsigned char                                      bAllowXpRewardInCustomGame : 1;                           // 0x12A1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x5E];                                      // 0x12A2(0x005E) MISSED OFFSET
	float                                              MultiplierCarePackageNormal;                              // 0x1300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bFlareGun : 1;                                            // 0x1304(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData18[0xB];                                       // 0x1305(0x000B) MISSED OFFSET
	class UTslCharacterPropertyOverrider*              CharacterPropertyOverrider;                               // 0x1310(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ALPCPlayerStart*>                     LPCPlayerStarts;                                          // 0x1318(0x0010) (ZeroConstructor)
	TMap<struct FString, class ALPCPlayerStart*>       PlayerInPlayerStartMap;                                   // 0x1328(0x0050) (ZeroConstructor)
	TMap<int, class ALPCPlayerStart*>                  TeamInPlayerStartMap;                                     // 0x1378(0x0050) (ZeroConstructor)
	unsigned char                                      bUseDistributedSpawn : 1;                                 // 0x13C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x13C9(0x0003) MISSED OFFSET
	int                                                TrySearchCount;                                           // 0x13CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

}


