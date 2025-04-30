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

// ScriptBlueprintGeneratedClass bp_mail.bp_mail_C
// 0x0080 (0x0410 - 0x0390)
class Abp_mail_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Mail_Select_ID;                                           // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Mail_Friend_Unread_Count;                                 // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MailClickHead_UID;                                     // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Mail_Count;                                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Mail_Max_Count;                                           // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Mail_Gift_Unread_Count;                                   // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	struct FString                                     Mail_OpenUrl;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Mail_UpdateOneMailItem;                                   // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Mail_Notice_Unread_Count;                                 // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_MailInfo>                 BP_ARRAY_MailList;                                        // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Mail_Sys_Unread_Count;                                    // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	struct FString                                     Mail_Filter_Type;                                         // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Mail_ShowRecvAttachMailId;                                // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_mail.bp_mail_C");
		return ptr;
	}


	void EventMailReceiveAllNext_NoFetch();
	void EventMailReceiveAllNext();
	void EventMailAddTestDatas_NoFetch();
	void EventMailAddTestDatas();
	void EventMailChangeFilterType_NoFetch();
	void EventMailChangeFilterType();
	void EventMailReadAll_NoFetch();
	void EventMailReadAll();
	void EventMailReceiveAll_NoFetch();
	void EventMailReceiveAll();
	void EventMailViewBtnClick_NoFetch();
	void EventMailViewBtnClick();
	void EventFetchMailInfo_NoFetch();
	void EventFetchMailInfo();
	void EventShowGiftMsgCenter_NoFetch();
	void EventShowGiftMsgCenter();
	void EventMailReceiveAttach_NoFetch();
	void EventMailReceiveAttach();
	void EventMailRequestList_NoFetch();
	void EventMailRequestList();
	void EventMailDelete_NoFetch();
	void EventMailDelete();
	void EventOnClickHead_Push_NoFetch();
	void EventOnClickHead_Push();
	void EventMailClose_NoFetch();
	void EventMailClose();
	void EventMailDeleteAll_NoFetch();
	void EventMailDeleteAll();
	void EventMailRead_NoFetch();
	void EventMailRead();
	void EventHideGiftMsgCenter_NoFetch();
	void EventHideGiftMsgCenter();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
