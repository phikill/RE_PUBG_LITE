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

// ScriptBlueprintGeneratedClass bp_battleresult.bp_battleresult_C
// 0x04C8 (0x0858 - 0x0390)
class Abp_battleresult_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_GOLD_DETAIL                      BP_STRUCT_GOLD_DETAIL;                                    // 0x0398(0x0028) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MemBTResultData                  BP_STRUCT_MemBTResultData;                                // 0x03C0(0x0090) (Edit, BlueprintVisible)
	int                                                BP_mykill;                                                // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FString                                     BP_mystate;                                               // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsTodayShareDone;                                      // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	int                                                BP_LoginChannel;                                          // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_EnterSpectateMode;                                     // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	struct FBP_STRUCT_TeammateProfile                  BP_STRUCT_TeammateProfile;                                // 0x0478(0x0028) (Edit, BlueprintVisible)
	bool                                               BP_IsShowOBGender;                                        // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Retry;                                                    // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsShareAwardGold;                                      // 0x04A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x04A3(0x0005) MISSED OFFSET
	struct FBP_STRUCT_RADAR                            BP_STRUCT_RADAR;                                          // 0x04A8(0x0078) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RecordingUpload                  BP_STRUCT_RecordingUpload;                                // 0x0520(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RecordDataTLogUpload             BP_STRUCT_RecordDataTLogUpload;                           // 0x0570(0x0020) (Edit, BlueprintVisible)
	bool                                               BP_IsDroiyanMode;                                         // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BattleResultIsAI;                                      // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BattleResultIsClickReplay;                             // 0x0592(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0593(0x0005) MISSED OFFSET
	TArray<struct FBP_STRUCT_OBTeamResult>             BP_ARRAY_OBBattleResult;                                  // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_BattleResultIsIOSCheck;                                // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsReceiveResult;                                       // 0x05A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x05AA(0x0002) MISSED OFFSET
	int                                                BPRecordAddFriendIndex;                                   // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_BTRating                         BP_STRUCT_BTRating;                                       // 0x05B0(0x0018) (Edit, BlueprintVisible)
	bool                                               testResult;                                               // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	struct FString                                     BP_BattleResultMurderName;                                // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_TeamModeName;                                          // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_DirectShow;                                            // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x05F1(0x0007) MISSED OFFSET
	struct FBP_STRUCT_BattleResultData                 BP_STRUCT_BattleResultData;                               // 0x05F8(0x0188) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_TeammateProfile>          BP_ARRAY_TeammateProfile;                                 // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_OBPersonalResult                 BP_STRUCT_OBPersonalResult;                               // 0x0790(0x0020) (Edit, BlueprintVisible)
	struct FBP_STRUCT_BattleResultMyInfo               BP_STRUCT_BattleResultMyInfo;                             // 0x07B0(0x0040) (Edit, BlueprintVisible)
	int                                                BP_ServerTimeSecNow;                                      // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BattleResultCanShowStrategyBtn;                        // 0x07F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsReportComplaintShow;                                 // 0x07F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x07F6(0x0002) MISSED OFFSET
	struct FBP_STRUCT_OBTeamResult                     BP_STRUCT_OBTeamResult;                                   // 0x07F8(0x0010) (Edit, BlueprintVisible)
	struct FString                                     BP_myname;                                                // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_EXP_DETAIL                       BP_STRUCT_EXP_DETAIL;                                     // 0x0818(0x0034) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData09[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_battleresult.bp_battleresult_C");
		return ptr;
	}


	void EventGameJoyVideoShareSuccess_NoFetch();
	void EventGameJoyVideoShareSuccess();
	void EventClientGetIsClickReply_NoFetch();
	void EventClientGetIsClickReply();
	void EventBattleResult_BackToLobby_NoFetch();
	void EventBattleResult_BackToLobby();
	void EventAddFriendRequest_Push_NoFetch();
	void EventAddFriendRequest_Push();
	void EventDelayCall_NoFetch();
	void EventDelayCall();
	void EventClientFreshToComplaint_NoFetch();
	void EventClientFreshToComplaint();
	void EventClientExitTraining_NoFetch();
	void EventClientExitTraining();
	void EventShowGameJoyRecordFailNotice_NoFetch();
	void EventShowGameJoyRecordFailNotice();
	void EventShowGameJoyNoRecordsNotice_NoFetch();
	void EventShowGameJoyNoRecordsNotice();
	void EventClientExitGame_NoFetch();
	void EventClientExitGame();
	void EventCloseBattleResult_NoFetch();
	void EventCloseBattleResult();
	void EventDoIgnoreDSError_Push_NoFetch();
	void EventDoIgnoreDSError_Push();
	void EventClientFreshData_NoFetch();
	void EventClientFreshData();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
