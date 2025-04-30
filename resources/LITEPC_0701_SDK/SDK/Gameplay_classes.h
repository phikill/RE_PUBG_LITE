#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Gameplay.UAEGameMode
// 0x0928 (0x0D60 - 0x0438)
class AUAEGameMode : public AGameMode
{
public:
	float                                              GridCheckSize;                                            // 0x0438(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeepCheckSize;                                            // 0x043C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayerLimit;                                           // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableClimbing;                                          // 0x0444(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	int                                                WeatherID;                                                // 0x0448(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	struct FString                                     WeatherName;                                              // 0x0450(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0460(0x0004) MISSED OFFSET
	int                                                MaxAllowReplicatedCharacterCount;                         // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AINoRepTimeInReady;                                       // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class UClass*                                      ObserverPlayerStateClass;                                 // 0x0470(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	unsigned char                                      UnknownData04[0x748];                                     // 0x0478(0x0748) MISSED OFFSET
	bool                                               bEnableDamage;                                            // 0x0BC0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0xCF];                                      // 0x0BC1(0x00CF) MISSED OFFSET
	float                                              OBInfoTimeStep;                                           // 0x0C90(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3C];                                      // 0x0C94(0x003C) MISSED OFFSET
	TArray<class AUAEPlayerController*>                ObserverControllerList;                                   // 0x0CD0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x80];                                      // 0x0CE0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAEGameMode");
		return ptr;
	}


	void RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot);
	void OnMsg(const struct FString& Msg);
	void OnAirDropBoxLanded(int boxId, const struct FVector& Pos);
	void OnAirDropBoxEmpty(int boxId);
	TArray<class AUAEPlayerState*> GetPlayerStateListWithTeamID(int TeamID);
	TArray<class AUAEPlayerController*> GetPlayerControllerListWithTeamID(int TeamID);
	class AUAEPlayerState* FindPlayerStateWithPlayerKey(uint32_t PlayerKey);
	class AUAEPlayerController* FindPlayerControllerWithPlayerKey(uint32_t PlayerKey);
	void AddAirDropBox(int boxId, const struct FVector& Pos);
};


// Class Gameplay.UAEPlayerController
// 0x0178 (0x0848 - 0x06D0)
class AUAEPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06D0(0x0010) MISSED OFFSET
	struct FVector                                     CharacterLocation;                                        // 0x06E0(0x000C) (Net, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	struct FString                                     WeatherLevelName;                                         // 0x06F0(0x0010) (Net, ZeroConstructor)
	int                                                WeatherID;                                                // 0x0700(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                PlayerStartID;                                            // 0x0704(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FPlayerNetStats                             NetStats;                                                 // 0x0708(0x0040)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0748(0x0010) MISSED OFFSET
	bool                                               bIsGM;                                                    // 0x0758(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	ECharacterGender                                   DefaultCharacterGender;                                   // 0x0759(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x075A(0x0006) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          // 0x0760(0x0010) (Net, ZeroConstructor)
	TArray<int>                                        InitialWeaponAvatarList;                                  // 0x0770(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<int>                                        InitialEquipmentAvatarList;                               // 0x0780(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FString                                     Emotes;                                                   // 0x0790(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x07A0(0x0010) MISSED OFFSET
	bool                                               bIsObserver;                                              // 0x07B0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpectating;                                            // 0x07B1(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x07B2(0x0002) MISSED OFFSET
	TWeakObjectPtr<class UUAEUserWidget>               InGameUIRoot;                                             // 0x07B4(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07BC(0x0003) MISSED OFFSET
	bool                                               bReconnected;                                             // 0x07BF(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerControllerLostDelegate;                             // 0x07D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerRecoveredDelegate;                        // 0x07E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToReconnectDelegate;                 // 0x07F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerReconnectedDelegate;                      // 0x0800(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToRespawnDelegate;                   // 0x0810(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerRespawnedDelegate;                        // 0x0820(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToExitDelegate;                      // 0x0830(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0840(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAEPlayerController");
		return ptr;
	}


	void TestRespawn();
	void SetPanels(TArray<class UUAEUserWidget*> panels);
	void ServerSetVoiceId(int VoiceID);
	void ServerKickSelf();
	void ServerGotoSpectating(class APawn* ViewTarget);
	void ServerExitGame();
	void ServerAcknowledgeReconnection_2(uint32_t Token);
	void Respawn();
	void ReleaseInGameUI();
	void PrintStatistics();
	void PrintLocation();
	void PlayerStartIDReceived();
	void OnRep_IsSpectating();
	void OnRep_IsObserver();
	void OnRep_InitialWeaponAvatarList();
	void OnRep_InitialItemList();
	void OnRep_InitialEquipmentAvatarList();
	void OnRep_Emotes();
	void ObjectReports(const struct FString& InFileName);
	void ObjectPathReport(const struct FString& InFileName);
	void ObjectCountReport(const struct FString& InFileName);
	void KickSelf();
	bool IsSpectator();
	bool IsObserver();
	bool IsInSpectating();
	void InitWithPlayerParams(const struct FGameModePlayerParams& Params);
	void InitInGameUI();
	int GotoSpectating(int PlayerId);
	void ExitGame();
	void ExcuteIntRecord(const struct FString& Key, int Count);
	void ExcuteIntCounterRecord(const struct FString& Key, int Count);
	void EnableInGameUI();
	void DumpNetActors();
	void DumpAllUI();
	void DumpAllObjects();
	void DumpAllActors();
	void DoCrash();
	void DisableInGameUI();
	void ClientBroadcastRespawnComplete();
	void ClientBroadcastReconnectionSuccessful();
	void ClientAcknowledgeReconnection_4(uint32_t Token);
	bool CheckAcknowledgedPawn(class APawn* InPawn);
	void CastUIMsg(const struct FString& strMsg, const struct FString& module);
	void ActorReports(const struct FString& InFileName);
};


