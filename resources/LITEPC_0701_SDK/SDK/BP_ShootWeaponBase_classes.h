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

// BlueprintGeneratedClass BP_ShootWeaponBase.BP_ShootWeaponBase_C
// 0x00A8 (0x0A68 - 0x09C0)
class ABP_ShootWeaponBase_C : public ASTExtraShootWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C0(0x0008) (Transient, DuplicateTransient)
	class UWeaponSpecificHandler*                      WeaponSpecificHandler;                                    // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBulletHitInfoUploadComponent*               BulletHitInfoUpload;                                      // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        WEP_M16A4_ST;                                             // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCrossHairComponent*                         Crosshair;                                                // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShootWeaponEntity*                          ShootWeaponEntity;                                        // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponStateDefault*                         WeaponStateDefault;                                       // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNoBulletWeaponState*                        NoBulletWeaponState;                                      // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFireWeaponState*                            FireWeaponState;                                          // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReloadWeaponState*                          ReloadWeaponState;                                        // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIdleWeaponState*                            IdleWeaponState;                                          // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInactiveWeaponState*                        InactiveWeaponState;                                      // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShootWeaponStateManager*                    ShootWeaponStateManager;                                  // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShootWeaponEffectComponent*                 ShootWeaponEffect;                                        // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBulletTrackComponent*                       BulletTrack;                                              // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USTEShootWeaponProjectComponent*             STEShootWeaponProject;                                    // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIdleAnim;                                             // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A41(0x0003) MISSED OFFSET
	float                                              FOV;                                                      // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMeshComponent*                              PalyerMagRef;                                             // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMeshComponent*                              WeaponMagRef;                                             // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              normalShotVoiceDis;                                       // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlienceShotVoiceDis;                                      // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CreateTime;                                               // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagOutDelayThresholdRightAfterCreate;                     // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShootWeaponBase.BP_ShootWeaponBase_C");
		return ptr;
	}


	void OnWeaponMagIn();
	void OnWeaponMagOut();
	void BeginRegReloadEvent();
	void BP_PawnAttachMesh(class UMeshComponent** PlayerMesh);
	void BP_OnWeaponReloadStart();
	void BP_OnWeaponReloadEnd();
	void ResetCamera();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayLocalShellDropFX();
	void HandleMagOnWeaponChanged();
	void HandleEvent0();
	void ExecuteUbergraph_BP_ShootWeaponBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
