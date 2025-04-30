#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Gameplay.UAEGameMode.RestartPlayerAtPlayerStart
struct AUAEGameMode_RestartPlayerAtPlayerStart_Params
{
	class AController*                                 NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StartSpot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.OnMsg
struct AUAEGameMode_OnMsg_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEGameMode.OnAirDropBoxLanded
struct AUAEGameMode_OnAirDropBoxLanded_Params
{
	int                                                boxId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.OnAirDropBoxEmpty
struct AUAEGameMode_OnAirDropBoxEmpty_Params
{
	int                                                boxId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID
struct AUAEGameMode_GetPlayerStateListWithTeamID_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AUAEPlayerState*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID
struct AUAEGameMode_GetPlayerControllerListWithTeamID_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AUAEPlayerController*>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey
struct AUAEGameMode_FindPlayerStateWithPlayerKey_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AUAEPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey
struct AUAEGameMode_FindPlayerControllerWithPlayerKey_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AUAEPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEGameMode.AddAirDropBox
struct AUAEGameMode_AddAirDropBox_Params
{
	int                                                boxId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.TestRespawn
struct AUAEPlayerController_TestRespawn_Params
{
};

// Function Gameplay.UAEPlayerController.SetPanels
struct AUAEPlayerController_SetPanels_Params
{
	TArray<class UUAEUserWidget*>                      panels;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Gameplay.UAEPlayerController.ServerSetVoiceId
struct AUAEPlayerController_ServerSetVoiceId_Params
{
	int                                                VoiceID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.ServerKickSelf
struct AUAEPlayerController_ServerKickSelf_Params
{
};

// Function Gameplay.UAEPlayerController.ServerGotoSpectating
struct AUAEPlayerController_ServerGotoSpectating_Params
{
	class APawn*                                       ViewTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.ServerExitGame
struct AUAEPlayerController_ServerExitGame_Params
{
};

// Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2
struct AUAEPlayerController_ServerAcknowledgeReconnection_2_Params
{
	uint32_t                                           Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.Respawn
struct AUAEPlayerController_Respawn_Params
{
};

// Function Gameplay.UAEPlayerController.ReleaseInGameUI
struct AUAEPlayerController_ReleaseInGameUI_Params
{
};

// Function Gameplay.UAEPlayerController.PrintStatistics
struct AUAEPlayerController_PrintStatistics_Params
{
};

// Function Gameplay.UAEPlayerController.PrintLocation
struct AUAEPlayerController_PrintLocation_Params
{
};

// Function Gameplay.UAEPlayerController.PlayerStartIDReceived
struct AUAEPlayerController_PlayerStartIDReceived_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_IsSpectating
struct AUAEPlayerController_OnRep_IsSpectating_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_IsObserver
struct AUAEPlayerController_OnRep_IsObserver_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_InitialWeaponAvatarList
struct AUAEPlayerController_OnRep_InitialWeaponAvatarList_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_InitialItemList
struct AUAEPlayerController_OnRep_InitialItemList_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatarList
struct AUAEPlayerController_OnRep_InitialEquipmentAvatarList_Params
{
};

// Function Gameplay.UAEPlayerController.OnRep_Emotes
struct AUAEPlayerController_OnRep_Emotes_Params
{
};

// Function Gameplay.UAEPlayerController.ObjectReports
struct AUAEPlayerController_ObjectReports_Params
{
	struct FString                                     InFileName;                                               // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.ObjectPathReport
struct AUAEPlayerController_ObjectPathReport_Params
{
	struct FString                                     InFileName;                                               // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.ObjectCountReport
struct AUAEPlayerController_ObjectCountReport_Params
{
	struct FString                                     InFileName;                                               // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.KickSelf
struct AUAEPlayerController_KickSelf_Params
{
};

// Function Gameplay.UAEPlayerController.IsSpectator
struct AUAEPlayerController_IsSpectator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsObserver
struct AUAEPlayerController_IsObserver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.IsInSpectating
struct AUAEPlayerController_IsInSpectating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.InitWithPlayerParams
struct AUAEPlayerController_InitWithPlayerParams_Params
{
	struct FGameModePlayerParams                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.UAEPlayerController.InitInGameUI
struct AUAEPlayerController_InitInGameUI_Params
{
};

// Function Gameplay.UAEPlayerController.GotoSpectating
struct AUAEPlayerController_GotoSpectating_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.ExitGame
struct AUAEPlayerController_ExitGame_Params
{
};

// Function Gameplay.UAEPlayerController.ExcuteIntRecord
struct AUAEPlayerController_ExcuteIntRecord_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord
struct AUAEPlayerController_ExcuteIntCounterRecord_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.EnableInGameUI
struct AUAEPlayerController_EnableInGameUI_Params
{
};

// Function Gameplay.UAEPlayerController.DumpNetActors
struct AUAEPlayerController_DumpNetActors_Params
{
};

// Function Gameplay.UAEPlayerController.DumpAllUI
struct AUAEPlayerController_DumpAllUI_Params
{
};

// Function Gameplay.UAEPlayerController.DumpAllObjects
struct AUAEPlayerController_DumpAllObjects_Params
{
};

// Function Gameplay.UAEPlayerController.DumpAllActors
struct AUAEPlayerController_DumpAllActors_Params
{
};

// Function Gameplay.UAEPlayerController.DoCrash
struct AUAEPlayerController_DoCrash_Params
{
};

// Function Gameplay.UAEPlayerController.DisableInGameUI
struct AUAEPlayerController_DisableInGameUI_Params
{
};

// Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete
struct AUAEPlayerController_ClientBroadcastRespawnComplete_Params
{
};

// Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful
struct AUAEPlayerController_ClientBroadcastReconnectionSuccessful_Params
{
};

// Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4
struct AUAEPlayerController_ClientAcknowledgeReconnection_4_Params
{
	uint32_t                                           Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn
struct AUAEPlayerController_CheckAcknowledgedPawn_Params
{
	class APawn*                                       InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerController.CastUIMsg
struct AUAEPlayerController_CastUIMsg_Params
{
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
	struct FString                                     module;                                                   // (Parm, ZeroConstructor)
};

// Function Gameplay.UAEPlayerController.ActorReports
struct AUAEPlayerController_ActorReports_Params
{
	struct FString                                     InFileName;                                               // (Parm, ZeroConstructor)
};

// Function Gameplay.UAECharacter.OnRep_TeamID
struct AUAECharacter_OnRep_TeamID_Params
{
};

// Function Gameplay.UAECharacter.OnRep_PlayerKey
struct AUAECharacter_OnRep_PlayerKey_Params
{
};

// Function Gameplay.UAECharacter.OnRep_InitialItemList
struct AUAECharacter_OnRep_InitialItemList_Params
{
};

// Function Gameplay.UAECharacter.GetPlayerKey
struct AUAECharacter_GetPlayerKey_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting
struct AUAECharacter_GetNonSimulatedComponents_OnFighting_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates
struct AUAECharacter_GetNonSimulatedComponents_NonTeammates_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacter.GetNonSimulatedComponents
struct AUAECharacter_GetNonSimulatedComponents_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacter.GetNonDedicatedComponents
struct AUAECharacter_GetNonDedicatedComponents_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3
struct AUAECharacter_ClientAcknowledgeReconnection_3_Params
{
	uint32_t                                           Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEHouseActor.OnRep_WindowList
struct AUAEHouseActor_OnRep_WindowList_Params
{
};

// Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated
struct AUAEHouseActor_BroadcastWindowRepDataUpdated_Params
{
	struct FUAEWindowRepData                           InRepData;                                                // (Parm)
};

// Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall
struct AUAEPlayerState_SetGVMemberIDServerCall_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.SetGVMemberID
struct AUAEPlayerState_SetGVMemberID_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.OnRep_TeamID
struct AUAEPlayerState_OnRep_TeamID_Params
{
};

// Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange
struct AUAEPlayerState_OnRep_PlayerKillsChange_Params
{
};

// Function Gameplay.UAEPlayerState.GetUserIDByMemberID
struct AUAEPlayerState_GetUserIDByMemberID_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEPlayerState.GetTeammateBattleResultData
struct AUAEPlayerState_GetTeammateBattleResultData_Params
{
	struct FGameModeTeammateBattleResultData           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.UAEPlayerState.GetPlayerBattleResultData
struct AUAEPlayerState_GetPlayerBattleResultData_Params
{
	struct FGameModePlayerBattleResultData             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.UseItem
struct UBackpackComponent_UseItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemUseTarget                        Target;                                                   // (Parm)
	EBattleItemUseReason                               Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.UpdateOccupiedCapacity
struct UBackpackComponent_UpdateOccupiedCapacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.UpdateCapacity
struct UBackpackComponent_UpdateCapacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.UnequipItem
struct UBackpackComponent_UnequipItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
};

// Function Gameplay.BackpackComponent.TryMergeItemHandles
struct UBackpackComponent_TryMergeItemHandles_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
};

// Function Gameplay.BackpackComponent.TakeItem
struct UBackpackComponent_TakeItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallHandleDrop;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SaveLog;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.SwapItem
struct UBackpackComponent_SwapItem_Params
{
	struct FItemDefineID                               DefineID1;                                                // (Parm)
	struct FItemDefineID                               DefineID2;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ReturnItem
struct UBackpackComponent_ReturnItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallHandlePickup;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.RemoveItemHandle
struct UBackpackComponent_RemoveItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ReceiveItemList
struct UBackpackComponent_ReceiveItemList_Params
{
};

// Function Gameplay.BackpackComponent.ReceiveCapacity
struct UBackpackComponent_ReceiveCapacity_Params
{
};

// Function Gameplay.BackpackComponent.PickupItem
struct UBackpackComponent_PickupItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (Parm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.OnRep_ItemList
struct UBackpackComponent_OnRep_ItemList_Params
{
};

// Function Gameplay.BackpackComponent.OnRep_Capacity
struct UBackpackComponent_OnRep_Capacity_Params
{
};

// Function Gameplay.BackpackComponent.NotifyItemUpdated
struct UBackpackComponent_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
};

// Function Gameplay.BackpackComponent.NotifyItemRemoved
struct UBackpackComponent_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
};

// Function Gameplay.BackpackComponent.NotifyItemListUpdated
struct UBackpackComponent_NotifyItemListUpdated_Params
{
};

// Function Gameplay.BackpackComponent.NotifyCapacityUpdated
struct UBackpackComponent_NotifyCapacityUpdated_Params
{
};

// Function Gameplay.BackpackComponent.NewItemHandle
struct UBackpackComponent_NewItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState
struct UBackpackComponent_ModifyItemHandleEquippingState_Params
{
	class UItemHandleBase*                             ItemHandle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquipping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ModifyItemHandleCount
struct UBackpackComponent_ModifyItemHandleCount_Params
{
	class UItemHandleBase*                             ItemHandle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.GetWorld_BP
struct UBackpackComponent_GetWorld_BP_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.GetItemListByDefineID
struct UBackpackComponent_GetItemListByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	TArray<struct FBattleItemData>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetItemHandleMap
struct UBackpackComponent_GetItemHandleMap_Params
{
	TMap<struct FItemDefineID, class UItemHandleBase*> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetItemHandleList
struct UBackpackComponent_GetItemHandleList_Params
{
	TArray<class UItemHandleBase*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetItemByDefineID
struct UBackpackComponent_GetItemByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID
struct UBackpackComponent_GetBattleItemFeatureDataByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	struct FBattleItemFeatureData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.BackpackComponent.GetAllItemList
struct UBackpackComponent_GetAllItemList_Params
{
	TArray<struct FBattleItemData>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.BackpackComponent.ForceNetUpdate
struct UBackpackComponent_ForceNetUpdate_Params
{
};

// Function Gameplay.BackpackComponent.EquipItem
struct UBackpackComponent_EquipItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
};

// Function Gameplay.BackpackComponent.DropItem
struct UBackpackComponent_DropItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason                              Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.DisuseItem
struct UBackpackComponent_DisuseItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemDisuseReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.CreateItemHandleInternal
struct UBackpackComponent_CreateItemHandleInternal_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	class UBattleItemHandleBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.CreateItemHandle
struct UBackpackComponent_CreateItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	class UItemHandleBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ConsumeItem
struct UBackpackComponent_ConsumeItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate
struct UBackpackComponent_ClientBroadcastItemOperationFailedDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           operationType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemOperationFailedReason                   FailedReason;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate
struct UBackpackComponent_ClientBroadcastItemOperationDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           operationType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.CheckCapacityForItem
struct UBackpackComponent_CheckCapacityForItem_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate
struct UBackpackComponent_BroadcastItemOperationFailedDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           operationType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemOperationFailedReason                   FailedReason;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate
struct UBackpackComponent_BroadcastItemOperationDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	EBattleItemOperationType                           operationType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.BackpackComponent.AddItemHandle
struct UBackpackComponent_AddItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	class UItemHandleBase*                             ItemHandle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot
struct UBaseGeneratorComponent_RegisterWorldTileSpot_Params
{
	class USpotSceneComponent*                         Spot;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick
struct UBaseGeneratorComponent_RegisterSpotComponentToTick_Params
{
	class USpotSceneComponent*                         SpotComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent
struct UBaseGeneratorComponent_RegisterGroupSpotComponent_Params
{
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots
struct UBaseGeneratorComponent_GeneratorWorldTileSpots_Params
{
	struct FWorldTileSpotArray                         SpotArray;                                                // (Parm, OutParm)
};

// Function Gameplay.BaseGeneratorComponent.GenerateSpots
struct UBaseGeneratorComponent_GenerateSpots_Params
{
};

// Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick
struct UBaseGeneratorComponent_GenerateSpotOnTick_Params
{
};

// Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible
struct UBaseGeneratorComponent_CheckTileLevelsVisible_Params
{
};

// Function Gameplay.GeneratorActorAIInterface.RegisterAIPickupPoint
struct UGeneratorActorAIInterface_RegisterAIPickupPoint_Params
{
	class UItemSpotSceneComponent*                     Spot;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      PickUpActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GeneratorActorInterface.InitData
struct UGeneratorActorInterface_InitData_Params
{
	class USpotSceneComponent*                         GenerateSpotComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ItemCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GeneratorVehicleInterface.InitVehicle
struct UGeneratorVehicleInterface_InitVehicle_Params
{
	int                                                FuelPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEngineOn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GlobalConfigActor.Init
struct AGlobalConfigActor_Init_Params
{
};

// Function Gameplay.GroupSpotSceneComponent.SetGroupValid
struct UGroupSpotSceneComponent_SetGroupValid_Params
{
	bool                                               Valid;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.GroupSpotSceneComponent.IsValidGroup
struct UGroupSpotSceneComponent_IsValidGroup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID
struct UGroupSpotSceneComponent_FindWorldCompositionID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent
struct UItemConfigActorComponent_RegisterGroupSceneComponent_Params
{
	int                                                GroupType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             GroupSceneComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass
struct UItemConfigActorComponent_RandomItemSpawnClass_Params
{
	struct FString                                     ItemValue;                                                // (Parm, ZeroConstructor)
	struct FString                                     ItemCategory;                                             // (Parm, ZeroConstructor)
	TArray<struct FItemSpawnClass>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents
struct UItemConfigActorComponent_RandomGroupSceneComponents_Params
{
	int                                                GroupType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Persent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent
struct UItemConfigActorComponent_RandomGroupSceneComponent_Params
{
	TArray<class USceneComponent*>                     AllGroups;                                                // (Parm, ZeroConstructor)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Gameplay.ItemConfigActorComponent.LoadActorClass
struct UItemConfigActorComponent_LoadActorClass_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass
struct UItemConfigActorComponent_GetItemSpawnClass_Params
{
	struct FItemSpawnData                              Data;                                                     // (Parm)
	TArray<struct FItemSpawnClass>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas
struct UItemGeneratorComponent_WriteItemClassStatisticsDatas_Params
{
};

// Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas
struct UItemGeneratorComponent_WriteGroupStatisticsDatas_Params
{
};

// Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas
struct UItemGeneratorComponent_WriteBuildingStatisticsDatas_Params
{
};

// Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas
struct UItemGeneratorComponent_WriteAllStatisticsDatas_Params
{
};

// Function Gameplay.ItemGeneratorComponent.SetSpecialCategoryEnable
struct UItemGeneratorComponent_SetSpecialCategoryEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData
struct UItemGeneratorComponent_RegisterItemGenerateSpawnData_Params
{
	struct FItemGenerateSpawnData                      Data;                                                     // (Parm)
};

// Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem
struct UItemGeneratorComponent_RegisterBornIslandItem_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.RandomSingleGroup
struct UItemGeneratorComponent_RandomSingleGroup_Params
{
	TArray<class UGroupSpotSceneComponent*>            Groups;                                                   // (Parm, OutParm, ZeroConstructor)
	struct FSpotGroupProperty                          GroupProperty;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UItemGroupSpotSceneComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.RandomItemGenerateSpawnData
struct UItemGeneratorComponent_RandomItemGenerateSpawnData_Params
{
	TArray<struct FItemGenerateSpawnData>              Items;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FItemGenerateSpawnData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.ItemGeneratorComponent.RandomGroupsByType
struct UItemGeneratorComponent_RandomGroupsByType_Params
{
	struct FSpotGroupProperty                          GroupProperty;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.ItemGeneratorComponent.RandomGroups
struct UItemGeneratorComponent_RandomGroups_Params
{
};

// Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups
struct UItemGeneratorComponent_RandomBornIslandGroups_Params
{
};

// Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable
struct UItemGeneratorComponent_LoadItemGenerateTable_Params
{
};

// Function Gameplay.ItemGeneratorComponent.IsSpecialCategoryEnabled
struct UItemGeneratorComponent_IsSpecialCategoryEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.IsCategoryEnabled
struct UItemGeneratorComponent_IsCategoryEnabled_Params
{
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray
struct UItemGeneratorComponent_GetRandomItemClassArray_Params
{
	struct FString                                     Value;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Category;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<struct FItemGenerateSpawnClass>             Results;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick
struct UItemGeneratorComponent_GenerateSpotOnTick_Params
{
};

// Function Gameplay.ItemGeneratorComponent.DeleteValidGroups
struct UItemGeneratorComponent_DeleteValidGroups_Params
{
};

// Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems
struct UItemGeneratorComponent_DeleteBornIslandItems_Params
{
};

// Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty
struct UItemGroupSpotSceneComponent_SetGroupProperty_Params
{
	struct FSpotGroupProperty                          Property;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType
struct UItemGroupSpotSceneComponent_RandomSpotByType_Params
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItemSpotSceneComponent*>             AllSpots;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FSpotTypeProperty                           Property;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot
struct UItemGroupSpotSceneComponent_RandomSingleSpot_Params
{
	TArray<class UItemSpotSceneComponent*>             Spots;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FSpotTypeProperty                           Property;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.SpotSceneComponent.SetSpotValid
struct USpotSceneComponent_SetSpotValid_Params
{
	bool                                               Valid;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.SpotSceneComponent.LineTraceSingle
struct USpotSceneComponent_LineTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.SpotSceneComponent.IsSpotValid
struct USpotSceneComponent_IsSpotValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.SpotSceneComponent.GetRandomCategory
struct USpotSceneComponent_GetRandomCategory_Params
{
	TArray<struct FSpotWeight>                         SpotWeights;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.SpotSceneComponent.GenerateSpot
struct USpotSceneComponent_GenerateSpot_Params
{
};

// Function Gameplay.SpotSceneComponent.GenerateActor
struct USpotSceneComponent_GenerateActor_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    ActorRotator;                                             // (Parm, OutParm, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 SpawnActorCollisionHandlingMethod;                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.ItemSpotSceneComponent.SetSpotProperty
struct UItemSpotSceneComponent_SetSpotProperty_Params
{
	int                                                CompositionID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpotGroupType>                        GroupType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemGeneratorComponent*                     Generator;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSpotTypeProperty                           Property;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.ItemSpotSceneComponent.GenerateSpot
struct UItemSpotSceneComponent_GenerateSpot_Params
{
};

// Function Gameplay.ItemSpotSceneComponent.GenerateItems
struct UItemSpotSceneComponent_GenerateItems_Params
{
	TArray<struct FItemGenerateSpawnClass>             AllItemClass;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Gameplay.TestAttrModifyActor.TestGetVariable
struct ATestAttrModifyActor_TestGetVariable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.TestAttrModifyActor.SetModify
struct ATestAttrModifyActor_SetModify_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.TestAttrModifyActor.GetAttrValue
struct ATestAttrModifyActor_GetAttrValue_Params
{
	int                                                I;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              F;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinished
struct UUAECharacterAnimListComponent_OnAsyncLoadingFinished_Params
{
	struct FAsyncLoadCharAnimParams                    LoadingParam;                                             // (Parm)
};

// Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim
struct UUAECharacterAnimListComponent_GetCharacterJumpAnim_Params
{
	TEnumAsByte<ECharacterJumpType>                    JumpType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerAnimData>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gameplay.UAECharacterAnimListComponent.GetCharacterAnim
struct UUAECharacterAnimListComponent_GetCharacterAnim_Params
{
	ECharacterAnimType                                 AnimType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ECharacterPoseType                                 PoseType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEProjectile.SetRotationAndLocationByNormal
struct AUAEProjectile_SetRotationAndLocationByNormal_Params
{
	class USceneComponent*                             Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.UAEProjectile.ServerFireWeapon
struct AUAEProjectile_ServerFireWeapon_Params
{
	struct FAttackId                                   AttackId;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Gameplay.UAEProjectile.SendFireWeapon
struct AUAEProjectile_SendFireWeapon_Params
{
};

// Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp
struct AUAEProjectile_OnRep_IsServerAlreadyExplodedCpp_Params
{
};

// Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify
struct AUAEProjectile_IsServerAlreadyExplodedCppNotify_Params
{
};

// Function Gameplay.UAEProjectile.IsOwnerAutomous
struct AUAEProjectile_IsOwnerAutomous_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.UAEProjectile.GlassDetect
struct AUAEProjectile_GlassDetect_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Gameplay.UAEWindowComponent.NotifyServerBroken
struct UUAEWindowComponent_NotifyServerBroken_Params
{
};

// Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated
struct UUAEWindowComponent_NotifyRepDataUpdated_Params
{
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP
struct UUAEWindowComponent_LocalHandleWindowBrokenBP_Params
{
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken
struct UUAEWindowComponent_LocalHandleWindowBroken_Params
{
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEWindowComponent.HandleBroken
struct UUAEWindowComponent_HandleBroken_Params
{
	class APlayerController*                           Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.UAEWindowComponent.GetRepData
struct UUAEWindowComponent_GetRepData_Params
{
	struct FUAEWindowRepData                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleConfigActorComponent.LoadActorClass
struct UVehicleConfigActorComponent_LoadActorClass_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas
struct UVehicleGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas
struct UVehicleGeneratorComponent_WriteVehicleClassStatisticsDatas_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas
struct UVehicleGeneratorComponent_WriteAllVehicleStatisticsDatas_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData
struct UVehicleGeneratorComponent_RegisterVehicleGenerateSpawnData_Params
{
	struct FVehicleGenerateSpawnData                   Data;                                                     // (Parm)
};

// Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent
struct UVehicleGeneratorComponent_RegisterGroupSpotComponent_Params
{
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType
struct UVehicleGeneratorComponent_RandomSpotsByType_Params
{
	struct FVehicleSpotProperty                        Property;                                                 // (Parm, OutParm)
	struct FVehicleSpotComponentArray                  Spots;                                                    // (Parm, OutParm)
};

// Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots
struct UVehicleGeneratorComponent_RandomSingleSpots_Params
{
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FVehicleSpotProperty                        Property;                                                 // (Parm, OutParm)
};

// Function Gameplay.VehicleGeneratorComponent.RandomGroups
struct UVehicleGeneratorComponent_RandomGroups_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable
struct UVehicleGeneratorComponent_LoadVehicleGenerateTable_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass
struct UVehicleGeneratorComponent_GetRandomVehicleClass_Params
{
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	struct FVehicleGenerateSpawnData                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick
struct UVehicleGeneratorComponent_GenerateSpotOnTick_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.DeleteGroups
struct UVehicleGeneratorComponent_DeleteGroups_Params
{
};

// Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount
struct UVehicleGeneratorComponent_AddVehicleSpotCount_Params
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	float                                              LocationX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationZ;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount
struct UVehicleGeneratorComponent_AddVehicleClassCount_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gameplay.VehicleSpotSceneComponent.SetSpotProperty
struct UVehicleSpotSceneComponent_SetSpotProperty_Params
{
	struct FVehicleSpotProperty                        Property;                                                 // (Parm, OutParm)
	class UVehicleGeneratorComponent*                  Generator;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gameplay.VehicleSpotSceneComponent.GenerateVehicles
struct UVehicleSpotSceneComponent_GenerateVehicles_Params
{
	struct FVehicleGenerateSpawnData                   Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Gameplay.VehicleSpotSceneComponent.GenerateSpot
struct UVehicleSpotSceneComponent_GenerateSpot_Params
{
};

// Function Gameplay.WeatherConfigComponent.UnloadStreamLevel
struct UWeatherConfigComponent_UnloadStreamLevel_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
};

// Function Gameplay.WeatherConfigComponent.SyncWeatherLevelInfo
struct UWeatherConfigComponent_SyncWeatherLevelInfo_Params
{
};

// Function Gameplay.WeatherConfigComponent.OnRep_WeatherSyncCount
struct UWeatherConfigComponent_OnRep_WeatherSyncCount_Params
{
};

// Function Gameplay.WeatherConfigComponent.LoadWeatherLevel
struct UWeatherConfigComponent_LoadWeatherLevel_Params
{
};

// Function Gameplay.WeatherConfigComponent.LoadStreamLevel
struct UWeatherConfigComponent_LoadStreamLevel_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
};

// Function Gameplay.WeatherConfigComponent.Init
struct UWeatherConfigComponent_Init_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
