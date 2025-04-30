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

// ScriptBlueprintGeneratedClass bp_redpacket.bp_redpacket_C
// 0x0050 (0x03E0 - 0x0390)
class Abp_redpacket_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_REDPACKET_WXBKIMG2;                                    // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKET_QQBKIMG2;                                    // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKET_QQBKIMG;                                     // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKET_WXBKIMG;                                     // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_redpacket.bp_redpacket_C");
		return ptr;
	}


	void EventRedPacket_Push_NoFetch();
	void EventRedPacket_Push();
	void EventRedPacketFetchInfo_NoFetch();
	void EventRedPacketFetchInfo();
	void EventHideRedPacketUI_NoFetch();
	void EventHideRedPacketUI();
	void EventClickRedPacketRuleBtn_NoFetch();
	void EventClickRedPacketRuleBtn();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
