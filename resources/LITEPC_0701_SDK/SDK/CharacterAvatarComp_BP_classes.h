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

// BlueprintGeneratedClass CharacterAvatarComp_BP.CharacterAvatarComp_BP_C
// 0x0008 (0x0628 - 0x0620)
class UCharacterAvatarComp_BP_C : public UCharacterAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0620(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterAvatarComp_BP.CharacterAvatarComp_BP_C");
		return ptr;
	}


	void CreateMeshData(const struct FMeshPackage& MeshPackage, const struct FItemDefineID& DefineID, struct FMeshData* Output);
	bool CheckShouldEquipItem(int slotID);
	bool PutOnDefaultEquipment(class UBackpackAvatarHandle* ItemHandle);
	bool InitBodyMeshByHead(int* Head);
	void GetBPID(int RowName, int* BPID);
	class UBackpackAvatarHandle* GetBattleItemFromResID(int RowName);
	bool PutOffEquimentByResID(int* resID);
	bool PutOnEquipmentByResID(int* resID);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CharacterAvatarComp_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
