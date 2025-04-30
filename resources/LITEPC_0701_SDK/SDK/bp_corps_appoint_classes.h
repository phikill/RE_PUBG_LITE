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

// ScriptBlueprintGeneratedClass bp_corps_appoint.bp_corps_appoint_C
// 0x0158 (0x04E8 - 0x0390)
class Abp_corps_appoint_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CorpsAppoint_PanelData           BP_STRUCT_CorpsAppoint_PanelData;                         // 0x0398(0x0068) (Edit, BlueprintVisible)
	TArray<int>                                        BP_ARRAY_CorpsAppoint_PositionCountMax;                   // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_CorpsAppoint_PositionCount;                      // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsAppoint_ChangeType;                               // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FBP_STRUCT_CorpsAppoint_ListItemData        BP_STRUCT_CorpsAppoint_ListItemData;                      // 0x0428(0x0068) (Edit, BlueprintVisible)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x0490(0x0050) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_appoint.bp_corps_appoint_C");
		return ptr;
	}


	void EventCorpsAppointOnClickConfirm_NoFetch();
	void EventCorpsAppointOnClickConfirm();
	void EventCorpsAppointOnClickClose_NoFetch();
	void EventCorpsAppointOnClickClose();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
