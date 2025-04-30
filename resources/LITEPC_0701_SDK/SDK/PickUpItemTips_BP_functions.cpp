
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PickUpItemTips_BP.PickUpItemTips_BP_C.SetWeaponStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItemTips_BP_C::SetWeaponStatus(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItemTips_BP.PickUpItemTips_BP_C.SetWeaponStatus");

	UPickUpItemTips_BP_C_SetWeaponStatus_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItemTips_BP.PickUpItemTips_BP_C.UpdateView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Image                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBP_STRUCT_Item_type    ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            ItemCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItemTips_BP_C::UpdateView(const struct FSlateBrush& Image, const struct FBP_STRUCT_Item_type& ItemData, int ItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItemTips_BP.PickUpItemTips_BP_C.UpdateView");

	UPickUpItemTips_BP_C_UpdateView_Params params;
	params.Image = Image;
	params.ItemData = ItemData;
	params.ItemCount = ItemCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickUpItemTips_BP.PickUpItemTips_BP_C.UpdateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Image                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ItemDesc                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ItemVolume                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickUpItemTips_BP_C::UpdateData(const struct FSlateBrush& Image, const struct FString& ItemName, const struct FString& ItemDesc, int ItemCount, float ItemVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickUpItemTips_BP.PickUpItemTips_BP_C.UpdateData");

	UPickUpItemTips_BP_C_UpdateData_Params params;
	params.Image = Image;
	params.ItemName = ItemName;
	params.ItemDesc = ItemDesc;
	params.ItemCount = ItemCount;
	params.ItemVolume = ItemVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
