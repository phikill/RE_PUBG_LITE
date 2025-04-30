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

// Function Client.BusinessHelper.UIGetResWithPath
struct UBusinessHelper_UIGetResWithPath_Params
{
	struct FString                                     DesManagerName;                                           // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.UIGetLuaManagerByName
struct UBusinessHelper_UIGetLuaManagerByName_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     InManagerName;                                            // (Parm, ZeroConstructor)
	class ALuaClassObj*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.UIGetLuaManager
struct UBusinessHelper_UIGetLuaManager_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ALuaClassObj*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetWidgetByName
struct UBusinessHelper_GetWidgetByName_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     InManagerName;                                            // (Parm, ZeroConstructor)
	struct FString                                     InWidgtName;                                              // (Parm, ZeroConstructor)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.BusinessHelper.GetTime
struct UBusinessHelper_GetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetMobileBasePath
struct UBusinessHelper_GetMobileBasePath_Params
{
	struct FString                                     InPath;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetDataTable
struct UBusinessHelper_GetDataTable_Params
{
	struct FString                                     TableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetCurrentNetworkState
struct UBusinessHelper_GetCurrentNetworkState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetChildByName
struct UBusinessHelper_GetChildByName_Params
{
	class UUserWidget*                                 pParent;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.BusinessHelper.BroadCastMSG
struct UBusinessHelper_BroadCastMSG_Params
{
	class UFrontendHUD*                                FrontendHUD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DesManagerName;                                           // (Parm, ZeroConstructor)
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Client.GameBackendUtils.GetTableManager
struct UGameBackendUtils_GetTableManager_Params
{
	class UUAETableManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendUtils.GetLoadedClassManager
struct UGameBackendUtils_GetLoadedClassManager_Params
{
	class UUAELoadedClassManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendHUD.GetUtils
struct UGameBackendHUD_GetUtils_Params
{
	class UGameBackendUtils*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendHUD.GetInstance
struct UGameBackendHUD_GetInstance_Params
{
	class UGameBackendHUD*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendHUD.GetFirstGameFrontendHUD
struct UGameBackendHUD_GetFirstGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBusinessManager.GetWidget
struct UGameBusinessManager_GetWidget_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.GameBusinessManager.GetLuaObject
struct UGameBusinessManager_GetLuaObject_Params
{
	class ALuaClassObj*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBusinessManager.GetGameFrontendHUD
struct UGameBusinessManager_GetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.UnRegisterUIShowHideEventDelegate
struct UGameFrontendHUD_UnRegisterUIShowHideEventDelegate_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.ShutdownUnrealNetwork
struct UGameFrontendHUD_ShutdownUnrealNetwork_Params
{
};

// Function Client.GameFrontendHUD.SetGameStatusMap
struct UGameFrontendHUD_SetGameStatusMap_Params
{
	TMap<struct FName, struct FString>                 InGameStatusMap;                                          // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.ResetUserSettings
struct UGameFrontendHUD_ResetUserSettings_Params
{
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Int
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Int_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Float
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Float_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Enum
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Enum_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Bool
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Bool_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUIShowHideEventDelegate
struct UGameFrontendHUD_RegisterUIShowHideEventDelegate_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.OnWebviewNotify
struct UGameFrontendHUD_OnWebviewNotify_Params
{
	struct FWebviewInfoWrapper                         webviewinfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnQuickLoginNotify
struct UGameFrontendHUD_OnQuickLoginNotify_Params
{
	struct FWakeupInfoWrapper                          wakeupinfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnQueryMyInfoNotify
struct UGameFrontendHUD_OnQueryMyInfoNotify_Params
{
};

// Function Client.GameFrontendHUD.OnNearByPersonInfoNotify
struct UGameFrontendHUD_OnNearByPersonInfoNotify_Params
{
};

// Function Client.GameFrontendHUD.OnGroupNotify
struct UGameFrontendHUD_OnGroupNotify_Params
{
	struct FGroupInfoWrapper                           groupInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnGenQRImgNotify
struct UGameFrontendHUD_OnGenQRImgNotify_Params
{
	int                                                Ret;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     imgPath;                                                  // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.GetUserSettings
struct UGameFrontendHUD_GetUserSettings_Params
{
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetLuaStateWrapper
struct UGameFrontendHUD_GetLuaStateWrapper_Params
{
	class ULuaStateWrapper*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetGVoiceInterface
struct UGameFrontendHUD_GetGVoiceInterface_Params
{
	class UGVoiceInterface*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetBattleIDHexStr
struct UGameFrontendHUD_GetBattleIDHexStr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GameFrontendHUD.FinishModifyUserSettings
struct UGameFrontendHUD_FinishModifyUserSettings_Params
{
};

// Function Client.GameFrontendHUD.CallGlobalScriptFunction
struct UGameFrontendHUD_CallGlobalScriptFunction_Params
{
	struct FString                                     InFunctionName;                                           // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.BeginModifyUserSettings
struct UGameFrontendHUD_BeginModifyUserSettings_Params
{
};

// Function Client.GVoiceInterface.UploadRecordFile
struct UGVoiceInterface_UploadRecordFile_Params
{
};

// Function Client.GVoiceInterface.TestGVoice
struct UGVoiceInterface_TestGVoice_Params
{
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.TeamSpeakerEnable
struct UGVoiceInterface_TeamSpeakerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.TeamMicphoneEnable
struct UGVoiceInterface_TeamMicphoneEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.StopRecord
struct UGVoiceInterface_StopRecord_Params
{
};

// Function Client.GVoiceInterface.StopPlayRecordFile
struct UGVoiceInterface_StopPlayRecordFile_Params
{
};

// Function Client.GVoiceInterface.StartRecord
struct UGVoiceInterface_StartRecord_Params
{
};

// Function Client.GVoiceInterface.SpeechToText
struct UGVoiceInterface_SpeechToText_Params
{
};

// Function Client.GVoiceInterface.ShowOpenSpeakerAtFirstMsg
struct UGVoiceInterface_ShowOpenSpeakerAtFirstMsg_Params
{
};

// Function Client.GVoiceInterface.SetVoiceMode
struct UGVoiceInterface_SetVoiceMode_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetVadSensitive
struct UGVoiceInterface_SetVadSensitive_Params
{
	int                                                VadSensitive;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetSpeakerVolume
struct UGVoiceInterface_SetSpeakerVolume_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetSpeakerStatus
struct UGVoiceInterface_SetSpeakerStatus_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetMicphoneVolume
struct UGVoiceInterface_SetMicphoneVolume_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetMicphoneStatus
struct UGVoiceInterface_SetMicphoneStatus_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetLbsVoiceRadius
struct UGVoiceInterface_SetLbsVoiceRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetLbsRoomEnableStatus
struct UGVoiceInterface_SetLbsRoomEnableStatus_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetGameFrontendHUD
struct UGVoiceInterface_SetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            InHUD;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetCurrentDownloadFieldID
struct UGVoiceInterface_SetCurrentDownloadFieldID_Params
{
	struct FString                                     filedId;                                                  // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.ResetWhenLogOut
struct UGVoiceInterface_ResetWhenLogOut_Params
{
};

// Function Client.GVoiceInterface.ReactiveLbsStatus
struct UGVoiceInterface_ReactiveLbsStatus_Params
{
};

// Function Client.GVoiceInterface.QuitRoom
struct UGVoiceInterface_QuitRoom_Params
{
};

// Function Client.GVoiceInterface.PlayRecordFile
struct UGVoiceInterface_PlayRecordFile_Params
{
};

// Function Client.GVoiceInterface.OpenTeamSpeakerOnly
struct UGVoiceInterface_OpenTeamSpeakerOnly_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenTeamMicphoneOnly
struct UGVoiceInterface_OpenTeamMicphoneOnly_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenSpeaker
struct UGVoiceInterface_OpenSpeaker_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenMicPtt
struct UGVoiceInterface_OpenMicPtt_Params
{
};

// Function Client.GVoiceInterface.OpenMicAndSpeakerAfterJoinLbsRoom
struct UGVoiceInterface_OpenMicAndSpeakerAfterJoinLbsRoom_Params
{
};

// Function Client.GVoiceInterface.OpenMic
struct UGVoiceInterface_OpenMic_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenAllSpeaker
struct UGVoiceInterface_OpenAllSpeaker_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenAllMicphone
struct UGVoiceInterface_OpenAllMicphone_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OnRoomTypeChanged
struct UGVoiceInterface_OnRoomTypeChanged_Params
{
	struct FString                                     itemtext;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.LbsSpeakerEnable
struct UGVoiceInterface_LbsSpeakerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.LbsMicphoneEnable
struct UGVoiceInterface_LbsMicphoneEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.JoinRoom
struct UGVoiceInterface_JoinRoom_Params
{
	struct FString                                     room;                                                     // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.JoinLbsRoom
struct UGVoiceInterface_JoinLbsRoom_Params
{
	struct FString                                     lbsRoom;                                                  // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.InitGVoiceComponent
struct UGVoiceInterface_InitGVoiceComponent_Params
{
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.HaveTeamRoom
struct UGVoiceInterface_HaveTeamRoom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.HaveLbsRoom
struct UGVoiceInterface_HaveLbsRoom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.GetVoiceLength
struct UGVoiceInterface_GetVoiceLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.GetVadSensitive
struct UGVoiceInterface_GetVadSensitive_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.GetAuthKey
struct UGVoiceInterface_GetAuthKey_Params
{
};

// Function Client.GVoiceInterface.ForbidTeammateVoiceById
struct UGVoiceInterface_ForbidTeammateVoiceById_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.DownloadRecordFile
struct UGVoiceInterface_DownloadRecordFile_Params
{
};

// Function Client.GVoiceInterface.CloseSpeaker
struct UGVoiceInterface_CloseSpeaker_Params
{
};

// Function Client.GVoiceInterface.CloseMicPtt
struct UGVoiceInterface_CloseMicPtt_Params
{
};

// Function Client.GVoiceInterface.CloseMic
struct UGVoiceInterface_CloseMic_Params
{
};

// Function Client.GVoiceInterface.CloseAllSpeaker
struct UGVoiceInterface_CloseAllSpeaker_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.CloseAllMicphone
struct UGVoiceInterface_CloseAllMicphone_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.HotUpdater.OnGetVersionData
struct UHotUpdater_OnGetVersionData_Params
{
	bool                                               Successful;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FileURL;                                                  // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.HotUpdater.OnDownloadedOneFile
struct UHotUpdater_OnDownloadedOneFile_Params
{
	bool                                               Successful;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FileURL;                                                  // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.ImageDownloader.Start
struct UImageDownloader_Start_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ImageDownloader.SetSubDirTime
struct UImageDownloader_SetSubDirTime_Params
{
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ImageDownloader.MakeDownloader
struct UImageDownloader_MakeDownloader_Params
{
	class UImageDownloader*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.InGameUIManager.SubUIWidgetList
struct UInGameUIManager_SubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             GameStatusStrList;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               InPersistentUI;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InUsedByControler;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InOberverOnly;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.InGameUIManager.HandleUIMessage
struct UInGameUIManager_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function Client.InGameUIManager.HandleDynamicCreation
struct UInGameUIManager_HandleDynamicCreation_Params
{
};

// Function Client.LoadTexture.LoadTexture2D
struct ULoadTexture_LoadTexture2D_Params
{
	struct FString                                     ImagePath;                                                // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutWidth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LoadTexture.GetTexture2DFromDiskFile
struct ULoadTexture_GetTexture2DFromDiskFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaClassObj.SubUIWidgetList
struct ALuaClassObj_SubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             GameStatusStrList;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bPersistentUI;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InStatusConcern;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaClassObj.SubShowHideEvent
struct ALuaClassObj_SubShowHideEvent_Params
{
	TArray<struct FString>                             WidgetPathList;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.LuaClassObj.SubCollapseWidgetList
struct ALuaClassObj_SubCollapseWidgetList_Params
{
	struct FString                                     RootWidgetName;                                           // (Parm, ZeroConstructor)
	TArray<struct FString>                             ChildWidgetNames;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Client.LuaClassObj.HandleUIMessageNoFetch
struct ALuaClassObj_HandleUIMessageNoFetch_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function Client.LuaClassObj.HandleUIMessage
struct ALuaClassObj_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function Client.LuaClassObj.HandleDynamicCreation
struct ALuaClassObj_HandleDynamicCreation_Params
{
};

// Function Client.LuaClassObj.GetGameStatus
struct ALuaClassObj_GetGameStatus_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.SaveToPhotosAlbumEx
struct UScreenshotMaker_SaveToPhotosAlbumEx_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.SaveToPhotosAlbum
struct UScreenshotMaker_SaveToPhotosAlbum_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.ReMakePicture
struct UScreenshotMaker_ReMakePicture_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	struct FVector4                                    Vector4;                                                  // (Parm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.MakePicture
struct UScreenshotMaker_MakePicture_Params
{
	bool                                               isShowUI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.MakeBugReprotPic
struct UScreenshotMaker_MakeBugReprotPic_Params
{
	bool                                               isShowUI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.HasCaptured
struct UScreenshotMaker_HasCaptured_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.GetSaveStatus
struct UScreenshotMaker_GetSaveStatus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WechatShareWithUrlInfo
struct UScriptHelperClient_WechatShareWithUrlInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _url;                                                     // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WechatShareWithPhoto
struct UScriptHelperClient_WechatShareWithPhoto_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _mediaTagName;                                            // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
	struct FString                                     _messageAction;                                           // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WeChatShareWithMiniApp
struct UScriptHelperClient_WeChatShareWithMiniApp_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _webpageUrl;                                              // (Parm, ZeroConstructor)
	struct FString                                     _userName;                                                // (Parm, ZeroConstructor)
	struct FString                                     _path;                                                    // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
	struct FString                                     _messageAction;                                           // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WechatShareToFriend
struct UScriptHelperClient_WechatShareToFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
	struct FString                                     mediaId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     messageExt;                                               // (Parm, ZeroConstructor)
	struct FString                                     mediaTagName;                                             // (Parm, ZeroConstructor)
	struct FString                                     msdkExtInfo;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatShare
struct UScriptHelperClient_WechatShare_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _mediaTagName;                                            // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatQueryGroup
struct UScriptHelperClient_WechatQueryGroup_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     unionId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     OpenIdList;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatJoinGroup
struct UScriptHelperClient_WechatJoinGroup_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     unionId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     chatRoomNickName;                                         // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatCreateGroup
struct UScriptHelperClient_WechatCreateGroup_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     unionId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     chatRoomName;                                             // (Parm, ZeroConstructor)
	struct FString                                     chatRoomNickName;                                         // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WakeupFromSuspendSound
struct UScriptHelperClient_WakeupFromSuspendSound_Params
{
};

// Function Client.ScriptHelperClient.TApmDataReport
struct UScriptHelperClient_TApmDataReport_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventInfo;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SwitchUser
struct UScriptHelperClient_SwitchUser_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               useExternalAccount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SwitchSceneCamera
struct UScriptHelperClient_SwitchSceneCamera_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SceneCameraName;                                          // (Parm, ZeroConstructor)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SuspendSound
struct UScriptHelperClient_SuspendSound_Params
{
};

// Function Client.ScriptHelperClient.StopShaderPrecompile
struct UScriptHelperClient_StopShaderPrecompile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StartShaderPrecompile
struct UScriptHelperClient_StartShaderPrecompile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ShutdownUnrealNetwork
struct UScriptHelperClient_ShutdownUnrealNetwork_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ShowScreenDebugMessage
struct UScriptHelperClient_ShowScreenDebugMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetWeatherInfo
struct UScriptHelperClient_SetWeatherInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeatherID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeatherName;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetUIRectOffset
struct UScriptHelperClient_SetUIRectOffset_Params
{
	struct FString                                     uirect;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetPlayerBaseInfo
struct UScriptHelperClient_SetPlayerBaseInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	uint64_t                                           RoleID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     HeadIconUrl;                                              // (Parm, ZeroConstructor)
	int                                                RoleLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetLinkStyle
struct UScriptHelperClient_SetLinkStyle_Params
{
	struct FString                                     StyleName;                                                // (Parm, ZeroConstructor)
	int                                                FontSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FontPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FontColor;                                                // (Parm, ZeroConstructor)
	bool                                               ShowUnderline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetImageStyle
struct UScriptHelperClient_SetImageStyle_Params
{
	struct FString                                     StyleName;                                                // (Parm, ZeroConstructor)
	int                                                ImageSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ImagePath;                                                // (Parm, ZeroConstructor)
	struct FString                                     ImageColor;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetGameStatusMap
struct UScriptHelperClient_SetGameStatusMap_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FString>                 GameStatusMap;                                            // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetGameSrvID
struct UScriptHelperClient_SetGameSrvID_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameSrvID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetFontStyle
struct UScriptHelperClient_SetFontStyle_Params
{
	struct FString                                     StyleName;                                                // (Parm, ZeroConstructor)
	int                                                FontSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FontPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FontColor;                                                // (Parm, ZeroConstructor)
	bool                                               UseShadow;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SendRetriveBeginnerFinisheGuideReq
struct UScriptHelperClient_SendRetriveBeginnerFinisheGuideReq_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SendRecordFinishedGuideReq
struct UScriptHelperClient_SendRecordFinishedGuideReq_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     tipsID;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SendLobbyChat
struct UScriptHelperClient_SendLobbyChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SendDirtyToFilter
struct UScriptHelperClient_SendDirtyToFilter_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     dirtyString;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ReturnToLobby
struct UScriptHelperClient_ReturnToLobby_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ReplyInvite
struct UScriptHelperClient_ReplyInvite_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	bool                                               bReply;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QuitVoiceRoom
struct UScriptHelperClient_QuitVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QuitLbsVoiceRoom
struct UScriptHelperClient_QuitLbsVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QuitFightChat
struct UScriptHelperClient_QuitFightChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QueryMyInfo
struct UScriptHelperClient_QueryMyInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                channelType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQShareWithPhotoExtra
struct UScriptHelperClient_QQShareWithPhotoExtra_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _extraScene;                                              // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQShareWithPhoto
struct UScriptHelperClient_QQShareWithPhoto_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQShareToFriend
struct UScriptHelperClient_QQShareToFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                act;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
	struct FString                                     targetUrl;                                                // (Parm, ZeroConstructor)
	struct FString                                     imgUrl;                                                   // (Parm, ZeroConstructor)
	struct FString                                     previewText;                                              // (Parm, ZeroConstructor)
	struct FString                                     gameTag;                                                  // (Parm, ZeroConstructor)
	struct FString                                     msdkExtInfo;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.QQShare
struct UScriptHelperClient_QQShare_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _imgUrl;                                                  // (Parm, ZeroConstructor)
	struct FString                                     _url;                                                     // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQAddFriend
struct UScriptHelperClient_QQAddFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.OpenURL
struct UScriptHelperClient_OpenURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	int                                                Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OnNotifyFightFriendChat
struct UScriptHelperClient_OnNotifyFightFriendChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFightFriendChat                            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.ScriptHelperClient.OnInviteNextBattle
struct UScriptHelperClient_OnInviteNextBattle_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.OnFilterFinish
struct UScriptHelperClient_OnFilterFinish_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     filterText;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.OnBattleResult
struct UScriptHelperClient_OnBattleResult_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleResultData                           BattleResultData;                                         // (Parm)
};

// Function Client.ScriptHelperClient.NotifyBeginnerFinishedGuideUpdated
struct UScriptHelperClient_NotifyBeginnerFinishedGuideUpdated_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GuideSwitch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerFinishedGuide>                finished_guide;                                           // (ConstParm, Parm, ZeroConstructor)
	int                                                player_level;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                player_exp_type;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.MD5HashAnsiString
struct UScriptHelperClient_MD5HashAnsiString_Params
{
	struct FString                                     Str;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.Logout
struct UScriptHelperClient_Logout_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.Login
struct UScriptHelperClient_Login_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LoadLuaFile
struct UScriptHelperClient_LoadLuaFile_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.JoinVoiceRoom
struct UScriptHelperClient_JoinVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     roomName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.JoinLbsVoiceRoom
struct UScriptHelperClient_JoinLbsVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     lbsRoomName;                                              // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.IsIOSCheck
struct UScriptHelperClient_IsIOSCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallQQ
struct UScriptHelperClient_IsInstallQQ_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsForCE
struct UScriptHelperClient_IsForCE_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsEmulatorWhenInit
struct UScriptHelperClient_IsEmulatorWhenInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsEmulator
struct UScriptHelperClient_IsEmulator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsConnected
struct UScriptHelperClient_IsConnected_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.InitLoginAccount
struct UScriptHelperClient_InitLoginAccount_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           AccUin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AccPswd;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.HasActiveWifi
struct UScriptHelperClient_HasActiveWifi_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GotoPlatformAppraise
struct UScriptHelperClient_GotoPlatformAppraise_Params
{
};

// Function Client.ScriptHelperClient.GetUnrealNetworkStatus
struct UScriptHelperClient_GetUnrealNetworkStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetUIRectOffset
struct UScriptHelperClient_GetUIRectOffset_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetTableData_LuaState
struct UScriptHelperClient_GetTableData_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetTableCount
struct UScriptHelperClient_GetTableCount_Params
{
	struct FString                                     TableName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetTable_LuaState
struct UScriptHelperClient_GetTable_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetShaderPrecompileProgress
struct UScriptHelperClient_GetShaderPrecompileProgress_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenWidth
struct UScriptHelperClient_GetScreenWidth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenHight
struct UScriptHelperClient_GetScreenHight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenDensity
struct UScriptHelperClient_GetScreenDensity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetRegisterChannelID
struct UScriptHelperClient_GetRegisterChannelID_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPhoneType
struct UScriptHelperClient_GetPhoneType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPhoneDeviceID
struct UScriptHelperClient_GetPhoneDeviceID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPfKey
struct UScriptHelperClient_GetPfKey_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPf
struct UScriptHelperClient_GetPf_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPayToken
struct UScriptHelperClient_GetPayToken_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetOSVersion
struct UScriptHelperClient_GetOSVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetNearbyPersonInfo
struct UScriptHelperClient_GetNearbyPersonInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetMemoryStats_LuaState
struct UScriptHelperClient_GetMemoryStats_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetMemorySize
struct UScriptHelperClient_GetMemorySize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetLoginChannel
struct UScriptHelperClient_GetLoginChannel_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetLocationInfo
struct UScriptHelperClient_GetLocationInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetIpAddr
struct UScriptHelperClient_GetIpAddr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetInstallChannelID
struct UScriptHelperClient_GetInstallChannelID_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGroupInfo
struct UScriptHelperClient_GetGroupInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SnsAction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGroupInfoWrapper                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGPSCity
struct UScriptHelperClient_GetGPSCity_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGLVersion
struct UScriptHelperClient_GetGLVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGLType
struct UScriptHelperClient_GetGLType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGameStatus
struct UScriptHelperClient_GetGameStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetFPS
struct UScriptHelperClient_GetFPS_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetEncodeUrl
struct UScriptHelperClient_GetEncodeUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetEmulatorName
struct UScriptHelperClient_GetEmulatorName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetDSVersion
struct UScriptHelperClient_GetDSVersion_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetDevicePlatformName
struct UScriptHelperClient_GetDevicePlatformName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetCpuType
struct UScriptHelperClient_GetCpuType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetConnectIPURL
struct UScriptHelperClient_GetConnectIPURL_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     domanName;                                                // (Parm, ZeroConstructor)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     httpDNSUrl;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GetAppVersion
struct UScriptHelperClient_GetAppVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAppid
struct UScriptHelperClient_GetAppid_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAccessToken
struct UScriptHelperClient_GetAccessToken_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GenerateQRImage
struct UScriptHelperClient_GenerateQRImage_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Tag;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
	struct FString                                     logoPath;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.FetchNearByPersonInfo
struct UScriptHelperClient_FetchNearByPersonInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FNearByPersonInfo>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ExitGame
struct UScriptHelperClient_ExitGame_Params
{
};

// Function Client.ScriptHelperClient.EnterFightChat
struct UScriptHelperClient_EnterFightChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.EnterBattleForClientOnlyMode
struct UScriptHelperClient_EnterBattleForClientOnlyMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HostnameOrIP;                                             // (Parm, ZeroConstructor)
	int                                                Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	int                                                GameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EnterBattle
struct UScriptHelperClient_EnterBattle_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HostnameOrIP;                                             // (Parm, ZeroConstructor)
	uint32_t                                           Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     PacketKey;                                                // (Parm, ZeroConstructor)
	uint64_t                                           GameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsObserver;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EncryptUID
struct UScriptHelperClient_EncryptUID_Params
{
	struct FString                                     sUid;                                                     // (Parm, ZeroConstructor)
	struct FString                                     sKey;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.EnableDeathPlayback
struct UScriptHelperClient_EnableDeathPlayback_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlush;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.Disconnect
struct UScriptHelperClient_Disconnect_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DeleteFilesFromImageDownload
struct UScriptHelperClient_DeleteFilesFromImageDownload_Params
{
	int                                                maxnum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ConnectToURL
struct UScriptHelperClient_ConnectToURL_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ClipboardPaste
struct UScriptHelperClient_ClipboardPaste_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ClipBoardCopy
struct UScriptHelperClient_ClipBoardCopy_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ClientEnterWarMode
struct UScriptHelperClient_ClientEnterWarMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CleanRecord
struct UScriptHelperClient_CleanRecord_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CleanLocation
struct UScriptHelperClient_CleanLocation_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CallIngameFirstTimeTips
struct UScriptHelperClient_CallIngameFirstTimeTips_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Client.TssManager.SendSkdData_LuaState
struct UTssManager_SendSkdData_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TssManager.OnRecvData_LuaState
struct UTssManager_OnRecvData_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.UTRichTextBlock.SetText
struct UUTRichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function Client.UTRichTextBlock.SetGameFrontendHUD
struct UUTRichTextBlock_SetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            InHUD;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.UTRichTextBlock.GetText
struct UUTRichTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.TestHUD.TestFunctionNOParam
struct ATestHUD_TestFunctionNOParam_Params
{
};

// Function Client.TestHUD.TestFunctionBP_LUA
struct ATestHUD_TestFunctionBP_LUA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.TestFunctionBP
struct ATestHUD_TestFunctionBP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_LUA_Call
struct ATestHUD_Function_LUA_Call_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_Lua
struct ATestHUD_Function_Lua_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_CPlus_Call
struct ATestHUD_Function_CPlus_Call_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_CPlus
struct ATestHUD_Function_CPlus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_CPP
struct ATestHUD_Function_BP_CPP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call_LUA
struct ATestHUD_Function_BP_Call_LUA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call_CPP
struct ATestHUD_Function_BP_Call_CPP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call_CPlus
struct ATestHUD_Function_BP_Call_CPlus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call
struct ATestHUD_Function_BP_Call_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP
struct ATestHUD_Function_BP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
