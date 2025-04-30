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

// BlueprintGeneratedClass BattleItemHandleBase_BP.BattleItemHandleBase_BP_C
// 0x0080 (0x0148 - 0x00C8)
class UBattleItemHandleBase_BP_C : public UBattleItemHandleBase
{
public:
	class ASTExtraPlayerController*                    OwningPlayerController;                                   // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraBaseCharacter*                       OwningCharacter;                                          // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBackpackComponent*                          OwningBackpackComponent;                                  // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  WrapperPutdownTrans;                                      // 0x00E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SourceWrapperTrans;                                       // 0x0110(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABaseAIController*                           OwningAIController;                                       // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BattleItemHandleBase_BP.BattleItemHandleBase_BP_C");
		return ptr;
	}


	void SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc, class APickUpWrapperActor** TargetWrapper);
	class UWorld* GetWorldInternal();
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	struct FBattleItemData ExtractItemData();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