// Class Gameplay.UAECharacter
// 0x0060 (0x07E0 - 0x0780)
class AUAECharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0780(0x0008) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0788(0x0010) (Net, ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0798(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x079C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	ECharacterGender                                   DefaultCharacterGender;                                   // 0x07A0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07A1(0x0007) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          // 0x07A8(0x0010) (Net, ZeroConstructor, Transient)
	bool                                               bIsAI;                                                    // 0x07B8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x07B9(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAECharacter");
		return ptr;
	}


	void OnRep_TeamID();
	void OnRep_PlayerKey();
	void OnRep_InitialItemList();
	struct FString GetPlayerKey();
	TArray<class UActorComponent*> GetNonSimulatedComponents_OnFighting();
	TArray<class UActorComponent*> GetNonSimulatedComponents_NonTeammates();
	TArray<class UActorComponent*> GetNonSimulatedComponents();
	TArray<class UActorComponent*> GetNonDedicatedComponents();
	void ClientAcknowledgeReconnection_3(uint32_t Token);
};


// Class Gameplay.UAEGameState
// 0x0010 (0x03D8 - 0x03C8)
class AUAEGameState : public AGameState
{
public:
	struct FScriptMulticastDelegate                    OnSessionIdReplicated;                                    // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAEGameState");
		return ptr;
	}

};


// Class Gameplay.UAEHouseActor
// 0x00D8 (0x0450 - 0x0378)
class AUAEHouseActor : public AUAENetActor
{
public:
	float                                              WindowHideDistanceSquared;                                // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquared;                                // 0x037C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquaredOnVeryLowDevice;                 // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquaredOnServer;                        // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FUAEWindowRepData>                   WindowList;                                               // 0x0388(0x0010) (Net, ZeroConstructor)
	TMap<int, class UUAEWindowComponent*>              WindowComponents;                                         // 0x0398(0x0050) (ExportObject, ZeroConstructor, Transient)
	bool                                               bEnableWindow;                                            // 0x03E8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x67];                                      // 0x03E9(0x0067) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAEHouseActor");
		return ptr;
	}


	void OnRep_WindowList();
	void BroadcastWindowRepDataUpdated(const struct FUAEWindowRepData& InRepData);
};


// Class Gameplay.UAEOBState
// 0x0000 (0x03F8 - 0x03F8)
class AUAEOBState : public APlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAEOBState");
		return ptr;
	}

};


