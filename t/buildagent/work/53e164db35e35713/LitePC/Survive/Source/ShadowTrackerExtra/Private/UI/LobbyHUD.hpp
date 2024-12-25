

// Class ShadowTrackerExtra.LobbyHUD
// //Class ShadowTrackerExtra.LobbyHUD
//0x0430 (0x0A40 - 0x0610)
class ALobbyHUD : public ATslBaseHUD
{
public:
	unsigned char                                      bResetRotation : 1;                                       // 0x0610(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0611(0x0003) MISSED OFFSET
	float                                              ResetStartTime;                                           // 0x0614(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class ASTExtraWeapon*                              LobbyWeapon;                                              // 0x0618(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              CurrentWeapon;                                            // 0x0620(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALobbyVehicle*                               LobbyVehicle;                                             // 0x0628(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnShowCurtain;                                            // 0x0630(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHideCurtain;                                            // 0x0640(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0650(0x0008) MISSED OFFSET
	struct FAvatarCostumeData                          TestCostumeData;                                          // 0x0658(0x0030) (Edit)
	struct FScriptMulticastDelegate                    OnRequestSystemMenu;                                      // 0x0688(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0698(0x0010) MISSED OFFSET
	class UCurveFloat*                                 CameraTransitionCurve;                                    // 0x06A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraTransitionElapsedTime;                              // 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsCameraTransitionPlaying : 1;                           // 0x06B4(0x0001) (ZeroConstructor, IsPlainOldData)
	ELobbyCameraStates                                 LastCameraState;                                          // 0x06B5(0x0001) (ZeroConstructor, IsPlainOldData)
	ELobbyCameraStates                                 FromCameraState;                                          // 0x06B6(0x0001) (ZeroConstructor, IsPlainOldData)
	ELobbyCameraStates                                 ToCameraState;                                            // 0x06B7(0x0001) (ZeroConstructor, IsPlainOldData)
	TMap<int, class ACameraActor*>                     LobbyCameras;                                             // 0x06B8(0x0050) (ZeroConstructor)
	struct FName                                       MainMenuStreamingLevelName;                               // 0x0708(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomizationStreamingLevelName;                          // 0x0710(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          CachedLobbyCharacterTransforms;                           // 0x0718(0x0010) (ZeroConstructor)
	unsigned char                                      bIsInCustomizationScene : 1;                              // 0x0728(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	class AActor*                                      ViewModeStudioClass;                                      // 0x0730(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       CameraSocketName;                                         // 0x0738(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ViewModeInterpSpeed;                                      // 0x0740(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	class AViewModeStudio*                             ViewModeStudio;                                           // 0x0748(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ViewModeActor;                                            // 0x0750(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ViewModeActor_Character;                                  // 0x0758(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMeshComponent*                              VIewModeMeshCom;                                          // 0x0760(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	EViewModeCategory                                  LastViewModeCategory;                                     // 0x0768(0x0001) (ZeroConstructor, IsPlainOldData)
	ELobbyCharacterCameraType                          LastLobbyCharacterCameraType;                             // 0x0769(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x076A(0x0006) MISSED OFFSET
	class AActor*                                      CachedViewModePivot;                                      // 0x0770(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    ViewModeCurrentRotation;                                  // 0x0778(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    ViewModeTargetRotation;                                   // 0x0784(0x000C) (Transient, IsPlainOldData)
	float                                              ViewModeCurrentScale;                                     // 0x0790(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ViewModeTargetScale;                                      // 0x0794(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FLightingChannels                           ViewModeLightingChannels;                                 // 0x0798(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0799(0x0003) MISSED OFFSET
	struct FFloatInterval                              ViewModeScaleRange;                                       // 0x079C(0x0008) (Edit, EditConst)
	float                                              MaxRotationValue;                                         // 0x07A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ComputeValue;                                             // 0x07A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsRotationInputReceive : 1;                              // 0x07AC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	TArray<struct FString>                             TeamNickNames;                                            // 0x07B0(0x0010) (ZeroConstructor)
	int                                                HostSlotIndex;                                            // 0x07C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x07C4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FadeInOutCurve;                                           // 0x07C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeInOutEffectElapsedTime;                               // 0x07D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsFadeInOutEffectPlaying : 1;                            // 0x07D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	struct FTimerHandle                                TimerHandle_FadeInOut;                                    // 0x07D8(0x0008)
	float                                              CachedDOFFarBlueSize;                                     // 0x07E0(0x0004) (ZeroConstructor, IsPlainOldData)
	ELobbyBlurChangingStates                           BlurChangingState;                                        // 0x07E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInitCameraTransition : 1;                                // 0x07E5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x07E6(0x0002) MISSED OFFSET
	int                                                RollbackStreamingBoost;                                   // 0x07E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCreateCharacter;                                        // 0x07F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyCharacter;                                       // 0x0800(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHostChanged;                                            // 0x0810(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     StartURL;                                                 // 0x0820(0x0010) (Edit, ZeroConstructor)
	TArray<class UCoherentCommonBinder*>               CommonBinders;                                            // 0x0830(0x0010) (ZeroConstructor, Transient)
	class UAkComponent*                                AkSound;                                                  // 0x0840(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkComponent*                                VoiceAkSound;                                             // 0x0848(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<int, class UAkComponent*>                     VoiceMap;                                                 // 0x0850(0x0050) (ExportObject, ZeroConstructor)
	class ACameraActor*                                MainCamera;                                               // 0x08A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x20];                                      // 0x08A8(0x0020) MISSED OFFSET
	unsigned char                                      UnknownData13[0x28];                                      // 0x08A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty ShadowTrackerExtra.LobbyHUD.LobbyCharacterClass
	TMap<uint32_t, class ALobbyCharacter*>             LobbyCharacters;                                          // 0x08F0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData14[0x50];                                      // 0x0940(0x0050) MISSED OFFSET
	unsigned char                                      bSaveIsGenderMale : 1;                                    // 0x0990(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0991(0x0003) MISSED OFFSET
	struct FViewTargetTransitionParams                 ViewTargetTransitionParams;                               // 0x0994(0x0010) (Edit)
	unsigned char                                      bSaveBlur : 1;                                            // 0x09A4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x09A5(0x0003) MISSED OFFSET
	class ULobbySceneManagerComponent*                 LobbySceneManagerComponent;                               // 0x09A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData17[0x50];                                      // 0x09B0(0x0050) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCameraTransitionSolo;                                   // 0x0A00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCameraTransitionCustomApperance;                        // 0x0A10(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCameraTransitionCustomWardrobe;                         // 0x0A20(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      IsBackpack : 1;                                           // 0x0A30(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0xF];                                       // 0x0A31(0x000F) MISSED OFFSET

