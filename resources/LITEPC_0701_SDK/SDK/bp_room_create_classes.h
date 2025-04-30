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

// ScriptBlueprintGeneratedClass bp_room_create.bp_room_create_C
// 0x0050 (0x03E0 - 0x0390)
class Abp_room_create_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CreateRoom_Mode;                                       // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FString                                     BP_CreateRoom_Name;                                       // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CreateRoom_Passwd;                                     // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoomCreate_SelfName;                                   // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CreateRoom_MapID;                                      // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_room_create.bp_room_create_C");
		return ptr;
	}


	void EventCreateRoom_NoFetch();
	void EventCreateRoom();
	void EventSetPSWOK_NoFetch();
	void EventSetPSWOK();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventRoomCreateRelease_NoFetch();
	void EventRoomCreateRelease();
	void EventCloseRoomModeChatUI_NoFetch();
	void EventCloseRoomModeChatUI();
	void EventCreateRoomCheckNameEmpty_NoFetch();
	void EventCreateRoomCheckNameEmpty();
	void EventOpenRoomModeChatUI_NoFetch();
	void EventOpenRoomModeChatUI();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
