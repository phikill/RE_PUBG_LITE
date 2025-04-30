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

// ScriptBlueprintGeneratedClass bp_teamup_friend.bp_teamup_friend_C
// 0x0220 (0x05B0 - 0x0390)
class Abp_teamup_friend_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_TeamUp_Corps_Scroll_Start;                             // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_TeamupFriendLiteProfile          BP_STRUCT_TeamupFriendLiteProfile;                        // 0x03A0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_Recent_Friend;                                   // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUp_Corps_Scroll_End;                               // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_Teamuup_Friend_Profile;                          // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_TeamUp_Corps_Friend;                             // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_Corps_Friend_Detail_Profile;                     // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_TeamupCorpsLiteProfile>   BP_ARRAY_Corps_Lite_Profile;                              // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_TeamUp_Near_By_Friend;                           // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MyPlyerCount;                                          // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUp_Friend_Scroll_End;                              // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TeamupCorpsLiteProfile           BP_STRUCT_TeamupCorpsLiteProfile;                         // 0x0420(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_Teamup_Friend_Detail_Profile;                    // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_InviteFriendProfile              BP_STRUCT_InviteFriendProfile;                            // 0x0440(0x00E8) (Edit, BlueprintVisible)
	struct FString                                     BP_InviteFriendName;                                      // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUp_Friend_Online_Num;                              // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUp_Friend_Menu_Type;                               // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TargetHeadIsFriend;                                    // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	int                                                BP_ReservationState;                                      // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TeamUPFriendIsShow;                                    // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	struct FString                                     BP_TeamUPFriend_Alliance_Team_Bonus_String;               // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_TeamupFriendLiteProfile>  BP_ARRAY_Teamup_Friend_Lite_Profile;                      // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_InviteFriendID;                                        // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_CarTeam_Friend;                                  // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUp_Friend_Scroll_Start;                            // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	struct FString                                     BP_FriendHeadClickGid;                                    // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup_friend.bp_teamup_friend_C");
		return ptr;
	}


	void EventTeamupFriendScrollChanged_NoFetch();
	void EventTeamupFriendScrollChanged();
	void EventShowListCallBack_NoFetch();
	void EventShowListCallBack();
	void EventClickOfflineShare_NoFetch();
	void EventClickOfflineShare();
	void EventClickAddFriendBtn_NoFetch();
	void EventClickAddFriendBtn();
	void EventClickReserveFriend_NoFetch();
	void EventClickReserveFriend();
	void EventClickHeadBtn_NoFetch();
	void EventClickHeadBtn();
	void EventClickStartChat_NoFetch();
	void EventClickStartChat();
	void EventClickPlatformInvite_NoFetch();
	void EventClickPlatformInvite();
	void EventClickPlatformInviteWXMiniApp_NoFetch();
	void EventClickPlatformInviteWXMiniApp();
	void EventTeamUpFriendClickNearBy_NoFetch();
	void EventTeamUpFriendClickNearBy();
	void EventSwitchRecent_NoFetch();
	void EventSwitchRecent();
	void EventClickJoinBtn_NoFetch();
	void EventClickJoinBtn();
	void EventTeamupFriendSwitchMenu_NoFetch();
	void EventTeamupFriendSwitchMenu();
	void EventSwitchFriend_NoFetch();
	void EventSwitchFriend();
	void EventSwitchCorps_NoFetch();
	void EventSwitchCorps();
	void EventClickInviteFriendBtn_NoFetch();
	void EventClickInviteFriendBtn();
	void EventTeamupFriendClickAddFriend_NoFetch();
	void EventTeamupFriendClickAddFriend();
	void EventSwitchCarTeam_NoFetch();
	void EventSwitchCarTeam();
	void EventCorpsFriendScrollChanged_NoFetch();
	void EventCorpsFriendScrollChanged();
	void EventFetchTeamupFriendInfo_NoFetch();
	void EventFetchTeamupFriendInfo();
	void EventClickPlatformInviteQRCode_NoFetch();
	void EventClickPlatformInviteQRCode();
	void EventCheckReservationState_NoFetch();
	void EventCheckReservationState();
	void EventTeamupFriendCheckIsFriend_NoFetch();
	void EventTeamupFriendCheckIsFriend();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
