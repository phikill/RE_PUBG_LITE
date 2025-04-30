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

// ScriptBlueprintGeneratedClass bp_shop.bp_shop_C
// 0x00C8 (0x0458 - 0x0390)
class Abp_shop_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SelectSubType;                                         // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SHOP_Look_Shop_Item_ID;                                // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SelectType;                                            // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	struct FBP_STRUCT_Shop_ItemInfo                    BP_STRUCT_Shop_ItemInfo;                                  // 0x03A8(0x0050) (Edit, BlueprintVisible)
	int                                                BP_SHOP_GOLD;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SHOP_Buy_Shop_Item_ID;                                 // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SHOP_HELP_DESC;                                        // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SHOP_PutOff_Avatar_Index;                              // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_Shop_ItemInfo>            BP_ARRAY_Shop_ItemList;                                   // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_SHOP_ISINITING;                                        // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	int                                                BP_SHOP_Avatar_Item_Index;                                // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Shop_DropInfo                    BP_STRUCT_Shop_DropInfo;                                  // 0x0430(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Shop_DropInfo>            BP_ARRAY_Look_DropList;                                   // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_shop.bp_shop_C");
		return ptr;
	}


	void EventGetHelpTip_NoFetch();
	void EventGetHelpTip();
	void EventRequestBuyItem_NoFetch();
	void EventRequestBuyItem();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventLookItem_NoFetch();
	void EventLookItem();
	void EventShopHide_NoFetch();
	void EventShopHide();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventShopChangeAvatar_NoFetch();
	void EventShopChangeAvatar();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
