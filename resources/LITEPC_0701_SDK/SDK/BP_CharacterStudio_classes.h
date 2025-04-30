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

// BlueprintGeneratedClass BP_CharacterStudio.BP_CharacterStudio_C
// 0x0079 (0x0459 - 0x03E0)
class ABP_CharacterStudio_C : public ACharacterStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_PlayerSceneCapturePawn_LPC_C*            SceneCapturePawn;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_PlayerPawn_C*                            PlayerPawn;                                               // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWeaponManagerComponent*                     weaponManager;                                            // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<ESurviveWeaponPropSlot, class ASceneCaptureCharacterWeapon_C*> WeaponSlotMap;                                            // 0x0408(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isShow;                                                   // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterStudio.BP_CharacterStudio_C");
		return ptr;
	}


	void ChangeWeaponAttachment();
	void ShowCharacter(bool isShow);
	void GetTPPWeaponSocketName(const struct FName& SocketName, struct FName* WeaponSocketName);
	void SetAnimPose();
	void PutOnWeapon();
	void CreateWeapon(ESurviveWeaponPropSlot WeaponSlot, class ASTExtraWeapon* Weapon);
	void PutOffWeapon();
	void PutOffCharacterMesh(int resID);
	void SetWeapon();
	void InitCharacterState(class ACharacter* Character);
	void PutOnCharacterMesh(int resID);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_CharacterStudio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
