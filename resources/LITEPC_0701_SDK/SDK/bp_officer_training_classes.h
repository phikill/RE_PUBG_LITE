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

// ScriptBlueprintGeneratedClass bp_officer_training.bp_officer_training_C
// 0x0078 (0x0408 - 0x0390)
class Abp_officer_training_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_OfficerTrainingBoxInfo>   BP_ARRAY_OfficerTrainingBoxInfos;                         // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_OfficerTrainingInfo>      BP_ARRAY_OfficerTrainingInfos;                            // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_OfficerTrainingInfo              BP_STRUCT_OfficerTrainingInfo;                            // 0x03B8(0x0008) (Edit, BlueprintVisible)
	int                                                BP_CurrentOperateOfficerTrainingId;                       // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	struct FBP_STRUCT_OfficerTrainingBoxInfo           BP_STRUCT_OfficerTrainingBoxInfo;                         // 0x03C8(0x0020) (Edit, BlueprintVisible)
	struct FString                                     BP_OfficerTrainingTipsString;                             // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurrentOperateOfficerTrainingBoxId;                    // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_officer_training.bp_officer_training_C");
		return ptr;
	}


	void EventOfficerTrainingOnShowAward_NoFetch();
	void EventOfficerTrainingOnShowAward();
	void EventOfficerTrainingUIClose_NoFetch();
	void EventOfficerTrainingUIClose();
	void EventOfficerTrainingOnRuleBtnClicked_NoFetch();
	void EventOfficerTrainingOnRuleBtnClicked();
	void EventOfficerTrainingOnGotAward_NoFetch();
	void EventOfficerTrainingOnGotAward();
	void EventOfficerTrainingOnGetAward_NoFetch();
	void EventOfficerTrainingOnGetAward();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
