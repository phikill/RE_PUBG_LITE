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

// Class UnrealArchExt.UAEUserWidget
// 0x00B0 (0x02B0 - 0x0200)
class UUAEUserWidget : public UUserWidget
{
public:
	class UFrontendHUD*                                OwningFrontendHUD;                                        // 0x0200(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULogicManagerBase*                           OwningLogicManager;                                       // 0x0208(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UUAEWidgetContainer*                         OwningWidgetContainer;                                    // 0x0210(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUAEUserWidget*                              ParentWidget;                                             // 0x0218(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FUserWidgetState                            DefaultUserWidgetState;                                   // 0x0220(0x0028) (Edit)
	struct FUserWidgetState                            CurrentUserWidgetState;                                   // 0x0248(0x0028) (BlueprintVisible)
	float                                              TickRate;                                                 // 0x0270(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bReceiveOnClickedEvent;                                   // 0x0274(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveOnRightClickedEvent;                              // 0x0275(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveOnDoubleClickedEvent;                             // 0x0276(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSetScreenPosOnMouseEnter;                            // 0x0277(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPos;                                                // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   LastMouseEventScreenPos;                                  // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0288(0x0004) MISSED OFFSET
	float                                              LimitApplyTime;                                           // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableApply;                                             // 0x0290(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	EUserWidgetFadingStatus                            FadingStatus;                                             // 0x0298(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	float                                              CurrentOpacity;                                           // 0x029C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadingInTime;                                             // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadingOutTime;                                            // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoFadeIn;                                                // 0x02A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoFadeOut;                                               // 0x02A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldCollapse;                                          // 0x02AA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x02AB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealArchExt.UAEUserWidget");
		return ptr;
	}


	void Toggle();
	void SynchronizeBlueprintProperties();
	void Show();
	void SetParentWidget(class UUAEUserWidget* InParentWidget);
	void Register(class ULogicManagerBase* LogicManager, bool bAddToViewport);
	void ReceiveShow();
	void ReceiveHide();
	void ReceivedInitWidget();
	void OnRightClickedDown(const struct FVector2D& TempScreenPos);
	void OnRightClicked(const struct FVector2D& TempScreenPos);
	void OnFadeOutFinished();
	void OnFadeInFinished();
	void OnDoubleClicked(const struct FVector2D& TempScreenPos);
	void OnClicked(const struct FVector2D& TempScreenPos);
	void Hide();
	void HandleUIMessage(const struct FString& UIMessage);
	class UUAEUserWidget* GetParentWidget();
	class APlayerController* GetOwningPlayer();
	class ULogicManagerBase* GetOwningLogicManager();
	class UFrontendHUD* GetOwningFrontendHUD();
	class UUAEUserWidget* FindChild(const struct FString& InWidgetName);
};


// Class UnrealArchExt.BackendUtils
// 0x0008 (0x0030 - 0x0028)
class UBackendUtils : public UObject
{
public:
	class UBackendHUD*                                 OwningBackendHUD;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealArchExt.BackendUtils");
		return ptr;
	}

};


// Class UnrealArchExt.BackendHUD
// 0x0038 (0x0060 - 0x0028)
class UBackendHUD : public UObject
{
public:
	class UEngine*                                     Engine;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BackendUtilsClassName;                                    // 0x0030(0x0010) (ZeroConstructor, Config)
	class UBackendUtils*                               Utils;                                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealArchExt.BackendHUD");
		return ptr;
	}


	class UFrontendHUD* GetFrontendHUD(int FrontendHUDIndex);
};


// Class UnrealArchExt.LogicManagerBase
// 0x0090 (0x00B8 - 0x0028)
class ULogicManagerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UFrontendHUD*                                OwningFrontendHUD;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bPersistentUI;                                            // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicWidget;                                           // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	TArray<struct FName>                               GameStatusList;                                           // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0058(0x0030) MISSED OFFSET
	TArray<class UUAEUserWidget*>                      widgetList;                                               // 0x0088(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	TArray<class UObject*>                             DelayMessage_Obj;                                         // 0x00A8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealArchExt.LogicManagerBase");
		return ptr;
	}


	class UFrontendHUD* GetOwningFrontendHUD();
	class UUAEUserWidget* FindWidget(const struct FString& InName);
	void DispatchUIMessage(const struct FString& UIMessage, class UObject* Source, class UUAEUserWidget* Target);
};