// Class Gameplay.UAEPlayerState
// 0x0110 (0x0508 - 0x03F8)
class AUAEPlayerState : public APlayerState
{
public:
	float                                              surviveTime;                                              // 0x03F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pronetime;                                                // 0x03FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	float                                              marchDistance;                                            // 0x0408(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              travelDistance;                                           // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              driveDistance;                                            // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                destroyVehicleNum;                                        // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes;                                              // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GVMemberID;                                               // 0x041C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0420(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTeamIdReplicated;                                       // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                Kills;                                                    // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x043C(0x0008) MISSED OFFSET
	int                                                Assists;                                                  // 0x0444(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlatformGender;                                           // 0x0448(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	uint32_t                                           Killer;                                                   // 0x044C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotNum;                                       // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum;                           // 0x0454(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum;                                              // 0x0458(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HealTimes;                                                // 0x045C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0460(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0464(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             KillFlow;                                                 // 0x0468(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  // 0x0478(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTLog_PropEquipUnequipFlow>          TLog_PropEquipUnequipFlowData;                            // 0x0488(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector                                     LandLocation;                                             // 0x0498(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     DeadLocation;                                             // 0x04A4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FString                                     DeadDamangeType;                                          // 0x04B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DeadTimeStr;                                              // 0x04C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData04[0xC];                                       // 0x04D0(0x000C) MISSED OFFSET
	int                                                MemberIdInVoiceRoom;                                      // 0x04DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerVoiceEnable;                                        // 0x04E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x27];                                      // 0x04E1(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAEPlayerState");
		return ptr;
	}


	void SetGVMemberIDServerCall(int memberID);
	void SetGVMemberID(int memberID);
	void OnRep_TeamID();
	void OnRep_PlayerKillsChange();
	uint32_t GetUserIDByMemberID(int memberID);
	struct FGameModeTeammateBattleResultData GetTeammateBattleResultData();
	struct FGameModePlayerBattleResultData GetPlayerBattleResultData();
};


// Class Gameplay.BackpackComponent
// 0x0130 (0x0228 - 0x00F8)
class UBackpackComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    ItemListUpdatedDelegate;                                  // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SingleItemUpdatedDelegate;                                // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SingleItemDeleteDelegate;                                 // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CapacityUpdatedDelegate;                                  // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationDelegate;                                    // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationFailedDelegate;                              // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemUpdatedDelegate;                                      // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ItemRemovedDelegate;                                      // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	TArray<struct FBattleItemData>                     ItemList;                                                 // 0x0188(0x0010) (Net, ZeroConstructor)
	TArray<struct FBattleItemData>                     CachItemList;                                             // 0x0198(0x0010) (ZeroConstructor)
	TArray<class UItemHandleBase*>                     ItemHandleList;                                           // 0x01A8(0x0010) (ZeroConstructor)
	TMap<struct FItemDefineID, class UItemHandleBase*> ItemHandleMap;                                            // 0x01B8(0x0050) (ZeroConstructor)
	float                                              Capacity;                                                 // 0x0208(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OccupiedCapacity;                                         // 0x020C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0210(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.BackpackComponent");
		return ptr;
	}


	bool UseItem(const struct FItemDefineID& DefineID, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	float UpdateOccupiedCapacity();
	float UpdateCapacity();
	void UnequipItem(const struct FItemDefineID& DefineID);
	void TryMergeItemHandles(const struct FItemDefineID& DefineID);
	int TakeItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandleDrop, bool SaveLog);
	bool SwapItem(const struct FItemDefineID& DefineID1, const struct FItemDefineID& DefineID2);
	int ReturnItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandlePickup);
	bool RemoveItemHandle(const struct FItemDefineID& DefineID);
	void ReceiveItemList();
	void ReceiveCapacity();
	bool PickupItem(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	void OnRep_ItemList();
	void OnRep_Capacity();
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);
	void NotifyItemListUpdated();
	void NotifyCapacityUpdated();
	class UBattleItemHandleBase* NewItemHandle(const struct FItemDefineID& DefineID);
	void ModifyItemHandleEquippingState(class UItemHandleBase* ItemHandle, bool bEquipping);
	void ModifyItemHandleCount(class UItemHandleBase* ItemHandle, int Count);
	class UWorld* GetWorld_BP();
	TArray<struct FBattleItemData> GetItemListByDefineID(const struct FItemDefineID& DefineID);
	TMap<struct FItemDefineID, class UItemHandleBase*> GetItemHandleMap();
	TArray<class UItemHandleBase*> GetItemHandleList();
	struct FBattleItemData GetItemByDefineID(const struct FItemDefineID& DefineID);
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FBattleItemData> GetAllItemList();
	void ForceNetUpdate();
	void EquipItem(const struct FItemDefineID& DefineID);
	bool DropItem(const struct FItemDefineID& DefineID, int Count, EBattleItemDropReason Reason);
	bool DisuseItem(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason);
	class UBattleItemHandleBase* CreateItemHandleInternal(const struct FItemDefineID& DefineID);
	class UItemHandleBase* CreateItemHandle(const struct FItemDefineID& DefineID);
	int ConsumeItem(const struct FItemDefineID& DefineID, int Count);
	void ClientBroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, EBattleItemOperationFailedReason FailedReason);
	void ClientBroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, unsigned char Reason);
	int CheckCapacityForItem(const struct FItemDefineID& DefineID, int Count);
	void BroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, EBattleItemOperationFailedReason FailedReason);
	void BroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, unsigned char Reason);
	bool AddItemHandle(const struct FItemDefineID& DefineID, class UItemHandleBase* ItemHandle);
};


