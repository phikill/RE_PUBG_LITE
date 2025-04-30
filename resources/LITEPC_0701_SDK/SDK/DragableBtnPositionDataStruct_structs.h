#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DragableBtnPositionDataStruct.DragableBtnPositionDataStruct
// 0x000C
struct FDragableBtnPositionDataStruct
{
	TEnumAsByte<EDragableBtnTypes>                     BtnType_2_3CF15A1A4EF316763AD3D69A1131AC62;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   ViewportPosition_15_017FFB6647B7B37B41BFF3AA624F87F5;     // 0x0004(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
