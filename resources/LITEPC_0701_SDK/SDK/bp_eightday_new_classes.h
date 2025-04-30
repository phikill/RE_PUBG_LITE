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

// ScriptBlueprintGeneratedClass bp_eightday_new.bp_eightday_new_C
// 0x0088 (0x0418 - 0x0390)
class Abp_eightday_new_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_String_EightDayNewUI_ActiveTime;                       // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_STRUCT_EightDayNewUI_SignUpDay;                        // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_EightDayNewUI_Info>       BP_ARRAY_EightDayNewUI_ItemList;                          // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_EightDayNewUI_Info               BP_STRUCT_EightDayNewUI_Info;                             // 0x03C0(0x0050) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_eightday_new.bp_eightday_new_C");
		return ptr;
	}


	void EventEightDayNewClickItem_NoFetch();
	void EventEightDayNewClickItem();
	void EventEightDayNewClickClose_NoFetch();
	void EventEightDayNewClickClose();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
