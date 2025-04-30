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

// BlueprintGeneratedClass GroundDragDropOpt_BP.GroundDragDropOpt_BP_C
// 0x0041 (0x00C9 - 0x0088)
class UGroundDragDropOpt_BP_C : public UDragDropOperation
{
public:
	struct FSearchedPickUpItemResult                   ItemData;                                                 // 0x0088(0x0040) (Edit, BlueprintVisible)
	TEnumAsByte<EBackPackDragOrigin>                   ItemFrom;                                                 // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GroundDragDropOpt_BP.GroundDragDropOpt_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
