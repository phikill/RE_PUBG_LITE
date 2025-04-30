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

// ScriptBlueprintGeneratedClass bp_share_pddhb.bp_share_pddhb_C
// 0x0060 (0x03F0 - 0x0390)
class Abp_share_pddhb_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_PDDHBRoomId;                                           // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PDDHB_WXBKIMG;                                         // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PDDHB_QQBKIMG;                                         // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_PDDHB_VALID;                                           // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FString                                     BP_PDDHBRemainNum;                                        // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PDDHB_DelayShowTime;                                   // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_pddhb.bp_share_pddhb_C");
		return ptr;
	}


	void EventHidePDDHBUI_NoFetch();
	void EventHidePDDHBUI();
	void EventSharePDDFetchInfo_NoFetch();
	void EventSharePDDFetchInfo();
	void EventClickSharePDDBtn_NoFetch();
	void EventClickSharePDDBtn();
	void EventSharePDD_Push_NoFetch();
	void EventSharePDD_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
