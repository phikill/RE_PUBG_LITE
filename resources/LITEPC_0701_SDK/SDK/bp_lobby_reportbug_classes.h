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

// ScriptBlueprintGeneratedClass bp_lobby_reportbug.bp_lobby_reportbug_C
// 0x0018 (0x03A8 - 0x0390)
class Abp_lobby_reportbug_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                REPROTBUG_REASON_CANNOTENTERBATTLE;                       // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby_reportbug.bp_lobby_reportbug_C");
		return ptr;
	}


	void EventShowLobbyBugReportPanel_NoFetch();
	void EventShowLobbyBugReportPanel();
	void EventShowLobbyBugReportSuccessMsg_NoFetch();
	void EventShowLobbyBugReportSuccessMsg();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
