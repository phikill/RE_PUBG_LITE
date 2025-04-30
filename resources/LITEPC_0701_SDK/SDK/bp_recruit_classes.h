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

// ScriptBlueprintGeneratedClass bp_recruit.bp_recruit_C
// 0x0078 (0x0408 - 0x0390)
class Abp_recruit_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_IsFinalFightMode;                                      // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsUIShow;                                              // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_WorldRecruit;                                          // 0x039A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_FrientRecruit;                                         // 0x039B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChannelRecruit;                                        // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsRecruit;                                          // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFull;                                                   // 0x039E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x039F(0x0001) MISSED OFFSET
	struct FString                                     BP_ModelPLayCountStr;                                     // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatannelRoomID;                                       // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FString                                     BP_ModelStr;                                              // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_HasJoinCorps;                                          // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FString                                     MySelfUID;                                                // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SendMessage;                                           // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChannelName;                                           // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_recruit.bp_recruit_C");
		return ptr;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventHideUI_NoFetch();
	void EventHideUI();
	void EventRecruit_Push_NoFetch();
	void EventRecruit_Push();
	void EventSendMessage_NoFetch();
	void EventSendMessage();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
