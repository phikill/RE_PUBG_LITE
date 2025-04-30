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

// BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C
// 0x0058 (0x0888 - 0x0830)
class ABP_PlayerLobbyPawn_C : public ALobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0830(0x0008) (Transient, DuplicateTransient)
	class UEmoteComponent_BP_C*                        EmoteComponent_BP;                                        // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            HUD;                                                      // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAvatarComp_BP_C*                   CharacterAvatarComp_BP;                                   // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                headid;                                                   // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               press;                                                    // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0859(0x0003) MISSED OFFSET
	float                                              LocationX;                                                // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    lastrotator;                                              // 0x0860(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // 0x086C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	class UBP_LitePCLobbyNameTag_C*                    CHUD;                                                     // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Backpackblueprint_Uitls;                                  // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraWeapon*                              LobbyWeapon;                                              // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C");
		return ptr;
	}


	void SetWeaponSkin(int SkinId);
	void SpawnWeapon(int WeaponId);
	void WeaponAttachComponent();
	void Set_Anim_Pose();
	class UBackpackAvatarHandle* GetBattleItemFromResID(int RowName);
	void GetBPID(int RowName, int* BPID);
	void GetHiddenFlags(int resID, TArray<EAvatarSlotType>* hiddenFlags);
	void UserConstructionScript();
	void SetReady(bool* bReady);
	void SetHost(bool* bHost);
	void ShowHUD();
	void HideHUD();
	void ReceiveBeginPlay();
	void UpdateEquipedWeapon(int* ItemID);
	void DestroyLobbyWeapon();
	void ResetAnimPose();
	void HideEquippedWeapon(bool* InVal);
	void SetNickName(struct FString* NewNickName);
	void SetRankEmblem(ERatingRankType* NewRankType);
	void SetLogout();
	void SetState(bool* bShow);
	void ExecuteUbergraph_BP_PlayerLobbyPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
