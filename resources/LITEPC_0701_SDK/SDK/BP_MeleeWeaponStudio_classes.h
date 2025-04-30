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

// BlueprintGeneratedClass BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C
// 0x0018 (0x03E8 - 0x03D0)
class ABP_MeleeWeaponStudio_C : public AItemStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        WeaponStaticMesh;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             WeaponComponent;                                          // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C");
		return ptr;
	}


	void SetWeaponAvatar(class UMeshComponent* Target, int WeaponAvatarID);
	void ShowWeapon(bool isShow);
	void OnLoaded();
	void UserConstructionScript();
	void SetItem(class ASTExtraWeapon** Item);
	void ExecuteUbergraph_BP_MeleeWeaponStudio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
