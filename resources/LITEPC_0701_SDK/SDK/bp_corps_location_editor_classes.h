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

// ScriptBlueprintGeneratedClass bp_corps_location_editor.bp_corps_location_editor_C
// 0x0038 (0x03C8 - 0x0390)
class Abp_corps_location_editor_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsHomepageLocationSelectCity;                       // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsHomepageLocationSelectProvince;                   // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_CorpsHomepageLocationProvince;                   // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_CorpsHomepageLocationCity;                       // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_location_editor.bp_corps_location_editor_C");
		return ptr;
	}


	void EventCorpsLocationEditorChange_NoFetch();
	void EventCorpsLocationEditorChange();
	void EventCorpsLocationEditorSelectProvince_NoFetch();
	void EventCorpsLocationEditorSelectProvince();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
