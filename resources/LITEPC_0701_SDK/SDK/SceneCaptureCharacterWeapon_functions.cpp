
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

// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.SetWeaponAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponAvatarID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASceneCaptureCharacterWeapon_C::SetWeaponAvatar(class UMeshComponent* Target, int WeaponAvatarID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.SetWeaponAvatar");

	ASceneCaptureCharacterWeapon_C_SetWeaponAvatar_Params params;
	params.Target = Target;
	params.WeaponAvatarID = WeaponAvatarID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.SetMeleeWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASceneCaptureCharacterWeapon_C::SetMeleeWeapon(class ASTExtraWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.SetMeleeWeapon");

	ASceneCaptureCharacterWeapon_C_SetMeleeWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.IsFindScopeSocket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFind                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASceneCaptureCharacterWeapon_C::IsFindScopeSocket(const struct FName& SocketName, bool* IsFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.IsFindScopeSocket");

	ASceneCaptureCharacterWeapon_C_IsFindScopeSocket_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFind != nullptr)
		*IsFind = params.IsFind;
}


// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.UpdateAttachmentMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASceneCaptureCharacterWeapon_C::UpdateAttachmentMesh(class ASTExtraWeapon* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.UpdateAttachmentMesh");

	ASceneCaptureCharacterWeapon_C_UpdateAttachmentMesh_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.SetShootWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASceneCaptureCharacterWeapon_C::SetShootWeapon(class ASTExtraWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.SetShootWeapon");

	ASceneCaptureCharacterWeapon_C_SetShootWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASceneCaptureCharacterWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneCaptureCharacterWeapon.SceneCaptureCharacterWeapon_C.UserConstructionScript");

	ASceneCaptureCharacterWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
