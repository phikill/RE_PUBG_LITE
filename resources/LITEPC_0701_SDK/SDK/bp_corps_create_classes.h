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

// ScriptBlueprintGeneratedClass bp_corps_create.bp_corps_create_C
// 0x0090 (0x0420 - 0x0390)
class Abp_corps_create_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_CorpsCreate_CityList;                            // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsCreate_Currency_Own;                              // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsCreate_City_Current;                              // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsCreate_Currency_Icon_ID;                          // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FString                                     BP_CorpsCreate_Name;                                      // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_CorpsCreate_ProvinceList;                        // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsCreate_Currency_Price;                            // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FString                                     BP_CorpsCreate_Province_Current;                          // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsCreate_Announcement;                              // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_create.bp_corps_create_C");
		return ptr;
	}


	void EventCorpsCreateFetchInfo_NoFetch();
	void EventCorpsCreateFetchInfo();
	void EventFilerCitys_Push_NoFetch();
	void EventFilerCitys_Push();
	void EventCorpsCreateHideUI_NoFetch();
	void EventCorpsCreateHideUI();
	void EventCorpsCreateShowUI_NoFetch();
	void EventCorpsCreateShowUI();
	void EventOpenCorpsIconSelectPanel_NoFetch();
	void EventOpenCorpsIconSelectPanel();
	void EventOnCorpsCreateButtonClicked_Push_NoFetch();
	void EventOnCorpsCreateButtonClicked_Push();
	void EventCorpsCreateUIFilterName_NoFetch();
	void EventCorpsCreateUIFilterName();
	void EventCorpsTaskHelpShow_NoFetch();
	void EventCorpsTaskHelpShow();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
