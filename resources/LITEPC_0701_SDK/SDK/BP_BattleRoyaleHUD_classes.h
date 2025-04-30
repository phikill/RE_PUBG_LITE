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

// BlueprintGeneratedClass BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C
// 0x0010 (0x07A0 - 0x0790)
class ABP_BattleRoyaleHUD_C : public ASurviveHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleRoyaleHUD.BP_BattleRoyaleHUD_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HitFeedBackChanged(bool BoolValue);
	void ExecuteUbergraph_BP_BattleRoyaleHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
