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

// BlueprintGeneratedClass BP_AutoAimingComponent.BP_AutoAimingComponent_C
// 0x0001 (0x0721 - 0x0720)
class UBP_AutoAimingComponent_C : public UWeaponAutoAimingComponent
{
public:
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AutoAimingComponent.BP_AutoAimingComponent_C");
		return ptr;
	}


	bool CheckSmoke(struct FVector* startPoint, class ASTExtraPlayerCharacter** Pawn);
	bool CanEnemeyRaycastReach(struct FVector* startPoint, class ASTExtraPlayerCharacter** Pawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
