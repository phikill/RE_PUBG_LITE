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

// ScriptBlueprintGeneratedClass bp_corps_training.bp_corps_training_C
// 0x0168 (0x04F8 - 0x0390)
class Abp_corps_training_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Train_CorpsScore;                                      // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_CorpsTrainRankItem               BP_STRUCT_CorpsTrainRankItem;                             // 0x03A0(0x0068) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CorpsTrainCorpsTask>      BP_ARRAY_CorpsTrainCorpsTask;                             // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Train_SelectRankUid;                                   // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsTrainAwardItem              BP_STRUCT_CorpsTrainAwardItem;                            // 0x0428(0x0008) (Edit, BlueprintVisible)
	int                                                BP_Train_SelfStatus;                                      // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Train_SelfTarget;                                      // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsTrainRankItem>       BP_ARRAY_CorpsTrainRankList;                              // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Train_SelfScore;                                       // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Train_CorpsProgress;                                   // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsTrainRankItemSelf           BP_STRUCT_CorpsTrainRankItemSelf;                         // 0x0450(0x0068) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsTrainCorpsTask              BP_STRUCT_CorpsTrainCorpsTask;                            // 0x04B8(0x0010) (Edit, BlueprintVisible)
	int                                                BP_Train_GetCorpsAwardIndex;                              // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Train_isReLoadRankList;                                // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	int                                                BP_Train_SelfTaskID;                                      // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Train_SelectIsFriend;                                  // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	int                                                BP_Train_TodayID;                                         // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsTrainAwardItem>      BP_ARRAY_CorpsTrainAward;                                 // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_training.bp_corps_training_C");
		return ptr;
	}


	void EventCorpsTrainingUIItemMenu_NoFetch();
	void EventCorpsTrainingUIItemMenu();
	void EventCorpsTrainingUIOpenHisRank_NoFetch();
	void EventCorpsTrainingUIOpenHisRank();
	void EventCorpsTrainingUIShowRoleInfo_NoFetch();
	void EventCorpsTrainingUIShowRoleInfo();
	void EventCorpsTrainingUIHelp_NoFetch();
	void EventCorpsTrainingUIHelp();
	void EventCorpsTrainingUIGetCorpsAward_NoFetch();
	void EventCorpsTrainingUIGetCorpsAward();
	void EventCorpsTrainingUIAddFriend_NoFetch();
	void EventCorpsTrainingUIAddFriend();
	void EventCorpsTrainingUIGetSelfAward_NoFetch();
	void EventCorpsTrainingUIGetSelfAward();
	void EventCorpsTrainingUIChat_NoFetch();
	void EventCorpsTrainingUIChat();
	void EventCorpsTrainingUIHide_NoFetch();
	void EventCorpsTrainingUIHide();
	void EventCorpsTrainingUIUpdate_NoFetch();
	void EventCorpsTrainingUIUpdate();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
