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

// ScriptBlueprintGeneratedClass bp_corps_suggestion.bp_corps_suggestion_C
// 0x0308 (0x0698 - 0x0390)
class Abp_corps_suggestion_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Corps_Suggestion_CityID;                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsSnapInfo>            BP_ARRAY_Corps_SearchList;                                // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Corps_SelectedCommanderInfo      BP_STRUCT_Corps_SelectedCommanderInfo;                    // 0x03B0(0x0020) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CorpsSuggestion_InviteCorpsInfo> BP_ARRAY_Corps_InvitedCorpsList;                          // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Corps_Suggestion_NotNeedApproval;                      // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Corps_Suggestion_AccordRequirement;                    // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET
	struct FBP_STRUCT_CorpsSnapInfo                    BP_STRUCT_CorpsSnapInfo;                                  // 0x03E8(0x00C0) (Edit, BlueprintVisible)
	bool                                               BP_CorpsSuggestionShowAnimation;                          // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_Corps_ApplicationTempIDList;                     // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Corps_Suggestion_OldSelectedIndex;                     // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	struct FBP_STRUCT_CORPS_Suggestion_DetailPanelData BP_STRUCT_CORPS_Suggestion_DetailPanelData;               // 0x04C8(0x00C0) (Edit, BlueprintVisible)
	int                                                BP_Corps_Suggestion_CurSelectedIndex;                     // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsSnapInfo>            BP_ARRAY_Corps_SuggestionList;                            // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsFriendInfo>          BP_ARRAY_Corps_SelectedFriends;                           // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Corps_Suggestion_SearchResult;                         // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x05B1(0x0007) MISSED OFFSET
	struct FString                                     BP_Corps_Suggestion_SearchName;                           // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsSuggestion_InviteCorpsInfo  BP_STRUCT_CorpsSuggestion_InviteCorpsInfo;                // 0x05C8(0x0088) (Edit, BlueprintVisible)
	int                                                BP_Corps_Suggestion_Toggle;                               // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	struct FBP_STRUCT_CorpsFriendInfo                  BP_STRUCT_CorpsFriendInfo;                                // 0x0658(0x0018) (Edit, BlueprintVisible)
	struct FString                                     BP_Corps_MemberID;                                        // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsSnapInfo>            BP_ARRAY_Corps_ApplicationList;                           // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_suggestion.bp_corps_suggestion_C");
		return ptr;
	}


	void EventFetchCorpsSuggestionInfo_NoFetch();
	void EventFetchCorpsSuggestionInfo();
	void EventCorpsSuggestionHideUI_NoFetch();
	void EventCorpsSuggestionHideUI();
	void EventCorpsSuggestionShowUI_NoFetch();
	void EventCorpsSuggestionShowUI();
	void EventSetCorpsSuggestionInfo_Push_NoFetch();
	void EventSetCorpsSuggestionInfo_Push();
	void EventCorpsSuggestionClickApply_NoFetch();
	void EventCorpsSuggestionClickApply();
	void EventCorpsSuggestionClickIgnor_NoFetch();
	void EventCorpsSuggestionClickIgnor();
	void EventCorpsSuggestionOnSelectItemChange_NoFetch();
	void EventCorpsSuggestionOnSelectItemChange();
	void EventCorpsSuggestionShowRole_NoFetch();
	void EventCorpsSuggestionShowRole();
	void EventCorpsSuggestionClickAccept_NoFetch();
	void EventCorpsSuggestionClickAccept();
	void EventCorpsRecommendListReport_NoFetch();
	void EventCorpsRecommendListReport();
	void EventCorpsSuggestionClickCleanSearch_NoFetch();
	void EventCorpsSuggestionClickCleanSearch();
	void EventCorpsSuggestionOnTabChange_NoFetch();
	void EventCorpsSuggestionOnTabChange();
	void EventCorpsSuggestionOnFilterStateChange_NoFetch();
	void EventCorpsSuggestionOnFilterStateChange();
	void EventCorpsSuggestionClickRefresh_NoFetch();
	void EventCorpsSuggestionClickRefresh();
	void EventCorpsSuggestionHelpShow_NoFetch();
	void EventCorpsSuggestionHelpShow();
	void EventCorpsSuggestionClickSearch_NoFetch();
	void EventCorpsSuggestionClickSearch();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
