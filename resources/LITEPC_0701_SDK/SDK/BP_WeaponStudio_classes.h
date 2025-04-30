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

// BlueprintGeneratedClass BP_WeaponStudio.BP_WeaponStudio_C
// 0x0050 (0x0420 - 0x03D0)
class ABP_WeaponStudio_C : public AItemStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      ScopeSkeletalMesh;                                        // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ScopeStaticMesh;                                          // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StockMesh;                                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MagMesh;                                                  // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        GripMesh;                                                 // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MuzzleMesh;                                               // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponMesh;                                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             WeaponComponent;                                          // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraWeapon*                              CurWeapon;                                                // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponStudio.BP_WeaponStudio_C");
		return ptr;
	}


	void ShowWeapon(bool isShow);
	void SetWeaponAvatar(class UMeshComponent* Target, int WeaponAvatarID);
	void InitAttachmentMesh();
	void IsEqualWeapon(class ASTExtraWeapon* Weapon, bool* IsEqual);
	void IsFindScopeSocket(const struct FName& SocketName, bool* IsFind);
	void UpdateAttachmentMesh();
	void OnLoaded();
	void UserConstructionScript();
	void SetItem(class ASTExtraWeapon** Item);
	void ExecuteUbergraph_BP_WeaponStudio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
