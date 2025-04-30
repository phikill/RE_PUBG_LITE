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

// ScriptBlueprintGeneratedClass bp_teamup_map.bp_teamup_map_C
// 0x00F8 (0x0488 - 0x0390)
class Abp_teamup_map_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_TeamUpMap_CurClickMapSelected;                         // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FBP_STRUCT_TeamUpMapInfo                    BP_STRUCT_TeamUpMapInfo;                                  // 0x03A0(0x0090) (Edit, BlueprintVisible)
	struct FString                                     BP_TeamUpMap_Model;                                       // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUpMap_CurClickMapId;                               // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	struct FString                                     BP_TeamUpMap_Title;                                       // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_TeamUpMap_CurMapSelectedHelpInfo;                      // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUpMap_CurModelPerspective;                         // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TeamUpMap_CanSelectMap;                                // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TeamUpMap_LockSelectMap;                               // 0x046D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x046E(0x0002) MISSED OFFSET
	TArray<struct FBP_STRUCT_TeamUpMapInfo>            BP_ARRAY_TeamUpMapInfoList;                               // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup_map.bp_teamup_map_C");
		return ptr;
	}


	void EventClickMapItem_Push_NoFetch();
	void EventClickMapItem_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickClose_Push_NoFetch();
	void EventClickClose_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
