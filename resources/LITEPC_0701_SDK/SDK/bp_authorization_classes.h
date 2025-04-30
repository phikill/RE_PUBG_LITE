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

// ScriptBlueprintGeneratedClass bp_authorization.bp_authorization_C
// 0x0078 (0x0408 - 0x0390)
class Abp_authorization_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_GameVersion;                                           // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LoginCount;                                            // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FString                                     BP_DeviceNameBeforeAuthLogin;                             // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WECHAT_INSTALL;                                        // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_DeviceLimit;                                           // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_QQID;                                                  // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_AutoAuthLogin;                                         // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginCheck;                                            // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TokenIsValid;                                          // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	struct FString                                     BP_QQPasswd;                                              // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HasShowDeviceLimit;                                       // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	int                                                BP_LoginTime;                                             // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_authorization.bp_authorization_C");
		return ptr;
	}


	void EventDeleteSavedDir_NoFetch();
	void EventDeleteSavedDir();
	void EventGuestLogin_NoFetch();
	void EventGuestLogin();
	void EventRedoAutoAuthorization_NoFetch();
	void EventRedoAutoAuthorization();
	void EventShowService_NoFetch();
	void EventShowService();
	void EventCheckWeChatInstalled_NoFetch();
	void EventCheckWeChatInstalled();
	void EventGameVersion_NoFetch();
	void EventGameVersion();
	void EventAuthShowButtons_NoFetch();
	void EventAuthShowButtons();
	void EventBeforeAuthLogin_NoFetch();
	void EventBeforeAuthLogin();
	void EventUpdateLoginTime_NoFetch();
	void EventUpdateLoginTime();
	void EventClearLoginLimit_NoFetch();
	void EventClearLoginLimit();
	void EventLoginCheck_NoFetch();
	void EventLoginCheck();
	void EventLogout_NoFetch();
	void EventLogout();
	void EventWXLogin_NoFetch();
	void EventWXLogin();
	void EventClickKefu_NoFetch();
	void EventClickKefu();
	void EventAddLoginCount_NoFetch();
	void EventAddLoginCount();
	void EventAutoAuthLogin_NoFetch();
	void EventAutoAuthLogin();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventAuthHideButtons_NoFetch();
	void EventAuthHideButtons();
	void EventStartAuthorization_NoFetch();
	void EventStartAuthorization();
	void EventQQLogin_NoFetch();
	void EventQQLogin();
	void EventShowTouristNotice_NoFetch();
	void EventShowTouristNotice();
	void EventShowRefuse_NoFetch();
	void EventShowRefuse();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
