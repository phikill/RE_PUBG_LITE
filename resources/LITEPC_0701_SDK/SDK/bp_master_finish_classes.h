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

// ScriptBlueprintGeneratedClass bp_master_finish.bp_master_finish_C
// 0x0058 (0x03E8 - 0x0390)
class Abp_master_finish_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_MasterFinish_FinishType;                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FString                                     BP_MasterFinish_SignName;                                 // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterFinish_DiscipleDesc;                             // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterFinish_MasterDesc;                               // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterFinish_MyName;                                   // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_finish.bp_master_finish_C");
		return ptr;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventMasterFinishClose_NoFetch();
	void EventMasterFinishClose();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
