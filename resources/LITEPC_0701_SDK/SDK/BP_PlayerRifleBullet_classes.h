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

// BlueprintGeneratedClass BP_PlayerRifleBullet.BP_PlayerRifleBullet_C
// 0x0008 (0x0470 - 0x0468)
class ABP_PlayerRifleBullet_C : public ASTExtraShootWeaponBulletBase
{
public:
	class UStaticMeshComponent*                        BulletMesh;                                               // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerRifleBullet.BP_PlayerRifleBullet_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
