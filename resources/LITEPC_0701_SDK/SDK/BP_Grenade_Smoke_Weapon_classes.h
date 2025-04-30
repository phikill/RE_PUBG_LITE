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

// BlueprintGeneratedClass BP_Grenade_Smoke_Weapon.BP_Grenade_Smoke_Weapon_C
// 0x0030 (0x0630 - 0x0600)
class ABP_Grenade_Smoke_Weapon_C : public ASTExtraWeapon
{
public:
	class UWeaponAnimList_Grenade_C*                   WeaponAnimList_Grenade;                                   // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponEntity*                               WeaponEntity;                                             // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponSpecificHandler*                      WeaponSpecificHandler;                                    // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponStateDefault*                         WeaponStateDefault;                                       // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponStateManager*                         WeaponStateManager;                                       // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Smoke_Weapon.BP_Grenade_Smoke_Weapon_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
