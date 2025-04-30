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

// BlueprintGeneratedClass BP_WarGameMode.BP_WarGameMode_C
// 0x0038 (0x1418 - 0x13E0)
class ABP_WarGameMode_C : public AWarGameMode
{
public:
	class UCircleMgrComponent*                         CircleMgr;                                                // 0x13E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_WeatherGeneratorComponent_C*             BP_WeatherGeneratorComponent;                             // 0x13E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_VehicleGeneratorComponent_C*             BP_VehicleGeneratorComponent;                             // 0x13F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_ItemGeneratorComponent_C*                BP_ItemGeneratorComponent;                                // 0x13F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAirAttackComponent*                         AirAttack;                                                // 0x1400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAirDropComponent*                           AirDrop;                                                  // 0x1408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x1410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WarGameMode.BP_WarGameMode_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
