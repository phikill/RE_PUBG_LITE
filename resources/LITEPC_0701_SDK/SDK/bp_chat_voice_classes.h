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

// ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C
// 0x00E8 (0x0478 - 0x0390)
class Abp_chat_voice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_GlobalChatvoiceUploadTime;                             // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalChatvoiceCurrentMode;                            // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceMicOpened;                              // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceDefaultOpenTeam;                        // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03A2(0x0006) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceUploadMsgId;                            // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_GlobalChatvoiceDownloadData> BP_ARRAY_GlobalChatvoiceDownloadList;                     // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GlobalChatvoiceDownloadData      BP_STRUCT_GlobalChatvoiceDownloadData;                    // 0x03C8(0x0040) (Edit, BlueprintVisible)
	bool                                               BP_GlobalChatvoiceIsTeamup;                               // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	int                                                BP_GlobalChatvoiceTotalLimit;                             // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalChatvoiceCurrentRole;                            // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceCurrentStage;                           // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceSpeakerOpened;                          // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceCurrentPlayFile;                        // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceToTextContent;                          // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceCurrentRoom;                            // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceRecordSuccess;                          // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C");
		return ptr;
	}


	void EventClearGVoiceProcedure_NoFetch();
	void EventClearGVoiceProcedure();
	void EventNotifySystemSpeakerOpen_NoFetch();
	void EventNotifySystemSpeakerOpen();
	void EventStartGVoiceRecord_NoFetch();
	void EventStartGVoiceRecord();
	void EventOnTryOpenMic_NoFetch();
	void EventOnTryOpenMic();
	void EventStartPlayGVoiceRecord_NoFetch();
	void EventStartPlayGVoiceRecord();
	void EventCancelGVoiceRecord_NoFetch();
	void EventCancelGVoiceRecord();
	void EventUploadGVoiceRecord_NoFetch();
	void EventUploadGVoiceRecord();
	void EventChangeSpeakerState_NoFetch();
	void EventChangeSpeakerState();
	void EventNotifyVoiceChatFailToRecord_NoFetch();
	void EventNotifyVoiceChatFailToRecord();
	void EventNotifySystemMicOpen_NoFetch();
	void EventNotifySystemMicOpen();
	void EventNotifyVoiceProcedureFailed_NoFetch();
	void EventNotifyVoiceProcedureFailed();
	void EventTickVoiceRoom_NoFetch();
	void EventTickVoiceRoom();
	void EventChangeMicState_NoFetch();
	void EventChangeMicState();
	void EventStopPlayGVoiceRecord_NoFetch();
	void EventStopPlayGVoiceRecord();
	void EventStopGVoiceRecord_NoFetch();
	void EventStopGVoiceRecord();
	void EventNotifyRecordTooShort_NoFetch();
	void EventNotifyRecordTooShort();
	void EventNotifyVoiceOpenSpeaker_NoFetch();
	void EventNotifyVoiceOpenSpeaker();
	void EventNotifyVoiceRecordTooShort_NoFetch();
	void EventNotifyVoiceRecordTooShort();
	void EventNotifySystemVoiceOpen_NoFetch();
	void EventNotifySystemVoiceOpen();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventNotifyDownloadFailed_NoFetch();
	void EventNotifyDownloadFailed();
	void EventChangeGVoiceMode_NoFetch();
	void EventChangeGVoiceMode();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
