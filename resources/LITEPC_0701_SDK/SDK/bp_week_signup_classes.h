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

// ScriptBlueprintGeneratedClass bp_week_signup.bp_week_signup_C
// 0x0090 (0x0420 - 0x0390)
class Abp_week_signup_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Week_SignUp_TimeString;                                // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_WeekSignUpUI_Info>        BP_ARRAY_Week_SignUp_Info;                                // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Request_SignUp_day;                                    // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Week_SignUp_Startup;                                   // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Week_SignUp_Platform;                                  // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Week_SignUp_QQVip;                                     // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurrentSignUpDayInWeek;                                // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FBP_STRUCT_WeekSignUpUI_Info                BP_STRUCT_WeekSignUpUI_Info;                              // 0x03D0(0x0048) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_week_signup.bp_week_signup_C");
		return ptr;
	}


	void EventWeekSignUpReq_Push_NoFetch();
	void EventWeekSignUpReq_Push();
	void EventWeekSignUpReq_NoFetch();
	void EventWeekSignUpReq();
	void EventWeekSignUpInit_NoFetch();
	void EventWeekSignUpInit();
	void EventWeekSignPlatform_FetchInfo_NoFetch();
	void EventWeekSignPlatform_FetchInfo();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventWeekSignUpHide_NoFetch();
	void EventWeekSignUpHide();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
