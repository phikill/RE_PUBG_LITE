
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

// Function Client.BusinessHelper.UIGetResWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DesManagerName                 (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBusinessHelper::STATIC_UIGetResWithPath(const struct FString& DesManagerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.BusinessHelper.UIGetResWithPath");

	UBusinessHelper_UIGetResWithPath_Params params;
	params.DesManagerName = DesManagerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.UIGetLuaManagerByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          pUIClass                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 InManagerName                  (Parm, ZeroConstructor)
// class ALuaClassObj*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALuaClassObj* UBusinessHelper::STATIC_UIGetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.BusinessHelper.UIGetLuaManagerByName");

	UBusinessHelper_UIGetLuaManagerByName_Params params;
	params.pUIClass = pUIClass;
	params.InManagerName = InManagerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.UIGetLuaManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          pUIClass                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ALuaClassObj*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALuaClassObj* UBusinessHelper::STATIC_UIGetLuaManager(class UUAEUserWidget* pUIClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.BusinessHelper.UIGetLuaManager");

	UBusinessHelper_UIGetLuaManager_Params params;
	params.pUIClass = pUIClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetWidgetByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          pUIClass                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 InManagerName                  (Parm, ZeroConstructor)
// struct FString                 InWidgtName                    (Parm, ZeroConstructor)
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* UBusinessHelper::STATIC_GetWidgetByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName, const struct FString& InWidgtName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetWidgetByName");

	UBusinessHelper_GetWidgetByName_Params params;
	params.pUIClass = pUIClass;
	params.InManagerName = InManagerName;
	params.InWidgtName = InWidgtName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBusinessHelper::STATIC_GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetTime");

	UBusinessHelper_GetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetMobileBasePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPath                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBusinessHelper::STATIC_GetMobileBasePath(const struct FString& InPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetMobileBasePath");

	UBusinessHelper_GetMobileBasePath_Params params;
	params.InPath = InPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetDataTable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UBusinessHelper::STATIC_GetDataTable(const struct FString& TableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetDataTable");

	UBusinessHelper_GetDataTable_Params params;
	params.TableName = TableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetCurrentNetworkState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBusinessHelper::STATIC_GetCurrentNetworkState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetCurrentNetworkState");

	UBusinessHelper_GetCurrentNetworkState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetChildByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             pParent                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBusinessHelper::STATIC_GetChildByName(class UUserWidget* pParent, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetChildByName");

	UBusinessHelper_GetChildByName_Params params;
	params.pParent = pParent;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.BroadCastMSG
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFrontendHUD*            FrontendHUD                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DesManagerName                 (Parm, ZeroConstructor)
// struct FString                 Msg                            (Parm, ZeroConstructor)

void UBusinessHelper::STATIC_BroadCastMSG(class UFrontendHUD* FrontendHUD, const struct FString& DesManagerName, const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.BusinessHelper.BroadCastMSG");

	UBusinessHelper_BroadCastMSG_Params params;
	params.FrontendHUD = FrontendHUD;
	params.DesManagerName = DesManagerName;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameBackendUtils.GetTableManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUAETableManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAETableManager* UGameBackendUtils::GetTableManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameBackendUtils.GetTableManager");

	UGameBackendUtils_GetTableManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBackendUtils.GetLoadedClassManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUAELoadedClassManager*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAELoadedClassManager* UGameBackendUtils::GetLoadedClassManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameBackendUtils.GetLoadedClassManager");

	UGameBackendUtils_GetLoadedClassManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBackendHUD.GetUtils
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameBackendUtils*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameBackendUtils* UGameBackendHUD::GetUtils()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameBackendHUD.GetUtils");

	UGameBackendHUD_GetUtils_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBackendHUD.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameBackendHUD*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameBackendHUD* UGameBackendHUD::STATIC_GetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameBackendHUD.GetInstance");

	UGameBackendHUD_GetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBackendHUD.GetFirstGameFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameFrontendHUD*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameFrontendHUD* UGameBackendHUD::GetFirstGameFrontendHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameBackendHUD.GetFirstGameFrontendHUD");

	UGameBackendHUD_GetFirstGameFrontendHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBusinessManager.GetWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* UGameBusinessManager::GetWidget(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameBusinessManager.GetWidget");

	UGameBusinessManager_GetWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBusinessManager.GetLuaObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ALuaClassObj*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALuaClassObj* UGameBusinessManager::GetLuaObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameBusinessManager.GetLuaObject");

	UGameBusinessManager_GetLuaObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBusinessManager.GetGameFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameFrontendHUD*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameFrontendHUD* UGameBusinessManager::GetGameFrontendHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameBusinessManager.GetGameFrontendHUD");

	UGameBusinessManager_GetGameFrontendHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.UnRegisterUIShowHideEventDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor)

void UGameFrontendHUD::UnRegisterUIShowHideEventDelegate(const struct FString& Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.UnRegisterUIShowHideEventDelegate");

	UGameFrontendHUD_UnRegisterUIShowHideEventDelegate_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.ShutdownUnrealNetwork
// (Final, Native, Public, BlueprintCallable)

void UGameFrontendHUD::ShutdownUnrealNetwork()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.ShutdownUnrealNetwork");

	UGameFrontendHUD_ShutdownUnrealNetwork_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.SetGameStatusMap
// (Final, Native, Public)
// Parameters:
// TMap<struct FName, struct FString> InGameStatusMap                (Parm, ZeroConstructor)

void UGameFrontendHUD::SetGameStatusMap(TMap<struct FName, struct FString> InGameStatusMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.SetGameStatusMap");

	UGameFrontendHUD_SetGameStatusMap_Params params;
	params.InGameStatusMap = InGameStatusMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.ResetUserSettings
// (Final, Native, Public, BlueprintCallable)

void UGameFrontendHUD::ResetUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.ResetUserSettings");

	UGameFrontendHUD_ResetUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Int
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUserSettingsDelegate_Int(const struct FString& PropertyName, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Int");

	UGameFrontendHUD_RegisterUserSettingsDelegate_Int_Params params;
	params.PropertyName = PropertyName;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Float
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUserSettingsDelegate_Float(const struct FString& PropertyName, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Float");

	UGameFrontendHUD_RegisterUserSettingsDelegate_Float_Params params;
	params.PropertyName = PropertyName;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Enum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUserSettingsDelegate_Enum(const struct FString& PropertyName, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Enum");

	UGameFrontendHUD_RegisterUserSettingsDelegate_Enum_Params params;
	params.PropertyName = PropertyName;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Bool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUserSettingsDelegate_Bool(const struct FString& PropertyName, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Bool");

	UGameFrontendHUD_RegisterUserSettingsDelegate_Bool_Params params;
	params.PropertyName = PropertyName;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUserSettingsDelegate");

	UGameFrontendHUD_RegisterUserSettingsDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUIShowHideEventDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUIShowHideEventDelegate(const struct FString& Source, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUIShowHideEventDelegate");

	UGameFrontendHUD_RegisterUIShowHideEventDelegate_Params params;
	params.Source = Source;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnWebviewNotify
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FWebviewInfoWrapper     webviewinfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void UGameFrontendHUD::OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnWebviewNotify");

	UGameFrontendHUD_OnWebviewNotify_Params params;
	params.webviewinfo = webviewinfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnQuickLoginNotify
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FWakeupInfoWrapper      wakeupinfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGameFrontendHUD::OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnQuickLoginNotify");

	UGameFrontendHUD_OnQuickLoginNotify_Params params;
	params.wakeupinfo = wakeupinfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnQueryMyInfoNotify
// (Final, RequiredAPI, Native, Public)

void UGameFrontendHUD::OnQueryMyInfoNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnQueryMyInfoNotify");

	UGameFrontendHUD_OnQueryMyInfoNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnNearByPersonInfoNotify
// (Final, RequiredAPI, Native, Public)

void UGameFrontendHUD::OnNearByPersonInfoNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnNearByPersonInfoNotify");

	UGameFrontendHUD_OnNearByPersonInfoNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnGroupNotify
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FGroupInfoWrapper       groupInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGameFrontendHUD::OnGroupNotify(const struct FGroupInfoWrapper& groupInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnGroupNotify");

	UGameFrontendHUD_OnGroupNotify_Params params;
	params.groupInfo = groupInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnGenQRImgNotify
// (Final, RequiredAPI, Native, Public)
// Parameters:
// int                            Ret                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 imgPath                        (Parm, ZeroConstructor)

void UGameFrontendHUD::OnGenQRImgNotify(int Ret, int Size, const struct FString& imgPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnGenQRImgNotify");

	UGameFrontendHUD_OnGenQRImgNotify_Params params;
	params.Ret = Ret;
	params.Size = Size;
	params.imgPath = imgPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.GetUserSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USaveGame*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USaveGame* UGameFrontendHUD::GetUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetUserSettings");

	UGameFrontendHUD_GetUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetLuaStateWrapper
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULuaStateWrapper*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULuaStateWrapper* UGameFrontendHUD::GetLuaStateWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetLuaStateWrapper");

	UGameFrontendHUD_GetLuaStateWrapper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetGVoiceInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGVoiceInterface*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGVoiceInterface* UGameFrontendHUD::GetGVoiceInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetGVoiceInterface");

	UGameFrontendHUD_GetGVoiceInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetBattleIDHexStr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameFrontendHUD::GetBattleIDHexStr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetBattleIDHexStr");

	UGameFrontendHUD_GetBattleIDHexStr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.FinishModifyUserSettings
// (Final, Native, Public, BlueprintCallable)

void UGameFrontendHUD::FinishModifyUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.FinishModifyUserSettings");

	UGameFrontendHUD_FinishModifyUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.CallGlobalScriptFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFunctionName                 (Parm, ZeroConstructor)

void UGameFrontendHUD::CallGlobalScriptFunction(const struct FString& InFunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.CallGlobalScriptFunction");

	UGameFrontendHUD_CallGlobalScriptFunction_Params params;
	params.InFunctionName = InFunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.BeginModifyUserSettings
// (Final, Native, Public, BlueprintCallable)

void UGameFrontendHUD::BeginModifyUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.BeginModifyUserSettings");

	UGameFrontendHUD_BeginModifyUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.UploadRecordFile
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::UploadRecordFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.UploadRecordFile");

	UGVoiceInterface_UploadRecordFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.TestGVoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 userId                         (Parm, ZeroConstructor)

void UGVoiceInterface::TestGVoice(const struct FString& userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.TestGVoice");

	UGVoiceInterface_TestGVoice_Params params;
	params.userId = userId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.TeamSpeakerEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::TeamSpeakerEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.TeamSpeakerEnable");

	UGVoiceInterface_TeamSpeakerEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.TeamMicphoneEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::TeamMicphoneEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.TeamMicphoneEnable");

	UGVoiceInterface_TeamMicphoneEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.StopRecord
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::StopRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.StopRecord");

	UGVoiceInterface_StopRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.StopPlayRecordFile
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::StopPlayRecordFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.StopPlayRecordFile");

	UGVoiceInterface_StopPlayRecordFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.StartRecord
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::StartRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.StartRecord");

	UGVoiceInterface_StartRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SpeechToText
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::SpeechToText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SpeechToText");

	UGVoiceInterface_SpeechToText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.ShowOpenSpeakerAtFirstMsg
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::ShowOpenSpeakerAtFirstMsg()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.ShowOpenSpeakerAtFirstMsg");

	UGVoiceInterface_ShowOpenSpeakerAtFirstMsg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetVoiceMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetVoiceMode(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetVoiceMode");

	UGVoiceInterface_SetVoiceMode_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetVadSensitive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            VadSensitive                   (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetVadSensitive(int VadSensitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetVadSensitive");

	UGVoiceInterface_SetVadSensitive_Params params;
	params.VadSensitive = VadSensitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetSpeakerVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetSpeakerVolume(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetSpeakerVolume");

	UGVoiceInterface_SetSpeakerVolume_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetSpeakerStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetSpeakerStatus(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetSpeakerStatus");

	UGVoiceInterface_SetSpeakerStatus_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetMicphoneVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetMicphoneVolume(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetMicphoneVolume");

	UGVoiceInterface_SetMicphoneVolume_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetMicphoneStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetMicphoneStatus(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetMicphoneStatus");

	UGVoiceInterface_SetMicphoneStatus_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetLbsVoiceRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetLbsVoiceRadius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetLbsVoiceRadius");

	UGVoiceInterface_SetLbsVoiceRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetLbsRoomEnableStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetLbsRoomEnableStatus(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetLbsRoomEnableStatus");

	UGVoiceInterface_SetLbsRoomEnableStatus_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetGameFrontendHUD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        InHUD                          (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetGameFrontendHUD(class UGameFrontendHUD* InHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetGameFrontendHUD");

	UGVoiceInterface_SetGameFrontendHUD_Params params;
	params.InHUD = InHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetCurrentDownloadFieldID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 filedId                        (Parm, ZeroConstructor)

void UGVoiceInterface::SetCurrentDownloadFieldID(const struct FString& filedId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetCurrentDownloadFieldID");

	UGVoiceInterface_SetCurrentDownloadFieldID_Params params;
	params.filedId = filedId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.ResetWhenLogOut
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::ResetWhenLogOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.ResetWhenLogOut");

	UGVoiceInterface_ResetWhenLogOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.ReactiveLbsStatus
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::ReactiveLbsStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.ReactiveLbsStatus");

	UGVoiceInterface_ReactiveLbsStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.QuitRoom
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::QuitRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.QuitRoom");

	UGVoiceInterface_QuitRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.PlayRecordFile
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::PlayRecordFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.PlayRecordFile");

	UGVoiceInterface_PlayRecordFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.OpenTeamSpeakerOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::OpenTeamSpeakerOnly(bool showTips)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenTeamSpeakerOnly");

	UGVoiceInterface_OpenTeamSpeakerOnly_Params params;
	params.showTips = showTips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.OpenTeamMicphoneOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenTeamMicphoneOnly(bool showTips)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenTeamMicphoneOnly");

	UGVoiceInterface_OpenTeamMicphoneOnly_Params params;
	params.showTips = showTips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OpenSpeaker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenSpeaker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenSpeaker");

	UGVoiceInterface_OpenSpeaker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OpenMicPtt
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::OpenMicPtt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenMicPtt");

	UGVoiceInterface_OpenMicPtt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.OpenMicAndSpeakerAfterJoinLbsRoom
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::OpenMicAndSpeakerAfterJoinLbsRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenMicAndSpeakerAfterJoinLbsRoom");

	UGVoiceInterface_OpenMicAndSpeakerAfterJoinLbsRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.OpenMic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenMic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenMic");

	UGVoiceInterface_OpenMic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OpenAllSpeaker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::OpenAllSpeaker(bool showTips)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenAllSpeaker");

	UGVoiceInterface_OpenAllSpeaker_Params params;
	params.showTips = showTips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.OpenAllMicphone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenAllMicphone(bool showTips)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenAllMicphone");

	UGVoiceInterface_OpenAllMicphone_Params params;
	params.showTips = showTips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OnRoomTypeChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 itemtext                       (Parm, ZeroConstructor)

void UGVoiceInterface::OnRoomTypeChanged(const struct FString& itemtext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OnRoomTypeChanged");

	UGVoiceInterface_OnRoomTypeChanged_Params params;
	params.itemtext = itemtext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.LbsSpeakerEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::LbsSpeakerEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.LbsSpeakerEnable");

	UGVoiceInterface_LbsSpeakerEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.LbsMicphoneEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::LbsMicphoneEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.LbsMicphoneEnable");

	UGVoiceInterface_LbsMicphoneEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.JoinRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 room                           (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)

void UGVoiceInterface::JoinRoom(const struct FString& room, const struct FString& userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.JoinRoom");

	UGVoiceInterface_JoinRoom_Params params;
	params.room = room;
	params.userId = userId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.JoinLbsRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 lbsRoom                        (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)

void UGVoiceInterface::JoinLbsRoom(const struct FString& lbsRoom, const struct FString& userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.JoinLbsRoom");

	UGVoiceInterface_JoinLbsRoom_Params params;
	params.lbsRoom = lbsRoom;
	params.userId = userId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.InitGVoiceComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 userId                         (Parm, ZeroConstructor)

void UGVoiceInterface::InitGVoiceComponent(const struct FString& userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.InitGVoiceComponent");

	UGVoiceInterface_InitGVoiceComponent_Params params;
	params.userId = userId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.HaveTeamRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::HaveTeamRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.HaveTeamRoom");

	UGVoiceInterface_HaveTeamRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.HaveLbsRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::HaveLbsRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.HaveLbsRoom");

	UGVoiceInterface_HaveLbsRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.GetVoiceLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGVoiceInterface::GetVoiceLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.GetVoiceLength");

	UGVoiceInterface_GetVoiceLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.GetVadSensitive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::GetVadSensitive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.GetVadSensitive");

	UGVoiceInterface_GetVadSensitive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.GetAuthKey
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::GetAuthKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.GetAuthKey");

	UGVoiceInterface_GetAuthKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.ForbidTeammateVoiceById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::ForbidTeammateVoiceById(int memberID, bool IsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.ForbidTeammateVoiceById");

	UGVoiceInterface_ForbidTeammateVoiceById_Params params;
	params.memberID = memberID;
	params.IsEnable = IsEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.DownloadRecordFile
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::DownloadRecordFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.DownloadRecordFile");

	UGVoiceInterface_DownloadRecordFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.CloseSpeaker
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::CloseSpeaker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.CloseSpeaker");

	UGVoiceInterface_CloseSpeaker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.CloseMicPtt
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::CloseMicPtt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.CloseMicPtt");

	UGVoiceInterface_CloseMicPtt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.CloseMic
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::CloseMic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.CloseMic");

	UGVoiceInterface_CloseMic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.CloseAllSpeaker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::CloseAllSpeaker(bool showTips)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.CloseAllSpeaker");

	UGVoiceInterface_CloseAllSpeaker_Params params;
	params.showTips = showTips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.CloseAllMicphone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::CloseAllMicphone(bool showTips)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.CloseAllMicphone");

	UGVoiceInterface_CloseAllMicphone_Params params;
	params.showTips = showTips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.HotUpdater.OnGetVersionData
// (Final, Native, Private, HasOutParms)
// Parameters:
// bool                           Successful                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FileURL                        (Parm, ZeroConstructor)
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHotUpdater::OnGetVersionData(bool Successful, const struct FString& FileURL, TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.HotUpdater.OnGetVersionData");

	UHotUpdater_OnGetVersionData_Params params;
	params.Successful = Successful;
	params.FileURL = FileURL;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.HotUpdater.OnDownloadedOneFile
// (Final, Native, Private, HasOutParms)
// Parameters:
// bool                           Successful                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FileURL                        (Parm, ZeroConstructor)
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHotUpdater::OnDownloadedOneFile(bool Successful, const struct FString& FileURL, TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.HotUpdater.OnDownloadedOneFile");

	UHotUpdater_OnDownloadedOneFile_Params params;
	params.Successful = Successful;
	params.FileURL = FileURL;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ImageDownloader.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UImageDownloader::Start(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ImageDownloader.Start");

	UImageDownloader_Start_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ImageDownloader.SetSubDirTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UImageDownloader::STATIC_SetSubDirTime(int sec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ImageDownloader.SetSubDirTime");

	UImageDownloader_SetSubDirTime_Params params;
	params.sec = sec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ImageDownloader.MakeDownloader
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UImageDownloader*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UImageDownloader* UImageDownloader::STATIC_MakeDownloader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ImageDownloader.MakeDownloader");

	UImageDownloader_MakeDownloader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.InGameUIManager.SubUIWidgetList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGameWidgetConfig> InWidgetConfigList             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         GameStatusStrList              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           InPersistentUI                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InUsedByControler              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InOberverOnly                  (Parm, ZeroConstructor, IsPlainOldData)

void UInGameUIManager::SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.InGameUIManager.SubUIWidgetList");

	UInGameUIManager_SubUIWidgetList_Params params;
	params.InWidgetConfigList = InWidgetConfigList;
	params.GameStatusStrList = GameStatusStrList;
	params.InPersistentUI = InPersistentUI;
	params.InUsedByControler = InUsedByControler;
	params.InOberverOnly = InOberverOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.InGameUIManager.HandleUIMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void UInGameUIManager::HandleUIMessage(const struct FString& UIMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.InGameUIManager.HandleUIMessage");

	UInGameUIManager_HandleUIMessage_Params params;
	params.UIMessage = UIMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.InGameUIManager.HandleDynamicCreation
// (Final, Native, Public, BlueprintCallable)

void UInGameUIManager::HandleDynamicCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.InGameUIManager.HandleDynamicCreation");

	UInGameUIManager_HandleDynamicCreation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.LoadTexture.LoadTexture2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ImagePath                      (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutWidth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ULoadTexture::STATIC_LoadTexture2D(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.LoadTexture.LoadTexture2D");

	ULoadTexture_LoadTexture2D_Params params;
	params.ImagePath = ImagePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (OutWidth != nullptr)
		*OutWidth = params.OutWidth;
	if (OutHeight != nullptr)
		*OutHeight = params.OutHeight;

	return params.ReturnValue;
}


// Function Client.LoadTexture.GetTexture2DFromDiskFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ULoadTexture::STATIC_GetTexture2DFromDiskFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.LoadTexture.GetTexture2DFromDiskFile");

	ULoadTexture_GetTexture2DFromDiskFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.LuaClassObj.SubUIWidgetList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGameWidgetConfig> InWidgetConfigList             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         GameStatusStrList              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bPersistentUI                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InStatusConcern                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDynamicWidget                 (Parm, ZeroConstructor, IsPlainOldData)

void ALuaClassObj::SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool bPersistentUI, bool InStatusConcern, bool bDynamicWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.LuaClassObj.SubUIWidgetList");

	ALuaClassObj_SubUIWidgetList_Params params;
	params.InWidgetConfigList = InWidgetConfigList;
	params.GameStatusStrList = GameStatusStrList;
	params.bPersistentUI = bPersistentUI;
	params.InStatusConcern = InStatusConcern;
	params.bDynamicWidget = bDynamicWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.LuaClassObj.SubShowHideEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         WidgetPathList                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ALuaClassObj::SubShowHideEvent(TArray<struct FString> WidgetPathList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.LuaClassObj.SubShowHideEvent");

	ALuaClassObj_SubShowHideEvent_Params params;
	params.WidgetPathList = WidgetPathList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.LuaClassObj.SubCollapseWidgetList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 RootWidgetName                 (Parm, ZeroConstructor)
// TArray<struct FString>         ChildWidgetNames               (Parm, OutParm, ZeroConstructor)

void ALuaClassObj::SubCollapseWidgetList(const struct FString& RootWidgetName, TArray<struct FString>* ChildWidgetNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.LuaClassObj.SubCollapseWidgetList");

	ALuaClassObj_SubCollapseWidgetList_Params params;
	params.RootWidgetName = RootWidgetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildWidgetNames != nullptr)
		*ChildWidgetNames = params.ChildWidgetNames;
}


// Function Client.LuaClassObj.HandleUIMessageNoFetch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void ALuaClassObj::HandleUIMessageNoFetch(const struct FString& UIMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.LuaClassObj.HandleUIMessageNoFetch");

	ALuaClassObj_HandleUIMessageNoFetch_Params params;
	params.UIMessage = UIMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.LuaClassObj.HandleUIMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void ALuaClassObj::HandleUIMessage(const struct FString& UIMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.LuaClassObj.HandleUIMessage");

	ALuaClassObj_HandleUIMessage_Params params;
	params.UIMessage = UIMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.LuaClassObj.HandleDynamicCreation
// (Final, Native, Public, BlueprintCallable)

void ALuaClassObj::HandleDynamicCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.LuaClassObj.HandleDynamicCreation");

	ALuaClassObj_HandleDynamicCreation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.LuaClassObj.GetGameStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ALuaClassObj::GetGameStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.LuaClassObj.GetGameStatus");

	ALuaClassObj_GetGameStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.SaveToPhotosAlbumEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 pathStr                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScreenshotMaker::STATIC_SaveToPhotosAlbumEx(const struct FString& pathStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.SaveToPhotosAlbumEx");

	UScreenshotMaker_SaveToPhotosAlbumEx_Params params;
	params.pathStr = pathStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.SaveToPhotosAlbum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 pathStr                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScreenshotMaker::STATIC_SaveToPhotosAlbum(const struct FString& pathStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.SaveToPhotosAlbum");

	UScreenshotMaker_SaveToPhotosAlbum_Params params;
	params.pathStr = pathStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.ReMakePicture
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 pathStr                        (Parm, ZeroConstructor)
// struct FVector4                Vector4                        (Parm, IsPlainOldData)

void UScreenshotMaker::STATIC_ReMakePicture(const struct FString& pathStr, const struct FVector4& Vector4)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.ReMakePicture");

	UScreenshotMaker_ReMakePicture_Params params;
	params.pathStr = pathStr;
	params.Vector4 = Vector4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScreenshotMaker.MakePicture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           isShowUI                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScreenshotMaker::STATIC_MakePicture(bool isShowUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.MakePicture");

	UScreenshotMaker_MakePicture_Params params;
	params.isShowUI = isShowUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.MakeBugReprotPic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           isShowUI                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScreenshotMaker::STATIC_MakeBugReprotPic(bool isShowUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.MakeBugReprotPic");

	UScreenshotMaker_MakeBugReprotPic_Params params;
	params.isShowUI = isShowUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.HasCaptured
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 pathStr                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScreenshotMaker::STATIC_HasCaptured(const struct FString& pathStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.HasCaptured");

	UScreenshotMaker_HasCaptured_Params params;
	params.pathStr = pathStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.GetSaveStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScreenshotMaker::STATIC_GetSaveStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.GetSaveStatus");

	UScreenshotMaker_GetSaveStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.WechatShareWithUrlInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _url                           (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_WechatShareWithUrlInfo(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatShareWithUrlInfo");

	UScriptHelperClient_WechatShareWithUrlInfo_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgPath = _imgPath;
	params._url = _url;
	params._shareScene = _shareScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatShareWithPhoto
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _mediaTagName                  (Parm, ZeroConstructor)
// struct FString                 _messageExt                    (Parm, ZeroConstructor)
// struct FString                 _messageAction                 (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_WechatShareWithPhoto(const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, const struct FString& _messageAction, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatShareWithPhoto");

	UScriptHelperClient_WechatShareWithPhoto_Params params;
	params._imgPath = _imgPath;
	params._mediaTagName = _mediaTagName;
	params._messageExt = _messageExt;
	params._messageAction = _messageAction;
	params._shareScene = _shareScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WeChatShareWithMiniApp
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _webpageUrl                    (Parm, ZeroConstructor)
// struct FString                 _userName                      (Parm, ZeroConstructor)
// struct FString                 _path                          (Parm, ZeroConstructor)
// struct FString                 _messageExt                    (Parm, ZeroConstructor)
// struct FString                 _messageAction                 (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_WeChatShareWithMiniApp(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _webpageUrl, const struct FString& _userName, const struct FString& _path, const struct FString& _messageExt, const struct FString& _messageAction, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WeChatShareWithMiniApp");

	UScriptHelperClient_WeChatShareWithMiniApp_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgPath = _imgPath;
	params._webpageUrl = _webpageUrl;
	params._userName = _userName;
	params._path = _path;
	params._messageExt = _messageExt;
	params._messageAction = _messageAction;
	params._shareScene = _shareScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatShareToFriend
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 Desc                           (Parm, ZeroConstructor)
// struct FString                 mediaId                        (Parm, ZeroConstructor)
// struct FString                 messageExt                     (Parm, ZeroConstructor)
// struct FString                 mediaTagName                   (Parm, ZeroConstructor)
// struct FString                 msdkExtInfo                    (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_WechatShareToFriend(const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& mediaId, const struct FString& messageExt, const struct FString& mediaTagName, const struct FString& msdkExtInfo, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatShareToFriend");

	UScriptHelperClient_WechatShareToFriend_Params params;
	params.OpenID = OpenID;
	params.Title = Title;
	params.Desc = Desc;
	params.mediaId = mediaId;
	params.messageExt = messageExt;
	params.mediaTagName = mediaTagName;
	params.msdkExtInfo = msdkExtInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatShare
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _mediaTagName                  (Parm, ZeroConstructor)
// struct FString                 _messageExt                    (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_WechatShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatShare");

	UScriptHelperClient_WechatShare_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgPath = _imgPath;
	params._mediaTagName = _mediaTagName;
	params._messageExt = _messageExt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatQueryGroup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 unionId                        (Parm, ZeroConstructor)
// struct FString                 OpenIdList                     (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_WechatQueryGroup(const struct FString& unionId, const struct FString& OpenIdList, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatQueryGroup");

	UScriptHelperClient_WechatQueryGroup_Params params;
	params.unionId = unionId;
	params.OpenIdList = OpenIdList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatJoinGroup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 unionId                        (Parm, ZeroConstructor)
// struct FString                 chatRoomNickName               (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_WechatJoinGroup(const struct FString& unionId, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatJoinGroup");

	UScriptHelperClient_WechatJoinGroup_Params params;
	params.unionId = unionId;
	params.chatRoomNickName = chatRoomNickName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatCreateGroup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 unionId                        (Parm, ZeroConstructor)
// struct FString                 chatRoomName                   (Parm, ZeroConstructor)
// struct FString                 chatRoomNickName               (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_WechatCreateGroup(const struct FString& unionId, const struct FString& chatRoomName, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatCreateGroup");

	UScriptHelperClient_WechatCreateGroup_Params params;
	params.unionId = unionId;
	params.chatRoomName = chatRoomName;
	params.chatRoomNickName = chatRoomNickName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WakeupFromSuspendSound
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::STATIC_WakeupFromSuspendSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WakeupFromSuspendSound");

	UScriptHelperClient_WakeupFromSuspendSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.TApmDataReport
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// int                            EventID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventInfo                      (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_TApmDataReport(class UGameFrontendHUD* GameFrontendHUD, int EventID, const struct FString& EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.TApmDataReport");

	UScriptHelperClient_TApmDataReport_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.EventID = EventID;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SwitchUser
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           useExternalAccount             (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_SwitchUser(bool useExternalAccount, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SwitchUser");

	UScriptHelperClient_SwitchUser_Params params;
	params.useExternalAccount = useExternalAccount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.SwitchSceneCamera
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SceneCameraName                (Parm, ZeroConstructor)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_SwitchSceneCamera(class UGameFrontendHUD* GameFrontendHUD, const struct FString& SceneCameraName, float BlendTime, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SwitchSceneCamera");

	UScriptHelperClient_SwitchSceneCamera_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.SceneCameraName = SceneCameraName;
	params.BlendTime = BlendTime;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SuspendSound
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::STATIC_SuspendSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SuspendSound");

	UScriptHelperClient_SuspendSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.StopShaderPrecompile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_StopShaderPrecompile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.StopShaderPrecompile");

	UScriptHelperClient_StopShaderPrecompile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.StartShaderPrecompile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_StartShaderPrecompile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.StartShaderPrecompile");

	UScriptHelperClient_StartShaderPrecompile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.ShutdownUnrealNetwork
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_ShutdownUnrealNetwork(class UGameFrontendHUD* GameFrontendHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ShutdownUnrealNetwork");

	UScriptHelperClient_ShutdownUnrealNetwork_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ShowScreenDebugMessage
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_ShowScreenDebugMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ShowScreenDebugMessage");

	UScriptHelperClient_ShowScreenDebugMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetWeatherInfo
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeatherID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WeatherName                    (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_SetWeatherInfo(class UGameFrontendHUD* GameFrontendHUD, int WeatherID, const struct FString& WeatherName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetWeatherInfo");

	UScriptHelperClient_SetWeatherInfo_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.WeatherID = WeatherID;
	params.WeatherName = WeatherName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetUIRectOffset
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 uirect                         (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_SetUIRectOffset(const struct FString& uirect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetUIRectOffset");

	UScriptHelperClient_SetUIRectOffset_Params params;
	params.uirect = uirect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetPlayerBaseInfo
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// uint64_t                       RoleID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FString                 HeadIconUrl                    (Parm, ZeroConstructor)
// int                            RoleLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_SetPlayerBaseInfo(class UGameFrontendHUD* GameFrontendHUD, const struct FString& OpenID, uint64_t RoleID, const struct FString& PlayerName, const struct FString& HeadIconUrl, int RoleLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetPlayerBaseInfo");

	UScriptHelperClient_SetPlayerBaseInfo_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.OpenID = OpenID;
	params.RoleID = RoleID;
	params.PlayerName = PlayerName;
	params.HeadIconUrl = HeadIconUrl;
	params.RoleLevel = RoleLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetLinkStyle
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 StyleName                      (Parm, ZeroConstructor)
// int                            FontSize                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FontPath                       (Parm, ZeroConstructor)
// struct FString                 FontColor                      (Parm, ZeroConstructor)
// bool                           ShowUnderline                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_SetLinkStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool ShowUnderline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetLinkStyle");

	UScriptHelperClient_SetLinkStyle_Params params;
	params.StyleName = StyleName;
	params.FontSize = FontSize;
	params.FontPath = FontPath;
	params.FontColor = FontColor;
	params.ShowUnderline = ShowUnderline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.SetImageStyle
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 StyleName                      (Parm, ZeroConstructor)
// int                            ImageSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ImagePath                      (Parm, ZeroConstructor)
// struct FString                 ImageColor                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_SetImageStyle(const struct FString& StyleName, int ImageSize, const struct FString& ImagePath, const struct FString& ImageColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetImageStyle");

	UScriptHelperClient_SetImageStyle_Params params;
	params.StyleName = StyleName;
	params.ImageSize = ImageSize;
	params.ImagePath = ImagePath;
	params.ImageColor = ImageColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.SetGameStatusMap
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FName, struct FString> GameStatusMap                  (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_SetGameStatusMap(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FName, struct FString> GameStatusMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetGameStatusMap");

	UScriptHelperClient_SetGameStatusMap_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.GameStatusMap = GameStatusMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetGameSrvID
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GameSrvID                      (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_SetGameSrvID(class UGameFrontendHUD* GameFrontendHUD, int GameSrvID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetGameSrvID");

	UScriptHelperClient_SetGameSrvID_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.GameSrvID = GameSrvID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetFontStyle
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 StyleName                      (Parm, ZeroConstructor)
// int                            FontSize                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FontPath                       (Parm, ZeroConstructor)
// struct FString                 FontColor                      (Parm, ZeroConstructor)
// bool                           UseShadow                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_SetFontStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool UseShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetFontStyle");

	UScriptHelperClient_SetFontStyle_Params params;
	params.StyleName = StyleName;
	params.FontSize = FontSize;
	params.FontPath = FontPath;
	params.FontColor = FontColor;
	params.UseShadow = UseShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.SendRetriveBeginnerFinisheGuideReq
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_SendRetriveBeginnerFinisheGuideReq(class UGameFrontendHUD* GameFrontendHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SendRetriveBeginnerFinisheGuideReq");

	UScriptHelperClient_SendRetriveBeginnerFinisheGuideReq_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SendRecordFinishedGuideReq
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 tipsID                         (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_SendRecordFinishedGuideReq(class UGameFrontendHUD* GameFrontendHUD, const struct FString& tipsID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SendRecordFinishedGuideReq");

	UScriptHelperClient_SendRecordFinishedGuideReq_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.tipsID = tipsID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SendLobbyChat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 gid                            (Parm, ZeroConstructor)
// struct FString                 Content                        (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_SendLobbyChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SendLobbyChat");

	UScriptHelperClient_SendLobbyChat_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.gid = gid;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SendDirtyToFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 dirtyString                    (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_SendDirtyToFilter(class UGameFrontendHUD* GameFrontendHUD, const struct FString& dirtyString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SendDirtyToFilter");

	UScriptHelperClient_SendDirtyToFilter_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.dirtyString = dirtyString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ReturnToLobby
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_ReturnToLobby(class UGameFrontendHUD* GameFrontendHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ReturnToLobby");

	UScriptHelperClient_ReturnToLobby_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ReplyInvite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 gid                            (Parm, ZeroConstructor)
// bool                           bReply                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_ReplyInvite(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, bool bReply)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ReplyInvite");

	UScriptHelperClient_ReplyInvite_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.gid = gid;
	params.bReply = bReply;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.QuitVoiceRoom
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_QuitVoiceRoom(class UGameFrontendHUD* GameFrontendHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QuitVoiceRoom");

	UScriptHelperClient_QuitVoiceRoom_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.QuitLbsVoiceRoom
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_QuitLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QuitLbsVoiceRoom");

	UScriptHelperClient_QuitLbsVoiceRoom_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.QuitFightChat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_QuitFightChat(class UGameFrontendHUD* GameFrontendHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QuitFightChat");

	UScriptHelperClient_QuitFightChat_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.QueryMyInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            channelType                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_QueryMyInfo(int channelType, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QueryMyInfo");

	UScriptHelperClient_QueryMyInfo_Params params;
	params.channelType = channelType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.QQShareWithPhotoExtra
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _extraScene                    (Parm, ZeroConstructor)
// struct FString                 _messageExt                    (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_QQShareWithPhotoExtra(const struct FString& _imgPath, const struct FString& _extraScene, const struct FString& _messageExt, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QQShareWithPhotoExtra");

	UScriptHelperClient_QQShareWithPhotoExtra_Params params;
	params._imgPath = _imgPath;
	params._extraScene = _extraScene;
	params._messageExt = _messageExt;
	params._shareScene = _shareScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.QQShareWithPhoto
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_QQShareWithPhoto(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QQShareWithPhoto");

	UScriptHelperClient_QQShareWithPhoto_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgPath = _imgPath;
	params._shareScene = _shareScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.QQShareToFriend
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            act                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 Desc                           (Parm, ZeroConstructor)
// struct FString                 targetUrl                      (Parm, ZeroConstructor)
// struct FString                 imgUrl                         (Parm, ZeroConstructor)
// struct FString                 previewText                    (Parm, ZeroConstructor)
// struct FString                 gameTag                        (Parm, ZeroConstructor)
// struct FString                 msdkExtInfo                    (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_QQShareToFriend(int act, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& targetUrl, const struct FString& imgUrl, const struct FString& previewText, const struct FString& gameTag, const struct FString& msdkExtInfo, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QQShareToFriend");

	UScriptHelperClient_QQShareToFriend_Params params;
	params.act = act;
	params.OpenID = OpenID;
	params.Title = Title;
	params.Desc = Desc;
	params.targetUrl = targetUrl;
	params.imgUrl = imgUrl;
	params.previewText = previewText;
	params.gameTag = gameTag;
	params.msdkExtInfo = msdkExtInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.QQShare
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _imgUrl                        (Parm, ZeroConstructor)
// struct FString                 _url                           (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_QQShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _imgUrl, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QQShare");

	UScriptHelperClient_QQShare_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgPath = _imgPath;
	params._imgUrl = _imgUrl;
	params._url = _url;
	params._shareScene = _shareScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.QQAddFriend
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 Desc                           (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_QQAddFriend(const struct FString& OpenID, const struct FString& Desc, const struct FString& Message, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QQAddFriend");

	UScriptHelperClient_QQAddFriend_Params params;
	params.OpenID = OpenID;
	params.Desc = Desc;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.OpenURL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// int                            Dir                            (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_OpenURL(const struct FString& URL, int Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OpenURL");

	UScriptHelperClient_OpenURL_Params params;
	params.URL = URL;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OnNotifyFightFriendChat
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FFightFriendChat        Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UScriptHelperClient::STATIC_OnNotifyFightFriendChat(class UGameFrontendHUD* GameFrontendHUD, const struct FFightFriendChat& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnNotifyFightFriendChat");

	UScriptHelperClient_OnNotifyFightFriendChat_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OnInviteNextBattle
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 gid                            (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_OnInviteNextBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnInviteNextBattle");

	UScriptHelperClient_OnInviteNextBattle_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.gid = gid;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OnFilterFinish
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 filterText                     (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_OnFilterFinish(class UGameFrontendHUD* GameFrontendHUD, const struct FString& filterText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnFilterFinish");

	UScriptHelperClient_OnFilterFinish_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.filterText = filterText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OnBattleResult
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleResultData       BattleResultData               (Parm)

void UScriptHelperClient::STATIC_OnBattleResult(class UGameFrontendHUD* GameFrontendHUD, const struct FBattleResultData& BattleResultData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnBattleResult");

	UScriptHelperClient_OnBattleResult_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.BattleResultData = BattleResultData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.NotifyBeginnerFinishedGuideUpdated
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           GuideSwitch                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPlayerFinishedGuide> finished_guide                 (ConstParm, Parm, ZeroConstructor)
// int                            player_level                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            player_exp_type                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_NotifyBeginnerFinishedGuideUpdated(class UGameFrontendHUD* GameFrontendHUD, bool GuideSwitch, TArray<struct FPlayerFinishedGuide> finished_guide, int player_level, int player_exp_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.NotifyBeginnerFinishedGuideUpdated");

	UScriptHelperClient_NotifyBeginnerFinishedGuideUpdated_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.GuideSwitch = GuideSwitch;
	params.finished_guide = finished_guide;
	params.player_level = player_level;
	params.player_exp_type = player_exp_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.MD5HashAnsiString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Str                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_MD5HashAnsiString(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.MD5HashAnsiString");

	UScriptHelperClient_MD5HashAnsiString_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.Logout
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_Logout(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.Logout");

	UScriptHelperClient_Logout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.Login
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_Login(uint32_t Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.Login");

	UScriptHelperClient_Login_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.LoadLuaFile
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_LoadLuaFile(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.LoadLuaFile");

	UScriptHelperClient_LoadLuaFile_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.JoinVoiceRoom
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 roomName                       (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_JoinVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& roomName, const struct FString& userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.JoinVoiceRoom");

	UScriptHelperClient_JoinVoiceRoom_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.roomName = roomName;
	params.userId = userId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.JoinLbsVoiceRoom
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 lbsRoomName                    (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_JoinLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& lbsRoomName, const struct FString& userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.JoinLbsVoiceRoom");

	UScriptHelperClient_JoinLbsVoiceRoom_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.lbsRoomName = lbsRoomName;
	params.userId = userId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.IsIOSCheck
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_IsIOSCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsIOSCheck");

	UScriptHelperClient_IsIOSCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsInstallQQ
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_IsInstallQQ(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsInstallQQ");

	UScriptHelperClient_IsInstallQQ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsForCE
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_IsForCE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsForCE");

	UScriptHelperClient_IsForCE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsEmulatorWhenInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_IsEmulatorWhenInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsEmulatorWhenInit");

	UScriptHelperClient_IsEmulatorWhenInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsEmulator
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_IsEmulator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsEmulator");

	UScriptHelperClient_IsEmulator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsConnected
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_IsConnected(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsConnected");

	UScriptHelperClient_IsConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.InitLoginAccount
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// uint64_t                       AccUin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AccPswd                        (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_InitLoginAccount(uint64_t AccUin, const struct FString& AccPswd, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.InitLoginAccount");

	UScriptHelperClient_InitLoginAccount_Params params;
	params.AccUin = AccUin;
	params.AccPswd = AccPswd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.HasActiveWifi
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_HasActiveWifi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.HasActiveWifi");

	UScriptHelperClient_HasActiveWifi_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GotoPlatformAppraise
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::STATIC_GotoPlatformAppraise()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GotoPlatformAppraise");

	UScriptHelperClient_GotoPlatformAppraise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GetUnrealNetworkStatus
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetUnrealNetworkStatus(class UGameFrontendHUD* GameFrontendHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetUnrealNetworkStatus");

	UScriptHelperClient_GetUnrealNetworkStatus_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetUIRectOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetUIRectOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetUIRectOffset");

	UScriptHelperClient_GetUIRectOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetTableData_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::STATIC_GetTableData_LuaState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetTableData_LuaState");

	UScriptHelperClient_GetTableData_LuaState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetTableCount
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 TableName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::STATIC_GetTableCount(const struct FString& TableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetTableCount");

	UScriptHelperClient_GetTableCount_Params params;
	params.TableName = TableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetTable_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::STATIC_GetTable_LuaState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetTable_LuaState");

	UScriptHelperClient_GetTable_LuaState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetShaderPrecompileProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::STATIC_GetShaderPrecompileProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetShaderPrecompileProgress");

	UScriptHelperClient_GetShaderPrecompileProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetScreenWidth
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::STATIC_GetScreenWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetScreenWidth");

	UScriptHelperClient_GetScreenWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetScreenHight
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::STATIC_GetScreenHight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetScreenHight");

	UScriptHelperClient_GetScreenHight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetScreenDensity
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::STATIC_GetScreenDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetScreenDensity");

	UScriptHelperClient_GetScreenDensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetRegisterChannelID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetRegisterChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetRegisterChannelID");

	UScriptHelperClient_GetRegisterChannelID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetPhoneType
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetPhoneType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetPhoneType");

	UScriptHelperClient_GetPhoneType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetPhoneDeviceID
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetPhoneDeviceID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetPhoneDeviceID");

	UScriptHelperClient_GetPhoneDeviceID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetPfKey
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetPfKey(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetPfKey");

	UScriptHelperClient_GetPfKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetPf
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetPf(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetPf");

	UScriptHelperClient_GetPf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetPayToken
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetPayToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetPayToken");

	UScriptHelperClient_GetPayToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetOSVersion
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetOSVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetOSVersion");

	UScriptHelperClient_GetOSVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetNearbyPersonInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_GetNearbyPersonInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetNearbyPersonInfo");

	UScriptHelperClient_GetNearbyPersonInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.GetMemoryStats_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::STATIC_GetMemoryStats_LuaState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetMemoryStats_LuaState");

	UScriptHelperClient_GetMemoryStats_LuaState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetMemorySize
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::STATIC_GetMemorySize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetMemorySize");

	UScriptHelperClient_GetMemorySize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetLoginChannel
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::STATIC_GetLoginChannel(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetLoginChannel");

	UScriptHelperClient_GetLoginChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetLocationInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_GetLocationInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetLocationInfo");

	UScriptHelperClient_GetLocationInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.GetIpAddr
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetIpAddr()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetIpAddr");

	UScriptHelperClient_GetIpAddr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetInstallChannelID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetInstallChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetInstallChannelID");

	UScriptHelperClient_GetInstallChannelID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetGroupInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SnsAction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGroupInfoWrapper       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGroupInfoWrapper UScriptHelperClient::STATIC_GetGroupInfo(int SnsAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetGroupInfo");

	UScriptHelperClient_GetGroupInfo_Params params;
	params.SnsAction = SnsAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetGPSCity
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetGPSCity(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetGPSCity");

	UScriptHelperClient_GetGPSCity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetGLVersion
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetGLVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetGLVersion");

	UScriptHelperClient_GetGLVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetGLType
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetGLType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetGLType");

	UScriptHelperClient_GetGLType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetGameStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetGameStatus(class UGameFrontendHUD* GameFrontendHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetGameStatus");

	UScriptHelperClient_GetGameStatus_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetFPS
// (Final, Native, Static, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UScriptHelperClient::STATIC_GetFPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetFPS");

	UScriptHelperClient_GetFPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetEncodeUrl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetEncodeUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetEncodeUrl");

	UScriptHelperClient_GetEncodeUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetEmulatorName
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetEmulatorName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetEmulatorName");

	UScriptHelperClient_GetEmulatorName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetDSVersion
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetDSVersion(class UGameFrontendHUD* GameFrontendHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetDSVersion");

	UScriptHelperClient_GetDSVersion_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetDevicePlatformName
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetDevicePlatformName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetDevicePlatformName");

	UScriptHelperClient_GetDevicePlatformName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetCpuType
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetCpuType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetCpuType");

	UScriptHelperClient_GetCpuType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetConnectIPURL
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 domanName                      (Parm, ZeroConstructor)
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 httpDNSUrl                     (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_GetConnectIPURL(const struct FString& domanName, const struct FString& URL, const struct FString& httpDNSUrl, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetConnectIPURL");

	UScriptHelperClient_GetConnectIPURL_Params params;
	params.domanName = domanName;
	params.URL = URL;
	params.httpDNSUrl = httpDNSUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.GetAppVersion
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetAppVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetAppVersion");

	UScriptHelperClient_GetAppVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetAppid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetAppid(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetAppid");

	UScriptHelperClient_GetAppid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetAccessToken
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_GetAccessToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetAccessToken");

	UScriptHelperClient_GetAccessToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GenerateQRImage
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Tag                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Size                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Content                        (Parm, ZeroConstructor)
// struct FString                 logoPath                       (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_GenerateQRImage(int Tag, int Size, const struct FString& Content, const struct FString& logoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GenerateQRImage");

	UScriptHelperClient_GenerateQRImage_Params params;
	params.Tag = Tag;
	params.Size = Size;
	params.Content = Content;
	params.logoPath = logoPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.FetchNearByPersonInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FNearByPersonInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FNearByPersonInfo> UScriptHelperClient::STATIC_FetchNearByPersonInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.FetchNearByPersonInfo");

	UScriptHelperClient_FetchNearByPersonInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.ExitGame
// (Final, Native, Static, Public)

void UScriptHelperClient::STATIC_ExitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ExitGame");

	UScriptHelperClient_ExitGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.EnterFightChat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 gid                            (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_EnterFightChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.EnterFightChat");

	UScriptHelperClient_EnterFightChat_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.gid = gid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.EnterBattleForClientOnlyMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HostnameOrIP                   (Parm, ZeroConstructor)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// int                            GameId                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_EnterBattleForClientOnlyMode(class UGameFrontendHUD* GameFrontendHUD, const struct FString& HostnameOrIP, int Port, const struct FString& PlayerName, int GameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.EnterBattleForClientOnlyMode");

	UScriptHelperClient_EnterBattleForClientOnlyMode_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.HostnameOrIP = HostnameOrIP;
	params.Port = Port;
	params.PlayerName = PlayerName;
	params.GameId = GameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.EnterBattle
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HostnameOrIP                   (Parm, ZeroConstructor)
// uint32_t                       Port                           (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FString                 PacketKey                      (Parm, ZeroConstructor)
// uint64_t                       GameId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsObserver                     (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_EnterBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& HostnameOrIP, uint32_t Port, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& PacketKey, uint64_t GameId, bool IsObserver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.EnterBattle");

	UScriptHelperClient_EnterBattle_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.HostnameOrIP = HostnameOrIP;
	params.Port = Port;
	params.PlayerKey = PlayerKey;
	params.PlayerName = PlayerName;
	params.PacketKey = PacketKey;
	params.GameId = GameId;
	params.IsObserver = IsObserver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.EncryptUID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sUid                           (Parm, ZeroConstructor)
// struct FString                 sKey                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_EncryptUID(const struct FString& sUid, const struct FString& sKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.EncryptUID");

	UScriptHelperClient_EncryptUID_Params params;
	params.sUid = sUid;
	params.sKey = sKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.EnableDeathPlayback
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlush                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_EnableDeathPlayback(class UGameFrontendHUD* GameFrontendHUD, bool bEnable, bool bFlush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.EnableDeathPlayback");

	UScriptHelperClient_EnableDeathPlayback_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.bEnable = bEnable;
	params.bFlush = bFlush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.Disconnect
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_Disconnect(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.Disconnect");

	UScriptHelperClient_Disconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.DeleteFilesFromImageDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            maxnum                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::STATIC_DeleteFilesFromImageDownload(int maxnum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.DeleteFilesFromImageDownload");

	UScriptHelperClient_DeleteFilesFromImageDownload_Params params;
	params.maxnum = maxnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.ConnectToURL
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 URL                            (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_ConnectToURL(const struct FString& URL, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ConnectToURL");

	UScriptHelperClient_ConnectToURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.ClipboardPaste
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::STATIC_ClipboardPaste()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ClipboardPaste");

	UScriptHelperClient_ClipboardPaste_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.ClipBoardCopy
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_ClipBoardCopy(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ClipBoardCopy");

	UScriptHelperClient_ClipBoardCopy_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ClientEnterWarMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_ClientEnterWarMode(class UGameFrontendHUD* GameFrontendHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ClientEnterWarMode");

	UScriptHelperClient_ClientEnterWarMode_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.CleanRecord
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_CleanRecord(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.CleanRecord");

	UScriptHelperClient_CleanRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.CleanLocation
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::STATIC_CleanLocation(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.CleanLocation");

	UScriptHelperClient_CleanLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.CallIngameFirstTimeTips
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TableName                      (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UScriptHelperClient::STATIC_CallIngameFirstTimeTips(class UGameFrontendHUD* GameFrontendHUD, const struct FString& TableName, const struct FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.CallIngameFirstTimeTips");

	UScriptHelperClient_CallIngameFirstTimeTips_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.TableName = TableName;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.TssManager.SendSkdData_LuaState
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTssManager::SendSkdData_LuaState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TssManager.SendSkdData_LuaState");

	UTssManager_SendSkdData_LuaState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TssManager.OnRecvData_LuaState
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTssManager::OnRecvData_LuaState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TssManager.OnRecvData_LuaState");

	UTssManager_OnRecvData_LuaState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.UTRichTextBlock.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UUTRichTextBlock::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.UTRichTextBlock.SetText");

	UUTRichTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.UTRichTextBlock.SetGameFrontendHUD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        InHUD                          (Parm, ZeroConstructor, IsPlainOldData)

void UUTRichTextBlock::SetGameFrontendHUD(class UGameFrontendHUD* InHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.UTRichTextBlock.SetGameFrontendHUD");

	UUTRichTextBlock_SetGameFrontendHUD_Params params;
	params.InHUD = InHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.UTRichTextBlock.GetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUTRichTextBlock::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.UTRichTextBlock.GetText");

	UUTRichTextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.TestFunctionNOParam
// (Final, Native, Public, BlueprintCallable)

void ATestHUD::TestFunctionNOParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.TestFunctionNOParam");

	ATestHUD_TestFunctionNOParam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Client.TestHUD.TestFunctionBP_LUA
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::TestFunctionBP_LUA()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.TestFunctionBP_LUA");

	ATestHUD_TestFunctionBP_LUA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.TestFunctionBP
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::TestFunctionBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.TestFunctionBP");

	ATestHUD_TestFunctionBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_LUA_Call
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_LUA_Call()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_LUA_Call");

	ATestHUD_Function_LUA_Call_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_Lua
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_Lua()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_Lua");

	ATestHUD_Function_Lua_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_CPlus_Call
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_CPlus_Call()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_CPlus_Call");

	ATestHUD_Function_CPlus_Call_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_CPlus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_CPlus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_CPlus");

	ATestHUD_Function_CPlus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP_CPP
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP_CPP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP_CPP");

	ATestHUD_Function_BP_CPP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP_Call_LUA
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP_Call_LUA()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP_Call_LUA");

	ATestHUD_Function_BP_Call_LUA_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP_Call_CPP
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP_Call_CPP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP_Call_CPP");

	ATestHUD_Function_BP_Call_CPP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP_Call_CPlus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP_Call_CPlus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP_Call_CPlus");

	ATestHUD_Function_BP_Call_CPlus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP_Call
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP_Call()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP_Call");

	ATestHUD_Function_BP_Call_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP");

	ATestHUD_Function_BP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
