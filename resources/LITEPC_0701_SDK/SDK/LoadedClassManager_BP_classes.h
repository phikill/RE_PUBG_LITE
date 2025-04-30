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

// BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C
// 0x0008 (0x0268 - 0x0260)
class ULoadedClassManager_BP_C : public UUAELoadedClassManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C");
		return ptr;
	}


	void LoadPlaneBPTable(const struct FString& BPTableName);
	void LoadVehicleBPTable(const struct FString& BPTableName);
	void LoadEmoteBPTable(const struct FString& BPTableName);
	void LoadArmoryWeaponBPTable();
	void LoadConsumableBPTable();
	void LoadGameModeBPTable();
	void LoadAvatarBPTable();
	void LoadWeaponBPTable();
	void InitBPTableMap();
	void ExecuteUbergraph_LoadedClassManager_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