// Class Gameplay.BaseGeneratorComponent
// 0x00C0 (0x01B8 - 0x00F8)
class UBaseGeneratorComponent : public UActorComponent
{
public:
	bool                                               bWorldTileGenerator;                                      // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bModeStateControl;                                        // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
	TMap<TEnumAsByte<ESpotGroupType>, struct FGroupSpotComponentArray> AllGroupSpots;                                            // 0x0100(0x0050) (ZeroConstructor)
	TArray<class USpotSceneComponent*>                 AllSpotsToTick;                                           // 0x0150(0x0010) (ExportObject, ZeroConstructor)
	TMap<int, struct FWorldTileSpotArray>              WorldTileSpots;                                           // 0x0160(0x0050) (ZeroConstructor)
	int                                                GenerateSpotCountPerTick;                                 // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.BaseGeneratorComponent");
		return ptr;
	}


	void RegisterWorldTileSpot(class USpotSceneComponent* Spot);
	void RegisterSpotComponentToTick(class USpotSceneComponent* SpotComponent);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void GeneratorWorldTileSpots(struct FWorldTileSpotArray* SpotArray);
	void GenerateSpots();
	void GenerateSpotOnTick();
	void CheckTileLevelsVisible();
};


// Class Gameplay.ConfigInterface
// 0x0000 (0x0028 - 0x0028)
class UConfigInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.ConfigInterface");
		return ptr;
	}

};


// Class Gameplay.GeneratorActorAIInterface
// 0x0000 (0x0028 - 0x0028)
class UGeneratorActorAIInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.GeneratorActorAIInterface");
		return ptr;
	}


	void RegisterAIPickupPoint(class UItemSpotSceneComponent* Spot, class AActor* PickUpActor);
};


// Class Gameplay.GeneratorActorInterface
// 0x0000 (0x0028 - 0x0028)
class UGeneratorActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.GeneratorActorInterface");
		return ptr;
	}


	void InitData(class USpotSceneComponent* GenerateSpotComponent, int ItemCount);
};


// Class Gameplay.GeneratorVehicleInterface
// 0x0000 (0x0028 - 0x0028)
class UGeneratorVehicleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.GeneratorVehicleInterface");
		return ptr;
	}


	void InitVehicle(int FuelPercent, bool bEngineOn);
};


// Class Gameplay.GlobalConfigActor
// 0x0010 (0x0378 - 0x0368)
class AGlobalConfigActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	bool                                               bInitComponents;                                          // 0x0370(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0371(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.GlobalConfigActor");
		return ptr;
	}


	void Init();
};


// Class Gameplay.GroupSpotSceneComponent
// 0x0010 (0x02B0 - 0x02A0)
class UGroupSpotSceneComponent : public USceneComponent
{
public:
	TEnumAsByte<ESpotGroupType>                        GroupType;                                                // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNearItem;                                                // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02A2(0x0002) MISSED OFFSET
	int                                                WorldCompositionID;                                       // 0x02A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsValidGroup;                                            // 0x02A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.GroupSpotSceneComponent");
		return ptr;
	}


	void SetGroupValid(bool Valid);
	bool IsValidGroup();
	int FindWorldCompositionID();
};


