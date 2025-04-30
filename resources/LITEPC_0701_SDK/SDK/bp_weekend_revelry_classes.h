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

// ScriptBlueprintGeneratedClass bp_weekend_revelry.bp_weekend_revelry_C
// 0x00C0 (0x0450 - 0x0390)
class Abp_weekend_revelry_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_WeekendRevelry_Rank;                                   // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FString                                     BP_WeekendRevelry_LogoImg;                                // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WeekendRevelry_SuperAwardRepeatTimes;                  // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WeekendRevelry_SuperAwardId;                           // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_WeekendRevelry_TaskInfo>  BP_Array_WeekendRevelry_Tasks;                            // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WeekendRevelry_Countdown_Sec;                          // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FString                                     BP_WeekendRevelry_TimeStr;                                // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WeekendRevelry_TaskAwardStatus;                        // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WeekendRevelry_SuperAwardStatus;                       // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WeekendRevelry_LogoImgUrl;                             // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_Array_WeekendRevelry_Superawards;                      // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WeekendRevelry_LeftTimes;                              // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_WeekendRevelry_TaskInfo          BP_STRUCT_WeekendRevelry_TaskInfo;                        // 0x0410(0x0038) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_weekend_revelry.bp_weekend_revelry_C");
		return ptr;
	}


	void EventWeekendRevelryLottery_NoFetch();
	void EventWeekendRevelryLottery();
	void EventWeekendRevelryLotteryShareToFriends_NoFetch();
	void EventWeekendRevelryLotteryShareToFriends();
	void EventWeekendRevelryLotteryRollingEnd_NoFetch();
	void EventWeekendRevelryLotteryRollingEnd();
	void EventWeekendRevelryHelpClicked_NoFetch();
	void EventWeekendRevelryHelpClicked();
	void EventCloseUI_NoFetch();
	void EventCloseUI();
	void EventWeekendRevelrySuperawardClicked_NoFetch();
	void EventWeekendRevelrySuperawardClicked();
	void EventWeekendRevelryAwardClicked_NoFetch();
	void EventWeekendRevelryAwardClicked();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
