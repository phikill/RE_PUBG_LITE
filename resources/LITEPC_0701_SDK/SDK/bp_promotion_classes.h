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

// ScriptBlueprintGeneratedClass bp_promotion.bp_promotion_C
// 0x00D8 (0x0468 - 0x0390)
class Abp_promotion_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Promotion_Open_Time;                                   // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Promotion_Friend_Count;                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_Promotion_Award_Info>     BP_ARRAY_Promotion_Award_Infos;                           // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Promotion_Friend_Info            BP_STRUCT_Promotion_Friend_Info;                          // 0x03C0(0x0038) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Promotion_Friend_Info>    BP_ARRAY_Promotion_Friend_Infos;                          // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Promotion_Friend_Info>    BP_ARRAY_Promotion_Register_Friend_Infos;                 // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Promotion_Invite_Friend_OpenID;                        // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Promotion_Help_Content;                                // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Promotion_Friend_Page_Idx;                             // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Promotion_Award_Index_Get;                             // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Promotion_Award_Info             BP_STRUCT_Promotion_Award_Info;                           // 0x0440(0x0020) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_promotion.bp_promotion_C");
		return ptr;
	}


	void EventPromotionPrePage_NoFetch();
	void EventPromotionPrePage();
	void EventPromotionNextPage_NoFetch();
	void EventPromotionNextPage();
	void EventPromotionGetAward_NoFetch();
	void EventPromotionGetAward();
	void EventPromotionViewRegisterFriend_NoFetch();
	void EventPromotionViewRegisterFriend();
	void EventPromotionFriendInvite_NoFetch();
	void EventPromotionFriendInvite();
	void EventPromotionShare_NoFetch();
	void EventPromotionShare();
	void EventPromotionCloseUI_NoFetch();
	void EventPromotionCloseUI();
	void EventPromotionRule_NoFetch();
	void EventPromotionRule();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
