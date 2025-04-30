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

// ScriptBlueprintGeneratedClass bp_corps_rank.bp_corps_rank_C
// 0x00C0 (0x0450 - 0x0390)
class Abp_corps_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CorpsRankInfo                    BP_STRUCT_CorpsRankInfo;                                  // 0x0398(0x0038) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsUinInfo                     BP_STRUCT_CorpsUinInfo;                                   // 0x03D0(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsUinInfo>             BP_ARRAY_Corps_RankUinList;                               // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsRankInfo>            BP_ARRAY_Corps_RankInfoList;                              // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MyCorpsRankInfo                  BP_STRUCT_MyCorpsRankInfo;                                // 0x03F8(0x0038) (Edit, BlueprintVisible)
	int                                                BP_Crops_Rank_Now_Type;                                   // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Corps_Rank_Current_ID;                                 // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_STRUCT_MyCorpsRankNum;                                 // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Corps_Rank_Trans_Begin_Index;                          // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Corps_Rank_Trans_End_Index;                            // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_STRUCT_MyCorpsRankNumPro;                              // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_rank.bp_corps_rank_C");
		return ptr;
	}


	void EventCorpsRankTypeChange_NoFetch();
	void EventCorpsRankTypeChange();
	void EventCorpsRankGetNextInfo_NoFetch();
	void EventCorpsRankGetNextInfo();
	void EventCorpsRankHideUI_NoFetch();
	void EventCorpsRankHideUI();
	void EventCorpsRankShowCorpsDetails_NoFetch();
	void EventCorpsRankShowCorpsDetails();
	void EventCorpsRankShowUI_NoFetch();
	void EventCorpsRankShowUI();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
