
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

// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.ShowWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GrenadeWeaponStudio_C::ShowWeapon(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.ShowWeapon");

	ABP_GrenadeWeaponStudio_C_ShowWeapon_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.SetGrenadeItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGrenadeType>      grenadeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GrenadeWeaponStudio_C::SetGrenadeItem(TEnumAsByte<EGrenadeType> grenadeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.SetGrenadeItem");

	ABP_GrenadeWeaponStudio_C_SetGrenadeItem_Params params;
	params.grenadeType = grenadeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.OnLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GrenadeWeaponStudio_C::OnLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.OnLoaded");

	ABP_GrenadeWeaponStudio_C_OnLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GrenadeWeaponStudio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.UserConstructionScript");

	ABP_GrenadeWeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.SetItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon**         Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GrenadeWeaponStudio_C::SetItem(class ASTExtraWeapon** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.SetItem");

	ABP_GrenadeWeaponStudio_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.ExecuteUbergraph_BP_GrenadeWeaponStudio
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GrenadeWeaponStudio_C::ExecuteUbergraph_BP_GrenadeWeaponStudio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeaponStudio.BP_GrenadeWeaponStudio_C.ExecuteUbergraph_BP_GrenadeWeaponStudio");

	ABP_GrenadeWeaponStudio_C_ExecuteUbergraph_BP_GrenadeWeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
