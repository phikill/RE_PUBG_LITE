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

// BlueprintGeneratedClass BattleItemHandle_MeleeWeapon.BattleItemHandle_MeleeWeapon_C
// 0x0000 (0x01A0 - 0x01A0)
class UBattleItemHandle_MeleeWeapon_C : public UBattleItemHandle_Pistol_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_MeleeWeapon.BattleItemHandle_MeleeWeapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
