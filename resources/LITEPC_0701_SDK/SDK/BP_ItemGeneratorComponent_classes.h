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

// BlueprintGeneratedClass BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C
// 0x0010 (0x0388 - 0x0378)
class UBP_ItemGeneratorComponent_C : public UItemGeneratorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class UDataTable*                                  ItemDataTable;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemGeneratorComponent.BP_ItemGeneratorComponent_C");
		return ptr;
	}


	void LoadSpecialCategoryConfig();
	void ReceiveBeginPlay();
	void LoadItemGenerateTable();
	void OnGameModeEnterFlying();
	void OnPlayerEnterBornIsland();
	void ExecuteUbergraph_BP_ItemGeneratorComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