// Class Gameplay.ItemConfigActorComponent
// 0x0060 (0x0158 - 0x00F8)
class UItemConfigActorComponent : public UActorComponent
{
public:
	TArray<struct FItemSpawnData>                      ItemSpawnDatas;                                           // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FGroupTypeSceneComponents>        AllSpotGroups;                                            // 0x0108(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.ItemConfigActorComponent");
		return ptr;
	}


	void RegisterGroupSceneComponent(int GroupType, class USceneComponent* GroupSceneComponent);
	TArray<struct FItemSpawnClass> RandomItemSpawnClass(const struct FString& ItemValue, const struct FString& ItemCategory);
	TArray<class USceneComponent*> RandomGroupSceneComponents(int GroupType, int Persent);
	class USceneComponent* RandomGroupSceneComponent(TArray<class USceneComponent*> AllGroups);
	class UClass* LoadActorClass(const struct FString& Path);
	TArray<struct FItemSpawnClass> GetItemSpawnClass(const struct FItemSpawnData& Data);
};


// Class Gameplay.ItemGeneratorComponent
// 0x01C0 (0x0378 - 0x01B8)
class UItemGeneratorComponent : public UBaseGeneratorComponent
{
public:
	struct FVector                                     ItemGenerateOffset;                                       // 0x01B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ESpotGroupType>                        BornIslandGroupType;                                      // 0x01C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStatisticsValid;                                         // 0x01C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01C6(0x0002) MISSED OFFSET
	struct FItemGenerateStatisticsData                 ItemStatisticsData;                                       // 0x01C8(0x0100)
	TArray<struct FSpotGroupProperty>                  SpotGroupPropertys;                                       // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             SpecialCategorys;                                         // 0x02D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bSpecialCategoryEnabled;                                  // 0x02E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	TMap<struct FString, struct FItemGenerateSpawnDataArray> ItemGenerateSpawnDatas;                                   // 0x02F0(0x0050) (ZeroConstructor)
	TArray<class AActor*>                              BornIslandItems;                                          // 0x0340(0x0010) (ZeroConstructor)
	TArray<class UItemGroupSpotSceneComponent*>        AllValidGroups;                                           // 0x0350(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bIsGenerateBornIslandItems;                               // 0x0360(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGenerateMainlandItems;                                 // 0x0361(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGenerateWorldTileItems;                                // 0x0362(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0363(0x0005) MISSED OFFSET
	struct FDateTime                                   GenerateBornIslandTime;                                   // 0x0368(0x0008)
	struct FDateTime                                   GenerateMainlandTime;                                     // 0x0370(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.ItemGeneratorComponent");
		return ptr;
	}


	void WriteItemClassStatisticsDatas();
	void WriteGroupStatisticsDatas();
	void WriteBuildingStatisticsDatas();
	void WriteAllStatisticsDatas();
	void SetSpecialCategoryEnable(bool bEnabled);
	void RegisterItemGenerateSpawnData(const struct FItemGenerateSpawnData& Data);
	void RegisterBornIslandItem(class AActor* Item);
	class UItemGroupSpotSceneComponent* RandomSingleGroup(const struct FSpotGroupProperty& GroupProperty, TArray<class UGroupSpotSceneComponent*>* Groups);
	struct FItemGenerateSpawnData RandomItemGenerateSpawnData(TArray<struct FItemGenerateSpawnData>* Items);
	void RandomGroupsByType(const struct FSpotGroupProperty& GroupProperty);
	void RandomGroups();
	void RandomBornIslandGroups();
	void LoadItemGenerateTable();
	bool IsSpecialCategoryEnabled();
	bool IsCategoryEnabled(const struct FString& Category);
	bool GetRandomItemClassArray(struct FString* Value, struct FString* Category, TArray<struct FItemGenerateSpawnClass>* Results);
	void GenerateSpotOnTick();
	void DeleteValidGroups();
	void DeleteBornIslandItems();
};


// Class Gameplay.ItemGroupSpotSceneComponent
// 0x0010 (0x02C0 - 0x02B0)
class UItemGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.ItemGroupSpotSceneComponent");
		return ptr;
	}


	void SetGroupProperty(const struct FSpotGroupProperty& Property);
	void RandomSpotByType(TEnumAsByte<ESpotType> SpotType, const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* AllSpots);
	void RandomSingleSpot(const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* Spots);
};


