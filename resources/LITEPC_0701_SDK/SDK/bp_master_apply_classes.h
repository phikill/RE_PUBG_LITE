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

// ScriptBlueprintGeneratedClass bp_master_apply.bp_master_apply_C
// 0x0068 (0x03F8 - 0x0390)
class Abp_master_apply_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_MasterApply_ClickPlayerId;                             // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterApply_ApplyToTeacherDefaultMsg;                  // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterApply_ApplyToDiscipleDefaultMsg;                 // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterApply_ClickPlayerMsg;                            // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MasterApply_TargetType;                                // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FString                                     BP_MasterApply_InputString;                               // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_apply.bp_master_apply_C");
		return ptr;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickMasterApplyConfirm_NoFetch();
	void EventClickMasterApplyConfirm();
	void EventMasterApplyCommentCheck_NoFetch();
	void EventMasterApplyCommentCheck();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
