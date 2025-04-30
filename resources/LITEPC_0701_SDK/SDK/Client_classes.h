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

// Class Client.BusinessHelper
// 0x0000 (0x0028 - 0x0028)
class UBusinessHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.BusinessHelper");
		return ptr;
	}


	class UObject* STATIC_UIGetResWithPath(const struct FString& DesManagerName);
	class ALuaClassObj* STATIC_UIGetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	class ALuaClassObj* STATIC_UIGetLuaManager(class UUAEUserWidget* pUIClass);
	class UUAEUserWidget* STATIC_GetWidgetByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName, const struct FString& InWidgtName);
	float STATIC_GetTime();
	struct FString STATIC_GetMobileBasePath(const struct FString& InPath);
	class UUAEDataTable* STATIC_GetDataTable(const struct FString& TableName);
	int STATIC_GetCurrentNetworkState();
	class UWidget* STATIC_GetChildByName(class UUserWidget* pParent, const struct FString& Name);
	void STATIC_BroadCastMSG(class UFrontendHUD* FrontendHUD, const struct FString& DesManagerName, const struct FString& Msg);
};


// Class Client.ClientNetInterface
// 0x0000 (0x0028 - 0x0028)
class UClientNetInterface : public UNetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.ClientNetInterface");
		return ptr;
	}

};


// Class Client.GameBackendUtils
// 0x0008 (0x0038 - 0x0030)
class UGameBackendUtils : public UBackendUtils
{
public:
	class UUAETableManager*                            TableManager;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.GameBackendUtils");
		return ptr;
	}


	class UUAETableManager* GetTableManager();
	class UUAELoadedClassManager* GetLoadedClassManager();
};


// Class Client.GameBackendHUD
// 0x0000 (0x0060 - 0x0060)
class UGameBackendHUD : public UBackendHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.GameBackendHUD");
		return ptr;
	}


	class UGameBackendUtils* GetUtils();
	class UGameBackendHUD* STATIC_GetInstance();
	class UGameFrontendHUD* GetFirstGameFrontendHUD();
};


// Class Client.GameBusinessManager
// 0x0078 (0x0130 - 0x00B8)
class UGameBusinessManager : public ULogicManagerBase
{
public:
	TArray<struct FGameWidgetConfig>                   WidgetConfigList;                                         // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00C8(0x0050) MISSED OFFSET
	class AUAEPlayerController*                        OwningController;                                         // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
	class ALuaClassObj*                                LuaObject;                                                // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.GameBusinessManager");
		return ptr;
	}


	class UUAEUserWidget* GetWidget(int Index);
	class ALuaClassObj* GetLuaObject();
	class UGameFrontendHUD* GetGameFrontendHUD();
};