// Class Gameplay.SpotSceneComponent
// 0x0010 (0x02B0 - 0x02A0)
class USpotSceneComponent : public USceneComponent
{
public:
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	int                                                WorldCompositionID;                                       // 0x02A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpotValid;                                             // 0x02A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	float                                              LineOffsetZ;                                              // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.SpotSceneComponent");
		return ptr;
	}


	void SetSpotValid(bool Valid);
	bool LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool IsSpotValid();
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	void GenerateSpot();
	class AActor* GenerateActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, struct FVector* ActorLocation, struct FRotator* ActorRotator);
};


// Class Gameplay.ItemSpotSceneComponent
// 0x0020 (0x02D0 - 0x02B0)
class UItemSpotSceneComponent : public USpotSceneComponent
{
public:
	int                                                AIGroupID;                                                // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02B4(0x0001) MISSED OFFSET
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x02B5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02B6(0x0002) MISSED OFFSET
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FItemGenerateSpawnClass>             AllItems;                                                 // 0x02C0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.ItemSpotSceneComponent");
		return ptr;
	}


	void SetSpotProperty(int CompositionID, TEnumAsByte<ESpotGroupType> GroupType, class UItemGeneratorComponent* Generator, const struct FSpotTypeProperty& Property);
	void GenerateSpot();
	void GenerateItems(TArray<struct FItemGenerateSpawnClass>* AllItemClass);
};


// Class Gameplay.SpotGeneratorStruct
// 0x0000 (0x0028 - 0x0028)
class USpotGeneratorStruct : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.SpotGeneratorStruct");
		return ptr;
	}

};


// Class Gameplay.TestAttrModifyActor
// 0x0018 (0x0380 - 0x0368)
class ATestAttrModifyActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	class UAttrModifyComponent*                        AttrModifyComp;                                           // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0378(0x0004) MISSED OFFSET
	float                                              FloatAttr;                                                // 0x037C(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.TestAttrModifyActor");
		return ptr;
	}


	bool TestGetVariable();
	void SetModify(bool Enable);
	void GetAttrValue(int* I, float* F);
};


// Class Gameplay.UAECharAnimListCompBase
// 0x0000 (0x01A0 - 0x01A0)
class UUAECharAnimListCompBase : public UUAEAnimListComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAECharAnimListCompBase");
		return ptr;
	}

};


// Class Gameplay.UAECharacterAnimListComponent
// 0x0120 (0x02C0 - 0x01A0)
class UUAECharacterAnimListComponent : public UUAECharAnimListCompBase
{
public:
	TArray<struct FCharacterMovementAnimData>          CharacterMovementAnimEditList;                            // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterMovementAnimData>          CharacterFPPAnimEditList;                                 // 0x01B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditList;                                    // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditListFPP;                                 // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FAnimInfo                                   CharacterMovementAnimInfoData;                            // 0x01E0(0x00D8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EAnimBluePrintType>                    AnimBluePrintType;                                        // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentIsTPP;                                             // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02BA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAECharacterAnimListComponent");
		return ptr;
	}


	void OnAsyncLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam);
	TArray<struct FPlayerAnimData> GetCharacterJumpAnim(TEnumAsByte<ECharacterJumpType> JumpType);
	class UAnimationAsset* GetCharacterAnim(ECharacterAnimType AnimType, ECharacterPoseType PoseType);
};


// Class Gameplay.UAEChaVehAnimListComponent
// 0x0010 (0x01B0 - 0x01A0)
class UUAEChaVehAnimListComponent : public UUAECharAnimListCompBase
{
public:
	TArray<struct FVehCharAnimData>                    VehCharAnimDataList;                                      // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAEChaVehAnimListComponent");
		return ptr;
	}

};


// Class Gameplay.UAEProjectile
// 0x0008 (0x0370 - 0x0368)
class AUAEProjectile : public AActor
{
public:
	bool                                               IsServerAlreadyExplodedCpp;                               // 0x0368(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	int                                                ItemDefineID;                                             // 0x036C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAEProjectile");
		return ptr;
	}


	void SetRotationAndLocationByNormal(class USceneComponent* Comp);
	void ServerFireWeapon(const struct FAttackId& AttackId);
	void SendFireWeapon();
	void OnRep_IsServerAlreadyExplodedCpp();
	void IsServerAlreadyExplodedCppNotify();
	bool IsOwnerAutomous();
	void GlassDetect(const struct FVector& Start, const struct FVector& End);
};


