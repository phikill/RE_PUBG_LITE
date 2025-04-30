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

// BlueprintGeneratedClass GuideComponent_BP.GuideComponent_BP_C
// 0x000C (0x012C - 0x0120)
class UGuideComponent_BP_C : public UGuideComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	int                                                guideStep;                                                // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GuideComponent_BP.GuideComponent_BP_C");
		return ptr;
	}


	void ShowGuideByStep();
	void AddUIGuide(class UWidget* widget1, int guildUI1, const struct FVector2D& offset1, const struct FVector2D& size1, int childData1);
	void InitUIGuide();
	void CreateGuideUI();
	void ExecuteUbergraph_GuideComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
