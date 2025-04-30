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

// ScriptBlueprintGeneratedClass bp_reflux.bp_reflux_C
// 0x0128 (0x04B8 - 0x0390)
class Abp_reflux_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Reflux_Friend_Page_Idx;                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_Reflux_Friend_Info>       BP_ARRAY_Reflux_Friend_Infos;                             // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Reflux_Call_Friend_OpenID;                             // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Reflux_Call_Friend_UID;                                // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Reflux_Friend_Count;                                   // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Reflux_Total_Back_Count;                               // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Reflux_Award_Index_Get;                                // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FString                                     BP_Reflux_Open_Time;                                      // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Reflux_Award_Info                BP_STRUCT_Reflux_Award_Info;                              // 0x03F0(0x0038) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Reflux_Friend_Info               BP_STRUCT_Reflux_Friend_Info;                             // 0x0428(0x0058) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Reflux_Award_Info>        BP_ARRAY_Reflux_Award_Infos;                              // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Reflux_Friend_Info>       BP_ARRAY_Reflux_Register_Friend_Infos;                    // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Reflux_Help_Content;                                   // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_reflux.bp_reflux_C");
		return ptr;
	}


	void EventRefluxPrePage_NoFetch();
	void EventRefluxPrePage();
	void EventRefluxNextPage_NoFetch();
	void EventRefluxNextPage();
	void EventRefluxGetAward_NoFetch();
	void EventRefluxGetAward();
	void EventRefluxFriendInvite_NoFetch();
	void EventRefluxFriendInvite();
	void EventRefluxViewRegisterFriend_NoFetch();
	void EventRefluxViewRegisterFriend();
	void EventRefluxCloseUI_NoFetch();
	void EventRefluxCloseUI();
	void EventRefluxRule_NoFetch();
	void EventRefluxRule();
	void EventRefluxShare_NoFetch();
	void EventRefluxShare();
	void EventRefluxViewBox_NoFetch();
	void EventRefluxViewBox();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
