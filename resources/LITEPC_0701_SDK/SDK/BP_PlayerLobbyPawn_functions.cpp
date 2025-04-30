
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

// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetWeaponSkin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetWeaponSkin(int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetWeaponSkin");

	ABP_PlayerLobbyPawn_C_SetWeaponSkin_Params params;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SpawnWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SpawnWeapon(int WeaponId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SpawnWeapon");

	ABP_PlayerLobbyPawn_C_SpawnWeapon_Params params;
	params.WeaponId = WeaponId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.WeaponAttachComponent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::WeaponAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.WeaponAttachComponent");

	ABP_PlayerLobbyPawn_C_WeaponAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Set Anim Pose
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::Set_Anim_Pose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.Set Anim Pose");

	ABP_PlayerLobbyPawn_C_Set_Anim_Pose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBattleItemFromResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackAvatarHandle*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackAvatarHandle* ABP_PlayerLobbyPawn_C::GetBattleItemFromResID(int RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBattleItemFromResID");

	ABP_PlayerLobbyPawn_C_GetBattleItemFromResID_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBPID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::GetBPID(int RowName, int* BPID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetBPID");

	ABP_PlayerLobbyPawn_C_GetBPID_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPID != nullptr)
		*BPID = params.BPID;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetHiddenFlags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EAvatarSlotType>        hiddenFlags                    (Parm, OutParm, ZeroConstructor)

void ABP_PlayerLobbyPawn_C::GetHiddenFlags(int resID, TArray<EAvatarSlotType>* hiddenFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.GetHiddenFlags");

	ABP_PlayerLobbyPawn_C_GetHiddenFlags_Params params;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hiddenFlags != nullptr)
		*hiddenFlags = params.hiddenFlags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UserConstructionScript");

	ABP_PlayerLobbyPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetReady
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bReady                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetReady(bool* bReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetReady");

	ABP_PlayerLobbyPawn_C_SetReady_Params params;
	params.bReady = bReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetHost
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bHost                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetHost(bool* bHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetHost");

	ABP_PlayerLobbyPawn_C_SetHost_Params params;
	params.bHost = bHost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ShowHUD
// (Event, Public, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::ShowHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ShowHUD");

	ABP_PlayerLobbyPawn_C_ShowHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideHUD
// (Event, Public, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::HideHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideHUD");

	ABP_PlayerLobbyPawn_C_HideHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ReceiveBeginPlay");

	ABP_PlayerLobbyPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateEquipedWeapon
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::UpdateEquipedWeapon(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.UpdateEquipedWeapon");

	ABP_PlayerLobbyPawn_C_UpdateEquipedWeapon_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.DestroyLobbyWeapon
// (Event, Public, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::DestroyLobbyWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.DestroyLobbyWeapon");

	ABP_PlayerLobbyPawn_C_DestroyLobbyWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ResetAnimPose
// (Event, Public, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::ResetAnimPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ResetAnimPose");

	ABP_PlayerLobbyPawn_C_ResetAnimPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideEquippedWeapon
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          InVal                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::HideEquippedWeapon(bool* InVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.HideEquippedWeapon");

	ABP_PlayerLobbyPawn_C_HideEquippedWeapon_Params params;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetNickName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                NewNickName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PlayerLobbyPawn_C::SetNickName(struct FString* NewNickName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetNickName");

	ABP_PlayerLobbyPawn_C_SetNickName_Params params;
	params.NewNickName = NewNickName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetRankEmblem
// (Event, Public, BlueprintEvent)
// Parameters:
// ERatingRankType*               NewRankType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetRankEmblem(ERatingRankType* NewRankType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetRankEmblem");

	ABP_PlayerLobbyPawn_C_SetRankEmblem_Params params;
	params.NewRankType = NewRankType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetLogout
// (Event, Public, BlueprintEvent)

void ABP_PlayerLobbyPawn_C::SetLogout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetLogout");

	ABP_PlayerLobbyPawn_C_SetLogout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::SetState(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.SetState");

	ABP_PlayerLobbyPawn_C_SetState_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ExecuteUbergraph_BP_PlayerLobbyPawn
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerLobbyPawn_C::ExecuteUbergraph_BP_PlayerLobbyPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyPawn.BP_PlayerLobbyPawn_C.ExecuteUbergraph_BP_PlayerLobbyPawn");

	ABP_PlayerLobbyPawn_C_ExecuteUbergraph_BP_PlayerLobbyPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
