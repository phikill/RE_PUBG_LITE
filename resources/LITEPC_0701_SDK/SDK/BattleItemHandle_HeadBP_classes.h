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

// BlueprintGeneratedClass BattleItemHandle_HeadBP.BattleItemHandle_HeadBP_C
// 0x0010 (0x04E0 - 0x04D0)
class UBattleItemHandle_HeadBP_C : public UBattleItemHandle_AvatarBP_C
{
public:
	TArray<int>                                        BodyResIDList;                                            // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_HeadBP.BattleItemHandle_HeadBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
