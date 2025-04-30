
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

// Function BP_WeaponStudio.BP_WeaponStudio_C.ShowWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponStudio_C::ShowWeapon(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponStudio.BP_WeaponStudio_C.ShowWeapon");

	ABP_WeaponStudio_C_ShowWeapon_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponStudio.BP_WeaponStudio_C.SetWeaponAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponAvatarID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponStudio_C::SetWeaponAvatar(class UMeshComponent* Target, int WeaponAvatarID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponStudio.BP_WeaponStudio_C.SetWeaponAvatar");

	ABP_WeaponStudio_C_SetWeaponAvatar_Params params;
	params.Target = Target;
	params.WeaponAvatarID = WeaponAvatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponStudio.BP_WeaponStudio_C.InitAttachmentMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponStudio_C::InitAttachmentMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponStudio.BP_WeaponStudio_C.InitAttachmentMesh");

	ABP_WeaponStudio_C_InitAttachmentMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponStudio.BP_WeaponStudio_C.IsEqualWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEqual                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponStudio_C::IsEqualWeapon(class ASTExtraWeapon* Weapon, bool* IsEqual)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponStudio.BP_WeaponStudio_C.IsEqualWeapon");

	ABP_WeaponStudio_C_IsEqualWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEqual != nullptr)
		*IsEqual = params.IsEqual;
}


// Function BP_WeaponStudio.BP_WeaponStudio_C.IsFindScopeSocket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFind                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponStudio_C::IsFindScopeSocket(const struct FName& SocketName, bool* IsFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponStudio.BP_WeaponStudio_C.IsFindScopeSocket");

	ABP_WeaponStudio_C_IsFindScopeSocket_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFind != nullptr)
		*IsFind = params.IsFind;
}


// Function BP_WeaponStudio.BP_WeaponStudio_C.UpdateAttachmentMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponStudio_C::UpdateAttachmentMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponStudio.BP_WeaponStudio_C.UpdateAttachmentMesh");

	ABP_WeaponStudio_C_UpdateAttachmentMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponStudio.BP_WeaponStudio_C.OnLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponStudio_C::OnLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponStudio.BP_WeaponStudio_C.OnLoaded");

	ABP_WeaponStudio_C_OnLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponStudio.BP_WeaponStudio_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponStudio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponStudio.BP_WeaponStudio_C.UserConstructionScript");

	ABP_WeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponStudio.BP_WeaponStudio_C.SetItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon**         Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponStudio_C::SetItem(class ASTExtraWeapon** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponStudio.BP_WeaponStudio_C.SetItem");

	ABP_WeaponStudio_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponStudio.BP_WeaponStudio_C.ExecuteUbergraph_BP_WeaponStudio
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponStudio_C::ExecuteUbergraph_BP_WeaponStudio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponStudio.BP_WeaponStudio_C.ExecuteUbergraph_BP_WeaponStudio");

	ABP_WeaponStudio_C_ExecuteUbergraph_BP_WeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
