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

// ScriptBlueprintGeneratedClass bp_complaint.bp_complaint_C
// 0x00D8 (0x0468 - 0x0390)
class Abp_complaint_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Complaint_StrOpenID;                                      // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Complaint_ChacheEnemyName;                                // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Complaint_Type1;                                          // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                COMPLAINT_REASON_NOSELECT;                                // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ComplaintTeammateItem>    BP_ARRAY_ComplaintTeammateList;                           // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Complaint_PlayerNumber;                                   // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                COMPLAINT_REASON_DIRTYWORD;                               // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                COMPLAINT_REASON_OTHER;                                   // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Complaint_ReportCamp;                                     // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                COMPLAINT_REASON_HANGMACHINE;                             // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Complaint_RankType;                                       // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ComplaintTeammateItem            BP_STRUCT_ComplaintTeammateItem;                          // 0x03E8(0x0010) (Edit, BlueprintVisible)
	int                                                COMPLAINT_REASON_NEGATIVE;                                // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Complaint_IsRePlayClick;                                  // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Complaint_IsAI;                                           // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03FE(0x0002) MISSED OFFSET
	struct FString                                     Complaint_RoleID;                                         // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Complaint_Content;                                        // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Complaint_Type2;                                          // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FString                                     Complaint_BeComplaint_UserName;                           // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                COMPLAINT_REASON_USEBUG;                                  // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FString                                     Complaint_ChacheMyName;                                   // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Complaint_ChacheIsAI;                                     // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	int                                                COMPLAINT_REASON_CHEATED;                                 // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Complaint_Type3;                                          // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_complaint.bp_complaint_C");
		return ptr;
	}


	void EventComplaintClose_NoFetch();
	void EventComplaintClose();
	void EventComplaintClickSubmit_NoFetch();
	void EventComplaintClickSubmit();
	void EventComplaintRefreshUI_NoFetch();
	void EventComplaintRefreshUI();
	void EventNameHadComplaintedTips_NoFetch();
	void EventNameHadComplaintedTips();
	void EventComplaintGetTeamlist_NoFetch();
	void EventComplaintGetTeamlist();
	void EventComplaintClickReplay_NoFetch();
	void EventComplaintClickReplay();
	void EventComplaintNumEmptyTips_NoFetch();
	void EventComplaintNumEmptyTips();
	void EventComplaintNumOverTips_NoFetch();
	void EventComplaintNumOverTips();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