// Class Client.GameFrontendHUD
// 0x02D0 (0x03C0 - 0x00F0)
class UGameFrontendHUD : public UFrontendHUD
{
public:
	TMap<struct FName, struct FString>                 GameStatusMap;                                            // 0x00F0(0x0050) (ZeroConstructor)
	class UGVoiceInterface*                            GVoice;                                                   // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               DisableGVoice;                                            // 0x0148(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0149(0x002F) MISSED OFFSET
	float                                              UnrealNetworkConnectingTimer;                             // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x017C(0x0014) MISSED OFFSET
	float                                              UnrealNetworkConnectingTime;                              // 0x0190(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class ULuaStateWrapper*                            LuaStateWrapper;                                          // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ScriptBPRelativeDir;                                      // 0x01A0(0x0010) (ZeroConstructor, Config)
	struct FString                                     ScriptRelativeDir;                                        // 0x01B0(0x0010) (ZeroConstructor, Config)
	struct FString                                     InGameLuaDir;                                             // 0x01C0(0x0010) (ZeroConstructor, Config)
	struct FString                                     PreloadLuaFileRelativePath;                               // 0x01D0(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             LuaDirList;                                               // 0x01E0(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             NoGCPackage;                                              // 0x01F0(0x0010) (ZeroConstructor, Config)
	float                                              LuaTickTime;                                              // 0x0200(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCallLuaTick;                                             // 0x0204(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0205(0x0003) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0208(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UTssManager*                                 TssMgr;                                                   // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x58];                                      // 0x0228(0x0058) MISSED OFFSET
	uint64_t                                           GameId;                                                   // 0x0280(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GameKey;                                                  // 0x0288(0x0010) (ZeroConstructor, Config)
	struct FString                                     QQAppid;                                                  // 0x0298(0x0010) (ZeroConstructor, Config)
	struct FString                                     WXAppid;                                                  // 0x02A8(0x0010) (ZeroConstructor, Config)
	uint64_t                                           GameId_CE;                                                // 0x02B8(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GameKey_CE;                                               // 0x02C0(0x0010) (ZeroConstructor, Config)
	struct FString                                     QQAppid_CE;                                               // 0x02D0(0x0010) (ZeroConstructor, Config)
	struct FString                                     WXAppid_CE;                                               // 0x02E0(0x0010) (ZeroConstructor, Config)
	struct FString                                     UserSettingsClassName;                                    // 0x02F0(0x0010) (ZeroConstructor, Config)
	class UClass*                                      UserSettingsClass;                                        // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UserSettings;                                             // 0x0308(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xB0];                                      // 0x0310(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.GameFrontendHUD");
		return ptr;
	}


	void UnRegisterUIShowHideEventDelegate(const struct FString& Source);
	void ShutdownUnrealNetwork();
	void SetGameStatusMap(TMap<struct FName, struct FString> InGameStatusMap);
	void ResetUserSettings();
	void RegisterUserSettingsDelegate_Int(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Float(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Enum(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Bool(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	void RegisterUIShowHideEventDelegate(const struct FString& Source, const struct FScriptDelegate& Delegate);
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnQueryMyInfoNotify();
	void OnNearByPersonInfoNotify();
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGenQRImgNotify(int Ret, int Size, const struct FString& imgPath);
	class USaveGame* GetUserSettings();
	class ULuaStateWrapper* GetLuaStateWrapper();
	class UGVoiceInterface* GetGVoiceInterface();
	struct FString GetBattleIDHexStr();
	void FinishModifyUserSettings();
	void CallGlobalScriptFunction(const struct FString& InFunctionName);
	void BeginModifyUserSettings();
};


// Class Client.GameFrontendUtils
// 0x0000 (0x0380 - 0x0380)
class UGameFrontendUtils : public UFrontendUtils
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.GameFrontendUtils");
		return ptr;
	}

};


// Class Client.GVoiceInterface
// 0x0130 (0x0158 - 0x0028)
class UGVoiceInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x0068(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.GVoiceInterface");
		return ptr;
	}


	void UploadRecordFile();
	void TestGVoice(const struct FString& userId);
	bool TeamSpeakerEnable();
	bool TeamMicphoneEnable();
	void StopRecord();
	void StopPlayRecordFile();
	void StartRecord();
	void SpeechToText();
	void ShowOpenSpeakerAtFirstMsg();
	void SetVoiceMode(int Type);
	void SetVadSensitive(int VadSensitive);
	void SetSpeakerVolume(float Value);
	void SetSpeakerStatus(bool Flag);
	void SetMicphoneVolume(float Value);
	void SetMicphoneStatus(bool Flag);
	void SetLbsVoiceRadius(float Radius);
	void SetLbsRoomEnableStatus(bool Flag);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void SetCurrentDownloadFieldID(const struct FString& filedId);
	void ResetWhenLogOut();
	void ReactiveLbsStatus();
	void QuitRoom();
	void PlayRecordFile();
	void OpenTeamSpeakerOnly(bool showTips);
	int OpenTeamMicphoneOnly(bool showTips);
	int OpenSpeaker();
	void OpenMicPtt();
	void OpenMicAndSpeakerAfterJoinLbsRoom();
	int OpenMic();
	void OpenAllSpeaker(bool showTips);
	int OpenAllMicphone(bool showTips);
	void OnRoomTypeChanged(const struct FString& itemtext);
	bool LbsSpeakerEnable();
	bool LbsMicphoneEnable();
	void JoinRoom(const struct FString& room, const struct FString& userId);
	void JoinLbsRoom(const struct FString& lbsRoom, const struct FString& userId);
	void InitGVoiceComponent(const struct FString& userId);
	bool HaveTeamRoom();
	bool HaveLbsRoom();
	float GetVoiceLength();
	int GetVadSensitive();
	void GetAuthKey();
	void ForbidTeammateVoiceById(int memberID, bool IsEnable);
	void DownloadRecordFile();
	void CloseSpeaker();
	void CloseMicPtt();
	void CloseMic();
	void CloseAllSpeaker(bool showTips);
	void CloseAllMicphone(bool showTips);
};


