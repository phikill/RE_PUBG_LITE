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

// ScriptBlueprintGeneratedClass bp_signin.bp_signin_C
// 0x0098 (0x0428 - 0x0390)
class Abp_signin_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_SignInUITimeRange;                                     // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_SignInUIInfo>             BP_ARRAY_SignInUIList;                                    // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SignInTotalDays;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SignInBtnNum;                                          // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SignInUIInfo                     BP_STRUCT_SignInUIInfo;                                   // 0x03C0(0x0060) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_signin.bp_signin_C");
		return ptr;
	}


	void EventGetAwardBtnClick_NoFetch();
	void EventGetAwardBtnClick();
	void EventRelease_NoFetch();
	void EventRelease();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
