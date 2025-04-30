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

// ScriptBlueprintGeneratedClass bp_season.bp_season_C
// 0x0148 (0x04D8 - 0x0390)
class Abp_season_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Season_Segment_Level;                                     // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Season_Show_Score_ProgressNum;                            // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SeasonInReward_Condition2_Finish;                         // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	int                                                SeasonEndReward_TakeState;                                // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeasonInReward_TakeId;                                    // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeasonInReward_ItemTime;                                  // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeasonEndReward_SeasonID;                                 // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Season_Sum_Score;                                         // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Season_Segment_Name;                                      // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Season_BestFppMode;                                       // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_SeasonSegmentType>        BP_ARRAY_SeasonSegmentTypeList;                           // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SeasonEndReward_ItemID;                                   // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FString                                     SeasonInReward_Condition1_Txt;                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonInReward_Condition2_Txt1;                           // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonInReward_Condition2_Txt2;                           // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Season_Time;                                              // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SeasonInReward_ItemID;                                    // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeasonInReward_TakeState;                                 // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Season_Sum_Score_ProgressNum;                             // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Season_BestTppMode;                                       // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Season_RankNo;                                            // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonReview_URL;                                         // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Season_SelectMode;                                        // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               SeasonInReward_Condition1_Finish;                         // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	struct FString                                     Season_Sum_Score_Progress;                                // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonEndReward_Txt;                                      // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Season_HightLevel;                                        // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	struct FString                                     Season_Name;                                              // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_season.bp_season_C");
		return ptr;
	}


	void EventSeasonUIClose_NoFetch();
	void EventSeasonUIClose();
	void EventTakeSeasonInReward_NoFetch();
	void EventTakeSeasonInReward();
	void EventTakeSeasonEndReward_NoFetch();
	void EventTakeSeasonEndReward();
	void EventSeasonTips_NoFetch();
	void EventSeasonTips();
	void EventSeasonSelectMode_NoFetch();
	void EventSeasonSelectMode();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
