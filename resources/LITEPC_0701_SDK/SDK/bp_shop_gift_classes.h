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

// ScriptBlueprintGeneratedClass bp_shop_gift.bp_shop_gift_C
// 0x02C8 (0x0658 - 0x0390)
class Abp_shop_gift_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_Shop_Gift_Item_Info              BP_STRUCT_Shop_Gift_Item_Info;                            // 0x0398(0x0058) (Edit, BlueprintVisible)
	struct FBP_STRUCT_FriendProfile_ForGift            BP_STRUCT_FriendProfile_ForGift;                          // 0x03F0(0x01C8) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_FriendProfile_ForGift>    BP_Array_Shop_Gift_FriendData;                            // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile_ForGift>    BP_Array_Shop_Gift_FriendSearch_Data;                     // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Shop_Gift_Search_Word;                                 // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Shop_Gift_Opr_Type;                                    // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Shop_Gift_Money_Enough;                                // 0x05EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05ED(0x0003) MISSED OFFSET
	struct FBP_STRUCT_FriendProfile_Gift_Select        BP_STRUCT_FriendProfile_Gift_Select;                      // 0x05F0(0x0060) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_shop_gift.bp_shop_gift_C");
		return ptr;
	}


	void EventGiftUISearch_NoFetch();
	void EventGiftUISearch();
	void EventGiftSwitchToSendPanel_NoFetch();
	void EventGiftSwitchToSendPanel();
	void EventGiftUIPushDataFunc_NoFetch();
	void EventGiftUIPushDataFunc();
	void EventGiftUISendOrWant_NoFetch();
	void EventGiftUISendOrWant();
	void EventGiftUIClose_NoFetch();
	void EventGiftUIClose();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
