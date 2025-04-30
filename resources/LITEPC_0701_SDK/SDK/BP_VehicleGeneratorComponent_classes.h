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

// BlueprintGeneratedClass BP_VehicleGeneratorComponent.BP_VehicleGeneratorComponent_C
// 0x0010 (0x02E0 - 0x02D0)
class UBP_VehicleGeneratorComponent_C : public UVehicleGeneratorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UDataTable*                                  VehicleDataTable;                                         // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleGeneratorComponent.BP_VehicleGeneratorComponent_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void LoadVehicleGenerateTable();
	void OnGameModeEnterFlying();
	void ExecuteUbergraph_BP_VehicleGeneratorComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
