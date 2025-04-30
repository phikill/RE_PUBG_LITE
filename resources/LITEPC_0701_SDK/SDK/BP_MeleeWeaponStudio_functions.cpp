
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

// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.SetWeaponAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponAvatarID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MeleeWeaponStudio_C::SetWeaponAvatar(class UMeshComponent* Target, int WeaponAvatarID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.SetWeaponAvatar");

	ABP_MeleeWeaponStudio_C_SetWeaponAvatar_Params params;
	params.Target = Target;
	params.WeaponAvatarID = WeaponAvatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.ShowWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MeleeWeaponStudio_C::ShowWeapon(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.ShowWeapon");

	ABP_MeleeWeaponStudio_C_ShowWeapon_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.OnLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MeleeWeaponStudio_C::OnLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.OnLoaded");

	ABP_MeleeWeaponStudio_C_OnLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MeleeWeaponStudio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.UserConstructionScript");

	ABP_MeleeWeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.SetItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon**         Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MeleeWeaponStudio_C::SetItem(class ASTExtraWeapon** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.SetItem");

	ABP_MeleeWeaponStudio_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.ExecuteUbergraph_BP_MeleeWeaponStudio
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MeleeWeaponStudio_C::ExecuteUbergraph_BP_MeleeWeaponStudio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeleeWeaponStudio.BP_MeleeWeaponStudio_C.ExecuteUbergraph_BP_MeleeWeaponStudio");

	ABP_MeleeWeaponStudio_C_ExecuteUbergraph_BP_MeleeWeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
