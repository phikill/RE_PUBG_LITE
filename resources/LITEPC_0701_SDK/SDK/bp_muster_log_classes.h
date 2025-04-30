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

// ScriptBlueprintGeneratedClass bp_muster_log.bp_muster_log_C
// 0x0050 (0x03E0 - 0x0390)
class Abp_muster_log_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_MusterLogInfo                    BP_STRUCT_MusterLogInfo;                                  // 0x0398(0x0030) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MusterLogInfo>            BP_ARRAY_MusterLogList;                                   // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_muster_log.bp_muster_log_C");
		return ptr;
	}


	void EventMusterLogUIHide_NoFetch();
	void EventMusterLogUIHide();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
