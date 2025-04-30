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

// BlueprintGeneratedClass SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C
// 0x0058 (0x03C0 - 0x0368)
class ASceneCaptureCharacterWeapon_C : public AActor
{
public:
	class UStaticMeshComponent*                        WeaponStaticMesh;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSkeletonMesh;                                       // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ScopeSkeletalMesh;                                        // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StockMesh;                                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MagMesh;                                                  // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        GripMesh;                                                 // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MuzzleMesh;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ScopeStaticMesh;                                          // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             WeaponComponent;                                          // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              CurWeapon;                                                // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C");
		return ptr;
	}


	void SetWeaponAvatar(class UMeshComponent* Target, int WeaponAvatarID);
	void SetMeleeWeapon(class ASTExtraWeapon* Weapon);
	void IsFindScopeSocket(const struct FName& SocketName, bool* IsFind);
	void UpdateAttachmentMesh(class ASTExtraWeapon* Item);
	void SetShootWeapon(class ASTExtraWeapon* Weapon);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