	// Function ShadowTrackerExtra.LobbyHUD.UpdateVoiceState
	// (Final, Native, Private, BlueprintCallable)
	void UpdateVoiceState(const struct FString& InUserIDint InVoiceState);// sub_FB1660()

	// Function ShadowTrackerExtra.LobbyHUD.UpdateStatTrak
	// (Final, Exec, Native, Private)
	void UpdateStatTrak(uint32_t Valueint NumKills);// sub_6CB760()

	// Function ShadowTrackerExtra.LobbyHUD.ToggleWindowModeTemporary
	// (Final, Exec, Native, Public)
	void ToggleWindowModeTemporary(unsigned char bNeedRecover);// sub_FB15D0()

	// Function ShadowTrackerExtra.LobbyHUD.Timeout_CheckConectingLobby
	// (Final, Native, Public)
	void Timeout_CheckConectingLobby();// sub_FB15B0()

	// Function ShadowTrackerExtra.LobbyHUD.TickFadeInOutEffect
	// (Final, Native, Private)
	void TickFadeInOutEffect(float DeltaTime);// sub_FB1530()

	// Function ShadowTrackerExtra.LobbyHUD.TickCameraTransition
	// (Final, Native, Private)
	void TickCameraTransition(float DeltaTime);// sub_FB14B0()

