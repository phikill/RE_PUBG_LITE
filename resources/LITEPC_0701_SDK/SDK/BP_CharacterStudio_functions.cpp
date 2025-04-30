
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

// Function BP_CharacterStudio.BP_CharacterStudio_C.ChangeWeaponAttachment
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CharacterStudio_C::ChangeWeaponAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.ChangeWeaponAttachment");

	ABP_CharacterStudio_C_ChangeWeaponAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.ShowCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterStudio_C::ShowCharacter(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.ShowCharacter");

	ABP_CharacterStudio_C_ShowCharacter_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.GetTPPWeaponSocketName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   WeaponSocketName               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterStudio_C::GetTPPWeaponSocketName(const struct FName& SocketName, struct FName* WeaponSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.GetTPPWeaponSocketName");

	ABP_CharacterStudio_C_GetTPPWeaponSocketName_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponSocketName != nullptr)
		*WeaponSocketName = params.WeaponSocketName;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.SetAnimPose
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CharacterStudio_C::SetAnimPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.SetAnimPose");

	ABP_CharacterStudio_C_SetAnimPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.PutOnWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CharacterStudio_C::PutOnWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.PutOnWeapon");

	ABP_CharacterStudio_C_PutOnWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.CreateWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurviveWeaponPropSlot         WeaponSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraWeapon*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterStudio_C::CreateWeapon(ESurviveWeaponPropSlot WeaponSlot, class ASTExtraWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.CreateWeapon");

	ABP_CharacterStudio_C_CreateWeapon_Params params;
	params.WeaponSlot = WeaponSlot;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.PutOffWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CharacterStudio_C::PutOffWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.PutOffWeapon");

	ABP_CharacterStudio_C_PutOffWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.PutOffCharacterMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterStudio_C::PutOffCharacterMesh(int resID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.PutOffCharacterMesh");

	ABP_CharacterStudio_C_PutOffCharacterMesh_Params params;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.SetWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CharacterStudio_C::SetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.SetWeapon");

	ABP_CharacterStudio_C_SetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.InitCharacterState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterStudio_C::InitCharacterState(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.InitCharacterState");

	ABP_CharacterStudio_C_InitCharacterState_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.PutOnCharacterMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterStudio_C::PutOnCharacterMesh(int resID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.PutOnCharacterMesh");

	ABP_CharacterStudio_C_PutOnCharacterMesh_Params params;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CharacterStudio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.UserConstructionScript");

	ABP_CharacterStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CharacterStudio_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.ReceiveBeginPlay");

	ABP_CharacterStudio_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterStudio_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.ReceiveTick");

	ABP_CharacterStudio_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterStudio.BP_CharacterStudio_C.ExecuteUbergraph_BP_CharacterStudio
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CharacterStudio_C::ExecuteUbergraph_BP_CharacterStudio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStudio.BP_CharacterStudio_C.ExecuteUbergraph_BP_CharacterStudio");

	ABP_CharacterStudio_C_ExecuteUbergraph_BP_CharacterStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
