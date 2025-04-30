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

// ScriptBlueprintGeneratedClass bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C
// 0x0078 (0x0408 - 0x0390)
class Abp_roleinfo_rankdetail_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_ItemMax;                                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_RoleRankDetailTypeInfo           BP_STRUCT_RoleRankDetailTypeInfo;                         // 0x03A0(0x0018) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_RoleRankDetailSingleInfo> BP_ARRAY_RoleRankDetailSingleList;                        // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoleRankDetailTypeInfo>   BP_ARRAY_RoleRankDetailTypeList;                          // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoleRankDetailSingleInfo         BP_STRUCT_RoleRankDetailSingleInfo;                       // 0x03D8(0x0028) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C");
		return ptr;
	}


	void EventRankDetailRelease_NoFetch();
	void EventRankDetailRelease();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
