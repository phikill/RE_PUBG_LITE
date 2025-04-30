
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

// Function UnrealArchExt.UAEUserWidget.Toggle
// (Final, Native, Public, BlueprintCallable)

void UUAEUserWidget::Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Toggle");

	UUAEUserWidget_Toggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SynchronizeBlueprintProperties
// (Event, Public, BlueprintEvent)

void UUAEUserWidget::SynchronizeBlueprintProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SynchronizeBlueprintProperties");

	UUAEUserWidget_SynchronizeBlueprintProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.Show
// (Final, Native, Public, BlueprintCallable)

void UUAEUserWidget::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Show");

	UUAEUserWidget_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SetParentWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          InParentWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEUserWidget::SetParentWidget(class UUAEUserWidget* InParentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SetParentWidget");

	UUAEUserWidget_SetParentWidget_Params params;
	params.InParentWidget = InParentWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.Register
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULogicManagerBase*       LogicManager                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddToViewport                 (Parm, ZeroConstructor, IsPlainOldData)

void UUAEUserWidget::Register(class ULogicManagerBase* LogicManager, bool bAddToViewport)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Register");

	UUAEUserWidget_Register_Params params;
	params.LogicManager = LogicManager;
	params.bAddToViewport = bAddToViewport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReceiveShow
// (Event, Protected, BlueprintEvent)

void UUAEUserWidget::ReceiveShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReceiveShow");

	UUAEUserWidget_ReceiveShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReceiveHide
// (Event, Protected, BlueprintEvent)

void UUAEUserWidget::ReceiveHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReceiveHide");

	UUAEUserWidget_ReceiveHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UUAEUserWidget::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReceivedInitWidget");

	UUAEUserWidget_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnRightClickedDown
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D               TempScreenPos                  (Parm, IsPlainOldData)

void UUAEUserWidget::OnRightClickedDown(const struct FVector2D& TempScreenPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnRightClickedDown");

	UUAEUserWidget_OnRightClickedDown_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnRightClicked
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D               TempScreenPos                  (Parm, IsPlainOldData)

void UUAEUserWidget::OnRightClicked(const struct FVector2D& TempScreenPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnRightClicked");

	UUAEUserWidget_OnRightClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnFadeOutFinished
// (Native, Event, Protected, BlueprintEvent)

void UUAEUserWidget::OnFadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnFadeOutFinished");

	UUAEUserWidget_OnFadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnFadeInFinished
// (Native, Event, Protected, BlueprintEvent)

void UUAEUserWidget::OnFadeInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnFadeInFinished");

	UUAEUserWidget_OnFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnDoubleClicked
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D               TempScreenPos                  (Parm, IsPlainOldData)

void UUAEUserWidget::OnDoubleClicked(const struct FVector2D& TempScreenPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnDoubleClicked");

	UUAEUserWidget_OnDoubleClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnClicked
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D               TempScreenPos                  (Parm, IsPlainOldData)

void UUAEUserWidget::OnClicked(const struct FVector2D& TempScreenPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnClicked");

	UUAEUserWidget_OnClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.Hide
// (Final, Native, Public, BlueprintCallable)

void UUAEUserWidget::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Hide");

	UUAEUserWidget_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.HandleUIMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void UUAEUserWidget::HandleUIMessage(const struct FString& UIMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.HandleUIMessage");

	UUAEUserWidget_HandleUIMessage_Params params;
	params.UIMessage = UIMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.GetParentWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* UUAEUserWidget::GetParentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetParentWidget");

	UUAEUserWidget_GetParentWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UUAEUserWidget::GetOwningPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetOwningPlayer");

	UUAEUserWidget_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetOwningLogicManager
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULogicManagerBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogicManagerBase* UUAEUserWidget::GetOwningLogicManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetOwningLogicManager");

	UUAEUserWidget_GetOwningLogicManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetOwningFrontendHUD
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UUAEUserWidget::GetOwningFrontendHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetOwningFrontendHUD");

	UUAEUserWidget_GetOwningFrontendHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.FindChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InWidgetName                   (Parm, ZeroConstructor)
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* UUAEUserWidget::FindChild(const struct FString& InWidgetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.FindChild");

	UUAEUserWidget_FindChild_Params params;
	params.InWidgetName = InWidgetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.BackendHUD.GetFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FrontendHUDIndex               (Parm, ZeroConstructor, IsPlainOldData)
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UBackendHUD::GetFrontendHUD(int FrontendHUDIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.BackendHUD.GetFrontendHUD");

	UBackendHUD_GetFrontendHUD_Params params;
	params.FrontendHUDIndex = FrontendHUDIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.GetOwningFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* ULogicManagerBase::GetOwningFrontendHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.GetOwningFrontendHUD");

	ULogicManagerBase_GetOwningFrontendHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.FindWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* ULogicManagerBase::FindWidget(const struct FString& InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.FindWidget");

	ULogicManagerBase_FindWidget_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.DispatchUIMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)
// class UObject*                 Source                         (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULogicManagerBase::DispatchUIMessage(const struct FString& UIMessage, class UObject* Source, class UUAEUserWidget* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.DispatchUIMessage");

	ULogicManagerBase_DispatchUIMessage_Params params;
	params.UIMessage = UIMessage;
	params.Source = Source;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.SwitchGameStatus
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   GameStatus                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Options                        (Parm, ZeroConstructor)

void UFrontendHUD::SwitchGameStatus(const struct FName& GameStatus, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.SwitchGameStatus");

	UFrontendHUD_SwitchGameStatus_Params params;
	params.GameStatus = GameStatus;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.OnPreLoadMap
// (Native, Protected)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UFrontendHUD::OnPreLoadMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.OnPreLoadMap");

	UFrontendHUD_OnPreLoadMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.OnPostLoadMapWithWorld
// (Native, Protected)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendHUD::OnPostLoadMapWithWorld(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.OnPostLoadMapWithWorld");

	UFrontendHUD_OnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.OnGameViewportClientCreated
// (Final, Native, Protected)

void UFrontendHUD::OnGameViewportClientCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.OnGameViewportClientCreated");

	UFrontendHUD_OnGameViewportClientCreated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.GetWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UFrontendHUD::GetWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetWorld");

	UFrontendHUD_GetWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetUtils
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFrontendUtils*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendUtils* UFrontendHUD::GetUtils()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetUtils");

	UFrontendHUD_GetUtils_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UFrontendHUD::GetPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetPlayerController");

	UFrontendHUD_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetLogicManagerByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   LogicManagerTagName            (Parm, ZeroConstructor, IsPlainOldData)
// class ULogicManagerBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogicManagerBase* UFrontendHUD::GetLogicManagerByName(const struct FName& LogicManagerTagName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetLogicManagerByName");

	UFrontendHUD_GetLogicManagerByName_Params params;
	params.LogicManagerTagName = LogicManagerTagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetLogicManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LogicManagerIndex              (Parm, ZeroConstructor, IsPlainOldData)
// class ULogicManagerBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogicManagerBase* UFrontendHUD::GetLogicManager(int LogicManagerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetLogicManager");

	UFrontendHUD_GetLogicManager_Params params;
	params.LogicManagerIndex = LogicManagerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetGameViewportClient
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameViewportClient*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameViewportClient* UFrontendHUD::GetGameViewportClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetGameViewportClient");

	UFrontendHUD_GetGameViewportClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetGameMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGameMode*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGameMode* UFrontendHUD::GetGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetGameMode");

	UFrontendHUD_GetGameMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// TEnumAsByte<ECameraProjectionMode> ProjectionMode                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          FOV                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::SwitchSceneCameraToTransform(const struct FTransform& targetTrans, TEnumAsByte<ECameraProjectionMode> ProjectionMode, float FOV, float BlendTime, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform");

	UFrontendUtils_SwitchSceneCameraToTransform_Params params;
	params.targetTrans = targetTrans;
	params.ProjectionMode = ProjectionMode;
	params.FOV = FOV;
	params.BlendTime = BlendTime;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SwitchSceneCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SceneCameraName                (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::SwitchSceneCamera(const struct FName& SceneCameraName, float BlendTime, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SwitchSceneCamera");

	UFrontendUtils_SwitchSceneCamera_Params params;
	params.SceneCameraName = SceneCameraName;
	params.BlendTime = BlendTime;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)
// int                            inverseSquareFalloff           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::SetScenePointLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty");

	UFrontendUtils_SetScenePointLightProperty_Params params;
	params.sceneLightName = sceneLightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.inverseSquareFalloff = inverseSquareFalloff;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)
// struct FLightingChannels       Channel                        (Parm)

void UFrontendUtils::SetSceneDirectionalLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, const struct FLightingChannels& Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty");

	UFrontendUtils_SetSceneDirectionalLightProperty_Params params;
	params.sceneLightName = sceneLightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterScenePointLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// class APointLight*             Light                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterScenePointLight(const struct FName& sceneLightName, class APointLight* Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterScenePointLight");

	UFrontendUtils_RegisterScenePointLight_Params params;
	params.sceneLightName = sceneLightName;
	params.Light = Light;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADirectionalLight*       Light                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterSceneDirectionalLight(const struct FName& sceneLightName, class ADirectionalLight* Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight");

	UFrontendUtils_RegisterSceneDirectionalLight_Params params;
	params.sceneLightName = sceneLightName;
	params.Light = Light;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterSceneCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SceneCameraName                (Parm, ZeroConstructor, IsPlainOldData)
// class ACameraActor*            SceneCamera                    (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterSceneCamera(const struct FName& SceneCameraName, class ACameraActor* SceneCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterSceneCamera");

	UFrontendUtils_RegisterSceneCamera_Params params;
	params.SceneCameraName = SceneCameraName;
	params.SceneCamera = SceneCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered
// (Native, Public, BlueprintCallable)

void UFrontendUtils::OnAllSceneCamerasRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered");

	UFrontendUtils_OnAllSceneCamerasRegistered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.GlobalUIEventDispatcher_GetDelegateIsBound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 DelegateNum                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrontendUtils::GlobalUIEventDispatcher_GetDelegateIsBound(const struct FString& DelegateNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GlobalUIEventDispatcher_GetDelegateIsBound");

	UFrontendUtils_GlobalUIEventDispatcher_GetDelegateIsBound_Params params;
	params.DelegateNum = DelegateNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UFrontendUtils::GetOwningFrontendHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD");

	UFrontendUtils_GetOwningFrontendHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetGlobalUIEventDispatcher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UFrontendUtils::GetGlobalUIEventDispatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetGlobalUIEventDispatcher");

	UFrontendUtils_GetGlobalUIEventDispatcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ContainerName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEWidgetContainer*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEWidgetContainer* UFrontendUtils::GetGlobalUIContainer(const struct FName& ContainerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer");

	UFrontendUtils_GetGlobalUIContainer_Params params;
	params.ContainerName = ContainerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEWidgetContainer.RemoveWidgetInternal
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UUAEUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::RemoveWidgetInternal(class UUAEUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.RemoveWidgetInternal");

	UUAEWidgetContainer_RemoveWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.RemoveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::RemoveWidget(class UUAEUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.RemoveWidget");

	UUAEWidgetContainer_RemoveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.AddWidgetInternal
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UUAEUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::AddWidgetInternal(class UUAEUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.AddWidgetInternal");

	UUAEWidgetContainer_AddWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.AddWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::AddWidget(class UUAEUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.AddWidget");

	UUAEWidgetContainer_AddWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
