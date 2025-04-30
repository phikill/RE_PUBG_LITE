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

// ScriptBlueprintGeneratedClass bp_login.bp_login_C
// 0x0068 (0x03F8 - 0x0390)
class Abp_login_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SelectedShowServerInfo;                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FString                                     BP_InputOpenId;                                           // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ServerInfo>               BP_ARRAY_ServerList_Info;                                 // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ServerInfo                       BP_STRUCT_ServerInfo;                                     // 0x03C0(0x0030) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_login.bp_login_C");
		return ptr;
	}


	void EventShowScrollView_NoFetch();
	void EventShowScrollView();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventOpenExampleUI_NoFetch();
	void EventOpenExampleUI();
	void EventConnectToGate_NoFetch();
	void EventConnectToGate();
	void EventLogout_NoFetch();
	void EventLogout();
	void EventHideScrollView_NoFetch();
	void EventHideScrollView();
	void EventShowCurrentSelect_NoFetch();
	void EventShowCurrentSelect();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
