
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

// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ToggleInGameMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LitePCLobbyPC_C::ToggleInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ToggleInGameMenu");

	ABP_LitePCLobbyPC_C_ToggleInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.NewFunction_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          NewParam                       (Parm, OutParm, ZeroConstructor)

void ABP_LitePCLobbyPC_C::NewFunction_1(TArray<class AActor*>* Array, TArray<class AActor*>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.NewFunction_1");

	ABP_LitePCLobbyPC_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ModifyCharacterCostume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerLobbyPawn_C*   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_SpawnPlayerData CostumeData                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LitePCLobbyPC_C::ModifyCharacterCostume(class ABP_PlayerLobbyPawn_C* Character, const struct FBP_STRUCT_SpawnPlayerData& CostumeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ModifyCharacterCostume");

	ABP_LitePCLobbyPC_C_ModifyCharacterCostume_Params params;
	params.Character = Character;
	params.CostumeData = CostumeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.SpawnPlayerCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_SpawnPlayerData PlayerCostumeData              (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PlayerLobbyPawn_C*   OutPlayerCharacter             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyPC_C::SpawnPlayerCharacter(const struct FBP_STRUCT_SpawnPlayerData& PlayerCostumeData, class AActor* Slot, class ABP_PlayerLobbyPawn_C** OutPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.SpawnPlayerCharacter");

	ABP_LitePCLobbyPC_C_SpawnPlayerCharacter_Params params;
	params.PlayerCostumeData = PlayerCostumeData;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayerCharacter != nullptr)
		*OutPlayerCharacter = params.OutPlayerCharacter;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LitePCLobbyPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.UserConstructionScript");

	ABP_LitePCLobbyPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LitePCLobbyPC_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_12");

	ABP_LitePCLobbyPC_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LitePCLobbyPC_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_11");

	ABP_LitePCLobbyPC_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LitePCLobbyPC_C::InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_10");

	ABP_LitePCLobbyPC_C_InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LitePCLobbyPC_C::InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_9");

	ABP_LitePCLobbyPC_C_InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LitePCLobbyPC_C::InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_8");

	ABP_LitePCLobbyPC_C_InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LitePCLobbyPC_C::InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_7");

	ABP_LitePCLobbyPC_C_InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LitePCLobbyPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ReceiveBeginPlay");

	ABP_LitePCLobbyPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ExecuteUbergraph_BP_LitePCLobbyPC
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LitePCLobbyPC_C::ExecuteUbergraph_BP_LitePCLobbyPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LItePCLobbyPC.BP_LitePCLobbyPC_C.ExecuteUbergraph_BP_LitePCLobbyPC");

	ABP_LitePCLobbyPC_C_ExecuteUbergraph_BP_LitePCLobbyPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
