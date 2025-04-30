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

// ScriptBlueprintGeneratedClass bp_room.bp_room_C
// 0x0138 (0x04C8 - 0x0390)
class Abp_room_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SelectRoomID;                                          // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Room_IsAnchor;                                         // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	struct FString                                     BP_Room_SelfName;                                         // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Room_RefreshLeftTime;                                  // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FString                                     BP_EnterRoom_Passwd;                                      // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_GroupType>                BP_ARRAY_GroupTypeList;                                   // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GroupType                        BP_STRUCT_GroupType;                                      // 0x03D8(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RoomInfo                         BP_STRUCT_RoomInfo;                                       // 0x03F0(0x0088) (Edit, BlueprintVisible)
	struct FString                                     BP_Room_ClientVersion;                                    // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_EnterRoom_ID;                                          // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoomInfo>                 BP_ARRAY_RoomList;                                        // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_EnterRoom_Type;                                        // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	struct FString                                     BP_Room_CardInfo;                                         // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_room.bp_room_C");
		return ptr;
	}


	void EventRequestRoomList_NoFetch();
	void EventRequestRoomList();
	void EventNotAnchor_NoFetch();
	void EventNotAnchor();
	void EventRequestJoinRoom_NoFetch();
	void EventRequestJoinRoom();
	void EventCheckInputRoomID_NoFetch();
	void EventCheckInputRoomID();
	void EventAfterEnterRoomList_NoFetch();
	void EventAfterEnterRoomList();
	void EventEnterGamingRoomNotice_NoFetch();
	void EventEnterGamingRoomNotice();
	void EventAfterLeaveRoomList_NoFetch();
	void EventAfterLeaveRoomList();
	void EventVersionNotMatched_NoFetch();
	void EventVersionNotMatched();
	void EventRefreshRoomCardInfo_NoFetch();
	void EventRefreshRoomCardInfo();
	void EventOpenRoomChatUI_NoFetch();
	void EventOpenRoomChatUI();
	void EventShowRoomCreateUI_NoFetch();
	void EventShowRoomCreateUI();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventCompareClickRefreshTime_NoFetch();
	void EventCompareClickRefreshTime();
	void EventCloseRoomChatUI_NoFetch();
	void EventCloseRoomChatUI();
	void EventEnterRoom_NoFetch();
	void EventEnterRoom();
	void EventRoomRelease_NoFetch();
	void EventRoomRelease();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
