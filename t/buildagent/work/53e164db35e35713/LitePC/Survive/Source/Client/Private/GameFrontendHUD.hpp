

// Class Client.GameFrontendHUD
// //Class Client.GameFrontendHUD
//0x02D0 (0x03C0 - 0x00F0)
class UGameFrontendHUD : public UFrontendHUD
{
public:
	TMap<struct FName, struct FString>                 GameStatusMap;                                            // 0x00F0(0x0050) (ZeroConstructor)
	class UGVoiceInterface*                            GVoice;                                                   // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DisableGVoice : 1;                                        // 0x0148(0x0001) (ZeroConstructor, Config, IsPlainOldData)
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
	unsigned char                                      bCallLuaTick : 1;                                         // 0x0204(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0205(0x0003) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0208(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UTssManager*                                 TssMgr;                                                   // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x58];                                      // 0x0228(0x0058) MISSED OFFSET
	uint64_t                                           GameID;                                                   // 0x0280(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GameKey;                                                  // 0x0288(0x0010) (ZeroConstructor, Config)
	struct FString                                     QQAppid;                                                  // 0x0298(0x0010) (ZeroConstructor, Config)
	struct FString                                     WXAppid;                                                  // 0x02A8(0x0010) (ZeroConstructor, Config)
	uint64_t                                           GameId_CE;                                                // 0x02B8(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GameKey_CE;                                               // 0x02C0(0x0010) (ZeroConstructor, Config)
	struct FString                                     QQAppid_CE;                                               // 0x02D0(0x0010) (ZeroConstructor, Config)
	struct FString                                     WXAppid_CE;                                               // 0x02E0(0x0010) (ZeroConstructor, Config)
	struct FString                                     UserSettingsClassName;                                    // 0x02F0(0x0010) (ZeroConstructor, Config)
	class UObject*                                     UserSettingsClass;                                        // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UserSettings;                                             // 0x0308(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xB0];                                      // 0x0310(0x00B0) MISSED OFFSET

	// Function Client.GameFrontendHUD.UnRegisterUIShowHideEventDelegate
	// (Final, Native, Public, BlueprintCallable)
	void UnRegisterUIShowHideEventDelegate(const struct FString& Source);// sub_18BD0D0()

	// Function Client.GameFrontendHUD.ShutdownUnrealNetwork
	// (Final, Native, Public, BlueprintCallable)
	void ShutdownUnrealNetwork();// sub_18BD0B0()

	// Function Client.GameFrontendHUD.SetGameStatusMap
	// (Final, Native, Public)
	void SetGameStatusMap(TMap<struct FName, struct FString> InGameStatusMap);// sub_18BCF80()

	// Function Client.GameFrontendHUD.ResetUserSettings
	// (Final, Native, Public, BlueprintCallable)
	void ResetUserSettings();// sub_18BCF60()

	// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Int
	// (Final, Native, Public, BlueprintCallable)
	void RegisterUserSettingsDelegate_Int(const struct FString& PropertyNameconst struct FScriptDelegate& Delegate);// sub_18BCE20()

	// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Float
	// (Final, Native, Public, BlueprintCallable)
	void RegisterUserSettingsDelegate_Float(const struct FString& PropertyNameconst struct FScriptDelegate& Delegate);// sub_18BCE20()

	// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Enum
	// (Final, Native, Public, BlueprintCallable)
	void RegisterUserSettingsDelegate_Enum(const struct FString& PropertyNameconst struct FScriptDelegate& Delegate);// sub_18BCE20()

	// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Bool
	// (Final, Native, Public, BlueprintCallable)
	void RegisterUserSettingsDelegate_Bool(const struct FString& PropertyNameconst struct FScriptDelegate& Delegate);// sub_18BCE20()

	// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate
	// (Final, Native, Public, BlueprintCallable)
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);// sub_18BCD70()

	// Function Client.GameFrontendHUD.RegisterUIShowHideEventDelegate
	// (Final, Native, Public, BlueprintCallable)
	void RegisterUIShowHideEventDelegate(const struct FString& Sourceconst struct FScriptDelegate& Delegate);// sub_18BCC30()

	// Function Client.GameFrontendHUD.OnWebviewNotify
	// (Final, RequiredAPI, Native, Public, HasOutParms)
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);// sub_18BCB70()

	// Function Client.GameFrontendHUD.OnQuickLoginNotify
	// (Final, RequiredAPI, Native, Public, HasOutParms)
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);// sub_18BCA50()

	// Function Client.GameFrontendHUD.OnQueryMyInfoNotify
	// (Final, RequiredAPI, Native, Public)
	void OnQueryMyInfoNotify();// sub_18BCA30()

	// Function Client.GameFrontendHUD.OnNearByPersonInfoNotify
	// (Final, RequiredAPI, Native, Public)
	void OnNearByPersonInfoNotify();// sub_18BCA10()

	// Function Client.GameFrontendHUD.OnGroupNotify
	// (Final, RequiredAPI, Native, Public, HasOutParms)
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);// sub_18BC920()

	// Function Client.GameFrontendHUD.OnGenQRImgNotify
	// (Final, RequiredAPI, Native, Public)
	void OnGenQRImgNotify(int Retint Sizeconst struct FString& imgPath);// sub_18BC810()

	// Function Client.GameFrontendHUD.GetUserSettings
	// (Final, Native, Public, BlueprintCallable)
	class USaveGame* GetUserSettings();// sub_18BC7E0()

	// Function Client.GameFrontendHUD.GetLuaStateWrapper
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class ULuaStateWrapper* GetLuaStateWrapper();// sub_18BC7B0()

	// Function Client.GameFrontendHUD.GetGVoiceInterface
	// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	class UGVoiceInterface* GetGVoiceInterface();// sub_18BC780()

	// Function Client.GameFrontendHUD.GetBattleIDHexStr
	// (Final, Native, Public, BlueprintCallable)
	struct FString GetBattleIDHexStr();// sub_18BC700()

	// Function Client.GameFrontendHUD.FinishModifyUserSettings
	// (Final, Native, Public, BlueprintCallable)
	void FinishModifyUserSettings();// sub_18BC6E0()

	// Function Client.GameFrontendHUD.CallGlobalScriptFunction
	// (Final, Native, Public, BlueprintCallable)
	void CallGlobalScriptFunction(const struct FString& InFunctionName);// sub_18BC640()

	// Function Client.GameFrontendHUD.BeginModifyUserSettings
	// (Final, Native, Public, BlueprintCallable)
	void BeginModifyUserSettings();// sub_18BC620()


}

