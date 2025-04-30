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

// ScriptBlueprintGeneratedClass bp_scrollnotice.bp_scrollnotice_C
// 0x0098 (0x0428 - 0x0390)
class Abp_scrollnotice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CurrentScrollNoticeMsgData       BP_STRUCT_CurrentScrollNoticeMsgData;                     // 0x0398(0x0018) (Edit, BlueprintVisible)
	bool                                               BP_ScrollMsg_IsRolling;                                   // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                BP_ScrollMsg_CurrentMsgId;                                // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ScrollMsg_ShowEnd;                                     // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	struct FString                                     BP_ScrollMsg_CurrentRealMsg;                              // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ScrollNoticeMsgData              BP_STRUCT_ScrollNoticeMsgData;                            // 0x03D0(0x0028) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ScrollNoticeMsgData>      BP_ARRAY_ScrollNoticeMsgData;                             // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ScrollMsgUrl;                                          // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ScrollMsg_CurrentRound;                                // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ScrollMsg_Cannotshow;                                  // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_scrollnotice.bp_scrollnotice_C");
		return ptr;
	}


	void EventOneMsgRollEnd_NoFetch();
	void EventOneMsgRollEnd();
	void EventShowNextMsg_NoFetch();
	void EventShowNextMsg();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
