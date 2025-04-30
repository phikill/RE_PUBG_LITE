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

// BlueprintGeneratedClass PickUp_BP_Ghillie_2.PickUp_BP_Ghillie_1_C
// 0x0008 (0x0410 - 0x0408)
class APickUp_BP_Ghillie_1_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        Bag_03_icon;                                              // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PickUp_BP_Ghillie_2.PickUp_BP_Ghillie_1_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
