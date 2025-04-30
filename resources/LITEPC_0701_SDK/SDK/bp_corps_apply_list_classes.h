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

// ScriptBlueprintGeneratedClass bp_corps_apply_list.bp_corps_apply_list_C
// 0x00F8 (0x0488 - 0x0390)
class Abp_corps_apply_list_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Corps_ApplyList_ShowType;                              // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FString                                     BP_CorpsApplyList_PlayerDetailUID;                        // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsApplyList_ItemData          BP_STRUCT_CorpsApplyList_ItemData;                        // 0x03B0(0x0060) (Edit, BlueprintVisible)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x0410(0x0050) (Edit, BlueprintVisible)
	struct FString                                     BP_Corps_ApplyList_OptionID;                              // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsApplyList_ItemData>  BP_ARRAY_Corps_ApplyList;                                 // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_apply_list.bp_corps_apply_list_C");
		return ptr;
	}


	void EventCorpsOnClickRefuseMemberJoin_NoFetch();
	void EventCorpsOnClickRefuseMemberJoin();
	void EventCorpsApplyListClose_NoFetch();
	void EventCorpsApplyListClose();
	void EventCorpsOnClickAgreeMemberJoin_NoFetch();
	void EventCorpsOnClickAgreeMemberJoin();
	void EventCorpsOnClickPlayerDetail_NoFetch();
	void EventCorpsOnClickPlayerDetail();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
