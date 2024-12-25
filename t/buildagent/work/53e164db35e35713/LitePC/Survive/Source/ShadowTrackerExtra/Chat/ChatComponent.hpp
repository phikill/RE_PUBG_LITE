

// Class ShadowTrackerExtra.ChatComponent
// //Class ShadowTrackerExtra.ChatComponent
//0x0148 (0x0250 - 0x0108)
class UChatComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0108(0x0004) MISSED OFFSET
	int                                                end_time;                                                 // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FQuickChatIDAndAudio>                chatQuickList;                                            // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FQuickChatOption>                    allChatOption;                                            // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeammateColor;                                            // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MyColor;                                                  // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FIngameFriendChat>     FriendChatInfo;                                           // 0x0160(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FQuickChatFlag>                      ChatFlagList;                                             // 0x01B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SendMsgCD;                                                // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lastShowChatTime;                                         // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShowChatDuration;                                         // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	TArray<struct FQuickGroundFlag>                    groundFlags;                                              // 0x01D0(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     EndChar;                                                  // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ColonChar;                                                // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UPickupManagerComponent*                     PickupMgrComp;                                            // 0x0200(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0208(0x0038) MISSED OFFSET
	struct FString                                     CongregationPlayerKey;                                    // 0x0240(0x0010) (BlueprintVisible, ZeroConstructor)

	// Function ShadowTrackerExtra.ChatComponent.UpdateQuickItemText
	// (Event, Public, BlueprintCallable, BlueprintEvent)
	void UpdateQuickItemText(int msgIDint resIDint alternateMsgID);// sub_1B0A820()

	// Function ShadowTrackerExtra.ChatComponent.ShowQuickPanel
	// (Final, Native, Public, BlueprintCallable)
	void ShowQuickPanel(unsigned char bShow);// sub_A58BB0()

	// Function ShadowTrackerExtra.ChatComponent.ServerSendMsg
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerSendMsg(const struct FInGameChatMsg& msgItem);// sub_A58490()

	// Function ShadowTrackerExtra.ChatComponent.SendDirtyFilter
	// (Event, Public, BlueprintEvent)
	void SendDirtyFilter(const struct FString& Nameconst struct FString& Contentunsigned char isMe);// sub_1B0A820()

	// Function ShadowTrackerExtra.ChatComponent.OnInviteNextBattle
	// (Final, Native, Public, BlueprintCallable)
	void OnInviteNextBattle(const struct FString& gidconst struct FString& Name);// sub_A581C0()

	// Function ShadowTrackerExtra.ChatComponent.OnFilterFinish
	// (Event, Public, BlueprintEvent)
	void OnFilterFinish(const struct FString& filterText);// sub_1B0A820()

	// Function ShadowTrackerExtra.ChatComponent.NotifyFriendReplyInvite
	// (Event, Public, BlueprintCallable, BlueprintEvent)
	void NotifyFriendReplyInvite(const struct FString& str_gidconst struct FString& sender_nameunsigned char bReply);// sub_1B0A820()

	// Function ShadowTrackerExtra.ChatComponent.NotifyFriendInvite
	// (Event, Public, BlueprintCallable, BlueprintEvent)
	void NotifyFriendInvite(const struct FString& str_gidconst struct FString& sender_name);// sub_1B0A820()

	// Function ShadowTrackerExtra.ChatComponent.NotifyFriendChat
	// (Event, Public, BlueprintEvent)
	void NotifyFriendChat(const struct FString& str_gidconst struct FString& sender_nameconst struct FString& chat_contentunsigned char self_msg);// sub_1B0A820()

	// Function ShadowTrackerExtra.ChatComponent.InviteNextBattleReply
	// (Final, Native, Public, BlueprintCallable)
	void InviteNextBattleReply(const struct FString& gidconst struct FString& Nameunsigned char bReply);// sub_A57E70()

	// Function ShadowTrackerExtra.ChatComponent.CloseChatHistoryList
	// (Event, Public, BlueprintCallable, BlueprintEvent)
	void CloseChatHistoryList();// sub_1B0A820()

	// Function ShadowTrackerExtra.ChatComponent.ClientReceiveMsg
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientReceiveMsg(const struct FInGameChatMsg& msgItemunsigned char isMe);// sub_A57AC0()

	// Function ShadowTrackerExtra.ChatComponent.AddQuickAudio
	// (Final, Native, Public, BlueprintCallable)
	void AddQuickAudio(class UAkAudioEvent* Audioint chatID);// sub_A578F0()

	// Function ShadowTrackerExtra.ChatComponent.AddOneMsgToUI1
	// (Event, Public, BlueprintEvent)
	void AddOneMsgToUI1(const struct FString& Nameconst struct FString& Contentint msgIDunsigned char isMeunsigned char PlaySound);// sub_1B0A820()

	// Function ShadowTrackerExtra.ChatComponent.AddFriendChat
	// (Final, Native, Public, BlueprintCallable)
	void AddFriendChat(const struct FString& gidconst struct FString& Nameconst struct FString& Contentunsigned char isSelf);// sub_A576B0()


}

