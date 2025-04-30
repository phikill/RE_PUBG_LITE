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

// ScriptBlueprintGeneratedClass bp_roleinfo_honorwall.bp_roleinfo_honorwall_C
// 0x0060 (0x03F0 - 0x0390)
class Abp_roleinfo_honorwall_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_HonorInfo                        BP_STRUCT_HonorInfo;                                      // 0x0398(0x0038) (Edit, BlueprintVisible)
	int                                                BP_HonorWall_SelectID;                                    // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_HonorInfo>                BP_ARRAY_HonorInfoList;                                   // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_honorwall.bp_roleinfo_honorwall_C");
		return ptr;
	}


	void EventHonorWallHelp_NoFetch();
	void EventHonorWallHelp();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventHonorWallUpdateSelect_NoFetch();
	void EventHonorWallUpdateSelect();
	void EventHonorWallButtonShare_NoFetch();
	void EventHonorWallButtonShare();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