// Class Client.HotUpdater
// 0x0128 (0x0150 - 0x0028)
class UHotUpdater : public UObject
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0028(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.HotUpdater");
		return ptr;
	}


	void OnGetVersionData(bool Successful, const struct FString& FileURL, TArray<unsigned char> Data);
	void OnDownloadedOneFile(bool Successful, const struct FString& FileURL, TArray<unsigned char> Data);
};


// Class Client.ImageDownloader
// 0x0058 (0x0080 - 0x0028)
class UImageDownloader : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     FileURL;                                                  // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FileSavePath;                                             // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UrlHash;                                                  // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               InvalidImageFormat;                                       // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SaveDiskFile;                                             // 0x0079(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.ImageDownloader");
		return ptr;
	}


	void Start(const struct FString& URL);
	void STATIC_SetSubDirTime(int sec);
	class UImageDownloader* STATIC_MakeDownloader();
};


// Class Client.InGameUIManager
// 0x0028 (0x0158 - 0x0130)
class UInGameUIManager : public UGameBusinessManager
{
public:
	TArray<class UClass*>                              InGameUIList;                                             // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0140(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.InGameUIManager");
		return ptr;
	}


	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleDynamicCreation();
};


// Class Client.LoadTexture
// 0x0000 (0x0028 - 0x0028)
class ULoadTexture : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.LoadTexture");
		return ptr;
	}


	class UTexture2D* STATIC_LoadTexture2D(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight);
	class UTexture2D* STATIC_GetTexture2DFromDiskFile(const struct FString& FilePath);
};


// Class Client.LuaClassObj
// 0x0010 (0x0390 - 0x0380)
class ALuaClassObj : public ALuaContext
{
public:
	class UGameBusinessManager*                        pManager;                                                 // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.LuaClassObj");
		return ptr;
	}


	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool bPersistentUI, bool InStatusConcern, bool bDynamicWidget);
	void SubShowHideEvent(TArray<struct FString> WidgetPathList);
	void SubCollapseWidgetList(const struct FString& RootWidgetName, TArray<struct FString>* ChildWidgetNames);
	void HandleUIMessageNoFetch(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleDynamicCreation();
	struct FString GetGameStatus();
};


// Class Client.PlatformAppraise
// 0x0000 (0x0028 - 0x0028)
class UPlatformAppraise : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.PlatformAppraise");
		return ptr;
	}

};


// Class Client.ScreenshotMaker
// 0x0000 (0x0028 - 0x0028)
class UScreenshotMaker : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.ScreenshotMaker");
		return ptr;
	}


	bool STATIC_SaveToPhotosAlbumEx(const struct FString& pathStr);
	bool STATIC_SaveToPhotosAlbum(const struct FString& pathStr);
	void STATIC_ReMakePicture(const struct FString& pathStr, const struct FVector4& Vector4);
	struct FString STATIC_MakePicture(bool isShowUI);
	struct FString STATIC_MakeBugReprotPic(bool isShowUI);
	bool STATIC_HasCaptured(const struct FString& pathStr);
	int STATIC_GetSaveStatus();
};


