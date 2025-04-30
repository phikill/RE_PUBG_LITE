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

// BlueprintGeneratedClass BP_LItePCLobbyPC.BP_LitePCLobbyPC_C
// 0x0010 (0x0858 - 0x0848)
class ABP_LitePCLobbyPC_C : public AUAEPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0848(0x0008) (Transient, DuplicateTransient)
	class UGVoiceInterface*                            GVoice;                                                   // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LItePCLobbyPC.BP_LitePCLobbyPC_C");
		return ptr;
	}


	void ToggleInGameMenu();
	void NewFunction_1(TArray<class AActor*>* Array, TArray<class AActor*>* NewParam);
	void ModifyCharacterCostume(class ABP_PlayerLobbyPawn_C* Character, const struct FBP_STRUCT_SpawnPlayerData& CostumeData);
	void SpawnPlayerCharacter(const struct FBP_STRUCT_SpawnPlayerData& PlayerCostumeData, class AActor* Slot, class ABP_PlayerLobbyPawn_C** OutPlayerCharacter);
	void UserConstructionScript();
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_7(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LitePCLobbyPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
