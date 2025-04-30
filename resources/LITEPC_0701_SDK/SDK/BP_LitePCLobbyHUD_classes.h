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

// BlueprintGeneratedClass BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C
// 0x0110 (0x0A30 - 0x0920)
class ABP_LitePCLobbyHUD_C : public ALobbyHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	class ULobbySystemMenuWidget_C*                    lobbyMenuWidget;                                          // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ULitePC_MainOptionUI_C*                      mainOptionWidget;                                         // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWidgetBP_LobbyWebView_C*                    webViewWidget;                                            // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_LitePCLobbyFirstHUD_C*                   FirstWidget;                                              // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_LitePCLobbyMsg_C*                        lobbyMsg;                                                 // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class UUserWidget*>           WidgetContainer;                                          // 0x0950(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UGVoiceInterface*                            GVoice;                                                   // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     HostNickName;                                             // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HostChanged;                                              // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	TArray<struct FHudUiConfig>                        UiConfigs;                                                // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             hidewidget;                                               // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUserWidget*                                 PopupWidget;                                              // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BackpackBlueprintUtils;                                   // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Parachute;                                                // 0x09F0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandle_AvatarBP_C*                BattileItemHandleAvatarBP;                                // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraWeapon*                              LobbyWeapon;                                              // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AParachuteShowActor_C*                       LobbyParachute;                                           // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandle_AvatarBP_C*                BattleItemHandleAvatarBP;                                 // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     ParachuteSkeletalMesh;                                    // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     Parachute_Matarial;                                       // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ULobbyNameTagHUD_C*                          LobbyNameTagHUD;                                          // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LitePCLobbyHUD.BP_LitePCLobbyHUD_C");
		return ptr;
	}


	class UUserWidget* FindWidget(const struct FString& Name);
	void CreateCharacter(int SlotIndex);
	void CleanUpNameTagWidget(int SlotIndex);
	void SetupNameTagWidget(int SlotIndex);
	void GetNameTagWidget(int SlotIndex, class UTslLobbyNameTagWidget** Widget);
	void DestroyCharacter(int SlotIndex);
	void SpawnParachute(const struct FString& ParachuteId);
	void SetWeaponSkin(const struct FString& SkinId);
	void SpawnWeapon(const struct FString& WeaponId);
	void CreateWidgetAndAddToContainer(class UClass* InputPin, int ZOrder, ESlateVisibility InVisibility, class UUserWidget** Widget);
	void RegisterWidgetList();
	void UserConstructionScript();
	void OnLoaded_2D3FE1A7439818801B9F88915417A7B5(class UObject* Loaded);
	void OnLoaded_21D97EB047B9591642CCAE8C5732778C(class UObject* Loaded);
	void ReceiveBeginPlay();
	void HideInGameMenu();
	void OnHostChanged_1(const struct FString& InHostNickName);
	void OnGameUserSettingApplied();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void LoadWebView();
	void SpawnViewModeWeapon(struct FString* WeaponId, struct FString* SkinItemId);
	void SpawnViewModeParachute(struct FString* ParachuteId, struct FString* SkinItemId);
	void SetParachuteSkin();
	void ExecuteUbergraph_BP_LitePCLobbyHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