	// Function ShadowTrackerExtra.LobbyHUD.TestLobbyCharacterReady
	// (Final, Exec, Native, Private)
	void TestLobbyCharacterReady(uint32_t SlotIndexunsigned char bReady);// sub_FB1210()

	// Function ShadowTrackerExtra.LobbyHUD.TestLobbyCharacterHost
	// (Final, Exec, Native, Private)
	void TestLobbyCharacterHost(uint32_t SlotIndex);// sub_FB1190()

	// Function ShadowTrackerExtra.LobbyHUD.TestLobbyCharacterAddAngle
	// (Final, Exec, Native, Private)
	void TestLobbyCharacterAddAngle(int SlotIndexfloat InYawInDegree);// sub_6DCEA0()

	// Function ShadowTrackerExtra.LobbyHUD.TestLobbyCamera_TeleportTo
	// (Final, Exec, Native, Private)
	void TestLobbyCamera_TeleportTo(int Index);// sub_FB1110()

	// Function ShadowTrackerExtra.LobbyHUD.TestLobbyCamera_StartTransitionTo
	// (Final, Exec, Native, Private)
	void TestLobbyCamera_StartTransitionTo(int ToIndex);// sub_FB1090()

	// Function ShadowTrackerExtra.LobbyHUD.TestLobbyCamera_StartTransitionFromTo
	// (Final, Exec, Native, Private)
	void TestLobbyCamera_StartTransitionFromTo(int FromIndexint ToIndex);// sub_FB0FD0()

	// Function ShadowTrackerExtra.LobbyHUD.TestLobbyCamera_SpawnCharacters
	// (Final, Exec, Native, Private)
	void TestLobbyCamera_SpawnCharacters(int Num);// sub_3168A0()

	// Function ShadowTrackerExtra.LobbyHUD.TestLobbyCamera_Init
	// (Final, Exec, Native, Private)
	void TestLobbyCamera_Init();// sub_FB0FB0()

	// Function ShadowTrackerExtra.LobbyHUD.Test_UpdateLobbyCharacter
	// (Final, Exec, Native, Public)
	void Test_UpdateLobbyCharacter(uint32_t SlotIndex);// sub_3168A0()

	// Function ShadowTrackerExtra.LobbyHUD.Test_RemoveLobbyItem
	// (Final, Exec, Native, Public)
	void Test_RemoveLobbyItem(const struct FString& ItemID);// sub_FB13D0()

	// Function ShadowTrackerExtra.LobbyHUD.Test_RemoveAllLobbyItem
	// (Final, Exec, Native, Public)
	void Test_RemoveAllLobbyItem();// sub_FB13B0()

	// Function ShadowTrackerExtra.LobbyHUD.Test_PrintWeaponItem
	// (Final, Exec, Native, Public)
	void Test_PrintWeaponItem(uint32_t SlotIndex);// sub_3168A0()

	// Function ShadowTrackerExtra.LobbyHUD.Test_PrintSkinItem
	// (Final, Exec, Native, Public)
	void Test_PrintSkinItem(uint32_t SlotIndex);// sub_3168A0()

	// Function ShadowTrackerExtra.LobbyHUD.Test_ForceLodLevel
	// (Final, Exec, Native, Public)
	void Test_ForceLodLevel(int ForceLodLevel);// sub_3168A0()

	// Function ShadowTrackerExtra.LobbyHUD.Test_AddLobbyItem
	// (Final, Exec, Native, Public)
	void Test_AddLobbyItem(const struct FString& ItemID);// sub_FB12D0()

	// Function ShadowTrackerExtra.LobbyHUD.TeleportCameraTo
	// (Final, Native, Public)
	void TeleportCameraTo(ELobbyCameraStates InCameraState);// sub_FB0F30()

