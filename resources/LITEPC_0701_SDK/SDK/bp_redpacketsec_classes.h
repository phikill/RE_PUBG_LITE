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

// ScriptBlueprintGeneratedClass bp_redpacketsec.bp_redpacketsec_C
// 0x0130 (0x04C0 - 0x0390)
class Abp_redpacketsec_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_REDPACKETSEC_WXTITLEIMG;                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_REDPACKET_SEC_Info>       BP_ARRAY_REDPACKET_SEC_Infos;                             // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_WXBKIMG2;                                 // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_QQBKIMG2;                                 // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_QQTITLEIMG;                               // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Redpacket_rule_Desc;                                   // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_REDPACKET_ACT_Info               BP_STRUCT_REDPACKET_ACT_Info;                             // 0x03F8(0x0018) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_REDPACKET_ACT_Info>       BP_ARRAY_REDPACKET_ACT_Infos;                             // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_REDPACKET_SEC_Info               BP_STRUCT_REDPACKET_SEC_Info;                             // 0x0420(0x0030) (Edit, BlueprintVisible)
	int                                                BP_REDPACKETSEC_INDEX;                                    // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FString                                     BP_Redpacket_Open_Time;                                   // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_QQBKIMG;                                  // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_WXTITLEIMG2;                              // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_GID;                                      // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_WXBKIMG;                                  // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_QQTITLEIMG2;                              // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_redpacketsec.bp_redpacketsec_C");
		return ptr;
	}


	void EventClickRedPacketSecShareBtn_NoFetch();
	void EventClickRedPacketSecShareBtn();
	void EventClickRedPacketSecRuleBtn_NoFetch();
	void EventClickRedPacketSecRuleBtn();
	void EventRedPacketSecFetchInfo_NoFetch();
	void EventRedPacketSecFetchInfo();
	void EventRedPacketSec_Push_NoFetch();
	void EventRedPacketSec_Push();
	void EventHideRedPacketSecUI_NoFetch();
	void EventHideRedPacketSecUI();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
