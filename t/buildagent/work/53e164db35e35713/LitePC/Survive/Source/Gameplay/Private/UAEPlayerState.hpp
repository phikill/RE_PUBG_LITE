

// Class Gameplay.UAEPlayerState
// //Class Gameplay.UAEPlayerState
//0x0118 (0x0568 - 0x0450)
class AUAEPlayerState : public APlayerState
{
public:
	struct FVector                                     DeadLocation;                                             // 0x0450(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x045C(0x000C) MISSED OFFSET
	TArray<struct FTLog_PropEquipUnequipFlow>          TLog_PropEquipUnequipFlowData;                            // 0x0468(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                HealTimes;                                                // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0480(0x0004) MISSED OFFSET
	int                                                rescueTimes;                                              // 0x0484(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	int                                                ShootWeaponShotAndHitPlayerNum;                           // 0x0490(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                destroyVehicleNum;                                        // 0x0494(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  // 0x0498(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	uint32_t                                           Killer;                                                   // 0x04A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Assists;                                                  // 0x04AC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum;                                              // 0x04B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GVMemberID;                                               // 0x04B4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LandLocation;                                             // 0x04B8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      PlatformGender;                                           // 0x04C4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	float                                              travelDistance;                                           // 0x04C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              marchDistance;                                            // 0x04CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerVoiceEnable : 1;                                    // 0x04D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTeamIdReplicated;                                       // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04E8(0x0004) MISSED OFFSET
	int                                                Kills;                                                    // 0x04EC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              surviveTime;                                              // 0x04F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MemberIdInVoiceRoom;                                      // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04F8(0x0004) MISSED OFFSET
	int                                                TeamID;                                                   // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0500(0x0008) MISSED OFFSET
	TArray<struct FString>                             KillFlow;                                                 // 0x0508(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              driveDistance;                                            // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	struct FString                                     DeadTimeStr;                                              // 0x0520(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              Pronetime;                                                // 0x0530(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	int                                                ShootWeaponShotNum;                                       // 0x0538(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	struct FString                                     DeadDamangeType;                                          // 0x0540(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              HealAmount;                                               // 0x0550(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x14];                                      // 0x0554(0x0014) MISSED OFFSET

	// Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void SetGVMemberIDServerCall(int memberID);// sub_E04CE0()

	// Function Gameplay.UAEPlayerState.SetGVMemberID
	// (Final, Native, Public)
	void SetGVMemberID(int memberID);// sub_E04C60()

	// Function Gameplay.UAEPlayerState.OnRep_TeamID
	// (Native, Public)
	void OnRep_TeamID();// sub_E03E10()

	// Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange
	// (Native, Public)
	void OnRep_PlayerKillsChange();// sub_E03DF0()

	// Function Gameplay.UAEPlayerState.OnRep_GVMemberID
	// (Final, Native, Public)
	void OnRep_GVMemberID();// sub_E03D70()

	// Function Gameplay.UAEPlayerState.GetUserIDByMemberID
	// (Native, Public)
	uint32_t GetUserIDByMemberID(int memberID);// sub_E031A0()

	// Function Gameplay.UAEPlayerState.GetTeammateBattleResultData
	// (Native, Public, Const)
	struct FGameModeTeammateBattleResultData GetTeammateBattleResultData();// sub_E02F60()

	// Function Gameplay.UAEPlayerState.GetPlayerBattleResultData
	// (Native, Public, Const)
	struct FGameModePlayerBattleResultData GetPlayerBattleResultData();// sub_E02850()


}

