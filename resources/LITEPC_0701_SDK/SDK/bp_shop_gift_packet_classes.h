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

// ScriptBlueprintGeneratedClass bp_shop_gift_packet.bp_shop_gift_packet_C
// 0x0140 (0x04D0 - 0x0390)
class Abp_shop_gift_packet_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_SHOPGIFTPACK_UI_SHOW;                                  // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FBP_STRUCT_Shop_GiftPack_Item_Info          BP_STRUCT_Shop_GiftPack_Item_Info;                        // 0x03A0(0x00D0) (Edit, BlueprintVisible)
	int                                                BP_SHOPGIFT_UITYPE;                                       // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_Shop_GiftPack_Data>       BP_ARRAY_GiftPack_PackStyle;                              // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SHOPGIFT_CHECKBOX_NAME;                                // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Shop_GiftPack_Data               BP_STRUCT_Shop_GiftPack_Data;                             // 0x0498(0x0030) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_shop_gift_packet.bp_shop_gift_packet_C");
		return ptr;
	}


	void EventUpdateCheckIdx_NoFetch();
	void EventUpdateCheckIdx();
	void EventOpenSendGiftPanel_NoFetch();
	void EventOpenSendGiftPanel();
	void EventGiftPacketUISendGift_NoFetch();
	void EventGiftPacketUISendGift();
	void EventGiftPacketWaiting_NoFetch();
	void EventGiftPacketWaiting();
	void EventGiftPacketUIRequireGift_NoFetch();
	void EventGiftPacketUIRequireGift();
	void EventPushValue_NoFetch();
	void EventPushValue();
	void EventAnimationCallBack_NoFetch();
	void EventAnimationCallBack();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