	// Function ShadowTrackerExtra.LobbyHUD.StopFadeInOutEffect
	// (Final, Native, Private)
	void StopFadeInOutEffect();// sub_FAF840()

	// Function ShadowTrackerExtra.LobbyHUD.StopCameraTransition
	// (Final, Native, Private)
	void StopCameraTransition();// sub_FB0F10()

	// Function ShadowTrackerExtra.LobbyHUD.StartFadeInOutEffect
	// (Final, Native, Private)
	void StartFadeInOutEffect();// sub_FB0EF0()

	// Function ShadowTrackerExtra.LobbyHUD.StartCameraTransitionTo
	// (Final, Native, Public)
	void StartCameraTransitionTo(ELobbyCameraStates InToCameraState);// sub_FB0E70()

	// Function ShadowTrackerExtra.LobbyHUD.StartCameraTransitionFromTo
	// (Final, Native, Public)
	void StartCameraTransitionFromTo(ELobbyCameraStates InFromCameraStateELobbyCameraStates InToCameraState);// sub_FB0DB0()

	// Function ShadowTrackerExtra.LobbyHUD.SpawnViewModeWeapon
	// (Event, Public, BlueprintEvent)
	void SpawnViewModeWeapon(const struct FString& WeaponIdconst struct FString& SkinItemId);// sub_1B0A820()

	// Function ShadowTrackerExtra.LobbyHUD.SpawnViewModeVehicle
	// (Event, Public, BlueprintEvent)
	void SpawnViewModeVehicle(unsigned char IsViewModeconst struct FString& SkinItemId);// sub_1B0A820()

	// Function ShadowTrackerExtra.LobbyHUD.SpawnViewModeParachute
	// (Event, Public, BlueprintEvent)
	void SpawnViewModeParachute(const struct FString& ParachuteIdconst struct FString& SkinItemId);// sub_1B0A820()

	// Function ShadowTrackerExtra.LobbyHUD.ShowWeaponOrGearViewModeEnum
	// (Final, Native, Public, BlueprintCallable)
	void ShowWeaponOrGearViewModeEnum(const struct FString& SceneNameEViewModeCategory ViewModeCategoryconst struct FString& TargetIdconst struct FString& SkinItemId);// sub_FB0BC0()

	// Function ShadowTrackerExtra.LobbyHUD.ShowWeaponOrGearViewMode
	// (Final, Exec, Native, Public)
	void ShowWeaponOrGearViewMode(const struct FString& SceneNameuint32_t ViewModeCategoryconst struct FString& TargetIdconst struct FString& SkinItemId);// sub_FB09D0()

	// Function ShadowTrackerExtra.LobbyHUD.ShowViewMode
	// (Final, Exec, Native, Public)
	void ShowViewMode(uint32_t ViewModeCategoryconst struct FString& TargetIdconst struct FString& SkinItemId);// sub_FB0830()

	// Function ShadowTrackerExtra.LobbyHUD.ShowSystemMenuWidgetCanvasPanel
	// (Native, Public, BlueprintCallable)
	void ShowSystemMenuWidgetCanvasPanel(unsigned char bShow);// sub_FB07A0()

	// Function ShadowTrackerExtra.LobbyHUD.SetWidgetForBinding
	// (Final, Native, Public, BlueprintCallable)
	void SetWidgetForBinding(int ViewIndexclass UCoherentUIGTWidget* Widget);// sub_FB06E0()

	// Function ShadowTrackerExtra.LobbyHUD.SetViewModeActor
	// (Final, Native, Private, BlueprintCallable)
	void SetViewModeActor(class AActor* Actor);// sub_FB0660()

	// Function ShadowTrackerExtra.LobbyHUD.SetRotationInputReceive
	// (Final, Exec, Native, Public, BlueprintCallable)
	void SetRotationInputReceive(unsigned char bNewIsRotationInputReceive);// sub_FB05D0()

