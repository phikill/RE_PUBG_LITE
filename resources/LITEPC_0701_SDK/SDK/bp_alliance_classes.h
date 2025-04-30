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

// ScriptBlueprintGeneratedClass bp_alliance.bp_alliance_C
// 0x0640 (0x09D0 - 0x0390)
class Abp_alliance_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_Alliance_IsOpenMainPanel;                              // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	int                                                BP_Alliance_FROMMAINPANEL;                                // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Alliance_Rules;                                        // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Alliance_SelfUID;                                      // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Alliance_Selected_Member_Id;                           // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Alliance_Current_Selected_Tab;                         // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FString                                     BP_Alliance_TeamName;                                     // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Alliance_Selected_Team_ID;                             // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Selected_Alliance_Info           BP_STRUCT_Selected_Alliance_Info;                         // 0x03F8(0x00A0) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_AllianceInfo>             BP_ARRAY_Alliance_Applyed_List;                           // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Invite_Alliance_Info             BP_STRUCT_Invite_Alliance_Info;                           // 0x04A8(0x00A8) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_AllianceInfo>             BP_ARRAY_Alliance_Info_List;                              // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_AllianceMemberProfile>    BP_ARRAY_Alliance_Member_Profile_List;                    // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_AllianceInfo                     BP_STRUCT_AllianceInfo;                                   // 0x0570(0x00A8) (Edit, BlueprintVisible)
	bool                                               BP_Alliance_RecruitRedPointStatus;                        // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	struct FBP_STRUCT_AllianceMemberProfile            BP_STRUCT_AllianceMemberProfile;                          // 0x0620(0x0120) (Edit, BlueprintVisible)
	int                                                BP_Alliance_FROMCREATEPANEL;                              // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	struct FBP_STRUCT_Selected_Team_Captain_Profile    BP_STRUCT_Selected_Team_Captain_Profile;                  // 0x0748(0x0120) (Edit, BlueprintVisible)
	struct FString                                     BP_Alliance_Notice;                                       // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Alliance_SelectIconId;                                 // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_AllianceMemberProfile>    BP_ARRAY_Alliance_SelectTeam_Friend_Profile_List;         // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Alliance_SelectIconFrom;                               // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Alliance_SelfJoinGroup;                                // 0x0894(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	struct FBP_STRUCT_Selected_Member_Profile          BP_STRUCT_Selected_Member_Profile;                        // 0x0898(0x0120) (Edit, BlueprintVisible)
	struct FString                                     BP_Alliance_Applyed_Team_ID;                              // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_alliance.bp_alliance_C");
		return ptr;
	}


	void EventClickAllianceCloseMainPanel_NoFetch();
	void EventClickAllianceCloseMainPanel();
	void EventAllianceSelfTeamReport_NoFetch();
	void EventAllianceSelfTeamReport();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventAllianceCreateTeamFilterName_NoFetch();
	void EventAllianceCreateTeamFilterName();
	void EventClickAllianceCreateTeamBtn_NoFetch();
	void EventClickAllianceCreateTeamBtn();
	void EventAllianceClickKickout_NoFetch();
	void EventAllianceClickKickout();
	void EventAllianceChangeTeamNotice_NoFetch();
	void EventAllianceChangeTeamNotice();
	void EventClickShowSelectIconMainPanel_FromCreatePanel_NoFetch();
	void EventClickShowSelectIconMainPanel_FromCreatePanel();
	void EventAllianceChangeTeamName_NoFetch();
	void EventAllianceChangeTeamName();
	void EventClickShowSelectIconMainPanel_FromMainPanel_NoFetch();
	void EventClickShowSelectIconMainPanel_FromMainPanel();
	void EventAllianceClickAppointment_NoFetch();
	void EventAllianceClickAppointment();
	void EventAllianceClickOpenView_NoFetch();
	void EventAllianceClickOpenView();
	void EventAllianceClickAddFriend_NoFetch();
	void EventAllianceClickAddFriend();
	void EventAllianceClickUnbindQQGroup_NoFetch();
	void EventAllianceClickUnbindQQGroup();
	void EventAllianceClickExitTeam_NoFetch();
	void EventAllianceClickExitTeam();
	void EventAllianceClickBuildWxGroupTest_NoFetch();
	void EventAllianceClickBuildWxGroupTest();
	void EventAllianceClickBuildWxGroupTest2_NoFetch();
	void EventAllianceClickBuildWxGroupTest2();
	void EventAllianceQueryWxGroupTest_NoFetch();
	void EventAllianceQueryWxGroupTest();
	void EventAllianceQueryWxGroupTest2_NoFetch();
	void EventAllianceQueryWxGroupTest2();
	void EventAllianceClickJoinWxGroup_NoFetch();
	void EventAllianceClickJoinWxGroup();
	void EventAllianceClickUnbindWxGroup_NoFetch();
	void EventAllianceClickUnbindWxGroup();
	void EventAllianceClickBuildQQGroup_NoFetch();
	void EventAllianceClickBuildQQGroup();
	void EventClickAllianceSelectIcon_NoFetch();
	void EventClickAllianceSelectIcon();
	void EventAllianceClickRecommendTeam_NoFetch();
	void EventAllianceClickRecommendTeam();
	void EventAllianceClickRules_NoFetch();
	void EventAllianceClickRules();
	void EventAllianceInviteClickAccepted_NoFetch();
	void EventAllianceInviteClickAccepted();
	void EventAllianceClickRecruit_NoFetch();
	void EventAllianceClickRecruit();
	void EventAllianceClickRecommendList_NoFetch();
	void EventAllianceClickRecommendList();
	void EventAllianceFinishCreation_NoFetch();
	void EventAllianceFinishCreation();
	void EventAllianceClickApplyedList_NoFetch();
	void EventAllianceClickApplyedList();
	void EventAllianceClickChat_NoFetch();
	void EventAllianceClickChat();
	void EventClickAllianceRandomNameBtn_NoFetch();
	void EventClickAllianceRandomNameBtn();
	void EventAllianceRecommendListReport_NoFetch();
	void EventAllianceRecommendListReport();
	void EventAllianceClickBuildWxGroup_NoFetch();
	void EventAllianceClickBuildWxGroup();
	void EventAllianceClickRecruitApplyList_NoFetch();
	void EventAllianceClickRecruitApplyList();
	void EventAllianceClickJoinQQGroup_NoFetch();
	void EventAllianceClickJoinQQGroup();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventAllianceChangeTeamIcon_NoFetch();
	void EventAllianceChangeTeamIcon();
	void EventAllianceClickJoinTeam_NoFetch();
	void EventAllianceClickJoinTeam();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
