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

// ScriptBlueprintGeneratedClass bp_teamup_model.bp_teamup_model_C
// 0x01B0 (0x0540 - 0x0390)
class Abp_teamup_model_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_ItemPerspective>          BP_ARRAY_ListPerspective;                                 // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Teamup_CurMapName_Before;                              // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ItemPerspective                  BP_STRUCT_ItemPerspective;                                // 0x03B8(0x0018) (Edit, BlueprintVisible)
	struct FString                                     BP_Teamup_CurMapName;                                     // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ListItemInfo>             BP_ARRAY_ListItemInfoList;                                // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUpModel_PlayerNum;                                 // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FBP_STRUCT_CurSelectedModelInfo             BP_STRUCT_CurSelectedModelInfo;                           // 0x03F8(0x0078) (Edit, BlueprintVisible)
	int                                                BP_TeamUpModel_Perspective;                               // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	struct FBP_STRUCT_ListItemInfo                     BP_STRUCT_ListItemInfo;                                   // 0x0478(0x0020) (Edit, BlueprintVisible)
	bool                                               BP_Teamup_Show_NewteachingGuide;                          // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	struct FBP_STRUCT_TeamUpModelInfo                  BP_STRUCT_TeamUpModelInfo;                                // 0x04A0(0x0080) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_TeamUpModelInfo>          BP_ARRAY_TeamUpModelInfoList;                             // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUpModel_AutoMatch;                                 // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUpModel_SelectModelType;                           // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup_model.bp_teamup_model_C");
		return ptr;
	}


	void EventClickListItem_Push_NoFetch();
	void EventClickListItem_Push();
	void EventClickPerspective_Push_NoFetch();
	void EventClickPerspective_Push();
	void EventClickModel_Push_NoFetch();
	void EventClickModel_Push();
	void EventClickTeach_BAK_Push_NoFetch();
	void EventClickTeach_BAK_Push();
	void EventClickMapList_Push_NoFetch();
	void EventClickMapList_Push();
	void EventClickRoom_Push_NoFetch();
	void EventClickRoom_Push();
	void EventClickTraining_BAK_Push_NoFetch();
	void EventClickTraining_BAK_Push();
	void EventClickPlayerNum_Push_NoFetch();
	void EventClickPlayerNum_Push();
	void EventClickAutoMatch_Push_NoFetch();
	void EventClickAutoMatch_Push();
	void EventSetHasGuideNewteaching_BAK_NoFetch();
	void EventSetHasGuideNewteaching_BAK();
	void EventAutoSelectSolo_Push_NoFetch();
	void EventAutoSelectSolo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
