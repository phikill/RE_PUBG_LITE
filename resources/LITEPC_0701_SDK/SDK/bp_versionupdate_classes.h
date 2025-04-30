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

// ScriptBlueprintGeneratedClass bp_versionupdate.bp_versionupdate_C
// 0x0098 (0x0428 - 0x0390)
class Abp_versionupdate_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CurStage;                                              // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurPercent;                                            // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FBP_STRUCT_VersionUpdateInfo                BP_STRUCT_VersionUpdateInfo;                              // 0x03B0(0x0068) (Edit, BlueprintVisible)
	int                                                BP_ShaderCompileCurPercent;                               // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsExamin;                                              // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_versionupdate.bp_versionupdate_C");
		return ptr;
	}


	void EventWifiNotifyAndroidAppUpdate_Push_NoFetch();
	void EventWifiNotifyAndroidAppUpdate_Push();
	void EventWindowsAppUpdate_NoFetch();
	void EventWindowsAppUpdate();
	void EventNoWifiNotifyIOSAppUpdate_Push_NoFetch();
	void EventNoWifiNotifyIOSAppUpdate_Push();
	void EventNoConnectionStartUpdate_Push_NoFetch();
	void EventNoConnectionStartUpdate_Push();
	void EventShaderCompileProgress_NoFetch();
	void EventShaderCompileProgress();
	void EventWifiNotifyIOSAppUpdate_Push_NoFetch();
	void EventWifiNotifyIOSAppUpdate_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
