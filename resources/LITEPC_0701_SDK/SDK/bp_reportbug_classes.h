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

// ScriptBlueprintGeneratedClass bp_reportbug.bp_reportbug_C
// 0x0070 (0x0400 - 0x0390)
class Abp_reportbug_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Bug_Report_Info_PosX;                                     // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_MINIMAP_ERROR;                           // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Bug_Report_Info_PosY;                                     // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_ABNORMAL_ANIMATION;                      // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_RECONNECTION_ERROR;                      // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_BAD_NET;                                 // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_VEHICLE_NOTSMOOTH;                       // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_LOWFPS;                                  // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_CHARACTER_NOTSMOOTH;                     // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_OTHER;                                   // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Bug_Report_Info_text;                                     // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Bug_Report_Info_PosZ;                                     // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Bug_Report_Info_Angle;                                    // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Bug_Report_Info_DeviceName;                               // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                REPROTBUG_REASON_GAMENOTSMOOTH;                           // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Bug_Report_Info_Reason;                                   // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_MAP_ERROR;                               // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_reportbug.bp_reportbug_C");
		return ptr;
	}


	void EventReportBugSubmit_NoFetch();
	void EventReportBugSubmit();
	void EventReportBugRefresh_NoFetch();
	void EventReportBugRefresh();
	void EventReportBugClose_NoFetch();
	void EventReportBugClose();
	void EventShowReportBugSendOK_NoFetch();
	void EventShowReportBugSendOK();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