// Class Gameplay.UAESimpleSceneActor
// 0x0000 (0x0368 - 0x0368)
class AUAESimpleSceneActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAESimpleSceneActor");
		return ptr;
	}

};


// Class Gameplay.UAEWindowComponent
// 0x0070 (0x0790 - 0x0720)
class UUAEWindowComponent : public UStaticMeshComponent
{
public:
	class APawn*                                       LastInstigatorPawn;                                       // 0x0720(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 BrokenMesh;                                               // 0x0728(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BrokenEffect;                                             // 0x0730(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0738(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.UAEWindowComponent");
		return ptr;
	}


	void NotifyServerBroken();
	void NotifyRepDataUpdated(bool bInitial, bool bLocal);
	void LocalHandleWindowBrokenBP(bool bInitial, bool bLocal);
	void LocalHandleWindowBroken(bool bInitial, bool bLocal);
	void HandleBroken(class APlayerController* Instigator, bool bLocal);
	struct FUAEWindowRepData GetRepData();
};


// Class Gameplay.VehicleConfigActorComponent
// 0x0000 (0x00F8 - 0x00F8)
class UVehicleConfigActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.VehicleConfigActorComponent");
		return ptr;
	}


	class UClass* LoadActorClass(const struct FString& Path);
};


// Class Gameplay.VehicleGeneratorComponent
// 0x0118 (0x02D0 - 0x01B8)
class UVehicleGeneratorComponent : public UBaseGeneratorComponent
{
public:
	TArray<struct FVehicleSpotProperty>                VehicleSpotPropertys;                                     // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStatisticsValid;                                         // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRandomVehicle;                                         // 0x01C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01CA(0x0006) MISSED OFFSET
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          // 0x01D0(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                // 0x0220(0x0050) (ZeroConstructor)
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    // 0x0270(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.VehicleGeneratorComponent");
		return ptr;
	}


	void WriteVehicleSpotStatisticsDatas();
	void WriteVehicleClassStatisticsDatas();
	void WriteAllVehicleStatisticsDatas();
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property);
	void RandomGroups();
	void LoadVehicleGenerateTable();
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);
	void GenerateSpotOnTick();
	void DeleteGroups();
	void AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ);
	void AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count);
};


// Class Gameplay.VehicleGroupSpotSceneComponent
// 0x0000 (0x02B0 - 0x02B0)
class UVehicleGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.VehicleGroupSpotSceneComponent");
		return ptr;
	}

};


// Class Gameplay.VehicleSpotSceneComponent
// 0x0050 (0x0300 - 0x02B0)
class UVehicleSpotSceneComponent : public USpotSceneComponent
{
public:
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x02B0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRandomRotation;                                          // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02B2(0x0002) MISSED OFFSET
	float                                              RandomRotationMin;                                        // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomRotationMax;                                        // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	class UVehicleGeneratorComponent*                  VehicleGenerator;                                         // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVehicleSpotProperty                        SpotProperty;                                             // 0x02C8(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.VehicleSpotSceneComponent");
		return ptr;
	}


	void SetSpotProperty(class UVehicleGeneratorComponent* Generator, struct FVehicleSpotProperty* Property);
	void GenerateVehicles(const struct FVehicleGenerateSpawnData& Data);
	void GenerateSpot();
};


// Class Gameplay.WeatherConfigComponent
// 0x0050 (0x0148 - 0x00F8)
class UWeatherConfigComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	int                                                WeatherID;                                                // 0x0100(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FString                                     WeatherLevelName;                                         // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                WeatherSyncCount;                                         // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FString                                     LastLoadedWeatherLevelName;                               // 0x0120(0x0010) (ZeroConstructor)
	struct FString                                     DefaultWeatherLevelName;                                  // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bLoadWeatherLevel;                                        // 0x0140(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0141(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gameplay.WeatherConfigComponent");
		return ptr;
	}


	void UnloadStreamLevel(const struct FString& LevelName);
	void SyncWeatherLevelInfo();
	void OnRep_WeatherSyncCount();
	void LoadWeatherLevel();
	void LoadStreamLevel(const struct FString& LevelName);
	void Init();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
