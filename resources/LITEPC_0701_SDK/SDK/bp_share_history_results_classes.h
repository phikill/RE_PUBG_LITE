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

// ScriptBlueprintGeneratedClass bp_share_history_results.bp_share_history_results_C
// 0x0190 (0x0520 - 0x0390)
class Abp_share_history_results_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ShareHistoryResults_DetailInfo   BP_STRUCT_ShareHistoryResults_DetailInfo;                 // 0x0398(0x00A8) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ShareHistoryResults_TeammateInfo> BP_ARRAY_ShareHistoryResults_TeammateInfoList;            // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShareHistoryResults_RadarInfo    BP_STRUCT_ShareHistoryResults_RadarInfo;                  // 0x0450(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ShareHistoryResults_TeammateInfo BP_STRUCT_ShareHistoryResults_TeammateInfo;               // 0x04A0(0x0078) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_history_results.bp_share_history_results_C");
		return ptr;
	}


	void EventShareHistoryResultsHide_NoFetch();
	void EventShareHistoryResultsHide();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
