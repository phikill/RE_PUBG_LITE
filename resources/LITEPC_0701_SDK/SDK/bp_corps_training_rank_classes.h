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

// ScriptBlueprintGeneratedClass bp_corps_training_rank.bp_corps_training_rank_C
// 0x0140 (0x04D0 - 0x0390)
class Abp_corps_training_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsTrainRank_TrainID;                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsTrainRank_IsReLoadList;                           // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	struct FString                                     BP_CorpsTrainRank_SelectUid;                              // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsTrainRankTabInfo            BP_STRUCT_CorpsTrainRankTabInfo;                          // 0x03B0(0x0020) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsTrainRankItem               BP_STRUCT_CorpsTrainRankItem;                             // 0x03D0(0x0068) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CorpsTrainRankTabInfo>    BP_ARRAY_CorpsTrainRankTabList;                           // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsTrainRankItem>       BP_ARRAY_CorpsTrainRankItemList;                          // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsTrainRankItemMe             BP_STRUCT_CorpsTrainRankItemMe;                           // 0x0458(0x0068) (Edit, BlueprintVisible)
	int                                                BP_CorpsTrainRank_TabIndex;                               // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsTrainRank_SelectIsFriend;                         // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_training_rank.bp_corps_training_rank_C");
		return ptr;
	}


	void EventCorpsTrainingRankUIUpdate_NoFetch();
	void EventCorpsTrainingRankUIUpdate();
	void EventCorpsTrainingRankUIAddFriend_NoFetch();
	void EventCorpsTrainingRankUIAddFriend();
	void EventCorpsTrainingRankUIChat_NoFetch();
	void EventCorpsTrainingRankUIChat();
	void EventCorpsTrainingRankUIItemMenu_NoFetch();
	void EventCorpsTrainingRankUIItemMenu();
	void EventCorpsTrainingRankUIShowRoleInfo_NoFetch();
	void EventCorpsTrainingRankUIShowRoleInfo();
	void EventCorpsTrainingRankUIHide_NoFetch();
	void EventCorpsTrainingRankUIHide();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
