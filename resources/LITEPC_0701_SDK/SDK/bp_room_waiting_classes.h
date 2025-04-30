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

// ScriptBlueprintGeneratedClass bp_room_waiting.bp_room_waiting_C
// 0x0270 (0x0600 - 0x0390)
class Abp_room_waiting_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_RoomMemberInfo                   BP_STRUCT_RoomMemberInfo;                                 // 0x0398(0x0060) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_RoomMemberInfo>           BP_ARRAY_RoomOldMemberInfoList;                           // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Room_ChangeName;                                       // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_KickedMemberPos;                                       // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Room_InitiativeLeave;                                  // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_RoomMemberInfo>           BP_ARRAY_RoomMemberList;                                  // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SelectedMapID;                                         // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_RoleOldPos;                                            // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Room_SelfID;                                           // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SelectedGroupType;                                     // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Room_UnLockedPos;                                      // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RoomGroupType                    BP_STRUCT_RoomGroupType;                                  // 0x0450(0x0018) (Edit, BlueprintVisible)
	bool                                               BP_Room_IsInRoom;                                         // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FString                                     BP_Room_SelectedRoleID;                                   // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomSelfInfo                     BP_STRUCT_RoomSelfInfo;                                   // 0x0480(0x0060) (Edit, BlueprintVisible)
	int                                                BP_Room_LockedPos;                                        // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_RoleNewPos;                                            // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Room_CanGetProfile;                                    // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	struct FString                                     BP_Room_QRIamgePath;                                      // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsRoomOwner;                                           // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	struct FBP_STRUCT_RoomWaitingInfo                  BP_STRUCT_RoomWaitingInfo;                                // 0x0508(0x0088) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_RoomGroupType>            BP_ARRAY_RoomGroupTypeList;                               // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoomMemberInfo>           BP_ARRAY_RoomNewMemberInfoList;                           // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Room_IsObEditState;                                    // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x05B1(0x0007) MISSED OFFSET
	struct FString                                     BP_Room_Passwd;                                           // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Room_SelfOldPos;                                       // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_RoomMemberInfo>           BP_ARRAY_RoomNewMemberAllInfoList;                        // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_RoomLockInfoList;                                // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SelectNewPos;                                          // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_room_waiting.bp_room_waiting_C");
		return ptr;
	}


	void EventRoomWaitingRelease_NoFetch();
	void EventRoomWaitingRelease();
	void EventChangeMap_NoFetch();
	void EventChangeMap();
	void EventAfterLeaveRoomWaiting_NoFetch();
	void EventAfterLeaveRoomWaiting();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventRequestChangeRoomPos_NoFetch();
	void EventRequestChangeRoomPos();
	void EventRequestKickMember_NoFetch();
	void EventRequestKickMember();
	void EventExitRoom_NoFetch();
	void EventExitRoom();
	void EventChangeRoomType_NoFetch();
	void EventChangeRoomType();
	void EventOnlyRoomMasterCanClick_NoFetch();
	void EventOnlyRoomMasterCanClick();
	void EventWhetherDisbandRoom_NoFetch();
	void EventWhetherDisbandRoom();
	void EventChangeRoomName_NoFetch();
	void EventChangeRoomName();
	void EventCloseRoomWaitingChatUI_NoFetch();
	void EventCloseRoomWaitingChatUI();
	void EventSaveSuccess_NoFetch();
	void EventSaveSuccess();
	void EventKickRoleDisable_NoFetch();
	void EventKickRoleDisable();
	void EventChangeToObEditState_NoFetch();
	void EventChangeToObEditState();
	void EventChangeToObEditDisableState_NoFetch();
	void EventChangeToObEditDisableState();
	void EventBtnDisableInGaming_NoFetch();
	void EventBtnDisableInGaming();
	void EventUnLockObPos_NoFetch();
	void EventUnLockObPos();
	void EventAfterEnterRoomWaiting_NoFetch();
	void EventAfterEnterRoomWaiting();
	void EventOpenRoomWaitingChatUI_NoFetch();
	void EventOpenRoomWaitingChatUI();
	void EventLockObPos_NoFetch();
	void EventLockObPos();
	void EventStarGame_NoFetch();
	void EventStarGame();
	void EventOpenRoleInfo_NoFetch();
	void EventOpenRoleInfo();
	void EventGetNewMemberProfInfo_NoFetch();
	void EventGetNewMemberProfInfo();
	void EventCreateQRImage_NoFetch();
	void EventCreateQRImage();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