	// Function ShadowTrackerExtra.LobbyHUD.SetPlayedFirstHUD
	// (Final, Native, Static, Protected, BlueprintCallable)
	static void STATIC_SetPlayedFirstHUD();// sub_FB05B0()

	// Function ShadowTrackerExtra.LobbyHUD.SetOverrideCharacterVisibility
	// (Final, Exec, Native, Private)
	void SetOverrideCharacterVisibility(uint32_t SlotIndexunsigned char bShow);// sub_FB04F0()

	// Function ShadowTrackerExtra.LobbyHUD.SetMainCoherentWidgetVisiblity
	// (Final, Native, Public, HasOutParms, BlueprintCallable)
	void SetMainCoherentWidgetVisiblity(ESlateVisibility InVisibility);// sub_FB0460()

	// Function ShadowTrackerExtra.LobbyHUD.SetLocalUserData
	// (Final, Exec, Native, Public)
	void SetLocalUserData(const struct FString& Keyconst struct FString& Value);// sub_FB02F0()

	// Function ShadowTrackerExtra.LobbyHUD.SetLobbyVehicle
	// (Final, Native, Private, BlueprintCallable)
	void SetLobbyVehicle(class ALobbyVehicle* VehicleActor);// sub_FB0270()

	// Function ShadowTrackerExtra.LobbyHUD.SetLobbyCharacterHiddenInGame
	// (Final, Native, Private)
	void SetLobbyCharacterHiddenInGame(uint32_t SlotIndexunsigned char bNewHidden);// sub_FB01B0()

	// Function ShadowTrackerExtra.LobbyHUD.SetLobbyCharacterBlur
	// (Final, Exec, Native, Public)
	void SetLobbyCharacterBlur(unsigned char bBlur);// sub_FB0120()

	// Function ShadowTrackerExtra.LobbyHUD.SetCharacterViewModeCameraEnum
	// (Final, Native, Public, BlueprintCallable)
	void SetCharacterViewModeCameraEnum(ELobbyCharacterCameraType CameraTypeunsigned char bForceUpdate);// sub_FB0050()

	// Function ShadowTrackerExtra.LobbyHUD.SetCharacterViewModeCamera
	// (Final, Exec, Native, Private)
	void SetCharacterViewModeCamera(int CameraTypeunsigned char bForceUpdate);// sub_FAFF90()

	// Function ShadowTrackerExtra.LobbyHUD.ResetViewMode
	// (Final, Exec, Native, Public, BlueprintCallable)
	void ResetViewMode();// sub_FAFF70()

	// Function ShadowTrackerExtra.LobbyHUD.RequestSystemMenu
	// (Final, Native, Public)
	void RequestSystemMenu();// sub_FAFF50()

	// Function ShadowTrackerExtra.LobbyHUD.PlayVoice
	// (Final, Native, Public, BlueprintCallable)
	void PlayVoice(int InActorIDint InVoiceIDint Serial);// sub_FAFE50()

	// Function ShadowTrackerExtra.LobbyHUD.PlayEmoteAnimation
	// (Final, Native, Public, BlueprintCallable)
	void PlayEmoteAnimation(const struct FName& InEmoteName);// sub_FAFDD0()

	// Function ShadowTrackerExtra.LobbyHUD.OnViewModeStudioSpawnCallback
	// (Final, Native, Public)
	void OnViewModeStudioSpawnCallback(class AActor* ViewModeStudio);// sub_445A50()

	// Function ShadowTrackerExtra.LobbyHUD.OnStopRotation
	// (Final, Exec, Native, Public, BlueprintCallable)
	void OnStopRotation();// sub_FAFDB0()

	// Function ShadowTrackerExtra.LobbyHUD.OnStartRotation
	// (Final, Exec, Native, Public, BlueprintCallable)
	void OnStartRotation();// sub_FAFD90()

	// Function ShadowTrackerExtra.LobbyHUD.NotifyUpdateCharacterItemIDs
	// (Final, Native, Public)
	void NotifyUpdateCharacterItemIDs(TArray<int> AvatarArray);// sub_FAFC30()

