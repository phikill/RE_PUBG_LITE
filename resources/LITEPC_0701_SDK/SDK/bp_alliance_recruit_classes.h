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

// ScriptBlueprintGeneratedClass bp_alliance_recruit.bp_alliance_recruit_C
// 0x01A0 (0x0530 - 0x0390)
class Abp_alliance_recruit_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_AllianceRecruit                  BP_STRUCT_AllianceRecruit;                                // 0x0398(0x00F0) (Edit, BlueprintVisible)
	struct FString                                     BP_AllianceFriendNumStr;                                  // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Alliance_InvitedRemainNum;                             // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_AllianceRecruitReadPoint;                              // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	int                                                BP_Alliance_Recruit_Scroll_End;                           // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_AllianceRecruitProfile>   BP_ARRAY_AllianceRecruit_Lite_Profile;                    // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_AllianceRecruitLeader;                                 // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	int                                                BP_AllianceRecruit_CurType;                               // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_AllianceRecruit>          BP_ARRAY_AllianceRecruit_Detail_Profile;                  // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Alliance_UpdateInnerIndex;                             // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_AllianceRecruit_IsShow;                                // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	int                                                BP_Alliance_TargetType;                                   // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	struct FBP_STRUCT_AllianceRecruitProfile           BP_STRUCT_AllianceRecruitProfile;                         // 0x04E0(0x0010) (Edit, BlueprintVisible)
	int                                                BP_Alliance_Recruit_Scroll_Start;                         // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	struct FString                                     BP_AllianceApply_Gid;                                     // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_AllianceRecruit>          BP_ARRAY_Alliance_ApplyList;                              // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_AllianceRecruit_InviterGid;                            // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_alliance_recruit.bp_alliance_recruit_C");
		return ptr;
	}


	void EventHideUI_NoFetch();
	void EventHideUI();
	void EventClickApplyRefuse_NoFetch();
	void EventClickApplyRefuse();
	void EventClickHeadApply_NoFetch();
	void EventClickHeadApply();
	void EventAllianceRecruit_Push_NoFetch();
	void EventAllianceRecruit_Push();
	void EventClickHeadRecruit_NoFetch();
	void EventClickHeadRecruit();
	void EventClickRecruit_NoFetch();
	void EventClickRecruit();
	void EventAllianceRecruitScrollChanged_NoFetch();
	void EventAllianceRecruitScrollChanged();
	void EventAllianceRecruitFetchInfo_NoFetch();
	void EventAllianceRecruitFetchInfo();
	void EventShowApplyList_NoFetch();
	void EventShowApplyList();
	void EventClickApplyAgree_NoFetch();
	void EventClickApplyAgree();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
