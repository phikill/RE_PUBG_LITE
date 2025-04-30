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

// ScriptBlueprintGeneratedClass bp_share_cjhb.bp_share_cjhb_C
// 0x0038 (0x03C8 - 0x0390)
class Abp_share_cjhb_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CJHBRemainNum;                                         // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CJHBRoomId;                                            // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CJHB_DelayShowTime;                                    // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_cjhb.bp_share_cjhb_C");
		return ptr;
	}


	void EventShareCJFinaly_Push_NoFetch();
	void EventShareCJFinaly_Push();
	void EventShareCJFinalyFetchInfo_NoFetch();
	void EventShareCJFinalyFetchInfo();
	void EventClickShareCJBtn_NoFetch();
	void EventClickShareCJBtn();
	void EventHideCJUI_NoFetch();
	void EventHideCJUI();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