// Class UnrealArchExt.FrontendHUD
// 0x00C8 (0x00F0 - 0x0028)
class UFrontendHUD : public UObject
{
public:
	class UGameInstance*                               GameInstance;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FString                                     FrontendUtilsClassName;                                   // 0x0038(0x0010) (ZeroConstructor, Config)
	class UFrontendUtils*                              Utils;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ULogicManagerBase*>                   LogicManagerList;                                         // 0x0050(0x0010) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ULogicManagerBase>> LogicManagerMap;                                          // 0x0060(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
	struct FName                                       CurrentGameStatus;                                        // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PendingGameStatus;                                        // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     LatestGameStatusURL;                                      // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       CurrnetNetworkStatus;                                     // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWorld*                                      CurrentGameStatusWorld;                                   // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealArchExt.FrontendHUD");
		return ptr;
	}


	void SwitchGameStatus(const struct FName& GameStatus, const struct FString& Options);
	void OnPreLoadMap(const struct FString& MapName);
	void OnPostLoadMapWithWorld(class UWorld* World);
	void OnGameViewportClientCreated();
	class UWorld* GetWorld();
	class UFrontendUtils* GetUtils();
	class APlayerController* GetPlayerController();
	class ULogicManagerBase* GetLogicManagerByName(const struct FName& LogicManagerTagName);
	class ULogicManagerBase* GetLogicManager(int LogicManagerIndex);
	class UGameViewportClient* GetGameViewportClient();
	class AGameMode* GetGameMode();
};


// Class UnrealArchExt.FrontendUtils
// 0x0358 (0x0380 - 0x0028)
class UFrontendUtils : public UObject
{
public:
	class UFrontendHUD*                                OwningFrontendHUD;                                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET
	struct FName                                       CurrentSceneCameraName;                                   // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class ACameraActor*>                        SceneCameraList;                                          // 0x00A8(0x0010) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ACameraActor>> SceneCameraMap;                                           // 0x00B8(0x0050) (ZeroConstructor)
	TArray<class ADirectionalLight*>                   SceneDirectionalLightList;                                // 0x0108(0x0010) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ADirectionalLight>> SceneDirectionalLightMap;                                 // 0x0118(0x0050) (ZeroConstructor)
	TArray<class APointLight*>                         ScenePointLightList;                                      // 0x0168(0x0010) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class APointLight>> ScenePointLightMap;                                       // 0x0178(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x120];                                     // 0x01C8(0x0120) MISSED OFFSET
	struct FString                                     GlobalUIEventDispatcherClassName;                         // 0x02E8(0x0010) (ZeroConstructor, Config)
	class UClass*                                      GlobalUIEventDispatcherClass;                             // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     GlobalUIEventDispatcher;                                  // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GlobalUIContainerClassName;                               // 0x0308(0x0010) (ZeroConstructor, Config)
	TArray<struct FName>                               GlobalUIContainerNames;                                   // 0x0318(0x0010) (ZeroConstructor, Config)
	TMap<struct FName, class UUAEWidgetContainer*>     GlobalUIContainers;                                       // 0x0328(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0378(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealArchExt.FrontendUtils");
		return ptr;
	}


	void SwitchSceneCameraToTransform(const struct FTransform& targetTrans, TEnumAsByte<ECameraProjectionMode> ProjectionMode, float FOV, float BlendTime, bool bForce);
	void SwitchSceneCamera(const struct FName& SceneCameraName, float BlendTime, bool bForce);
	void SetScenePointLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius);
	void SetSceneDirectionalLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, const struct FLightingChannels& Channel);
	void RegisterScenePointLight(const struct FName& sceneLightName, class APointLight* Light);
	void RegisterSceneDirectionalLight(const struct FName& sceneLightName, class ADirectionalLight* Light);
	void RegisterSceneCamera(const struct FName& SceneCameraName, class ACameraActor* SceneCamera);
	void OnAllSceneCamerasRegistered();
	bool GlobalUIEventDispatcher_GetDelegateIsBound(const struct FString& DelegateNum);
	class UFrontendHUD* GetOwningFrontendHUD();
	class UObject* GetGlobalUIEventDispatcher();
	class UUAEWidgetContainer* GetGlobalUIContainer(const struct FName& ContainerName);
};


// Class UnrealArchExt.UAEWidgetContainer
// 0x0010 (0x02C0 - 0x02B0)
class UUAEWidgetContainer : public UUAEUserWidget
{
public:
	TArray<class UUAEUserWidget*>                      widgetList;                                               // 0x02B0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealArchExt.UAEWidgetContainer");
		return ptr;
	}


	void RemoveWidgetInternal(class UUAEUserWidget* Widget);
	void RemoveWidget(class UUAEUserWidget* Widget);
	void AddWidgetInternal(class UUAEUserWidget* Widget);
	void AddWidget(class UUAEUserWidget* Widget);
};


// Class UnrealArchExt.UAEDataTable
// 0x0000 (0x0080 - 0x0080)
class UUAEDataTable : public UDataTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealArchExt.UAEDataTable");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
