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

// ScriptBlueprintGeneratedClass bp_corps_rank_award.bp_corps_rank_award_C
// 0x01B0 (0x0540 - 0x0390)
class Abp_corps_rank_award_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_Corps_Rank_Award_Member1_Info    BP_STRUCT_Corps_Rank_Award_Member1_Info;                  // 0x0398(0x0058) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Corps_Rank_Award_Member2_Info    BP_STRUCT_Corps_Rank_Award_Member2_Info;                  // 0x03F0(0x0058) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Corps_Rank_Award_Member3_Info    BP_STRUCT_Corps_Rank_Award_Member3_Info;                  // 0x0448(0x0058) (Edit, BlueprintVisible)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x04A0(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsAwardInfo                   BP_STRUCT_CorpsAwardInfo;                                 // 0x04F0(0x0038) (Edit, BlueprintVisible)
	struct FString                                     BP_CorpsRankAward_Player_ID;                              // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_rank_award.bp_corps_rank_award_C");
		return ptr;
	}


	void EventCorpsRankAwardUICloseSeaon_NoFetch();
	void EventCorpsRankAwardUICloseSeaon();
	void EventCorpsRankAwardUIShowPlayerDetails_NoFetch();
	void EventCorpsRankAwardUIShowPlayerDetails();
	void EventCorpsRankAwardUICloseWeekSendSeason_NoFetch();
	void EventCorpsRankAwardUICloseWeekSendSeason();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
