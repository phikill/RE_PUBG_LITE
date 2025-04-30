#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PickUpItemTips_BP.PickUpItemTips_BP_C.SetWeaponStatus
struct UPickUpItemTips_BP_C_SetWeaponStatus_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItemTips_BP.PickUpItemTips_BP_C.UpdateView
struct UPickUpItemTips_BP_C_UpdateView_Params
{
	struct FSlateBrush                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBP_STRUCT_Item_type                        ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ItemCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickUpItemTips_BP.PickUpItemTips_BP_C.UpdateData
struct UPickUpItemTips_BP_C_UpdateData_Params
{
	struct FSlateBrush                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ItemName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ItemDesc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ItemVolume;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
