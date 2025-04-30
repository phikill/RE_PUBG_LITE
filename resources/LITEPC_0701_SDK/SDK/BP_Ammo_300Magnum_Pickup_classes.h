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

// BlueprintGeneratedClass BP_Ammo_300Magnum_Pickup.BP_Ammo_300Magnum_Pickup_C
// 0x0008 (0x0410 - 0x0408)
class ABP_Ammo_300Magnum_Pickup_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        SM_Ammo_300Magnum;                                        // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ammo_300Magnum_Pickup.BP_Ammo_300Magnum_Pickup_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
