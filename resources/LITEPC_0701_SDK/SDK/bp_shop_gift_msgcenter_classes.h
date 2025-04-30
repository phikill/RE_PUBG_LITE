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

// ScriptBlueprintGeneratedClass bp_shop_gift_msgcenter.bp_shop_gift_msgcenter_C
// 0x02B0 (0x0640 - 0x0390)
class Abp_shop_gift_msgcenter_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Gift_MsgCenter_MyGender;                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_Shop_GiftSend>            BP_ARRAY_Shop_GiftSendList;                               // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Shop_GiftBeg                     BP_STRUCT_Shop_GiftBeg;                                   // 0x03B0(0x0098) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Shop_GiftBeg>             BP_ARRAY_Shop_GiftBegList;                                // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Gift_MsgCenter_Uid;                                    // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_Shop_GiftThanks>          BP_ARRAY_Shop_GiftThanksList;                             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Shop_GiftRecv                    BP_STRUCT_Shop_GiftRecv;                                  // 0x0470(0x00A8) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Shop_GiftThanks                  BP_STRUCT_Shop_GiftThanks;                                // 0x0518(0x0068) (Edit, BlueprintVisible)
	bool                                               BP_Gift_MsgCenter_RefuseBeg;                              // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	int                                                BP_Gift_MsgCenter_TabType;                                // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Gift_MsgCenter_ClickIndex;                             // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Gift_MsgCenter_IsPlatformFriend;                       // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	int                                                BP_Gift_MsgCenter_ClickUid;                               // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	struct FBP_STRUCT_Shop_GiftSend                    BP_STRUCT_Shop_GiftSend;                                  // 0x0598(0x0080) (Edit, BlueprintVisible)
	struct FString                                     BP_Gift_MsgCenter_MyName;                                 // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Shop_GiftRecv>            BP_ARRAY_Shop_GiftRecvList;                               // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_shop_gift_msgcenter.bp_shop_gift_msgcenter_C");
		return ptr;
	}


	void EventGiftMsgCenterClickRemoveRedPoint_NoFetch();
	void EventGiftMsgCenterClickRemoveRedPoint();
	void EventGiftMsgCenterClickBeg_NoFetch();
	void EventGiftMsgCenterClickBeg();
	void EventGiftMsgCenterOpenGiftGetView_NoFetch();
	void EventGiftMsgCenterOpenGiftGetView();
	void EventGiftMsgCenterOpenGiftAnimation_NoFetch();
	void EventGiftMsgCenterOpenGiftAnimation();
	void EventGiftMsgCenterRequestGetGift_NoFetch();
	void EventGiftMsgCenterRequestGetGift();
	void EventGiftMsgCenterClickBegRefuse_NoFetch();
	void EventGiftMsgCenterClickBegRefuse();
	void EventGiftMsgCenterJumpMarket_NoFetch();
	void EventGiftMsgCenterJumpMarket();
	void EventGiftMsgCenterRequestPlayerInfo_NoFetch();
	void EventGiftMsgCenterRequestPlayerInfo();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventGiftMsgCenterClickSend_NoFetch();
	void EventGiftMsgCenterClickSend();
	void EventGiftMsgCenterTellFriend_NoFetch();
	void EventGiftMsgCenterTellFriend();
	void EventGiftMsgCenterShare_NoFetch();
	void EventGiftMsgCenterShare();
	void EventGiftMsgCenterClickRecv_NoFetch();
	void EventGiftMsgCenterClickRecv();
	void EventGiftMsgCenterClickPlayerInfo_NoFetch();
	void EventGiftMsgCenterClickPlayerInfo();
	void EventGiftMsgCenterClickHelpInfo_NoFetch();
	void EventGiftMsgCenterClickHelpInfo();
	void EventGiftMsgCenterClickThanks_NoFetch();
	void EventGiftMsgCenterClickThanks();
	void EventGiftMsgCenterClickBegAccept_NoFetch();
	void EventGiftMsgCenterClickBegAccept();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
