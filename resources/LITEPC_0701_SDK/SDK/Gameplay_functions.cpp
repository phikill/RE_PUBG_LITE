
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Gameplay.UAEGameMode.RestartPlayerAtPlayerStart
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StartSpot                      (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RestartPlayerAtPlayerStart");

	AUAEGameMode_RestartPlayerAtPlayerStart_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnMsg
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)

void AUAEGameMode::OnMsg(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnMsg");

	AUAEGameMode_OnMsg_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnAirDropBoxLanded
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            boxId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAEGameMode::OnAirDropBoxLanded(int boxId, const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnAirDropBoxLanded");

	AUAEGameMode_OnAirDropBoxLanded_Params params;
	params.boxId = boxId;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.OnAirDropBoxEmpty
// (Native, Public)
// Parameters:
// int                            boxId                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEGameMode::OnAirDropBoxEmpty(int boxId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnAirDropBoxEmpty");

	AUAEGameMode_OnAirDropBoxEmpty_Params params;
	params.boxId = boxId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID
// (Final, Native, Public, Const)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AUAEPlayerState*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUAEPlayerState*> AUAEGameMode::GetPlayerStateListWithTeamID(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID");

	AUAEGameMode_GetPlayerStateListWithTeamID_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID
// (Final, Native, Public, Const)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AUAEPlayerController*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUAEPlayerController*> AUAEGameMode::GetPlayerControllerListWithTeamID(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID");

	AUAEGameMode_GetPlayerControllerListWithTeamID_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// class AUAEPlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUAEPlayerState* AUAEGameMode::FindPlayerStateWithPlayerKey(uint32_t PlayerKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey");

	AUAEGameMode_FindPlayerStateWithPlayerKey_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// class AUAEPlayerController*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUAEPlayerController* AUAEGameMode::FindPlayerControllerWithPlayerKey(uint32_t PlayerKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey");

	AUAEGameMode_FindPlayerControllerWithPlayerKey_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEGameMode.AddAirDropBox
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            boxId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAEGameMode::AddAirDropBox(int boxId, const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.AddAirDropBox");

	AUAEGameMode_AddAirDropBox_Params params;
	params.boxId = boxId;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.TestRespawn
// (Final, Exec, Native, Public)

void AUAEPlayerController::TestRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestRespawn");

	AUAEPlayerController_TestRespawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.SetPanels
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUAEUserWidget*>  panels                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUAEPlayerController::SetPanels(TArray<class UUAEUserWidget*> panels)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetPanels");

	AUAEPlayerController_SetPanels_Params params;
	params.panels = panels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ServerSetVoiceId
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// int                            VoiceID                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ServerSetVoiceId(int VoiceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerSetVoiceId");

	AUAEPlayerController_ServerSetVoiceId_Params params;
	params.VoiceID = VoiceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ServerKickSelf
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AUAEPlayerController::ServerKickSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerKickSelf");

	AUAEPlayerController_ServerKickSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ServerGotoSpectating
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APawn*                   ViewTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ServerGotoSpectating(class APawn* ViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerGotoSpectating");

	AUAEPlayerController_ServerGotoSpectating_Params params;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ServerExitGame
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AUAEPlayerController::ServerExitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerExitGame");

	AUAEPlayerController_ServerExitGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// uint32_t                       Token                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ServerAcknowledgeReconnection_2(uint32_t Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2");

	AUAEPlayerController_ServerAcknowledgeReconnection_2_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.Respawn
// (Native, Public, BlueprintCallable)

void AUAEPlayerController::Respawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.Respawn");

	AUAEPlayerController_Respawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ReleaseInGameUI
// (Native, Public, BlueprintCallable)

void AUAEPlayerController::ReleaseInGameUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ReleaseInGameUI");

	AUAEPlayerController_ReleaseInGameUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.PrintStatistics
// (Final, Exec, Native, Public)

void AUAEPlayerController::PrintStatistics()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.PrintStatistics");

	AUAEPlayerController_PrintStatistics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.PrintLocation
// (Final, Exec, Native, Public)

void AUAEPlayerController::PrintLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.PrintLocation");

	AUAEPlayerController_PrintLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.PlayerStartIDReceived
// (Final, Native, Protected)

void AUAEPlayerController::PlayerStartIDReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.PlayerStartIDReceived");

	AUAEPlayerController_PlayerStartIDReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_IsSpectating
// (Native, Public)

void AUAEPlayerController::OnRep_IsSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsSpectating");

	AUAEPlayerController_OnRep_IsSpectating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_IsObserver
// (Native, Public)

void AUAEPlayerController::OnRep_IsObserver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsObserver");

	AUAEPlayerController_OnRep_IsObserver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_InitialWeaponAvatarList
// (Final, Native, Public)

void AUAEPlayerController::OnRep_InitialWeaponAvatarList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialWeaponAvatarList");

	AUAEPlayerController_OnRep_InitialWeaponAvatarList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_InitialItemList
// (Final, Native, Public)

void AUAEPlayerController::OnRep_InitialItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialItemList");

	AUAEPlayerController_OnRep_InitialItemList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatarList
// (Final, Native, Public)

void AUAEPlayerController::OnRep_InitialEquipmentAvatarList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatarList");

	AUAEPlayerController_OnRep_InitialEquipmentAvatarList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.OnRep_Emotes
// (Final, Native, Public)

void AUAEPlayerController::OnRep_Emotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_Emotes");

	AUAEPlayerController_OnRep_Emotes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ObjectReports
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InFileName                     (Parm, ZeroConstructor)

void AUAEPlayerController::ObjectReports(const struct FString& InFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ObjectReports");

	AUAEPlayerController_ObjectReports_Params params;
	params.InFileName = InFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ObjectPathReport
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InFileName                     (Parm, ZeroConstructor)

void AUAEPlayerController::ObjectPathReport(const struct FString& InFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ObjectPathReport");

	AUAEPlayerController_ObjectPathReport_Params params;
	params.InFileName = InFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ObjectCountReport
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InFileName                     (Parm, ZeroConstructor)

void AUAEPlayerController::ObjectCountReport(const struct FString& InFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ObjectCountReport");

	AUAEPlayerController_ObjectCountReport_Params params;
	params.InFileName = InFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.KickSelf
// (Final, Exec, Native, Public)

void AUAEPlayerController::KickSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.KickSelf");

	AUAEPlayerController_KickSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.IsSpectator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsSpectator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsSpectator");

	AUAEPlayerController_IsSpectator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsObserver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsObserver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsObserver");

	AUAEPlayerController_IsObserver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.IsInSpectating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::IsInSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsInSpectating");

	AUAEPlayerController_IsInSpectating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.InitWithPlayerParams
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameModePlayerParams   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void AUAEPlayerController::InitWithPlayerParams(const struct FGameModePlayerParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitWithPlayerParams");

	AUAEPlayerController_InitWithPlayerParams_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.InitInGameUI
// (Native, Public, BlueprintCallable)

void AUAEPlayerController::InitInGameUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitInGameUI");

	AUAEPlayerController_InitInGameUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.GotoSpectating
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AUAEPlayerController::GotoSpectating(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GotoSpectating");

	AUAEPlayerController_GotoSpectating_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.ExitGame
// (Native, Public, BlueprintCallable)

void AUAEPlayerController::ExitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExitGame");

	AUAEPlayerController_ExitGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ExcuteIntRecord
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ExcuteIntRecord(const struct FString& Key, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExcuteIntRecord");

	AUAEPlayerController_ExcuteIntRecord_Params params;
	params.Key = Key;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ExcuteIntCounterRecord(const struct FString& Key, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord");

	AUAEPlayerController_ExcuteIntCounterRecord_Params params;
	params.Key = Key;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.EnableInGameUI
// (Final, Exec, Native, Public)

void AUAEPlayerController::EnableInGameUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.EnableInGameUI");

	AUAEPlayerController_EnableInGameUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpNetActors
// (Final, Exec, Native, Public)

void AUAEPlayerController::DumpNetActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpNetActors");

	AUAEPlayerController_DumpNetActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpAllUI
// (Final, Exec, Native, Public)

void AUAEPlayerController::DumpAllUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllUI");

	AUAEPlayerController_DumpAllUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpAllObjects
// (Final, Exec, Native, Public)

void AUAEPlayerController::DumpAllObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllObjects");

	AUAEPlayerController_DumpAllObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DumpAllActors
// (Final, Exec, Native, Public)

void AUAEPlayerController::DumpAllActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllActors");

	AUAEPlayerController_DumpAllActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DoCrash
// (Final, Exec, Native, Public)

void AUAEPlayerController::DoCrash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DoCrash");

	AUAEPlayerController_DoCrash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.DisableInGameUI
// (Final, Exec, Native, Public)

void AUAEPlayerController::DisableInGameUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DisableInGameUI");

	AUAEPlayerController_DisableInGameUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete
// (Net, NetReliable, Native, Event, Public, NetClient)

void AUAEPlayerController::ClientBroadcastRespawnComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete");

	AUAEPlayerController_ClientBroadcastRespawnComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful
// (Net, NetReliable, Native, Event, Public, NetClient)

void AUAEPlayerController::ClientBroadcastReconnectionSuccessful()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful");

	AUAEPlayerController_ClientBroadcastReconnectionSuccessful_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint32_t                       Token                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerController::ClientAcknowledgeReconnection_4(uint32_t Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4");

	AUAEPlayerController_ClientAcknowledgeReconnection_4_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEPlayerController::CheckAcknowledgedPawn(class APawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn");

	AUAEPlayerController_CheckAcknowledgedPawn_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerController.CastUIMsg
// (Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMsg                         (Parm, ZeroConstructor)
// struct FString                 module                         (Parm, ZeroConstructor)

void AUAEPlayerController::CastUIMsg(const struct FString& strMsg, const struct FString& module)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CastUIMsg");

	AUAEPlayerController_CastUIMsg_Params params;
	params.strMsg = strMsg;
	params.module = module;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerController.ActorReports
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InFileName                     (Parm, ZeroConstructor)

void AUAEPlayerController::ActorReports(const struct FString& InFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ActorReports");

	AUAEPlayerController_ActorReports_Params params;
	params.InFileName = InFileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.OnRep_TeamID
// (Final, Native, Public)

void AUAECharacter::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_TeamID");

	AUAECharacter_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.OnRep_PlayerKey
// (Native, Public)

void AUAECharacter::OnRep_PlayerKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_PlayerKey");

	AUAECharacter_OnRep_PlayerKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.OnRep_InitialItemList
// (Native, Public)

void AUAECharacter::OnRep_InitialItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_InitialItemList");

	AUAECharacter_OnRep_InitialItemList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAECharacter.GetPlayerKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AUAECharacter::GetPlayerKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetPlayerKey");

	AUAECharacter_GetPlayerKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents_OnFighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting");

	AUAECharacter_GetNonSimulatedComponents_OnFighting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents_NonTeammates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates");

	AUAECharacter_GetNonSimulatedComponents_NonTeammates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetNonSimulatedComponents
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents");

	AUAECharacter_GetNonSimulatedComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.GetNonDedicatedComponents
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> AUAECharacter::GetNonDedicatedComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonDedicatedComponents");

	AUAECharacter_GetNonDedicatedComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint32_t                       Token                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAECharacter::ClientAcknowledgeReconnection_3(uint32_t Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3");

	AUAECharacter_ClientAcknowledgeReconnection_3_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEHouseActor.OnRep_WindowList
// (Final, Native, Private)

void AUAEHouseActor::OnRep_WindowList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.OnRep_WindowList");

	AUAEHouseActor_OnRep_WindowList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FUAEWindowRepData       InRepData                      (Parm)

void AUAEHouseActor::BroadcastWindowRepDataUpdated(const struct FUAEWindowRepData& InRepData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated");

	AUAEHouseActor_BroadcastWindowRepDataUpdated_Params params;
	params.InRepData = InRepData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::SetGVMemberIDServerCall(int memberID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall");

	AUAEPlayerState_SetGVMemberIDServerCall_Params params;
	params.memberID = memberID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.SetGVMemberID
// (Final, Native, Public)
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)

void AUAEPlayerState::SetGVMemberID(int memberID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetGVMemberID");

	AUAEPlayerState_SetGVMemberID_Params params;
	params.memberID = memberID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_TeamID
// (Native, Public)

void AUAEPlayerState::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_TeamID");

	AUAEPlayerState_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange
// (Native, Public)

void AUAEPlayerState::OnRep_PlayerKillsChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange");

	AUAEPlayerState_OnRep_PlayerKillsChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEPlayerState.GetUserIDByMemberID
// (Native, Public)
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t AUAEPlayerState::GetUserIDByMemberID(int memberID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetUserIDByMemberID");

	AUAEPlayerState_GetUserIDByMemberID_Params params;
	params.memberID = memberID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetTeammateBattleResultData
// (Native, Public, Const)
// Parameters:
// struct FGameModeTeammateBattleResultData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModeTeammateBattleResultData AUAEPlayerState::GetTeammateBattleResultData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetTeammateBattleResultData");

	AUAEPlayerState_GetTeammateBattleResultData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEPlayerState.GetPlayerBattleResultData
// (Native, Public, Const)
// Parameters:
// struct FGameModePlayerBattleResultData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameModePlayerBattleResultData AUAEPlayerState::GetPlayerBattleResultData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerBattleResultData");

	AUAEPlayerState_GetPlayerBattleResultData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.UseItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemUseTarget    Target                         (Parm)
// EBattleItemUseReason           Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::UseItem(const struct FItemDefineID& DefineID, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UseItem");

	UBackpackComponent_UseItem_Params params;
	params.DefineID = DefineID;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.UpdateOccupiedCapacity
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBackpackComponent::UpdateOccupiedCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UpdateOccupiedCapacity");

	UBackpackComponent_UpdateOccupiedCapacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.UpdateCapacity
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBackpackComponent::UpdateCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UpdateCapacity");

	UBackpackComponent_UpdateCapacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.UnequipItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void UBackpackComponent::UnequipItem(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UnequipItem");

	UBackpackComponent_UnequipItem_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.TryMergeItemHandles
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void UBackpackComponent::TryMergeItemHandles(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.TryMergeItemHandles");

	UBackpackComponent_TryMergeItemHandles_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.TakeItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallHandleDrop                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SaveLog                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::TakeItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandleDrop, bool SaveLog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.TakeItem");

	UBackpackComponent_TakeItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.bCallHandleDrop = bCallHandleDrop;
	params.SaveLog = SaveLog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.SwapItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID1                      (Parm)
// struct FItemDefineID           DefineID2                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::SwapItem(const struct FItemDefineID& DefineID1, const struct FItemDefineID& DefineID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.SwapItem");

	UBackpackComponent_SwapItem_Params params;
	params.DefineID1 = DefineID1;
	params.DefineID2 = DefineID2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ReturnItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallHandlePickup              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::ReturnItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandlePickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReturnItem");

	UBackpackComponent_ReturnItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.bCallHandlePickup = bCallHandlePickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.RemoveItemHandle
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::RemoveItemHandle(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.RemoveItemHandle");

	UBackpackComponent_RemoveItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ReceiveItemList
// (Native, Event, Protected, BlueprintEvent)

void UBackpackComponent::ReceiveItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReceiveItemList");

	UBackpackComponent_ReceiveItemList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ReceiveCapacity
// (Native, Event, Protected, BlueprintEvent)

void UBackpackComponent::ReceiveCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReceiveCapacity");

	UBackpackComponent_ReceiveCapacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.PickupItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::PickupItem(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickupItem");

	UBackpackComponent_PickupItem_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.OnRep_ItemList
// (Final, Native, Protected)

void UBackpackComponent::OnRep_ItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_ItemList");

	UBackpackComponent_OnRep_ItemList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.OnRep_Capacity
// (Final, Native, Protected)

void UBackpackComponent::OnRep_Capacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_Capacity");

	UBackpackComponent_OnRep_Capacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.NotifyItemUpdated
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void UBackpackComponent::NotifyItemUpdated(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemUpdated");

	UBackpackComponent_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.NotifyItemRemoved
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void UBackpackComponent::NotifyItemRemoved(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemRemoved");

	UBackpackComponent_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.NotifyItemListUpdated
// (Native, Public, BlueprintCallable)

void UBackpackComponent::NotifyItemListUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemListUpdated");

	UBackpackComponent_NotifyItemListUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.NotifyCapacityUpdated
// (Native, Public, BlueprintCallable)

void UBackpackComponent::NotifyCapacityUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyCapacityUpdated");

	UBackpackComponent_NotifyCapacityUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.NewItemHandle
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackComponent::NewItemHandle(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NewItemHandle");

	UBackpackComponent_NewItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UItemHandleBase*         ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquipping                     (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ModifyItemHandleEquippingState(class UItemHandleBase* ItemHandle, bool bEquipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState");

	UBackpackComponent_ModifyItemHandleEquippingState_Params params;
	params.ItemHandle = ItemHandle;
	params.bEquipping = bEquipping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ModifyItemHandleCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UItemHandleBase*         ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ModifyItemHandleCount(class UItemHandleBase* ItemHandle, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyItemHandleCount");

	UBackpackComponent_ModifyItemHandleCount_Params params;
	params.ItemHandle = ItemHandle;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.GetWorld_BP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBackpackComponent::GetWorld_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetWorld_BP");

	UBackpackComponent_GetWorld_BP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemListByDefineID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// TArray<struct FBattleItemData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBattleItemData> UBackpackComponent::GetItemListByDefineID(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemListByDefineID");

	UBackpackComponent_GetItemListByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemHandleMap
// (Native, Protected, BlueprintCallable)
// Parameters:
// TMap<struct FItemDefineID, class UItemHandleBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FItemDefineID, class UItemHandleBase*> UBackpackComponent::GetItemHandleMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemHandleMap");

	UBackpackComponent_GetItemHandleMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemHandleList
// (Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class UItemHandleBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItemHandleBase*> UBackpackComponent::GetItemHandleList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemHandleList");

	UBackpackComponent_GetItemHandleList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetItemByDefineID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackComponent::GetItemByDefineID(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemByDefineID");

	UBackpackComponent_GetItemByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// struct FBattleItemFeatureData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemFeatureData UBackpackComponent::GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID");

	UBackpackComponent_GetBattleItemFeatureDataByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.GetAllItemList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FBattleItemData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBattleItemData> UBackpackComponent::GetAllItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetAllItemList");

	UBackpackComponent_GetAllItemList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ForceNetUpdate
// (Final, Native, Protected, BlueprintCallable)

void UBackpackComponent::ForceNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ForceNetUpdate");

	UBackpackComponent_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.EquipItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)

void UBackpackComponent::EquipItem(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.EquipItem");

	UBackpackComponent_EquipItem_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.DropItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason          Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::DropItem(const struct FItemDefineID& DefineID, int Count, EBattleItemDropReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.DropItem");

	UBackpackComponent_DropItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.DisuseItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::DisuseItem(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.DisuseItem");

	UBackpackComponent_DisuseItem_Params params;
	params.DefineID = DefineID;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.CreateItemHandleInternal
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackComponent::CreateItemHandleInternal(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CreateItemHandleInternal");

	UBackpackComponent_CreateItemHandleInternal_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.CreateItemHandle
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// class UItemHandleBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemHandleBase* UBackpackComponent::CreateItemHandle(const struct FItemDefineID& DefineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CreateItemHandle");

	UBackpackComponent_CreateItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ConsumeItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::ConsumeItem(const struct FItemDefineID& DefineID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ConsumeItem");

	UBackpackComponent_ConsumeItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemOperationType       operationType                  (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemOperationFailedReason FailedReason                   (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ClientBroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, EBattleItemOperationFailedReason FailedReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate");

	UBackpackComponent_ClientBroadcastItemOperationFailedDelegate_Params params;
	params.DefineID = DefineID;
	params.operationType = operationType;
	params.FailedReason = FailedReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemOperationType       operationType                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::ClientBroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, unsigned char Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate");

	UBackpackComponent_ClientBroadcastItemOperationDelegate_Params params;
	params.DefineID = DefineID;
	params.operationType = operationType;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.CheckCapacityForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackComponent::CheckCapacityForItem(const struct FItemDefineID& DefineID, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckCapacityForItem");

	UBackpackComponent_CheckCapacityForItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemOperationType       operationType                  (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemOperationFailedReason FailedReason                   (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::BroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, EBattleItemOperationFailedReason FailedReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate");

	UBackpackComponent_BroadcastItemOperationFailedDelegate_Params params;
	params.DefineID = DefineID;
	params.operationType = operationType;
	params.FailedReason = FailedReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// EBattleItemOperationType       operationType                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UBackpackComponent::BroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, unsigned char Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate");

	UBackpackComponent_BroadcastItemOperationDelegate_Params params;
	params.DefineID = DefineID;
	params.operationType = operationType;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BackpackComponent.AddItemHandle
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// class UItemHandleBase*         ItemHandle                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponent::AddItemHandle(const struct FItemDefineID& DefineID, class UItemHandleBase* ItemHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.AddItemHandle");

	UBackpackComponent_AddItemHandle_Params params;
	params.DefineID = DefineID;
	params.ItemHandle = ItemHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot
// (Native, Public)
// Parameters:
// class USpotSceneComponent*     Spot                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseGeneratorComponent::RegisterWorldTileSpot(class USpotSceneComponent* Spot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot");

	UBaseGeneratorComponent_RegisterWorldTileSpot_Params params;
	params.Spot = Spot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick
// (Native, Public, BlueprintCallable)
// Parameters:
// class USpotSceneComponent*     SpotComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseGeneratorComponent::RegisterSpotComponentToTick(class USpotSceneComponent* SpotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick");

	UBaseGeneratorComponent_RegisterSpotComponentToTick_Params params;
	params.SpotComponent = SpotComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent");

	UBaseGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FWorldTileSpotArray     SpotArray                      (Parm, OutParm)

void UBaseGeneratorComponent::GeneratorWorldTileSpots(struct FWorldTileSpotArray* SpotArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots");

	UBaseGeneratorComponent_GeneratorWorldTileSpots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpotArray != nullptr)
		*SpotArray = params.SpotArray;
}


// Function Gameplay.BaseGeneratorComponent.GenerateSpots
// (Native, Public)

void UBaseGeneratorComponent::GenerateSpots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GenerateSpots");

	UBaseGeneratorComponent_GenerateSpots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick
// (Native, Public)

void UBaseGeneratorComponent::GenerateSpotOnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick");

	UBaseGeneratorComponent_GenerateSpotOnTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible
// (Final, Native, Protected)

void UBaseGeneratorComponent::CheckTileLevelsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible");

	UBaseGeneratorComponent_CheckTileLevelsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.GeneratorActorAIInterface.RegisterAIPickupPoint
// (Native, Public)
// Parameters:
// class UItemSpotSceneComponent* Spot                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  PickUpActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorAIInterface::RegisterAIPickupPoint(class UItemSpotSceneComponent* Spot, class AActor* PickUpActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorAIInterface.RegisterAIPickupPoint");

	UGeneratorActorAIInterface_RegisterAIPickupPoint_Params params;
	params.Spot = Spot;
	params.PickUpActor = PickUpActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.GeneratorActorInterface.InitData
// (Native, Public)
// Parameters:
// class USpotSceneComponent*     GenerateSpotComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorActorInterface::InitData(class USpotSceneComponent* GenerateSpotComponent, int ItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.InitData");

	UGeneratorActorInterface_InitData_Params params;
	params.GenerateSpotComponent = GenerateSpotComponent;
	params.ItemCount = ItemCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.GeneratorVehicleInterface.InitVehicle
// (Native, Public)
// Parameters:
// int                            FuelPercent                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEngineOn                      (Parm, ZeroConstructor, IsPlainOldData)

void UGeneratorVehicleInterface::InitVehicle(int FuelPercent, bool bEngineOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.InitVehicle");

	UGeneratorVehicleInterface_InitVehicle_Params params;
	params.FuelPercent = FuelPercent;
	params.bEngineOn = bEngineOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.GlobalConfigActor.Init
// (Native, Public, BlueprintCallable)

void AGlobalConfigActor::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.GlobalConfigActor.Init");

	AGlobalConfigActor_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.GroupSpotSceneComponent.SetGroupValid
// (Native, Public)
// Parameters:
// bool                           Valid                          (Parm, ZeroConstructor, IsPlainOldData)

void UGroupSpotSceneComponent::SetGroupValid(bool Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.SetGroupValid");

	UGroupSpotSceneComponent_SetGroupValid_Params params;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.GroupSpotSceneComponent.IsValidGroup
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGroupSpotSceneComponent::IsValidGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.IsValidGroup");

	UGroupSpotSceneComponent_IsValidGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGroupSpotSceneComponent::FindWorldCompositionID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID");

	UGroupSpotSceneComponent_FindWorldCompositionID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GroupType                      (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         GroupSceneComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemConfigActorComponent::RegisterGroupSceneComponent(int GroupType, class USceneComponent* GroupSceneComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent");

	UItemConfigActorComponent_RegisterGroupSceneComponent_Params params;
	params.GroupType = GroupType;
	params.GroupSceneComponent = GroupSceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemValue                      (Parm, ZeroConstructor)
// struct FString                 ItemCategory                   (Parm, ZeroConstructor)
// TArray<struct FItemSpawnClass> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemSpawnClass> UItemConfigActorComponent::RandomItemSpawnClass(const struct FString& ItemValue, const struct FString& ItemCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass");

	UItemConfigActorComponent_RandomItemSpawnClass_Params params;
	params.ItemValue = ItemValue;
	params.ItemCategory = ItemCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GroupType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Persent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USceneComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USceneComponent*> UItemConfigActorComponent::RandomGroupSceneComponents(int GroupType, int Persent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents");

	UItemConfigActorComponent_RandomGroupSceneComponents_Params params;
	params.GroupType = GroupType;
	params.Persent = Persent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent
// (Final, Native, Public)
// Parameters:
// TArray<class USceneComponent*> AllGroups                      (Parm, ZeroConstructor)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UItemConfigActorComponent::RandomGroupSceneComponent(TArray<class USceneComponent*> AllGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent");

	UItemConfigActorComponent_RandomGroupSceneComponent_Params params;
	params.AllGroups = AllGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemConfigActorComponent.LoadActorClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UItemConfigActorComponent::LoadActorClass(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.LoadActorClass");

	UItemConfigActorComponent_LoadActorClass_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass
// (Final, Native, Public)
// Parameters:
// struct FItemSpawnData          Data                           (Parm)
// TArray<struct FItemSpawnClass> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemSpawnClass> UItemConfigActorComponent::GetItemSpawnClass(const struct FItemSpawnData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass");

	UItemConfigActorComponent_GetItemSpawnClass_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas
// (Final, Native, Protected)

void UItemGeneratorComponent::WriteItemClassStatisticsDatas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas");

	UItemGeneratorComponent_WriteItemClassStatisticsDatas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas
// (Final, Native, Protected)

void UItemGeneratorComponent::WriteGroupStatisticsDatas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas");

	UItemGeneratorComponent_WriteGroupStatisticsDatas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas
// (Final, Native, Protected)

void UItemGeneratorComponent::WriteBuildingStatisticsDatas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas");

	UItemGeneratorComponent_WriteBuildingStatisticsDatas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas
// (Native, Protected, BlueprintCallable)

void UItemGeneratorComponent::WriteAllStatisticsDatas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas");

	UItemGeneratorComponent_WriteAllStatisticsDatas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.SetSpecialCategoryEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::SetSpecialCategoryEnable(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.SetSpecialCategoryEnable");

	UItemGeneratorComponent_SetSpecialCategoryEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FItemGenerateSpawnData  Data                           (Parm)

void UItemGeneratorComponent::RegisterItemGenerateSpawnData(const struct FItemGenerateSpawnData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData");

	UItemGeneratorComponent_RegisterItemGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem
// (Native, Public)
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemGeneratorComponent::RegisterBornIslandItem(class AActor* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem");

	UItemGeneratorComponent_RegisterBornIslandItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.RandomSingleGroup
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UGroupSpotSceneComponent*> Groups                         (Parm, OutParm, ZeroConstructor)
// struct FSpotGroupProperty      GroupProperty                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UItemGroupSpotSceneComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UItemGroupSpotSceneComponent* UItemGeneratorComponent::RandomSingleGroup(const struct FSpotGroupProperty& GroupProperty, TArray<class UGroupSpotSceneComponent*>* Groups)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomSingleGroup");

	UItemGeneratorComponent_RandomSingleGroup_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.RandomItemGenerateSpawnData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<struct FItemGenerateSpawnData> Items                          (Parm, OutParm, ZeroConstructor)
// struct FItemGenerateSpawnData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemGenerateSpawnData UItemGeneratorComponent::RandomItemGenerateSpawnData(TArray<struct FItemGenerateSpawnData>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomItemGenerateSpawnData");

	UItemGeneratorComponent_RandomItemGenerateSpawnData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.RandomGroupsByType
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FSpotGroupProperty      GroupProperty                  (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGeneratorComponent::RandomGroupsByType(const struct FSpotGroupProperty& GroupProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomGroupsByType");

	UItemGeneratorComponent_RandomGroupsByType_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.RandomGroups
// (Native, Protected, BlueprintCallable)

void UItemGeneratorComponent::RandomGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomGroups");

	UItemGeneratorComponent_RandomGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups
// (Native, Protected, BlueprintCallable)

void UItemGeneratorComponent::RandomBornIslandGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups");

	UItemGeneratorComponent_RandomBornIslandGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable
// (Native, Event, Public, BlueprintEvent)

void UItemGeneratorComponent::LoadItemGenerateTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable");

	UItemGeneratorComponent_LoadItemGenerateTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.IsSpecialCategoryEnabled
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::IsSpecialCategoryEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.IsSpecialCategoryEnabled");

	UItemGeneratorComponent_IsSpecialCategoryEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.IsCategoryEnabled
// (Final, Native, Public)
// Parameters:
// struct FString                 Category                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::IsCategoryEnabled(const struct FString& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.IsCategoryEnabled");

	UItemGeneratorComponent_IsCategoryEnabled_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor)
// struct FString                 Category                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FItemGenerateSpawnClass> Results                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemGeneratorComponent::GetRandomItemClassArray(struct FString* Value, struct FString* Category, TArray<struct FItemGenerateSpawnClass>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray");

	UItemGeneratorComponent_GetRandomItemClassArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Category != nullptr)
		*Category = params.Category;
	if (Results != nullptr)
		*Results = params.Results;

	return params.ReturnValue;
}


// Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick
// (Native, Public)

void UItemGeneratorComponent::GenerateSpotOnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick");

	UItemGeneratorComponent_GenerateSpotOnTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.DeleteValidGroups
// (Final, Native, Public, BlueprintCallable)

void UItemGeneratorComponent::DeleteValidGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.DeleteValidGroups");

	UItemGeneratorComponent_DeleteValidGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems
// (Final, Native, Public, BlueprintCallable)

void UItemGeneratorComponent::DeleteBornIslandItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems");

	UItemGeneratorComponent_DeleteBornIslandItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSpotGroupProperty      Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGroupSpotSceneComponent::SetGroupProperty(const struct FSpotGroupProperty& Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty");

	UItemGroupSpotSceneComponent_SetGroupProperty_Params params;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TEnumAsByte<ESpotType>         SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItemSpotSceneComponent*> AllSpots                       (Parm, OutParm, ZeroConstructor)
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGroupSpotSceneComponent::RandomSpotByType(TEnumAsByte<ESpotType> SpotType, const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* AllSpots)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType");

	UItemGroupSpotSceneComponent_RandomSpotByType_Params params;
	params.SpotType = SpotType;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
}


// Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UItemSpotSceneComponent*> Spots                          (Parm, OutParm, ZeroConstructor)
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemGroupSpotSceneComponent::RandomSingleSpot(const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* Spots)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot");

	UItemGroupSpotSceneComponent_RandomSingleSpot_Params params;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spots != nullptr)
		*Spots = params.Spots;
}


// Function Gameplay.SpotSceneComponent.SetSpotValid
// (Native, Public)
// Parameters:
// bool                           Valid                          (Parm, ZeroConstructor, IsPlainOldData)

void USpotSceneComponent::SetSpotValid(bool Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.SetSpotValid");

	USpotSceneComponent_SetSpotValid_Params params;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.SpotSceneComponent.LineTraceSingle
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpotSceneComponent::LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.LineTraceSingle");

	USpotSceneComponent_LineTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Gameplay.SpotSceneComponent.IsSpotValid
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USpotSceneComponent::IsSpotValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.IsSpotValid");

	USpotSceneComponent_IsSpotValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.SpotSceneComponent.GetRandomCategory
// (Native, Protected, HasOutParms)
// Parameters:
// TArray<struct FSpotWeight>     SpotWeights                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USpotSceneComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GetRandomCategory");

	USpotSceneComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.SpotSceneComponent.GenerateSpot
// (Native, Public)

void USpotSceneComponent::GenerateSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GenerateSpot");

	USpotSceneComponent_GenerateSpot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.SpotSceneComponent.GenerateActor
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorLocation                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                ActorRotator                   (Parm, OutParm, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USpotSceneComponent::GenerateActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, struct FVector* ActorLocation, struct FRotator* ActorRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GenerateActor");

	USpotSceneComponent_GenerateActor_Params params;
	params.ActorClass = ActorClass;
	params.SpawnActorCollisionHandlingMethod = SpawnActorCollisionHandlingMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
	if (ActorRotator != nullptr)
		*ActorRotator = params.ActorRotator;

	return params.ReturnValue;
}


// Function Gameplay.ItemSpotSceneComponent.SetSpotProperty
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            CompositionID                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESpotGroupType>    GroupType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UItemGeneratorComponent* Generator                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSpotTypeProperty       Property                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemSpotSceneComponent::SetSpotProperty(int CompositionID, TEnumAsByte<ESpotGroupType> GroupType, class UItemGeneratorComponent* Generator, const struct FSpotTypeProperty& Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.SetSpotProperty");

	UItemSpotSceneComponent_SetSpotProperty_Params params;
	params.CompositionID = CompositionID;
	params.GroupType = GroupType;
	params.Generator = Generator;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemSpotSceneComponent.GenerateSpot
// (Native, Public)

void UItemSpotSceneComponent::GenerateSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.GenerateSpot");

	UItemSpotSceneComponent_GenerateSpot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.ItemSpotSceneComponent.GenerateItems
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<struct FItemGenerateSpawnClass> AllItemClass                   (Parm, OutParm, ZeroConstructor)

void UItemSpotSceneComponent::GenerateItems(TArray<struct FItemGenerateSpawnClass>* AllItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.GenerateItems");

	UItemSpotSceneComponent_GenerateItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllItemClass != nullptr)
		*AllItemClass = params.AllItemClass;
}


// Function Gameplay.TestAttrModifyActor.TestGetVariable
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATestAttrModifyActor::TestGetVariable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.TestAttrModifyActor.TestGetVariable");

	ATestAttrModifyActor_TestGetVariable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.TestAttrModifyActor.SetModify
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void ATestAttrModifyActor::SetModify(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.TestAttrModifyActor.SetModify");

	ATestAttrModifyActor_SetModify_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.TestAttrModifyActor.GetAttrValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            I                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          F                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATestAttrModifyActor::GetAttrValue(int* I, float* F)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.TestAttrModifyActor.GetAttrValue");

	ATestAttrModifyActor_GetAttrValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (I != nullptr)
		*I = params.I;
	if (F != nullptr)
		*F = params.F;
}


// Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinished
// (Final, Native, Public)
// Parameters:
// struct FAsyncLoadCharAnimParams LoadingParam                   (Parm)

void UUAECharacterAnimListComponent::OnAsyncLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinished");

	UUAECharacterAnimListComponent_OnAsyncLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<ECharacterJumpType> JumpType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPlayerAnimData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPlayerAnimData> UUAECharacterAnimListComponent::GetCharacterJumpAnim(TEnumAsByte<ECharacterJumpType> JumpType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim");

	UUAECharacterAnimListComponent_GetCharacterJumpAnim_Params params;
	params.JumpType = JumpType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAECharacterAnimListComponent.GetCharacterAnim
// (Final, Native, Public, Const)
// Parameters:
// ECharacterAnimType             AnimType                       (Parm, ZeroConstructor, IsPlainOldData)
// ECharacterPoseType             PoseType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UUAECharacterAnimListComponent::GetCharacterAnim(ECharacterAnimType AnimType, ECharacterPoseType PoseType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetCharacterAnim");

	UUAECharacterAnimListComponent_GetCharacterAnim_Params params;
	params.AnimType = AnimType;
	params.PoseType = PoseType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEProjectile.SetRotationAndLocationByNormal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AUAEProjectile::SetRotationAndLocationByNormal(class USceneComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.SetRotationAndLocationByNormal");

	AUAEProjectile_SetRotationAndLocationByNormal_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.ServerFireWeapon
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FAttackId               AttackId                       (ConstParm, Parm, ReferenceParm)

void AUAEProjectile::ServerFireWeapon(const struct FAttackId& AttackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.ServerFireWeapon");

	AUAEProjectile_ServerFireWeapon_Params params;
	params.AttackId = AttackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.SendFireWeapon
// (Final, Native, Public, BlueprintCallable)

void AUAEProjectile::SendFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.SendFireWeapon");

	AUAEProjectile_SendFireWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp
// (Final, Native, Public)

void AUAEProjectile::OnRep_IsServerAlreadyExplodedCpp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp");

	AUAEProjectile_OnRep_IsServerAlreadyExplodedCpp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify
// (Native, Event, Public, BlueprintEvent)

void AUAEProjectile::IsServerAlreadyExplodedCppNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify");

	AUAEProjectile_IsServerAlreadyExplodedCppNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEProjectile.IsOwnerAutomous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAEProjectile::IsOwnerAutomous()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.IsOwnerAutomous");

	AUAEProjectile_IsOwnerAutomous_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.UAEProjectile.GlassDetect
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AUAEProjectile::GlassDetect(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.GlassDetect");

	AUAEProjectile_GlassDetect_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.NotifyServerBroken
// (Event, Protected, BlueprintEvent)

void UUAEWindowComponent::NotifyServerBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.NotifyServerBroken");

	UUAEWindowComponent_NotifyServerBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated
// (Final, Native, Protected)
// Parameters:
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::NotifyRepDataUpdated(bool bInitial, bool bLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated");

	UUAEWindowComponent_NotifyRepDataUpdated_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::LocalHandleWindowBrokenBP(bool bInitial, bool bLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP");

	UUAEWindowComponent_LocalHandleWindowBrokenBP_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::LocalHandleWindowBroken(bool bInitial, bool bLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken");

	UUAEWindowComponent_LocalHandleWindowBroken_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.HandleBroken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEWindowComponent::HandleBroken(class APlayerController* Instigator, bool bLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.HandleBroken");

	UUAEWindowComponent_HandleBroken_Params params;
	params.Instigator = Instigator;
	params.bLocal = bLocal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.UAEWindowComponent.GetRepData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUAEWindowRepData       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUAEWindowRepData UUAEWindowComponent::GetRepData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.GetRepData");

	UUAEWindowComponent_GetRepData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleConfigActorComponent.LoadActorClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UVehicleConfigActorComponent::LoadActorClass(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleConfigActorComponent.LoadActorClass");

	UVehicleConfigActorComponent_LoadActorClass_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas
// (Final, Native, Protected)

void UVehicleGeneratorComponent::WriteVehicleSpotStatisticsDatas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas");

	UVehicleGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas
// (Final, Native, Protected)

void UVehicleGeneratorComponent::WriteVehicleClassStatisticsDatas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas");

	UVehicleGeneratorComponent_WriteVehicleClassStatisticsDatas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas
// (Final, Native, Protected, BlueprintCallable)

void UVehicleGeneratorComponent::WriteAllVehicleStatisticsDatas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas");

	UVehicleGeneratorComponent_WriteAllVehicleStatisticsDatas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVehicleGenerateSpawnData Data                           (Parm)

void UVehicleGeneratorComponent::RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData");

	UVehicleGeneratorComponent_RegisterVehicleGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGroupSpotSceneComponent* GroupSpotComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVehicleGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent");

	UVehicleGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)
// struct FVehicleSpotComponentArray Spots                          (Parm, OutParm)

void UVehicleGeneratorComponent::RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType");

	UVehicleGeneratorComponent_RandomSpotsByType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
	if (Spots != nullptr)
		*Spots = params.Spots;
}


// Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UVehicleSpotSceneComponent*> AllSpots                       (Parm, OutParm, ZeroConstructor)
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)

void UVehicleGeneratorComponent::RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots");

	UVehicleGeneratorComponent_RandomSingleSpots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
	if (Property != nullptr)
		*Property = params.Property;
}


// Function Gameplay.VehicleGeneratorComponent.RandomGroups
// (Native, Public, BlueprintCallable)

void UVehicleGeneratorComponent::RandomGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomGroups");

	UVehicleGeneratorComponent_RandomGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable
// (Native, Event, Public, BlueprintEvent)

void UVehicleGeneratorComponent::LoadVehicleGenerateTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable");

	UVehicleGeneratorComponent_LoadVehicleGenerateTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass
// (Final, Native, Public)
// Parameters:
// struct FString                 Category                       (Parm, ZeroConstructor)
// struct FVehicleGenerateSpawnData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleGenerateSpawnData UVehicleGeneratorComponent::GetRandomVehicleClass(const struct FString& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass");

	UVehicleGeneratorComponent_GetRandomVehicleClass_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick
// (Native, Protected)

void UVehicleGeneratorComponent::GenerateSpotOnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick");

	UVehicleGeneratorComponent_GenerateSpotOnTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.DeleteGroups
// (Final, Native, Protected)

void UVehicleGeneratorComponent::DeleteGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.DeleteGroups");

	UVehicleGeneratorComponent_DeleteGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<ESpotType>         SpotType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, ZeroConstructor)
// float                          LocationX                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationZ                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleGeneratorComponent::AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount");

	UVehicleGeneratorComponent_AddVehicleSpotCount_Params params;
	params.SpotType = SpotType;
	params.Path = Path;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount
// (Final, Native, Protected)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleGeneratorComponent::AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount");

	UVehicleGeneratorComponent_AddVehicleClassCount_Params params;
	params.Path = Path;
	params.IsValid = IsValid;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleSpotSceneComponent.SetSpotProperty
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FVehicleSpotProperty    Property                       (Parm, OutParm)
// class UVehicleGeneratorComponent* Generator                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVehicleSpotSceneComponent::SetSpotProperty(class UVehicleGeneratorComponent* Generator, struct FVehicleSpotProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotSceneComponent.SetSpotProperty");

	UVehicleSpotSceneComponent_SetSpotProperty_Params params;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
}


// Function Gameplay.VehicleSpotSceneComponent.GenerateVehicles
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FVehicleGenerateSpawnData Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UVehicleSpotSceneComponent::GenerateVehicles(const struct FVehicleGenerateSpawnData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotSceneComponent.GenerateVehicles");

	UVehicleSpotSceneComponent_GenerateVehicles_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.VehicleSpotSceneComponent.GenerateSpot
// (Native, Public)

void UVehicleSpotSceneComponent::GenerateSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotSceneComponent.GenerateSpot");

	UVehicleSpotSceneComponent_GenerateSpot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.UnloadStreamLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LevelName                      (Parm, ZeroConstructor)

void UWeatherConfigComponent::UnloadStreamLevel(const struct FString& LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.UnloadStreamLevel");

	UWeatherConfigComponent_UnloadStreamLevel_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.SyncWeatherLevelInfo
// (Final, Native, Protected, BlueprintCallable)

void UWeatherConfigComponent::SyncWeatherLevelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.SyncWeatherLevelInfo");

	UWeatherConfigComponent_SyncWeatherLevelInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.OnRep_WeatherSyncCount
// (Final, Native, Public)

void UWeatherConfigComponent::OnRep_WeatherSyncCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.OnRep_WeatherSyncCount");

	UWeatherConfigComponent_OnRep_WeatherSyncCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.LoadWeatherLevel
// (Final, Native, Public)

void UWeatherConfigComponent::LoadWeatherLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.LoadWeatherLevel");

	UWeatherConfigComponent_LoadWeatherLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.LoadStreamLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LevelName                      (Parm, ZeroConstructor)

void UWeatherConfigComponent::LoadStreamLevel(const struct FString& LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.LoadStreamLevel");

	UWeatherConfigComponent_LoadStreamLevel_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gameplay.WeatherConfigComponent.Init
// (Native, Public, BlueprintCallable)

void UWeatherConfigComponent::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gameplay.WeatherConfigComponent.Init");

	UWeatherConfigComponent_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
