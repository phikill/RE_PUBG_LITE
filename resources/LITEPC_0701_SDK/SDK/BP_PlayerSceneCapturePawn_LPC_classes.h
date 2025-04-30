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

// BlueprintGeneratedClass BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C
// 0x0048 (0x07C8 - 0x0780)
class ABP_PlayerSceneCapturePawn_LPC_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0780(0x0008) (Transient, DuplicateTransient)
	class UCharacterAnimList_Base_C*                   CharacterAnimList_Base;                                   // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterWeaponManagerComponent*            CharacterWeaponManager;                                   // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterAvatarComp_BP_C*                   CharacterAvatarComp_BP;                                   // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                headid;                                                   // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               press;                                                    // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07A9(0x0003) MISSED OFFSET
	float                                              LocationX;                                                // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    lastrotator;                                              // 0x07B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07BD(0x0003) MISSED OFFSET
	class ULobby_AnimBP_C*                             CachingAnimInstance;                                      // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerSceneCapturePawn_LPC.BP_PlayerSceneCapturePawn_LPC_C");
		return ptr;
	}


	void GetAnimInstance(class ULobby_AnimBP_C** AnimInstance);
	class UBackpackAvatarHandle* GetBattleItemFromResID(int RowName);
	void GetBPID(int RowName, int* BPID);
	void GetHiddenFlags(int resID, TArray<EAvatarSlotType>* hiddenFlags);
	void UserConstructionScript();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_PlayerSceneCapturePawn_LPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
