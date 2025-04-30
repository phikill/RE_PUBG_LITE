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

// ScriptBlueprintGeneratedClass bp_activty.bp_activty_C
// 0x02E8 (0x0678 - 0x0390)
class Abp_activty_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_SubActivtyInfo>           BP_ARRAY_SubActivtyList;                                  // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_NoticeButtonInfo                 BP_STRUCT_NoticeButtonInfo;                               // 0x03A8(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ActivtyUISkin_Cfg                BP_STRUCT_ActivtyUISkin_Cfg;                              // 0x03D8(0x0018) (Edit, BlueprintVisible)
	int                                                BP_Duihuan_RedPoint_Num;                                  // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_First_Act_1_ID;                                        // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SubActivtyItemInfo>       BP_ARRAY_SubActivtyDropList;                              // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActButtonInfo                    BP_STRUCT_ActButtonInfo;                                  // 0x0408(0x0038) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_NoticeButtonInfo>         BP_ARRAY_NoticeButtonInfo;                                // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurrentActJumpID;                                      // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_SubActivtyItemInfo>       BP_ARRAY_SubActivtyCostList;                              // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SubActivtyInfo                   BP_STRUCT_SubActivtyInfo;                                 // 0x0468(0x0070) (Edit, BlueprintVisible)
	struct FString                                     BP_CurrentNoticeJumpMode;                                 // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActivtyInfo_Click                BP_STRUCT_ActivtyInfo_Click;                              // 0x04E8(0x0010) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ActivtyInfo                      BP_STRUCT_ActivtyInfo;                                    // 0x04F8(0x00A0) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ActButtonInfo>            BP_ARRAY_ActButtonInfo;                                   // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActivtyNoticeBtn_Select          BP_STRUCT_ActivtyNoticeBtn_Select;                        // 0x05A8(0x000C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_SubActivtyItemInfo               BP_STRUCT_SubActivtyItemInfo;                             // 0x05B4(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	struct FBP_STRUCT_NoticeInfo                       BP_STRUCT_NoticeInfo;                                     // 0x05C8(0x00A0) (Edit, BlueprintVisible)
	int                                                BP_First_Act_ID;                                          // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_First_Notice_ID;                                       // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_activty.bp_activty_C");
		return ptr;
	}


	void EventActivtyClickOneBtn_NoFetch();
	void EventActivtyClickOneBtn();
	void EventActivtyUpdateLobbyRedPoint_NoFetch();
	void EventActivtyUpdateLobbyRedPoint();
	void EventActivtyUIOnClickCheckExchange_NoFetch();
	void EventActivtyUIOnClickCheckExchange();
	void EventActivtyUIOnNoticeJump_NoFetch();
	void EventActivtyUIOnNoticeJump();
	void EventActivtyUIOnClickJumpBtn_NoFetch();
	void EventActivtyUIOnClickJumpBtn();
	void EventActivtyUIOnClickGetBtn_NoFetch();
	void EventActivtyUIOnClickGetBtn();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
