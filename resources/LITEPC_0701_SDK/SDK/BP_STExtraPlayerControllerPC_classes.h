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

// BlueprintGeneratedClass BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C
// 0x001E (0x2086 - 0x2068)
class ABP_STExtraPlayerControllerPC_C : public ABP_STExtraPlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2068(0x0008) (Transient, DuplicateTransient)
	class UInteractionComponent*                       Interaction;                                              // 0x2070(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               inventoryOpened;                                          // 0x2078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               inGameMenuOpened;                                         // 0x2079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPressedCtrl;                                            // 0x207A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MapOpened;                                                // 0x207B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      voiceMode;                                                // 0x207C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowPopup;                                               // 0x207D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x207E(0x0002) MISSED OFFSET
	int                                                SelectedEmoteIndex;                                       // 0x2080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEmoteOpened;                                            // 0x2084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               keyHintOpened;                                            // 0x2085(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_STExtraPlayerControllerPC.BP_STExtraPlayerControllerPC_C");
		return ptr;
	}


	void OpenCloseEmote(bool SetOpen);
	void SetShowPopup(bool ShowPopup);
	void ToggleInGameMenu();
	void PlayerCharacterStopFire();
	void ReleaseScope();
	void ChangeVehicleSeat(int InSeatIndex);
	void ExitVehicle();
	void EnterVehicle();
	void GetVehicleUser(class UBP_VehicleUser_C** VehicleUser);
	void HideInventory();
	void ToggleMap();
	void ToggleInventory();
	void DisableCharacterAutoSprint();
	void UserConstructionScript();
	void InpActEvt_ToggleInventory_K2Node_InputActionEvent_66(const struct FKey& Key);
	void InpActEvt_ToggleMap_K2Node_InputActionEvent_65(const struct FKey& Key);
	void InpActEvt_ToVehicleSeat_1_K2Node_InputActionEvent_64(const struct FKey& Key);
	void InpActEvt_ToVehicleSeat_2_K2Node_InputActionEvent_63(const struct FKey& Key);
	void InpActEvt_ToVehicleSeat_3_K2Node_InputActionEvent_62(const struct FKey& Key);
	void InpActEvt_ToVehicleSeat_4_K2Node_InputActionEvent_61(const struct FKey& Key);
	void InpActEvt_ToVehicleSeat_5_K2Node_InputActionEvent_60(const struct FKey& Key);
	void InpActEvt_ToVehicleSeat_6_K2Node_InputActionEvent_59(const struct FKey& Key);
	void InpActEvt_ToVehicleSeat_7_K2Node_InputActionEvent_58(const struct FKey& Key);
	void InpActEvt_ToVehicleSeat_8_K2Node_InputActionEvent_57(const struct FKey& Key);
	void InpActEvt_ToVehicleSeat_9_K2Node_InputActionEvent_56(const struct FKey& Key);
	void InpActEvt_TestGoFightingState_K2Node_InputActionEvent_55(const struct FKey& Key);
	void InpActEvt_ToggleInGameMenu_K2Node_InputActionEvent_54(const struct FKey& Key);
	void InpActEvt_TestGoNextState_K2Node_InputActionEvent_53(const struct FKey& Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_52(const struct FKey& Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_51(const struct FKey& Key);
	void InpActEvt_SwitchVoiceChannel_K2Node_InputActionEvent_50(const struct FKey& Key);
	void InpActEvt_ToggleMuteVoiceChat_K2Node_InputActionEvent_49(const struct FKey& Key);
	void InpActEvt_ToggleMuteMasterVolume_K2Node_InputActionEvent_48(const struct FKey& Key);
	void InpActEvt_ToggleUI_K2Node_InputActionEvent_47(const struct FKey& Key);
	void InpActEvt_DeleteMyMarker_K2Node_InputActionEvent_46(const struct FKey& Key);
	void InpActEvt_SetMapMarkerAtCurrentPosition_K2Node_InputActionEvent_45(const struct FKey& Key);
	void InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_44(const struct FKey& Key);
	void InpActEvt_ToggleEmoteWheel_K2Node_InputActionEvent_43(const struct FKey& Key);
	void InpActEvt_ToggleExtendedMinimap_K2Node_InputActionEvent_42(const struct FKey& Key);
	void InpActEvt_UseFirstAid_K2Node_InputActionEvent_41(const struct FKey& Key);
	void InpActEvt_UseMedKit_K2Node_InputActionEvent_40(const struct FKey& Key);
	void InpActEvt_UseBandage_K2Node_InputActionEvent_39(const struct FKey& Key);
	void InpActEvt_UseBoostItem_K2Node_InputActionEvent_38(const struct FKey& Key);
	void InpActEvt_UseHealItem_K2Node_InputActionEvent_37(const struct FKey& Key);
	void InpActEvt_UseAdrenaline_K2Node_InputActionEvent_36(const struct FKey& Key);
	void InpActEvt_UsePainkiller_K2Node_InputActionEvent_35(const struct FKey& Key);
	void InpActEvt_UseEnergyDrink_K2Node_InputActionEvent_34(const struct FKey& Key);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_14(float AxisValue);
	void ReceiveBeginPlay();
	void ToggleInventoryEx();
	void ExecuteUbergraph_BP_STExtraPlayerControllerPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
