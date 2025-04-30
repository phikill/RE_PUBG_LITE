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

// WidgetBlueprintGeneratedClass MainControlPanelTochButton.MainControlPanelTochButton_C
// 0x0120 (0x03D0 - 0x02B0)
class UMainControlPanelTochButton_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                BaseLayer;                                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBasicSkillsMenu_BP_C*                       BasicSkillsMenu_BP;                                       // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_KeyboardAndMouseHintWidget_C*            BP_KeyboardAndMouseHintWidget;                            // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                CanvasPanel_IPX;                                          // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UInGameMenuWidget_C*                         InGameMenuWidget;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMainControlBaseUI_C*                        MainControlBaseUI;                                        // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UParachutingControl_C*                       ParachutingControl;                                       // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                ParachutingLayer;                                         // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                ShootingLayer;                                            // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UShootingUIPanel_C*                          ShootingUIPanel;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                VehicleControlLayer;                                      // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVehileControlPanel_C*                       VehileControlPanel;                                       // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                                     MarkerPosition;                                           // 0x0318(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                PoseStateOffset;                                          // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlateVisibility                                   InterActionCar;                                           // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlateVisibility                                   InterActionShoot;                                         // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlateVisibility                                   MarkerShow;                                               // 0x032A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlateVisibility                                   InterActionAirborne;                                      // 0x032B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class ASTExtraPlayerController*                    Controller;                                               // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EOperation>                            OperationState;                                           // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    SetCustomUIPosition;                                      // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<struct FString, struct FUIAdaptationStructure> AdaptationDict;                                           // 0x0350(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FUIAdaptationStructure                      CurDeviceAdaptationData;                                  // 0x03A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsSettingAssistant;                                       // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAssistantTransparent;                                   // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03C2(0x0006) MISSED OFFSET
	struct FTimerHandle                                TeamMemberUITimerHandle;                                  // 0x03C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainControlPanelTochButton.MainControlPanelTochButton_C");
		return ptr;
	}


	void IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDataSize, bool* IsValid);
	void UIMSG_UseEnergyDrinkItem();
	void UIMSG_UsePainkillertItem();
	void UIMSG_UseAdrenalineItem();
	void UIMSG_UseHealItem();
	void UseItem(int ItemDefineID, bool* Result);
	void UIMSG_UseBoostItem();
	void UIMSG_UseBandage();
	void UIMSG_UseFirstAid();
	void UIMSG_UseMedKit();
	void UIMsg_ShowHideKeyHintWidget();
	void UIMsg_MoveToSelfPosition();
	void UIMsg_SetMarkerAtCurrentPosition();
	void UIMsg_DeleteMyMarker();
	void UIMsg_ToggleUI();
	void UIMsg_SetVoiceMute();
	void UIMsg_SetMasterSoundMute();
	void UIMsg_SetChangeVoiceChannel();
	void ShowTeamUI(int TeamNumber);
	void UIMsg_RespawnSetUI();
	void NotHideUIAfterDead(bool* IsHide);
	void UIMsg_WarModeRespawnShowUI();
	void InitSpecialUI();
	void LeaveSpectatingStatus();
	void SwitchCameraModeScope_Aim();
	void UIMsg_TakeDamageUpdateEquipmentDurability();
	void UIMSG_NormalAimBtn();
	void UIMSG_HightLightAimBtn();
	void UIMsg_NormalRightFire();
	void UIMsg_NormalLeftFire();
	void FingWidget(class UWidget* Widget, int Data, class UWidget** foundW, bool* Found);
	void UIMsg_GuideByStep();
	void UIMsg_HideOBAirDropBox();
	void UIMsg_ShowOBAirDropBox();
	void UIMsg_EnterTrainingMode();
	void UIMsg_FPPModeChange();
	void UIMsg_InitUIGuide();
	void ShowBattleUI();
	void UIMsg_SetGuideFromGuideComponent();
	void UIMsg_VehicleStopPlayerAutoSprint();
	void UIMsg_VehiclePanelHide();
	void UIMsg_VehicleSeatChanged();
	void UIMsg_VehicleInputAxisMoveRight();
	void UIMsg_VehicleUpdateSpped();
	void UIMsg_VehicleUpdateSeatUI();
	void UIMsg_VehicleMotorcycleContactChanged();
	void UIMsg_VehicleWheelsHPChanged();
	void UIMsg_VehicleFuelChanged();
	void UIMsg_VehicleHPChanged();
	void UIMsg_AddOneMsgtoUIInner();
	void UIMsg_NotifyFriendReply();
	void UIMsg_NotifyFriendInvite();
	void UIMsg_AddFriendChat();
	void UIMsg_CloseChatHistoryList();
	void UIMsg_UpdateStandCrouchAndSprint();
	void UIMsg_MakeFireModeEffect();
	void UIMsg_SetAutoNavigateTranslation();
	void HideSelf();
	void UIMsg_NotifyPickup();
	void UIMsg_UpdatePickUpList();
	void UIMsg_SwitchAimMode();
	void UIMsg_DisableAimIfUnEquipWeapon();
	void UIMsg_BindOrUnBindJoyStickSprint();
	void UIMsg_ShowBackpackTombBox();
	void UIMsg_ShowAutoSprintIcon();
	void UIMsg_WeaponEquipAttachment();
	void UIMsg_MemberVoice();
	void UIMsg_PlayerControllerPressGrenade();
	void HideFireBtn();
	void UIMsg_PlayerControllerPressFire();
	void UIMsg_SwitchCameraSatrtHandle();
	void UIMsg_DoUITouchMove();
	void UIMsg_OnPlaneUpdatePickUpList();
	void UIMsg_JoyStickTriggerSprint();
	void UIMsg_HideJoinGameUI();
	void UIMsg_ReleaseFireBtn();
	void UIMsg_ScopeChanged();
	void EnterObserverStatus();
	void UIMSG_PlayerControllerStateChange();
	void ReceiveParachuteFollowRequst();
	void ReadyToSendFinishedGuideToServer();
	void NewBieGuide_FinishedCurGuide();
	void HandlNewbieGuideUpdate(int guideID, bool bIsShow);
	void NewbieGuide_HideCurNewbieGuide();
	void NewbieGuide_ShowCurNewbieGuide();
	void ReadyToRetriveBeginnerFinishedGuide();
	void GameAssistantShowUI();
	void ApplyUserSettingInfo();
	void ResetCustomUIForAssistant(bool IsTransparent);
	void GetUIElementSetting(int* FireMode, class UBP_SAVEGAME_UIElemLayout_C** UIElemSaveGame);
	void GameAssistantHideUI();
	void ReadAdaptationTable();
	void UIElemLayoutApplyCustomSetting();
	void SwitchOperationByPlayerControllerState();
	void ShowSpectatingUI();
	void EnterSpectatingStatus();
	void HideAllUIAfterDeadTipsShow();
	void Reconnect_ResetUIByPlayerControllerState();
	void ApplyCustomUI();
	void MainControlPanel_HideAllUI();
	void IngameUIAdaptation();
	void DebugSetAllUIVisibility(bool IsVisible);
	void ShowDriveUI();
	void OperatingRules2();
	void GetCustomUIPosition(TArray<struct FDragableBtnPositionDataStruct>* Custom);
	void SwitchOperationUI();
	void ShowShooterUI();
	void ShowFreeFallUI();
	void ShowAirborneUI();
	void Construct();
	void ReceivedInitWidget();
	void OnHideUIAfterPlayerDeadDelegate();
	void OnRankChange(int Kills, int Rank);
	void SetCustomizeUIInfo(class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex);
	void OnEnterSpectatinStatus();
	void SetSettingControlUI();
	void ChangeFireMode(int IntValue);
	void ResetUIStateAfterRespawn();
	void UpdateTeamMemberUI();
	void ApplyCustomUIPosition();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_MainControlPanelTochButton(int EntryPoint);
	void SetCustomUIPosition__DelegateSignature(TArray<struct FDragableBtnPositionDataStruct>* CustomUIPosition);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