	// Function ShadowTrackerExtra.LobbyHUD.NotifyPressedEsc
	// (Final, Native, Public, BlueprintCallable)
	void NotifyPressedEsc();// sub_FAFC10()

	// Function ShadowTrackerExtra.LobbyHUD.NotifyLobbySceneChanged
	// (Final, Native, Private)
	void NotifyLobbySceneChanged(unsigned char bIsCustomizationScene);// sub_FAFB80()

	// Function ShadowTrackerExtra.LobbyHUD.NotifyLobbyConnecting
	// (Final, Exec, Native, Public, BlueprintCallable)
	void NotifyLobbyConnecting();// sub_FAFB60()

	// Function ShadowTrackerExtra.LobbyHUD.NotifyLobbyCharacterCreated
	// (Final, Native, Private)
	void NotifyLobbyCharacterCreated(int InSlotIndex);// sub_FAFAE0()

	// Function ShadowTrackerExtra.LobbyHUD.LeaveCustomizationMenu
	// (Final, Native, Private)
	void LeaveCustomizationMenu(ELobbyCameraStates InFromCameraStateELobbyCameraStates InToCameraState);// sub_FAFA20()

	// Function ShadowTrackerExtra.LobbyHUD.IsViewModeScene
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsViewModeScene();// sub_FAF9F0()

	// Function ShadowTrackerExtra.LobbyHUD.IsRotationInputReceive
	// (Final, Exec, Native, Public, BlueprintCallable, BlueprintPure, Const)
	unsigned char IsRotationInputReceive();// sub_FAF9C0()

	// Function ShadowTrackerExtra.LobbyHUD.IsPlayedFirstHUD
	// (Final, Native, Static, Protected, BlueprintCallable)
	static unsigned char STATIC_IsPlayedFirstHUD();// sub_FAF9A0()

	// Function ShadowTrackerExtra.LobbyHUD.IsCameraHasBlurEffect
	// (Final, Native, Private, Const)
	unsigned char IsCameraHasBlurEffect(ELobbyCameraStates InLobbyCameraState);// sub_FAF8B0()

	// Function ShadowTrackerExtra.LobbyHUD.IsAlone
	// (Final, Native, Private, Const)
	unsigned char IsAlone();// sub_FAF880()

	// Function ShadowTrackerExtra.LobbyHUD.InitLobbyTransition
	// (Final, Native, Public)
	void InitLobbyTransition();// sub_FAF860()

	// Function ShadowTrackerExtra.LobbyHUD.InitFadeInOutEffect
	// (Final, Native, Private)
	void InitFadeInOutEffect();// sub_FAF840()

	// Function ShadowTrackerExtra.LobbyHUD.InitCameraTransition
	// (Final, Native, Private)
	void InitCameraTransition();// sub_FAF820()

	// Function ShadowTrackerExtra.LobbyHUD.HideViewMode
	// (Final, Exec, Native, Public)
	void HideViewMode();// sub_FAF800()

	// Function ShadowTrackerExtra.LobbyHUD.HideCharacterPreview
	// (Final, Exec, Native, Public)
	void HideCharacterPreview();// sub_FAF7E0()

	// Function ShadowTrackerExtra.LobbyHUD.GetViewModeCategory
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	EViewModeCategory GetViewModeCategory();// sub_FAF7B0()

	// Function ShadowTrackerExtra.LobbyHUD.GetUsableViewIndex
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetUsableViewIndex();// sub_FAF780()

	// Function ShadowTrackerExtra.LobbyHUD.GetTeamNickName
	// (Final, Native, Private, BlueprintCallable)
	struct FString GetTeamNickName(int SlotIndex);// sub_FAF6B0()

	// Function ShadowTrackerExtra.LobbyHUD.GetStartUrl
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	struct FString GetStartUrl();// sub_FAF630()

