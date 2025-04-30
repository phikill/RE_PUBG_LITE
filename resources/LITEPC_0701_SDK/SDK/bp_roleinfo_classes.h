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

// ScriptBlueprintGeneratedClass bp_roleinfo.bp_roleinfo_C
// 0x0818 (0x0BA8 - 0x0390)
class Abp_roleinfo_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListExpertArea;              // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SelfID;                                                // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleInfoCard_play_date;                                // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsMaxLevel;                                            // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	int                                                BP_SelfCorpsPosition;                                     // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FPPCombatTotalInfo>       BP_ARRAY_FPPCombatTotalInfoList;                          // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListTime;                    // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListCity1;                   // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleInfoCard_play_time;                                // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RolePlatform;                                          // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	struct FBP_STRUCT_CombatScoreInfo                  BP_STRUCT_CombatScoreInfo;                                // 0x0418(0x0030) (Edit, BlueprintVisible)
	bool                                               BP_RoleInfo_CanBeMaster;                                  // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_FPPCombatScoreInfo>       BP_ARRAY_FPPCombatScoreInfoList;                          // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SignHintText;                                          // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_PersonalTotalRankInfo            BP_STRUCT_PersonalTotalRankInfo;                          // 0x0470(0x0010) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CombatGradeInfo                  BP_STRUCT_CombatGradeInfo;                                // 0x0480(0x0070) (Edit, BlueprintVisible)
	int                                                BP_RoleInfo_CombatModelTypeMax;                           // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	struct FString                                     BP_RoleInfoCard_city2;                                    // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfo_HistoryRedpoint;                              // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	struct FBP_STRUCT_CombatSurviveInfo                BP_STRUCT_CombatSurviveInfo;                              // 0x0510(0x0080) (Edit, BlueprintVisible)
	struct FBP_STRUCT_FPPPersonalTotalRankInfo         BP_STRUCT_FPPPersonalTotalRankInfo;                       // 0x0590(0x0010) (Edit, BlueprintVisible)
	struct FString                                     BP_Sign;                                                  // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FPPCombatScoreInfo               BP_STRUCT_FPPCombatScoreInfo;                             // 0x05B0(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_FPPCombatTotalInfo               BP_STRUCT_FPPCombatTotalInfo;                             // 0x05E0(0x0060) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CombatBattleInfo>         BP_ARRAY_CombatBattleInfoList;                            // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleInfoCard_expert_area;                              // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FPPCombatBattleInfo>      BP_ARRAY_FPPCombatBattleInfoList;                         // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CombatTotalInfo>          BP_ARRAY_CombatTotalInfoList;                             // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsSummary                     BP_STRUCT_CorpsSummary;                                   // 0x0680(0x0088) (Edit, BlueprintVisible)
	TArray<int>                                        BP_ARRAY_RoleInfoSeasonIDList;                            // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CombatModelType;                                       // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardTagList;                             // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoleInfoSeasonNameList;                          // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_OpenCorpsCanJoin;                                      // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0741(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_CombatSurviveInfo>        BP_ARRAY_CombatSurviveInfoList;                           // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RoleInfo_CombatShootTypeID;                            // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FPPCombatGradeInfo>       BP_ARRAY_FPPCombatGradeInfoList;                          // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_IntimateInfo                     BP_STRUCT_IntimateInfo;                                   // 0x0770(0x0004) (Edit, BlueprintVisible)
	bool                                               BP_ShowAddFriend;                                         // 0x0774(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	struct FString                                     BP_SelfCorpsID;                                           // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfoIsEditCard;                                    // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0789(0x0007) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_RoleInfoShootTypeNameList;                       // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleInfoCard_tendency;                                 // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsShareAwardGold;                                      // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x07B1(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_FPPCombatSurviveInfo>     BP_ARRAY_FPPCombatSurviveInfoList;                        // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_IntimateInfo>             BP_ARRAY_IntimateInfoList;                                // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FPPCombatGradeInfo               BP_STRUCT_FPPCombatGradeInfo;                             // 0x07D8(0x0070) (Edit, BlueprintVisible)
	struct FString                                     BP_CorpsHistoryUrl;                                       // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfo_CanBeDisciple;                                // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0859(0x0007) MISSED OFFSET
	struct FString                                     BP_RoleInfoCard_expert_area1;                             // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FPPPersonalTotalScoreInfo        BP_STRUCT_FPPPersonalTotalScoreInfo;                      // 0x0870(0x0010) (Edit, BlueprintVisible)
	struct FString                                     BP_RoleInfoCard_city1;                                    // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RoleInfo_BaseShootTypeID;                              // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListCity2;                   // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FPPCombatSurviveInfo             BP_STRUCT_FPPCombatSurviveInfo;                           // 0x08A8(0x0080) (Edit, BlueprintVisible)
	int                                                BP_RoleInfoSeason_ListID;                                 // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	struct FString                                     BP_SignNullText;                                          // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListDate;                    // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_PersonalTotalScoreInfo           BP_STRUCT_PersonalTotalScoreInfo;                         // 0x0950(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CombatGradeInfo>          BP_ARRAY_CombatGradeInfoList;                             // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FPPCombatBattleInfo              BP_STRUCT_FPPCombatBattleInfo;                            // 0x0970(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CombatBattleInfo                 BP_STRUCT_CombatBattleInfo;                               // 0x09C0(0x0050) (Edit, BlueprintVisible)
	int                                                BP_ShareNum;                                              // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsShowOpenAnimation;                                // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	struct FString                                     BP_CombatUrl;                                             // 0x0A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleID;                                                // 0x0A28(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_PersonalBasicInfo                BP_STRUCT_PersonalBasicInfo;                              // 0x0A38(0x00D0) (Edit, BlueprintVisible)
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListTendency;                // 0x0B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CombatScoreInfo>          BP_ARRAY_CombatScoreInfoList;                             // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RoleInfo_ShootTypeMax;                                 // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0B2C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_CombatTotalInfo                  BP_STRUCT_CombatTotalInfo;                                // 0x0B30(0x0060) (Edit, BlueprintVisible)
	struct FString                                     BP_RoleName;                                              // 0x0B90(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo.bp_roleinfo_C");
		return ptr;
	}


	void EventRoleInfoAvatarClicked_NoFetch();
	void EventRoleInfoAvatarClicked();
	void EventRoleInfoSelectSeason_NoFetch();
	void EventRoleInfoSelectSeason();
	void EventAddFriend_NoFetch();
	void EventAddFriend();
	void EventRankDetailBtnClicked_NoFetch();
	void EventRankDetailBtnClicked();
	void EventRoleInfoCardSelectCity1_NoFetch();
	void EventRoleInfoCardSelectCity1();
	void EventRoleInfoCardSelectTime_NoFetch();
	void EventRoleInfoCardSelectTime();
	void EventRoleInfoCardSelectCity2_NoFetch();
	void EventRoleInfoCardSelectCity2();
	void EventRoleInfoClickSaveCard_NoFetch();
	void EventRoleInfoClickSaveCard();
	void EventRoleInfoClickCancelCard_NoFetch();
	void EventRoleInfoClickCancelCard();
	void EventRoleInfoClickComplaint_NoFetch();
	void EventRoleInfoClickComplaint();
	void EventRoleInfoClickApplyToDisciple_NoFetch();
	void EventRoleInfoClickApplyToDisciple();
	void EventRoleInfoClickHonorWall_NoFetch();
	void EventRoleInfoClickHonorWall();
	void EventRoleInfoBaseInfoShootType_NoFetch();
	void EventRoleInfoBaseInfoShootType();
	void EventRoleInfoClickEditCardTag_NoFetch();
	void EventRoleInfoClickEditCardTag();
	void EventRoleInfoCombatInfoShootType_NoFetch();
	void EventRoleInfoCombatInfoShootType();
	void EventRoleInfoClickEditCard_NoFetch();
	void EventRoleInfoClickEditCard();
	void EventRoleInfoSetShootType_NoFetch();
	void EventRoleInfoSetShootType();
	void EventCopyID_NoFetch();
	void EventCopyID();
	void EventRoleInfoClickApplyToMaster_NoFetch();
	void EventRoleInfoClickApplyToMaster();
	void EventRoleInfoRelease_NoFetch();
	void EventRoleInfoRelease();
	void EventCheckCardTab_NoFetch();
	void EventCheckCardTab();
	void EventSetCombatModelType_NoFetch();
	void EventSetCombatModelType();
	void EventRoleInfoSendInviteCorps_NoFetch();
	void EventRoleInfoSendInviteCorps();
	void EventRoleInfoClickHistory_NoFetch();
	void EventRoleInfoClickHistory();
	void EventRoleInfoCardSelectTendency_NoFetch();
	void EventRoleInfoCardSelectTendency();
	void EventCheckIntimateTab_NoFetch();
	void EventCheckIntimateTab();
	void EventShareCombatBtnClicked_NoFetch();
	void EventShareCombatBtnClicked();
	void EventRoleInfoCardSelectDate_NoFetch();
	void EventRoleInfoCardSelectDate();
	void EventRoleInfoCardSelectExpertArea_NoFetch();
	void EventRoleInfoCardSelectExpertArea();
	void EventRoleInfoClickAvatar_NoFetch();
	void EventRoleInfoClickAvatar();
	void EventCopyName_NoFetch();
	void EventCopyName();
	void EventSetInfoForOpenCorpsWnd_NoFetch();
	void EventSetInfoForOpenCorpsWnd();
	void EventCorpsOverRoleInfo_NoFetch();
	void EventCorpsOverRoleInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
