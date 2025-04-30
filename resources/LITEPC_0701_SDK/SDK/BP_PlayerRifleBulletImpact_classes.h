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

// BlueprintGeneratedClass BP_PlayerRifleBulletImpact.BP_PlayerRifleBulletImpact_C
// 0x0018 (0x0888 - 0x0870)
class ABP_PlayerRifleBulletImpact_C : public ASTEShootWeaponBulletImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture2D*>                          CrossHairRefTexture;                                      // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerRifleBulletImpact.BP_PlayerRifleBulletImpact_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
