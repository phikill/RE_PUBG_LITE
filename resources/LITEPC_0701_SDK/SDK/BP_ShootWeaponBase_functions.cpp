
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

// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagIn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::OnWeaponMagIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagIn");

	ABP_ShootWeaponBase_C_OnWeaponMagIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagOut
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::OnWeaponMagOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.OnWeaponMagOut");

	ABP_ShootWeaponBase_C_OnWeaponMagOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BeginRegReloadEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::BeginRegReloadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BeginRegReloadEvent");

	ABP_ShootWeaponBase_C_BeginRegReloadEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_PawnAttachMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          PlayerMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ShootWeaponBase_C::BP_PawnAttachMesh(class UMeshComponent** PlayerMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_PawnAttachMesh");

	ABP_ShootWeaponBase_C_BP_PawnAttachMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerMesh != nullptr)
		*PlayerMesh = params.PlayerMesh;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::BP_OnWeaponReloadStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadStart");

	ABP_ShootWeaponBase_C_BP_OnWeaponReloadStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::BP_OnWeaponReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.BP_OnWeaponReloadEnd");

	ABP_ShootWeaponBase_C_BP_OnWeaponReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ResetCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ResetCamera");

	ABP_ShootWeaponBase_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.UserConstructionScript");

	ABP_ShootWeaponBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShootWeaponBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ReceiveBeginPlay");

	ABP_ShootWeaponBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.PlayLocalShellDropFX
// (Event, Public, BlueprintEvent)

void ABP_ShootWeaponBase_C::PlayLocalShellDropFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.PlayLocalShellDropFX");

	ABP_ShootWeaponBase_C_PlayLocalShellDropFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.HandleMagOnWeaponChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::HandleMagOnWeaponChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.HandleMagOnWeaponChanged");

	ABP_ShootWeaponBase_C_HandleMagOnWeaponChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.HandleEvent0
// (BlueprintCallable, BlueprintEvent)

void ABP_ShootWeaponBase_C::HandleEvent0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.HandleEvent0");

	ABP_ShootWeaponBase_C_HandleEvent0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ExecuteUbergraph_BP_ShootWeaponBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShootWeaponBase_C::ExecuteUbergraph_BP_ShootWeaponBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShootWeaponBase.BP_ShootWeaponBase_C.ExecuteUbergraph_BP_ShootWeaponBase");

	ABP_ShootWeaponBase_C_ExecuteUbergraph_BP_ShootWeaponBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
