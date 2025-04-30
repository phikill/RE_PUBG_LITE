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

// ScriptBlueprintGeneratedClass bp_muster.bp_muster_C
// 0x01B0 (0x0540 - 0x0390)
class Abp_muster_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_MusterTabInfo                    BP_STRUCT_MusterTabInfo;                                  // 0x0398(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MusterPlayerInfo                 BP_STRUCT_MusterPlayerInfo;                               // 0x03B0(0x0068) (Edit, BlueprintVisible)
	struct FString                                     BP_Muster_BindCode;                                       // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Muster_IsBind;                                         // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	struct FString                                     BP_Muster_SelfInviteCode;                                 // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Muster_TabIndex;                                       // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	struct FBP_STRUCT_MusterBindPlayer                 BP_STRUCT_MusterBindPlayer;                               // 0x0448(0x0068) (Edit, BlueprintVisible)
	struct FString                                     BP_Muster_FriendUid;                                      // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Muster_TotalGangUpScore;                               // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Muster_GetAwardIndex;                                  // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Muster_IsFriend;                                       // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	int                                                BP_Muster_TotalScore;                                     // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_MusterAward                      BP_STRUCT_MusterAward;                                    // 0x04D0(0x0020) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MusterPlayerInfo>         BP_ARRAY_MusterInviteList;                                // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MusterAward>              BP_ARRAY_MusterAwardList;                                 // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Muster_TodayGangUpNum;                                 // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	struct FString                                     BP_Muster_ActiveTime;                                     // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MusterTabInfo>            BP_ARRAY_MusterTabList;                                   // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_muster.bp_muster_C");
		return ptr;
	}


	void EventMusterAddFriend_NoFetch();
	void EventMusterAddFriend();
	void EventMusterGetAward_NoFetch();
	void EventMusterGetAward();
	void EventMusterUIHide_NoFetch();
	void EventMusterUIHide();
	void EventMusterUIUpdate_NoFetch();
	void EventMusterUIUpdate();
	void EventMusterCopyCode_NoFetch();
	void EventMusterCopyCode();
	void EventMusterPasteCode_NoFetch();
	void EventMusterPasteCode();
	void EventMusterBind_NoFetch();
	void EventMusterBind();
	void EventMusterShowLog_NoFetch();
	void EventMusterShowLog();
	void EventMusterOpenShop_NoFetch();
	void EventMusterOpenShop();
	void EventMusterShare_NoFetch();
	void EventMusterShare();
	void EventMusterUIHelp_NoFetch();
	void EventMusterUIHelp();
	void EventMusterCheckFriend_NoFetch();
	void EventMusterCheckFriend();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
