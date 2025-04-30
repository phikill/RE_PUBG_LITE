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

// ScriptBlueprintGeneratedClass bp_corps_manager.bp_corps_manager_C
// 0x0050 (0x03E0 - 0x0390)
class Abp_corps_manager_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_CorpsManager_LevelOption;                        // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_CorpsManager_SegmentOption;                      // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsManager_PanelData           BP_STRUCT_CorpsManager_PanelData;                         // 0x03B8(0x000C) (Edit, BlueprintVisible)
	int                                                BP_CorpsManager_IconID;                                   // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsManager_PanelInfo           BP_STRUCT_CorpsManager_PanelInfo;                         // 0x03C8(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_manager.bp_corps_manager_C");
		return ptr;
	}


	void EventCorpsManagerOnClickClose_NoFetch();
	void EventCorpsManagerOnClickClose();
	void EventCorpsManagerOnClickConfirm_NoFetch();
	void EventCorpsManagerOnClickConfirm();
	void EventCorpsManagerOnClickChangeIcon_NoFetch();
	void EventCorpsManagerOnClickChangeIcon();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
