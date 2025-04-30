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

// Function UnrealArchExt.UAEUserWidget.Toggle
struct UUAEUserWidget_Toggle_Params
{
};

// Function UnrealArchExt.UAEUserWidget.SynchronizeBlueprintProperties
struct UUAEUserWidget_SynchronizeBlueprintProperties_Params
{
};

// Function UnrealArchExt.UAEUserWidget.Show
struct UUAEUserWidget_Show_Params
{
};

// Function UnrealArchExt.UAEUserWidget.SetParentWidget
struct UUAEUserWidget_SetParentWidget_Params
{
	class UUAEUserWidget*                              InParentWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.Register
struct UUAEUserWidget_Register_Params
{
	class ULogicManagerBase*                           LogicManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToViewport;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.ReceiveShow
struct UUAEUserWidget_ReceiveShow_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ReceiveHide
struct UUAEUserWidget_ReceiveHide_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ReceivedInitWidget
struct UUAEUserWidget_ReceivedInitWidget_Params
{
};

// Function UnrealArchExt.UAEUserWidget.OnRightClickedDown
struct UUAEUserWidget_OnRightClickedDown_Params
{
	struct FVector2D                                   TempScreenPos;                                            // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.OnRightClicked
struct UUAEUserWidget_OnRightClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.OnFadeOutFinished
struct UUAEUserWidget_OnFadeOutFinished_Params
{
};

// Function UnrealArchExt.UAEUserWidget.OnFadeInFinished
struct UUAEUserWidget_OnFadeInFinished_Params
{
};

// Function UnrealArchExt.UAEUserWidget.OnDoubleClicked
struct UUAEUserWidget_OnDoubleClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.OnClicked
struct UUAEUserWidget_OnClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.Hide
struct UUAEUserWidget_Hide_Params
{
};

// Function UnrealArchExt.UAEUserWidget.HandleUIMessage
struct UUAEUserWidget_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.GetParentWidget
struct UUAEUserWidget_GetParentWidget_Params
{
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetOwningPlayer
struct UUAEUserWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetOwningLogicManager
struct UUAEUserWidget_GetOwningLogicManager_Params
{
	class ULogicManagerBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetOwningFrontendHUD
struct UUAEUserWidget_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.FindChild
struct UUAEUserWidget_FindChild_Params
{
	struct FString                                     InWidgetName;                                             // (Parm, ZeroConstructor)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.BackendHUD.GetFrontendHUD
struct UBackendHUD_GetFrontendHUD_Params
{
	int                                                FrontendHUDIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.GetOwningFrontendHUD
struct ULogicManagerBase_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.FindWidget
struct ULogicManagerBase_FindWidget_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.DispatchUIMessage
struct ULogicManagerBase_DispatchUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.SwitchGameStatus
struct UFrontendHUD_SwitchGameStatus_Params
{
	struct FName                                       GameStatus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.FrontendHUD.OnPreLoadMap
struct UFrontendHUD_OnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.FrontendHUD.OnPostLoadMapWithWorld
struct UFrontendHUD_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.OnGameViewportClientCreated
struct UFrontendHUD_OnGameViewportClientCreated_Params
{
};

// Function UnrealArchExt.FrontendHUD.GetWorld
struct UFrontendHUD_GetWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetUtils
struct UFrontendHUD_GetUtils_Params
{
	class UFrontendUtils*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetPlayerController
struct UFrontendHUD_GetPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetLogicManagerByName
struct UFrontendHUD_GetLogicManagerByName_Params
{
	struct FName                                       LogicManagerTagName;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class ULogicManagerBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetLogicManager
struct UFrontendHUD_GetLogicManager_Params
{
	int                                                LogicManagerIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class ULogicManagerBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetGameViewportClient
struct UFrontendHUD_GetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetGameMode
struct UFrontendHUD_GetGameMode_Params
{
	class AGameMode*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform
struct UFrontendUtils_SwitchSceneCameraToTransform_Params
{
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SwitchSceneCamera
struct UFrontendUtils_SwitchSceneCamera_Params
{
	struct FName                                       SceneCameraName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty
struct UFrontendUtils_SetScenePointLightProperty_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	int                                                inverseSquareFalloff;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty
struct UFrontendUtils_SetSceneDirectionalLightProperty_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	struct FLightingChannels                           Channel;                                                  // (Parm)
};

// Function UnrealArchExt.FrontendUtils.RegisterScenePointLight
struct UFrontendUtils_RegisterScenePointLight_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APointLight*                                 Light;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight
struct UFrontendUtils_RegisterSceneDirectionalLight_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           Light;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.RegisterSceneCamera
struct UFrontendUtils_RegisterSceneCamera_Params
{
	struct FName                                       SceneCameraName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                SceneCamera;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered
struct UFrontendUtils_OnAllSceneCamerasRegistered_Params
{
};

// Function UnrealArchExt.FrontendUtils.GlobalUIEventDispatcher_GetDelegateIsBound
struct UFrontendUtils_GlobalUIEventDispatcher_GetDelegateIsBound_Params
{
	struct FString                                     DelegateNum;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD
struct UFrontendUtils_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetGlobalUIEventDispatcher
struct UFrontendUtils_GetGlobalUIEventDispatcher_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer
struct UFrontendUtils_GetGlobalUIContainer_Params
{
	struct FName                                       ContainerName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEWidgetContainer*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.RemoveWidgetInternal
struct UUAEWidgetContainer_RemoveWidgetInternal_Params
{
	class UUAEUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.RemoveWidget
struct UUAEWidgetContainer_RemoveWidget_Params
{
	class UUAEUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.AddWidgetInternal
struct UUAEWidgetContainer_AddWidgetInternal_Params
{
	class UUAEUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.AddWidget
struct UUAEWidgetContainer_AddWidget_Params
{
	class UUAEUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
