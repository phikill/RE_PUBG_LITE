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

// ScriptBlueprintGeneratedClass bp_corps_base.bp_corps_base_C
// 0x0038 (0x03C8 - 0x0390)
class Abp_corps_base_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsBase_SelectedIndex;                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<bool>                                       BP_Array_CorpsBaseUI_ShowTab;                             // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       BP_Array_CorpsBaseUI_RedPoint;                            // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_base.bp_corps_base_C");
		return ptr;
	}


	void EventCorpsClose_NoFetch();
	void EventCorpsClose();
	void EventOnAfterShow_NoFetch();
	void EventOnAfterShow();
	void EventOnSelectIndex_NoFetch();
	void EventOnSelectIndex();
	void EventOnAfterHide_NoFetch();
	void EventOnAfterHide();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
