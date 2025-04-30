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

// ScriptBlueprintGeneratedClass bp_chat_main.bp_chat_main_C
// 0x0540 (0x08D0 - 0x0390)
class Abp_chat_main_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ChatSelectedGID;                                       // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatIsTeamUp;                                          // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FString                                     BP_ReceiverName;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_FriendNewMessageCount;                                 // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatVoiceBan;                                          // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChannelType;                                           // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FString                                     BP_ChatProfileRspMsgList;                                 // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRecruitJoinGid;                                    // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatProfileReqMsgId;                                   // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamNewMessageCount;                                   // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatMsgID;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	struct FBP_STRUCT_ChatMessageSingleData            BP_STRUCT_ChatMessageSingleData;                          // 0x0400(0x00B0) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_CorpsChatList;                                   // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatScrollSelectFriendGID;                             // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatProfileRspNickName;                                // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ChatUnreadMsgCount               BP_STRUCT_ChatUnreadMsgCount;                             // 0x04E0(0x0018) (Edit, BlueprintVisible)
	struct FString                                     BP_ChatVoiceDownloadFileId;                               // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatProfileRspGender;                                  // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatMyAvatarBox;                                       // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatTotalFriendCount;                                  // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatHoverIsFriend;                                     // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	int                                                BP_ChatMySegmentMax;                                      // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	struct FString                                     BP_ChatVoiceToTextContent;                                // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChannelTitleName;                                      // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatMainValid;                                         // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_ChatroomChatList;                                // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatHoverIsPullBlack;                                  // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatLiteFriendData>       BP_ARRAY_ChatLiteFriendList;                              // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatProfileRspUrl;                                     // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoomNewMessageCount;                               // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatTickBufferList;                                    // 0x0584(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	int                                                BP_ChatSelectedGender;                                    // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	struct FString                                     BP_ChatProfileReqGid;                                     // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRecruitTeamID;                                     // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatMyGID;                                             // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Chat_FriendScrollEnd;                                  // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	struct FString                                     BP_ChatVoicePlayFileId;                                   // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatMyNickName;                                        // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SelectedFriendGID;                                     // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_NewChatList;                                     // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatHoverName;                                         // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_WorldChatList;                                   // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatVoiceUploadTime;                                   // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatProfileRspAvatarBox;                               // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatMainMyRoomId;                                      // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatIsInCorps;                                         // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0641(0x0007) MISSED OFFSET
	struct FBP_STRUCT_ChatBriefFriendData              BP_STRUCT_ChatBriefFriendData;                            // 0x0648(0x00B0) (Edit, BlueprintVisible)
	struct FString                                     BP_ChatContent;                                           // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatVoiceTeamRoom;                                     // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatVoiceDownloadMsgLength;                            // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_ChatVoiceDownloadData            BP_STRUCT_ChatVoiceDownloadData;                          // 0x0720(0x0020) (Edit, BlueprintVisible)
	struct FString                                     BP_ChatTodayDate;                                         // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WorldNewMessageCount;                                  // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Chat_FriendScrollStart;                                // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatHoverContent;                                      // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatVoiceDownloadMsgId;                                // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatVoiceTotalLimit;                                   // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatProfileRspLevel;                                   // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatMainShown;                                         // 0x0774(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	struct FString                                     BP_ChatMyUrl;                                             // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatVoiceUploadMsgId;                                  // 0x0788(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatVoiceDownloadChannel;                              // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatBriefFriendData>      BP_ARRAY_ChatFriendList;                                  // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatInputContent;                                      // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ReceiverGID;                                           // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatShowHelpContent;                                   // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatMainClearGID;                                      // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatVoiceDownloadOwnerGid;                             // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsNewMessageCount;                                  // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0804(0x0004) MISSED OFFSET
	struct FBP_STRUCT_ChatLiteFriendData               BP_STRUCT_ChatLiteFriendData;                             // 0x0808(0x0010) (Edit, BlueprintVisible)
	int                                                BP_ChatProfileRspMaxSegment;                              // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x081C(0x0004) MISSED OFFSET
	struct FString                                     BP_ChatInputFilteredContent;                              // 0x0820(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatVoiceOpenMic;                                      // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_TeamChatList;                                    // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_FriendChatList;                                  // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatOnlineFriendCout;                                  // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatMainFirstShow;                                     // 0x085C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatVoiceOpenSpeaker;                                  // 0x085D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x085E(0x0002) MISSED OFFSET
	int                                                BP_ChatEmojiClickItem;                                    // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0864(0x0004) MISSED OFFSET
	struct FString                                     BP_ChatCorpsNotice;                                       // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatProfileRspGid;                                     // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatMyLevel;                                           // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatVoiceMode;                                         // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ChatUnreadMsgCount>       BP_ARRAY_ChatFriendUnreadList;                            // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatHoverGID;                                          // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatMyGender;                                          // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatVoiceDownloadData>    BP_ARRAY_ChatVoiceDownloadList;                           // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_main.bp_chat_main_C");
		return ptr;
	}


	void EventNotifyVoiceRecordTooShort_NoFetch();
	void EventNotifyVoiceRecordTooShort();
	void EventInitJoinRoom_NoFetch();
	void EventInitJoinRoom();
	void EventGetProfile_NoFetch();
	void EventGetProfile();
	void EventSwitchToFriendChat_NoFetch();
	void EventSwitchToFriendChat();
	void EventTryStartRecordVoice_NoFetch();
	void EventTryStartRecordVoice();
	void EventRefreshSelfProfile_NoFetch();
	void EventRefreshSelfProfile();
	void EventHideChatMainWnd_NoFetch();
	void EventHideChatMainWnd();
	void EventNotifyOutofTextRange_NoFetch();
	void EventNotifyOutofTextRange();
	void EventNotifyVoiceChatFailToRecord_NoFetch();
	void EventNotifyVoiceChatFailToRecord();
	void EventChangeChannelType_NoFetch();
	void EventChangeChannelType();
	void EventCheckBlackList_NoFetch();
	void EventCheckBlackList();
	void EventHideEmoji_NoFetch();
	void EventHideEmoji();
	void EventHoverJoinTeam_NoFetch();
	void EventHoverJoinTeam();
	void EventHoverReportTarget_NoFetch();
	void EventHoverReportTarget();
	void EventOpenRecruitPanel_NoFetch();
	void EventOpenRecruitPanel();
	void EventClickFriendItem_NoFetch();
	void EventClickFriendItem();
	void EventOnAfterShowWnd_NoFetch();
	void EventOnAfterShowWnd();
	void EventOnAfterHideWnd_NoFetch();
	void EventOnAfterHideWnd();
	void EventChatVoiceCheckBan_NoFetch();
	void EventChatVoiceCheckBan();
	void EventChatVoiceBanInfo_NoFetch();
	void EventChatVoiceBanInfo();
	void EventSendChatVoiceMsg_NoFetch();
	void EventSendChatVoiceMsg();
	void EventScrollFriendList_NoFetch();
	void EventScrollFriendList();
	void EventFetchFriendData_NoFetch();
	void EventFetchFriendData();
	void EventNotifyFriendChatRequireSelect_NoFetch();
	void EventNotifyFriendChatRequireSelect();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventCheckFriendList_NoFetch();
	void EventCheckFriendList();
	void EventDownloadVoiceFile_NoFetch();
	void EventDownloadVoiceFile();
	void EventShowHover_NoFetch();
	void EventShowHover();
	void EventAchieveVoiceRoom_NoFetch();
	void EventAchieveVoiceRoom();
	void EventClickCorpsGoto_NoFetch();
	void EventClickCorpsGoto();
	void EventCheckTodayDate_NoFetch();
	void EventCheckTodayDate();
	void EventTryStopRecordVoice_NoFetch();
	void EventTryStopRecordVoice();
	void EventHideHover_NoFetch();
	void EventHideHover();
	void EventClickCorpsRecruit_NoFetch();
	void EventClickCorpsRecruit();
	void EventHoverShowFriendInfo_NoFetch();
	void EventHoverShowFriendInfo();
	void EventPopMessageBuffer_NoFetch();
	void EventPopMessageBuffer();
	void EventSendChatMsg_NoFetch();
	void EventSendChatMsg();
	void EventRequireHoverTeamup_NoFetch();
	void EventRequireHoverTeamup();
	void EventHoverInviteTeam_NoFetch();
	void EventHoverInviteTeam();
	void EventChatMainBeforeHide_NoFetch();
	void EventChatMainBeforeHide();
	void EventChatMainBeforeShow_NoFetch();
	void EventChatMainBeforeShow();
	void EventShowEmoji_NoFetch();
	void EventShowEmoji();
	void EventChangeVoiceChatMode_NoFetch();
	void EventChangeVoiceChatMode();
	void EventHoverBlockTarget_NoFetch();
	void EventHoverBlockTarget();
	void EventTryCancelRecordVoice_NoFetch();
	void EventTryCancelRecordVoice();
	void EventTryStopPlayRecordVoice_NoFetch();
	void EventTryStopPlayRecordVoice();
	void EventNotifyNoText_NoFetch();
	void EventNotifyNoText();
	void EventHoverAddFriend_NoFetch();
	void EventHoverAddFriend();
	void EventInputChatMsg_NoFetch();
	void EventInputChatMsg();
	void EventRecruitMember_NoFetch();
	void EventRecruitMember();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
