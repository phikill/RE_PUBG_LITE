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

// ScriptBlueprintGeneratedClass bp_first_recharge.bp_first_recharge_C
// 0x0030 (0x03C0 - 0x0390)
class Abp_first_recharge_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_FirstRecharge_Item               BP_STRUCT_FirstRecharge_Item;                             // 0x0398(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FirstRecharge_Item>       BP_Array_First_Recharge_Data;                             // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_first_recharge.bp_first_recharge_C");
		return ptr;
	}


	void EventFirstRechargeAward_NoFetch();
	void EventFirstRechargeAward();
	void EventFirstRechargeShowRechargeUI_NoFetch();
	void EventFirstRechargeShowRechargeUI();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
