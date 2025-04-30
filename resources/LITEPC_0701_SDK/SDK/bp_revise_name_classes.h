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

// ScriptBlueprintGeneratedClass bp_revise_name.bp_revise_name_C
// 0x0020 (0x03B0 - 0x0390)
class Abp_revise_name_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ReviseRole_Name;                                       // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_revise_name.bp_revise_name_C");
		return ptr;
	}


	void EventReviseNameConfirmModify_NoFetch();
	void EventReviseNameConfirmModify();
	void EventReviseNameFilterName_NoFetch();
	void EventReviseNameFilterName();
	void EventReviseNameUIHide_NoFetch();
	void EventReviseNameUIHide();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
