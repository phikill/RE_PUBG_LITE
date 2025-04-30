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

// ScriptBlueprintGeneratedClass bp_shoplimit.bp_shoplimit_C
// 0x00A0 (0x0430 - 0x0390)
class Abp_shoplimit_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_ShopLimitBuyId;                                        // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_ShopLimitInfo>            BP_ARRAY_ShopLimitList;                                   // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShopLimitInfo                    BP_STRUCT_ShopLimitInfo;                                  // 0x03B0(0x0078) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_shoplimit.bp_shoplimit_C");
		return ptr;
	}


	void EventShopLimitBuy_Push_NoFetch();
	void EventShopLimitBuy_Push();
	void EventShopLimitShowUI_NoFetch();
	void EventShopLimitShowUI();
	void EventShopLimitInitData_NoFetch();
	void EventShopLimitInitData();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
