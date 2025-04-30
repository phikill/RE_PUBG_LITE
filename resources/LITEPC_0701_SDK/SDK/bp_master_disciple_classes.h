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

// ScriptBlueprintGeneratedClass bp_master_disciple.bp_master_disciple_C
// 0x0300 (0x0690 - 0x0390)
class Abp_master_disciple_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_MasterFriendProfile>      BP_ARRAY_ServerRecommendList;                             // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MasterDisciple_ShowSearch;                             // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FString                                     BP_MasterDisciple_ApplyToTeacherDefaultMsg;               // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MasterFriendProfile>      BP_ARRAY_MasterDiscipleSearchList;                        // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_Recommend_Master;                       // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_Recommend_Disciple;                     // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_Empty_Master;                           // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_ApplyToDiscipleDefaultMsg;              // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_Recommend_Search;                       // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_SegmentPostFix;                         // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_Empty_Disciple;                         // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_TitleText_RecommendMaster;              // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_ClickPlayerId;                          // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MasterDisciple_RecommendType;                          // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_MasterFriendProfile>      BP_ARRAY_RecommendDiscipleList;                           // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_Empty_Search;                           // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MasterDisciple_ClickPlayerGender;                      // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	struct FString                                     BP_MasterDisciple_TitleText_RecommendDisciple;            // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_InputString;                            // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MasterFriendProfile              BP_STRUCT_MasterFriendProfile;                            // 0x04B0(0x01B0) (Edit, BlueprintVisible)
	int                                                BP_MasterDisciple_FriendPlatform;                         // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_MasterFriendProfile>      BP_ARRAY_RecommendMasterList;                             // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_SelfUID;                                // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_disciple.bp_master_disciple_C");
		return ptr;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventMasterDiscipleShowSendAddFriendRequestTips_NoFetch();
	void EventMasterDiscipleShowSendAddFriendRequestTips();
	void EventMasterDiscipleCommentCheck_NoFetch();
	void EventMasterDiscipleCommentCheck();
	void EventClickMasterDiscipleApply_NoFetch();
	void EventClickMasterDiscipleApply();
	void EventClickMasterDiscipleSearch_NoFetch();
	void EventClickMasterDiscipleSearch();
	void EventClickMasterDiscipleOpenSearch_NoFetch();
	void EventClickMasterDiscipleOpenSearch();
	void EventClickMasterDiscipleHead_NoFetch();
	void EventClickMasterDiscipleHead();
	void EventClickMasterDiscipleAddFriend_NoFetch();
	void EventClickMasterDiscipleAddFriend();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
