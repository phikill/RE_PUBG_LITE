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

// BlueprintGeneratedClass BP_STExtraPlayerController.BP_STExtraPlayerController_C
// 0x02B8 (0x2068 - 0x1DB0)
class ABP_STExtraPlayerController_C : public ASTExtraPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1DB0(0x0008) (Transient, DuplicateTransient)
	class UGuideComponent_BP_C*                        GuideComponent_BP;                                        // 0x1DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_ServerSwitcher_C*                        BP_ServerSwitcher;                                        // 0x1DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTExtraUnderWaterEffectComp*                STExtraUnderWaterEffectComp;                              // 0x1DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChatComponent_BP_C*                         ChatComponent_BP;                                         // 0x1DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_CommonBtn_C*                             BP_CommonBtn;                                             // 0x1DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_GameEventListener_C*                     BP_GameEventListener;                                     // 0x1DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_VehicleUser_C*                           BP_VehicleUser;                                           // 0x1DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrayToOne_Alpha_7DE4452444DF4112B2469DBCAE9CD7B1;         // 0x1DF0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GrayToOne__Direction_7DE4452444DF4112B2469DBCAE9CD7B1;    // 0x1DF4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1DF5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GrayToOne;                                                // 0x1DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrayToZero_Alpha_AEAD84AB4721658A84A855B8F2969A97;        // 0x1E00(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GrayToZero__Direction_AEAD84AB4721658A84A855B8F2969A97;   // 0x1E04(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1E05(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GrayToZero;                                               // 0x1E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          MainPostProcessVolume;                                    // 0x1E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPlayerCameraMode>                     LastCameraMode;                                           // 0x1E18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1E19(0x0007) MISSED OFFSET
	class APawn*                                       PrePlayerPawn;                                            // 0x1E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInItemGenerator;                                         // 0x1E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1E29(0x0003) MISSED OFFSET
	float                                              InItemGeneratorUIRefreshTime;                             // 0x1E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurInItemGeneratorUIRefreshTime;                          // 0x1E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1E34(0x0004) MISSED OFFSET
	class UObject*                                     WaitingUI;                                                // 0x1E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     SimulatePlane;                                            // 0x1E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PlaneStartYaw;                                            // 0x1E48(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1E4C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ReloadingCDStart;                                         // 0x1E50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadingCDEnd;                                           // 0x1E60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               AlreadyAimed;                                             // 0x1E70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x1E71(0x0007) MISSED OFFSET
	class ASTExtraBaseCharacter*                       closedAimTarget_1;                                        // 0x1E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ASTExtraBaseCharacter*>               CurAimTargets;                                            // 0x1E80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              CloseDistance;                                            // 0x1E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       AutoAimDrawType;                                          // 0x1E94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1E95(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    AirborneLanded;                                           // 0x1E98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              MotionRate_Yaw;                                           // 0x1EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionRate_Pitch;                                         // 0x1EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionAimRate_Pitch;                                      // 0x1EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionAimRate_Yaw;                                        // 0x1EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionRate_Pitch_Threshold;                               // 0x1EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionRate_Yaw_Threshold;                                 // 0x1EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionTouchAimRate_Pitch;                                 // 0x1EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionTouchAimRate_Yaw;                                   // 0x1EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionTouchRate_Yaw;                                      // 0x1EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionTouchRate_Pitch;                                    // 0x1ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDefaultIsAutoAimEnabled;                                 // 0x1ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DriveWithForwardAxis;                                     // 0x1ED1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DriveWithRightAxis;                                       // 0x1ED2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInTombBoxGenerator;                                      // 0x1ED3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x1ED4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerEnterWater;                                         // 0x1ED8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerLeaveWater;                                         // 0x1EE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bindWeapon;                                               // 0x1EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLandScapeOrientation;                                    // 0x1EF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x1EFA(0x0002) MISSED OFFSET
	float                                              PitchReverce;                                             // 0x1EFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Left;                                                     // 0x1F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Right;                                                    // 0x1F04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTime;                                                 // 0x1F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1F0C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             MotionDataStack;                                          // 0x1F10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     CurMotionData;                                            // 0x1F20(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x1F2C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    BindEventToBackpackComponent;                             // 0x1F30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    VaultFailDS;                                              // 0x1F40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<struct FString, struct FUIAdaptationStructure> AdaptationDict;                                           // 0x1F50(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FUIAdaptationStructure                      CurDeviceAdaptationOffset;                                // 0x1FA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FUIAdaptationStructure                      CurDeviceAdaptationData;                                  // 0x1FC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsJoyStickShow;                                          // 0x1FE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInitSensibility;                                       // 0x1FE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _3DTouchSwitcher;                                         // 0x1FE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x5];                                       // 0x1FE3(0x0005) MISSED OFFSET
	struct FString                                     ActiveDevicProfileName;                                   // 0x1FE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               adaption;                                                 // 0x1FF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               initAdaptation;                                           // 0x1FF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJoystickTriggerSprint;                                  // 0x1FFA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x1FFB(0x0001) MISSED OFFSET
	float                                              UITouchMoveX;                                             // 0x1FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UITouchMoveY;                                             // 0x2000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PressFireFingerIndex;                                     // 0x2004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowFireBtn;                                            // 0x2008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsThrowGrenade;                                           // 0x2009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x200A(0x0002) MISSED OFFSET
	int                                                VoiceMemberID;                                            // 0x200C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VoiceMemberStatus;                                        // 0x2010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESurviveWeaponPropSlot                             AttachmentAttachSlot;                                     // 0x2014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x2015(0x0003) MISSED OFFSET
	struct FItemDefineID                               AttachmentDefineID;                                       // 0x2018(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   AutoSprintBtnTouchPos;                                    // 0x2030(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAutoSprintBtnVisible;                                   // 0x2038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFingerInsideAutoSprintBtn;                              // 0x2039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBindJoystickSprint;                                     // 0x203A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESurviveWeaponPropSlot                             UnequipWeaponType;                                        // 0x203B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowInputControl;                                       // 0x203C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x203D(0x0003) MISSED OFFSET
	struct FVector2D                                   AutoNavigateTranslation;                                  // 0x2040(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMainControlPanelTochButton_C*               InputControlPanel;                                        // 0x2048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUAEDataTable*                               EmoteBPTable;                                             // 0x2050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APickUpWrapperActor*                         Target;                                                   // 0x2058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APickUpWrapperActor*                         oldTarget;                                                // 0x2060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_STExtraPlayerController.BP_STExtraPlayerController_C");
		return ptr;
	}


	void IsAtaptation(bool* adaptation);
	void ReadAdaptationTable();
	void InitWeather();
	void SetMotionParam();
	void GetStickLeftSize(struct FVector2D* Size);
	void ShowFightingUI();
	void ShowAutoSprintBtn(bool visible, const struct FVector2D& showPos_, bool inside);
	void ReadConfigCrossHairColor(int NewParam);
	void ReadConfigMotionControl(int NewParam);
	void ReadConfigAutoAim(bool NewParam);
	void ReadConfigFromHUD();
	void MakeFireModeEffect();
	void DebugNotDrawGuideLine();
	void ShowBackpackTombBox(bool Show);
	void BindOrUnBindJoyStickSprint(bool IsBind);
	void CreateRank(int Kills, int Rank);
	void DisableAimIfUnEquipWeapon(ESurviveWeaponPropSlot WeaponType);
	void SwitchAimMode();
	void DoInitUI();
	void HandleJumpBtnPressEvent();
	void HandleStartBattle(int PlayerNum);
	void OnRep_bInCar();
	void RefreshUI(float DeltaTime);
	void UpdateInputPanel();
	void ShowBackpackIconSplash(bool bShow);
	void RefreshWeaponPanel();
	void SetTouchInputEnabled(bool bEnabled);
	void ShowMainInputControl(bool bShow);
	void ShowTouchInterface(bool bShow);
	void EnableDeathGray(float BlendWeight);
	void SetDeathGrayLerpValue(float Lerp);
	void SetPostProcessVolume();
	void UserConstructionScript();
	void GrayToOne__FinishedFunc();
	void GrayToOne__UpdateFunc();
	void GrayToZero__FinishedFunc();
	void GrayToZero__UpdateFunc();
	void ReceiveBeginPlay();
	void OnSpectatorCameraChange(bool* bDie);
	void OnStopFireEventHandle();
	void OnSwitchCameraSatrtHandle(TEnumAsByte<EPlayerCameraMode> CameraMode);
	void OnPlayerPutDownActorHandle(class ASTExtraBaseCharacter* TargetPlayer, class AActor* TargetActor);
	void OnSwitchWeaponHandle();
	void ReceiveTick(float* DeltaSeconds);
	void OnUseInventoryitemHandle();
	void ServerStartBattle();
	void ClientPreStartBattle(int PlayerNum);
	void ServerAfterLand();
	void ClientAfterLand();
	void RefreshTopMostUIPanel(TEnumAsByte<ETopMostUIPanelType>* Type);
	void GameStart();
	void RemoveWeaponAim(ESurviveWeaponPropSlot Slot);
	void SetMoveableAirborne(bool NewParam);
	void OnLandOnGroundAfterJumpPlaneEnd();
	void JoystickTriggerSprint(bool* bIsSprint);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
	void OnPlane();
	void OffPlane();
	void OpenPara();
	void Land();
	void SetPanels(TArray<class UUAEUserWidget*>* panels);
	void InitOprate();
	void OnFiremodeChange(int IntValue);
	void DoUITouchMove(struct FVector* Loc);
	void PressFire(int* FingerIndex);
	void ShowFireBtn(bool* bShow);
	void PressGrenade(bool* isThrow);
	void InitJoyStickAfterActivation();
	void MemberVoice(int* member, int* status);
	void ReceiveClientRestart();
	void OnWeaponEquipAttachment(ESurviveWeaponPropSlot* WeaponPropSlot, struct FItemDefineID* DefineID, bool* bEquip);
	void ResetMissingUIUpdate();
	void MotionControliOS(const struct FVector& AxisValue);
	void InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1(const struct FVector& AxisValue);
	void MotionControlAndroidTick();
	void MotionControlAndroid(const struct FVector& AxisValue);
	void ReceiveBackpackComponent();
	void InitWallFeedBack();
	void InitNewbieComponent(TArray<int>* FinishedGuide, TArray<int>* FinishedCounts, int* PlayerLevel, int* PlayerExperienceType);
	void DebugOpenGuide();
	void BP_OceanSideDetected(struct FVector* OceansideLocation, bool* bDetectedRiver);
	void CallShowTouchInterface(bool* InShow);
	void BindEvent_ItemOutline(const struct FSearchedPickUpItemResult& InteractableItem);
	void ExecuteUbergraph_BP_STExtraPlayerController(int EntryPoint);
	void VaultFailDS__DelegateSignature();
	void BindEventToBackpackComponent__DelegateSignature();
	void PlayerLeaveWater__DelegateSignature(bool HideLung);
	void PlayerEnterWater__DelegateSignature();
	void AirborneLanded__DelegateSignature();
	void ReloadingCDEnd__DelegateSignature();
	void ReloadingCDStart__DelegateSignature(float CD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
