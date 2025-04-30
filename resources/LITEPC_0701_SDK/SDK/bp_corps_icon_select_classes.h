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

// ScriptBlueprintGeneratedClass bp_corps_icon_select.bp_corps_icon_select_C
// 0x0040 (0x03D0 - 0x0390)
class Abp_corps_icon_select_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsIconData>            BP_ARRAY_CorpsIconList;                                   // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsIconData                    BP_STRUCT_CorpsIconData;                                  // 0x03A8(0x0018) (Edit, BlueprintVisible)
	int                                                BP_CorpsIconCurUseId;                                     // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_icon_select.bp_corps_icon_select_C");
		return ptr;
	}


	void EventCorpsIconSelectUIClose_NoFetch();
	void EventCorpsIconSelectUIClose();
	void EventOnCorpsIconSelectClicked_NoFetch();
	void EventOnCorpsIconSelectClicked();
	void EventCorpsIconSelectUIFetchInfo_NoFetch();
	void EventCorpsIconSelectUIFetchInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
