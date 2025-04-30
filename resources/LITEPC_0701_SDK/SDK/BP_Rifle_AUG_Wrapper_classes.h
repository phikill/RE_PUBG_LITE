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

// BlueprintGeneratedClass BP_Rifle_AUG_Wrapper.BP_Rifle_AUG_Wrapper_C
// 0x0010 (0x0418 - 0x0408)
class ABP_Rifle_AUG_Wrapper_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        ST_WEP_M416_Lod;                                          // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_M416;                                                  // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_AUG_Wrapper.BP_Rifle_AUG_Wrapper_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