// Class Client.ScriptHelperClient
// 0x0000 (0x0028 - 0x0028)
class UScriptHelperClient : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.ScriptHelperClient");
		return ptr;
	}


	void STATIC_WechatShareWithUrlInfo(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_WechatShareWithPhoto(const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, const struct FString& _messageAction, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_WeChatShareWithMiniApp(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _webpageUrl, const struct FString& _userName, const struct FString& _path, const struct FString& _messageExt, const struct FString& _messageAction, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_WechatShareToFriend(const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& mediaId, const struct FString& messageExt, const struct FString& mediaTagName, const struct FString& msdkExtInfo, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_WechatShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_WechatQueryGroup(const struct FString& unionId, const struct FString& OpenIdList, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_WechatJoinGroup(const struct FString& unionId, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_WechatCreateGroup(const struct FString& unionId, const struct FString& chatRoomName, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_WakeupFromSuspendSound();
	void STATIC_TApmDataReport(class UGameFrontendHUD* GameFrontendHUD, int EventID, const struct FString& EventInfo);
	void STATIC_SwitchUser(bool useExternalAccount, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_SwitchSceneCamera(class UGameFrontendHUD* GameFrontendHUD, const struct FString& SceneCameraName, float BlendTime, bool bForce);
	void STATIC_SuspendSound();
	bool STATIC_StopShaderPrecompile();
	bool STATIC_StartShaderPrecompile();
	void STATIC_ShutdownUnrealNetwork(class UGameFrontendHUD* GameFrontendHUD);
	void STATIC_ShowScreenDebugMessage(const struct FString& Message);
	void STATIC_SetWeatherInfo(class UGameFrontendHUD* GameFrontendHUD, int WeatherID, const struct FString& WeatherName);
	void STATIC_SetUIRectOffset(const struct FString& uirect);
	void STATIC_SetPlayerBaseInfo(class UGameFrontendHUD* GameFrontendHUD, const struct FString& OpenID, uint64_t RoleID, const struct FString& PlayerName, const struct FString& HeadIconUrl, int RoleLevel);
	bool STATIC_SetLinkStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool ShowUnderline);
	bool STATIC_SetImageStyle(const struct FString& StyleName, int ImageSize, const struct FString& ImagePath, const struct FString& ImageColor);
	void STATIC_SetGameStatusMap(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FName, struct FString> GameStatusMap);
	void STATIC_SetGameSrvID(class UGameFrontendHUD* GameFrontendHUD, int GameSrvID);
	bool STATIC_SetFontStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool UseShadow);
	void STATIC_SendRetriveBeginnerFinisheGuideReq(class UGameFrontendHUD* GameFrontendHUD);
	void STATIC_SendRecordFinishedGuideReq(class UGameFrontendHUD* GameFrontendHUD, const struct FString& tipsID);
	void STATIC_SendLobbyChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Content);
	void STATIC_SendDirtyToFilter(class UGameFrontendHUD* GameFrontendHUD, const struct FString& dirtyString);
	void STATIC_ReturnToLobby(class UGameFrontendHUD* GameFrontendHUD);
	void STATIC_ReplyInvite(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, bool bReply);
	void STATIC_QuitVoiceRoom(class UGameFrontendHUD* GameFrontendHUD);
	void STATIC_QuitLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD);
	void STATIC_QuitFightChat(class UGameFrontendHUD* GameFrontendHUD);
	void STATIC_QueryMyInfo(int channelType, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_QQShareWithPhotoExtra(const struct FString& _imgPath, const struct FString& _extraScene, const struct FString& _messageExt, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_QQShareWithPhoto(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_QQShareToFriend(int act, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& targetUrl, const struct FString& imgUrl, const struct FString& previewText, const struct FString& gameTag, const struct FString& msdkExtInfo, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_QQShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _imgUrl, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_QQAddFriend(const struct FString& OpenID, const struct FString& Desc, const struct FString& Message, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_OpenURL(const struct FString& URL, int Dir);
	void STATIC_OnNotifyFightFriendChat(class UGameFrontendHUD* GameFrontendHUD, const struct FFightFriendChat& Data);
	void STATIC_OnInviteNextBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Name);
	void STATIC_OnFilterFinish(class UGameFrontendHUD* GameFrontendHUD, const struct FString& filterText);
	void STATIC_OnBattleResult(class UGameFrontendHUD* GameFrontendHUD, const struct FBattleResultData& BattleResultData);
	void STATIC_NotifyBeginnerFinishedGuideUpdated(class UGameFrontendHUD* GameFrontendHUD, bool GuideSwitch, TArray<struct FPlayerFinishedGuide> finished_guide, int player_level, int player_exp_type);
	struct FString STATIC_MD5HashAnsiString(const struct FString& Str);
	void STATIC_Logout(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_Login(uint32_t Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_LoadLuaFile(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename);
	void STATIC_JoinVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& roomName, const struct FString& userId);
	void STATIC_JoinLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& lbsRoomName, const struct FString& userId);
	bool STATIC_IsIOSCheck();
	bool STATIC_IsInstallQQ(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool STATIC_IsForCE();
	bool STATIC_IsEmulatorWhenInit();
	bool STATIC_IsEmulator();
	bool STATIC_IsConnected(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_InitLoginAccount(uint64_t AccUin, const struct FString& AccPswd, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool STATIC_HasActiveWifi();
	void STATIC_GotoPlatformAppraise();
	struct FString STATIC_GetUnrealNetworkStatus(class UGameFrontendHUD* GameFrontendHUD);
	struct FString STATIC_GetUIRectOffset();
	int STATIC_GetTableData_LuaState();
	int STATIC_GetTableCount(const struct FString& TableName);
	int STATIC_GetTable_LuaState();
	int STATIC_GetShaderPrecompileProgress();
	int STATIC_GetScreenWidth();
	int STATIC_GetScreenHight();
	int STATIC_GetScreenDensity();
	struct FString STATIC_GetRegisterChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString STATIC_GetPhoneType();
	struct FString STATIC_GetPhoneDeviceID();
	struct FString STATIC_GetPfKey(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString STATIC_GetPf(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString STATIC_GetPayToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString STATIC_GetOSVersion();
	void STATIC_GetNearbyPersonInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	int STATIC_GetMemoryStats_LuaState();
	int STATIC_GetMemorySize();
	int STATIC_GetLoginChannel(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_GetLocationInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString STATIC_GetIpAddr();
	struct FString STATIC_GetInstallChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FGroupInfoWrapper STATIC_GetGroupInfo(int SnsAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString STATIC_GetGPSCity(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString STATIC_GetGLVersion();
	struct FString STATIC_GetGLType();
	struct FString STATIC_GetGameStatus(class UGameFrontendHUD* GameFrontendHUD);
	float STATIC_GetFPS();
	struct FString STATIC_GetEncodeUrl(const struct FString& URL);
	struct FString STATIC_GetEmulatorName();
	struct FString STATIC_GetDSVersion(class UGameFrontendHUD* GameFrontendHUD);
	struct FString STATIC_GetDevicePlatformName();
	struct FString STATIC_GetCpuType();
	void STATIC_GetConnectIPURL(const struct FString& domanName, const struct FString& URL, const struct FString& httpDNSUrl, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString STATIC_GetAppVersion();
	struct FString STATIC_GetAppid(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString STATIC_GetAccessToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_GenerateQRImage(int Tag, int Size, const struct FString& Content, const struct FString& logoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	TArray<struct FNearByPersonInfo> STATIC_FetchNearByPersonInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_ExitGame();
	void STATIC_EnterFightChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid);
	void STATIC_EnterBattleForClientOnlyMode(class UGameFrontendHUD* GameFrontendHUD, const struct FString& HostnameOrIP, int Port, const struct FString& PlayerName, int GameId);
	void STATIC_EnterBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& HostnameOrIP, uint32_t Port, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& PacketKey, uint64_t GameId, bool IsObserver);
	struct FString STATIC_EncryptUID(const struct FString& sUid, const struct FString& sKey);
	void STATIC_EnableDeathPlayback(class UGameFrontendHUD* GameFrontendHUD, bool bEnable, bool bFlush);
	void STATIC_Disconnect(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	bool STATIC_DeleteFilesFromImageDownload(int maxnum);
	void STATIC_ConnectToURL(const struct FString& URL, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	struct FString STATIC_ClipboardPaste();
	void STATIC_ClipBoardCopy(const struct FString& Text);
	void STATIC_ClientEnterWarMode(class UGameFrontendHUD* GameFrontendHUD);
	void STATIC_CleanRecord(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_CleanLocation(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void STATIC_CallIngameFirstTimeTips(class UGameFrontendHUD* GameFrontendHUD, const struct FString& TableName, const struct FString& FunctionName);
};


// Class Client.ScriptHelperEngine
// 0x0000 (0x0028 - 0x0028)
class UScriptHelperEngine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.ScriptHelperEngine");
		return ptr;
	}

};


// Class Client.TssManager
// 0x0000 (0x0028 - 0x0028)
class UTssManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.TssManager");
		return ptr;
	}


	int SendSkdData_LuaState();
	int OnRecvData_LuaState();
};


// Class Client.UAEClientGameMode
// 0x0000 (0x0438 - 0x0438)
class AUAEClientGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.UAEClientGameMode");
		return ptr;
	}

};


// Class Client.UAELobbyGameMode
// 0x0000 (0x0438 - 0x0438)
class AUAELobbyGameMode : public AUAEClientGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.UAELobbyGameMode");
		return ptr;
	}

};


// Class Client.UAELobbyPlayerController
// 0x0000 (0x06D0 - 0x06D0)
class AUAELobbyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.UAELobbyPlayerController");
		return ptr;
	}

};


// Class Client.UTRichTextBlock
// 0x0768 (0x0860 - 0x00F8)
class UUTRichTextBlock : public UWidget
{
public:
	struct FString                                     ContentText;                                              // 0x00F8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0118(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bSupportHyLink;                                           // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportImage;                                            // 0x0171(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0172(0x0002) MISSED OFFSET
	struct FLinearColor                                TextColor;                                                // 0x0174(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0184(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0185(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0186(0x0002) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0188(0x0440) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     HScrollBarPadding;                                        // 0x05C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     VScrollBarPadding;                                        // 0x05D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              WrapTextAt;                                               // 0x05E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x05EC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LineHeightPercentage;                                     // 0x05FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     HyperlinkDecoratorTag;                                    // 0x0600(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackFunctionName;                            // 0x0610(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackTableName;                               // 0x0620(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x220];                                     // 0x0630(0x0220) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0850(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0858(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.UTRichTextBlock");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	struct FText GetText();
};


// Class Client.TestHUD
// 0x0000 (0x0368 - 0x0368)
class ATestHUD : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Client.TestHUD");
		return ptr;
	}


	void TestFunctionNOParam();
	float TestFunctionBP_LUA();
	float TestFunctionBP();
	float Function_LUA_Call();
	float Function_Lua();
	float Function_CPlus_Call();
	float Function_CPlus();
	float Function_BP_CPP();
	float Function_BP_Call_LUA();
	float Function_BP_Call_CPP();
	float Function_BP_Call_CPlus();
	float Function_BP_Call();
	float Function_BP();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
