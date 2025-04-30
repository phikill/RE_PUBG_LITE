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

// ScriptBlueprintGeneratedClass bp_teamup.bp_teamup_C
// 0x02F0 (0x0680 - 0x0390)
class Abp_teamup_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TeamUp_Fill;                                              // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FString                                     TEAMUP_CHS_NAME_QUAD;                                     // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TEAMUP_APPLY_TIP;                                         // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TEAMUP_CHS_NAME_NONE;                                     // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamUp_My_User_ID;                                        // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TEAMUP_TEAM_TYPE_QUAD;                                    // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	struct FString                                     TeamUp_Applyer_Name;                                      // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TEAMUP_APPLY_TIMEOUT_TIP;                                 // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_TopTipApplyMessage;                                    // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TeamUp_Auto_Refuse;                                       // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_Click_Switch_Camera;                               // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x041A(0x0006) MISSED OFFSET
	struct FString                                     TeamUp_Quick_Msg_GID;                                     // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamUp_Quick_Msg_Content;                                 // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TeamUp_GameType;                                          // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUP_Shield_Lock_Solo;                                  // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUP_Shield_Lock_Double;                                // 0x0445(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0446(0x0002) MISSED OFFSET
	struct FString                                     BP_TopTip_ClickHeadID;                                    // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamUp_CrtTeam_ID;                                        // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TeamUp_Click_Switch_Camera_Time;                          // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FString                                     TEAMUP_CHS_NAME_DOUBLE;                                   // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TopTipRefuseInfo                 BP_STRUCT_TopTipRefuseInfo;                               // 0x0480(0x0010) (Edit, BlueprintVisible)
	bool                                               TeamUp_IS_LOCK_DOUBLE;                                    // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_DestinyIsLock;                                         // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0492(0x0006) MISSED OFFSET
	TArray<struct FBP_STRUCT_TeamUpMenuInfo>           BP_ARRAY_TeamUpMenuInfoList;                              // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamUp_Click_Player_Name;                                 // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TeamUpMenuInfo                   BP_STRUCT_TeamUpMenuInfo;                                 // 0x04B8(0x0070) (Edit, BlueprintVisible)
	bool                                               TeamUp_AutoMatch;                                         // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	int                                                TeamUp_Count_Down;                                        // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_Click_Player_IS_FRIEND;                            // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_TopTipRefuseInfo>         BP_ARRAY_TopTipRefuseInfos;                               // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TeamUp_Will_Change_Fill;                                  // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamUp_Invite_GameType;                                   // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_IS_LOCK_QUAD;                                      // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0551(0x0003) MISSED OFFSET
	int                                                TeamUp_Invite_Apply_Type;                                 // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_IS_LOCK_SOLO;                                      // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	int                                                TeamUp_Change_Team_Type;                                  // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUP_Shield_Lock_Quad;                                  // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	struct FString                                     TEAMUP_INVITE_TIMEOUT_TIP;                                // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TeamUp_Change_Game_Type;                                  // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Teamup_Show_NewteachingGuide;                             // 0x057C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x057D(0x0003) MISSED OFFSET
	int                                                TeamUp_Team_Type;                                         // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_Is_Matching;                                       // 0x0584(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	struct FString                                     TeamUp_Host_ID;                                           // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TEAMUP_TEAM_TYPE_SOLO;                                    // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	struct FString                                     TeamUp_Team_Type_Name;                                    // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TEAMUP_TEAM_TYPE_DOUBLE;                                  // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	struct FString                                     TEAMUP_CHS_NAME_SOLO;                                     // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TopTipProfileInfo                BP_STRUCT_TopTipProfileInfo;                              // 0x05C8(0x0078) (Edit, BlueprintVisible)
	struct FString                                     TeamUp_Inviter_Name;                                      // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TeamUp_CrtTeam_Count;                                     // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_IsSelfHost;                                        // 0x0654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0655(0x0003) MISSED OFFSET
	struct FString                                     TeamUp_Click_Player_ID;                                   // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TEAMUP_INVITE_TIP;                                        // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup.bp_teamup_C");
		return ptr;
	}


	void EventTeamUpClickExpand_NoFetch();
	void EventTeamUpClickExpand();
	void EventTeamUpInviteApplyRefuse_NoFetch();
	void EventTeamUpInviteApplyRefuse();
	void EventTeamUpApplyPermit_NoFetch();
	void EventTeamUpApplyPermit();
	void EventTeamUpApplyForbid_NoFetch();
	void EventTeamUpApplyForbid();
	void EventTeamUpNoRightForMatching_NoFetch();
	void EventTeamUpNoRightForMatching();
	void EventTeamUpClickTrainingBtn_NoFetch();
	void EventTeamUpClickTrainingBtn();
	void EventTeamUpClickPlayerInfo_NoFetch();
	void EventTeamUpClickPlayerInfo();
	void EventTeamUpChangeRingGameType_NoFetch();
	void EventTeamUpChangeRingGameType();
	void EventTeamUpChangeTeamType_NoFetch();
	void EventTeamUpChangeTeamType();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventTeamUpInviteApplyAutoRefuse_NoFetch();
	void EventTeamUpInviteApplyAutoRefuse();
	void EventTeamUpChangeClassicGameType_NoFetch();
	void EventTeamUpChangeClassicGameType();
	void EventTeamUpLeaveTeam_NoFetch();
	void EventTeamUpLeaveTeam();
	void EventTeamUpUI_Push_NoFetch();
	void EventTeamUpUI_Push();
	void EventTeamUpInviteApplyPermit_NoFetch();
	void EventTeamUpInviteApplyPermit();
	void EventFetchTeamUpInfo_NoFetch();
	void EventFetchTeamUpInfo();
	void EventTeamUpClickCreateRoomBtn_NoFetch();
	void EventTeamUpClickCreateRoomBtn();
	void EventTeamUpFailOnMatching_NoFetch();
	void EventTeamUpFailOnMatching();
	void EventShowTopTip_NoFetch();
	void EventShowTopTip();
	void EventSetHasGuideNewteaching_NoFetch();
	void EventSetHasGuideNewteaching();
	void EventTeamUpAddFriend_NoFetch();
	void EventTeamUpAddFriend();
	void EventTeamUpClickKick_NoFetch();
	void EventTeamUpClickKick();
	void EventTeamUpClickQuit_NoFetch();
	void EventTeamUpClickQuit();
	void EventTeamUpNoHostRight_NoFetch();
	void EventTeamUpNoHostRight();
	void EventTeamUpClickAutoMatchBtn_NoFetch();
	void EventTeamUpClickAutoMatchBtn();
	void EventTeamUpUpdateClickPlayerInfo_NoFetch();
	void EventTeamUpUpdateClickPlayerInfo();
	void EventTeamUpEnterTrainingMode_NoFetch();
	void EventTeamUpEnterTrainingMode();
	void EventTeamUpSelectRefuseInfo_NoFetch();
	void EventTeamUpSelectRefuseInfo();
	void EventTeamUpClickHead_NoFetch();
	void EventTeamUpClickHead();
	void EventTeamUpDestinyLimit_NoFetch();
	void EventTeamUpDestinyLimit();
	void EventTeamUpChangeLeader_NoFetch();
	void EventTeamUpChangeLeader();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
