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

// BlueprintGeneratedClass BackPackDragDropOpt_BP.BackPackDragDropOpt_BP_C
// 0x0099 (0x0121 - 0x0088)
class UBackPackDragDropOpt_BP_C : public UDragDropOperation
{
public:
	struct FBattleItemData                             ItemData;                                                 // 0x0088(0x0098) (Edit, BlueprintVisible)
	TEnumAsByte<EBackPackDragOrigin>                   ItemFrom;                                                 // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BackPackDragDropOpt_BP.BackPackDragDropOpt_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