	// Function ShadowTrackerExtra.LobbyHUD.GetMainLobbyCharacter
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ALobbyCharacter* GetMainLobbyCharacter();// sub_FAF4A0()

	// Function ShadowTrackerExtra.LobbyHUD.GetMainCoherentWidget
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UCoherentUIGTWidget* GetMainCoherentWidget();// sub_FAF470()

	// Function ShadowTrackerExtra.LobbyHUD.GetLocalUserData
	// (Final, Exec, Native, Public, Const)
	struct FString GetLocalUserData(const struct FString& Key);// sub_FAF340()

	// Function ShadowTrackerExtra.LobbyHUD.GetLobbyCharacterNum
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	int GetLobbyCharacterNum();// sub_FAF310()

	// Function ShadowTrackerExtra.LobbyHUD.GetLobbyCharacterCameraType
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	ELobbyCharacterCameraType GetLobbyCharacterCameraType();// sub_FAF2E0()

	// Function ShadowTrackerExtra.LobbyHUD.GetLobbyCharacter
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ALobbyCharacter* GetLobbyCharacter(int SlotIndex);// sub_FAF250()

	// Function ShadowTrackerExtra.LobbyHUD.GetLobbyCameraState
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	ELobbyCameraStates GetLobbyCameraState();// sub_FAF220()

	// Function ShadowTrackerExtra.LobbyHUD.GetLobbyCamera
	// (Final, Native, Private)
	class ACameraActor* GetLobbyCamera(ELobbyCameraStates InLobbyCameraState);// sub_FAF190()

	// Function ShadowTrackerExtra.LobbyHUD.GetHostNickName
	// (Final, Native, Private, BlueprintCallable)
	struct FString GetHostNickName();// sub_FAF110()

	// Function ShadowTrackerExtra.LobbyHUD.GetCurveDuration
	// (Final, Native, Private, Const)
	float GetCurveDuration(class UCurveFloat* InCurve);// sub_FAF070()

	// Function ShadowTrackerExtra.LobbyHUD.GetCharacterCameratypeFromMousePosition
	// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	ELobbyCharacterCameraType GetCharacterCameratypeFromMousePosition(const struct FVector2D& MousePosition);// sub_FAEFF0()

	// Function ShadowTrackerExtra.LobbyHUD.FindAkEventName
	// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	struct FString FindAkEventName(int InActorIDint InVoiceID);// sub_FAEEE0()

	// Function ShadowTrackerExtra.LobbyHUD.EnterCustomizationMenu
	// (Final, Native, Private)
	void EnterCustomizationMenu(ELobbyCameraStates InFromCameraStateELobbyCameraStates InToCameraState);// sub_FAEE20()

	// Function ShadowTrackerExtra.LobbyHUD.EnableSystemMenuButton
	// (Final, Exec, Native, Public)
	void EnableSystemMenuButton();// sub_FAEE00()

	// Function ShadowTrackerExtra.LobbyHUD.DisableSystemMenuButton
	// (Final, Exec, Native, Public)
	void DisableSystemMenuButton();// sub_FAEDE0()

	// Function ShadowTrackerExtra.LobbyHUD.DecideBlurChangingState
	// (Final, Native, Private, Const)
	ELobbyBlurChangingStates DecideBlurChangingState(ELobbyCameraStates InFromStateELobbyCameraStates InToState);// sub_FAED10()

	// Function ShadowTrackerExtra.LobbyHUD.CreateTestCharacter
	// (Final, Native, Public, BlueprintCallable)
	void CreateTestCharacter();// sub_FAECF0()

	// Function ShadowTrackerExtra.LobbyHUD.ClearWidget
	// (Final, Native, Public, BlueprintCallable)
	void ClearWidget(int Index);// sub_FAEC70()

	// Function ShadowTrackerExtra.LobbyHUD.ClearForSolo
	// (Final, Native, Private)
	void ClearForSolo();// sub_FAEC50()

	// Function ShadowTrackerExtra.LobbyHUD.ClearAllWidget
	// (Final, Native, Public, BlueprintCallable)
	void ClearAllWidget();// sub_FAEC30()

	// Function ShadowTrackerExtra.LobbyHUD.CheckPlayEmote
	// (Event, Public, HasOutParms, BlueprintEvent)
	unsigned char CheckPlayEmote(TArray<struct FString> ItemIds);// sub_1B0A820()

	// Function ShadowTrackerExtra.LobbyHUD.CheckLobbyConecting
	// (Final, Exec, Native, Public, BlueprintCallable)
	void CheckLobbyConecting();// sub_FAEC10()

	// Function ShadowTrackerExtra.LobbyHUD.ChangeSceneFromName
	// (Final, Exec, Native, Public, BlueprintCallable)
	void ChangeSceneFromName(const struct FString& SceneName);// sub_FAEB30()

	// Function ShadowTrackerExtra.LobbyHUD.ChangeNameTagPosition
	// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	unsigned char ChangeNameTagPosition(int slotIDconst struct FName& CameraTagconst struct FVector& Translation);// sub_FAEA10()

	// Function ShadowTrackerExtra.LobbyHUD.CancelOverrideCharacterVisibility
	// (Final, Exec, Native, Private)
	void CancelOverrideCharacterVisibility(uint32_t SlotIndex);// sub_FAE990()

	// Function ShadowTrackerExtra.LobbyHUD.CacheSubLevelNames
	// (Final, Native, Private)
	void CacheSubLevelNames();// sub_3170E0()

	// Function ShadowTrackerExtra.LobbyHUD.CachePostProcessEffectFromLevel
	// (Final, Native, Private)
	void CachePostProcessEffectFromLevel();// sub_3170E0()

	// Function ShadowTrackerExtra.LobbyHUD.CacheMainCameraFromLevel
	// (Final, Native, Private)
	void CacheMainCameraFromLevel();// sub_FAE970()

	// Function ShadowTrackerExtra.LobbyHUD.CacheLobbyCharacterTransforms
	// (Final, Native, Private)
	void CacheLobbyCharacterTransforms();// sub_FAE950()

	// Function ShadowTrackerExtra.LobbyHUD.CacheLobbyCamarasFromLevel
	// (Final, Native, Private)
	void CacheLobbyCamarasFromLevel();// sub_FAE930()

	// Function ShadowTrackerExtra.LobbyHUD.AddTestCharacters
	// (Final, Native, Public, BlueprintCallable)
	void AddTestCharacters();// sub_FAE910()

	// Function ShadowTrackerExtra.LobbyHUD.AddLobbyViewModeScale
	// (Final, Exec, Native, Public, BlueprintCallable)
	void AddLobbyViewModeScale(int ViewModeCategoryfloat Value);// sub_FAE840()

	// Function ShadowTrackerExtra.LobbyHUD.AddLobbyViewModeAngleXYFromEnum
	// (Final, Native, Public, BlueprintCallable)
	void AddLobbyViewModeAngleXYFromEnum(EViewModeCategory ViewModeCategoryfloat XAngleInDegreefloat YAngleInDegree);// sub_FAE740()

	// Function ShadowTrackerExtra.LobbyHUD.AddLobbyViewModeAngleXY
	// (Final, Exec, Native, Public, BlueprintCallable)
	void AddLobbyViewModeAngleXY(int ViewModeCategoryfloat XAngleInDegreefloat YAngleInDegree);// sub_FAE640()

	// Function ShadowTrackerExtra.LobbyHUD.AddLobbyViewModeAngle
	// (Final, Exec, Native, Public)
	void AddLobbyViewModeAngle(uint32_t ViewModeCategoryfloat AngleInDegree);// sub_FAE570()

	// Function ShadowTrackerExtra.LobbyHUD.AddLobbyCharacterAngle
	// (Final, Native, Public, BlueprintCallable)
	void AddLobbyCharacterAngle(int SlotIndexfloat AngleInDegree);// sub_FAE4A0()


}

