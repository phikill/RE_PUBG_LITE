
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

// Function Vault_Controller.Vault_Controller_C.CanCancleVault
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CanCancleVault(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CanCancleVault");

	UVault_Controller_C_CanCancleVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.OnRep_NowDrawDebugType
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::OnRep_NowDrawDebugType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.OnRep_NowDrawDebugType");

	UVault_Controller_C_OnRep_NowDrawDebugType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.CheckVaultPath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OppSiteHitLocation             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                StartPlayerRotation            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVaultData              VaultData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckVaultPath(float Height, const struct FVector& OppSiteHitLocation, const struct FVector& StartLocation, const struct FRotator& StartPlayerRotation, const struct FVaultData& VaultData, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckVaultPath");

	UVault_Controller_C_CheckVaultPath_Params params;
	params.Height = Height;
	params.OppSiteHitLocation = OppSiteHitLocation;
	params.StartLocation = StartLocation;
	params.StartPlayerRotation = StartPlayerRotation;
	params.VaultData = VaultData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.StartSmoothLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 MoveLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultLocation                 (Parm, OutParm, IsPlainOldData)

void UVault_Controller_C::StartSmoothLocation(const struct FVector& PlayerLocation, const struct FVector& StartLocation, const struct FVector& MoveLocation, float Time, struct FVector* ResultLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.StartSmoothLocation");

	UVault_Controller_C_StartSmoothLocation_Params params;
	params.PlayerLocation = PlayerLocation;
	params.StartLocation = StartLocation;
	params.MoveLocation = MoveLocation;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultLocation != nullptr)
		*ResultLocation = params.ResultLocation;
}


// Function Vault_Controller.Vault_Controller_C.CheckFloor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckFloor(const struct FVector& Location, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckFloor");

	UVault_Controller_C_CheckFloor_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.DealBrokenWindows
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::DealBrokenWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.DealBrokenWindows");

	UVault_Controller_C_DealBrokenWindows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.VaultFromCPP
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVault_Controller_C::VaultFromCPP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.VaultFromCPP");

	UVault_Controller_C_VaultFromCPP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vault_Controller.Vault_Controller_C.CheckVaultWindows
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CheckStart                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CheckEnd                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVault_Controller_C::CheckVaultWindows(const struct FVector& CheckStart, const struct FVector& CheckEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckVaultWindows");

	UVault_Controller_C_CheckVaultWindows_Params params;
	params.CheckStart = CheckStart;
	params.CheckEnd = CheckEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.EnableCulling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::EnableCulling(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.EnableCulling");

	UVault_Controller_C_EnableCulling_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.GetCliblastCheckDis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetCliblastCheckDis(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetCliblastCheckDis");

	UVault_Controller_C_GetCliblastCheckDis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.NowStateCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Sprint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Walk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Stand                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::NowStateCheck(bool Sprint, bool Walk, bool Stand, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.NowStateCheck");

	UVault_Controller_C_NowStateCheck_Params params;
	params.Sprint = Sprint;
	params.Walk = Walk;
	params.Stand = Stand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.CheckNowisJumpAnimation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          thcikLength                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsJump                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ishasAnimation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckNowisJumpAnimation(float dis, float Height, float thcikLength, bool* IsJump, bool* ishasAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckNowisJumpAnimation");

	UVault_Controller_C_CheckNowisJumpAnimation_Params params;
	params.dis = dis;
	params.Height = Height;
	params.thcikLength = thcikLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsJump != nullptr)
		*IsJump = params.IsJump;
	if (ishasAnimation != nullptr)
		*ishasAnimation = params.ishasAnimation;
}


// Function Vault_Controller.Vault_Controller_C.CheckIsValidByHeightCheckDis
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          nowheight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          checkDis                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isVaild                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckIsValidByHeightCheckDis(float nowheight, float checkDis, bool* isVaild)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckIsValidByHeightCheckDis");

	UVault_Controller_C_CheckIsValidByHeightCheckDis_Params params;
	params.nowheight = nowheight;
	params.checkDis = checkDis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isVaild != nullptr)
		*isVaild = params.isVaild;
}


// Function Vault_Controller.Vault_Controller_C.IsValidVault
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::IsValidVault(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.IsValidVault");

	UVault_Controller_C_IsValidVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Vault_Controller.Vault_Controller_C.GetTestObjectChannels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TEnumAsByte<EObjectTypeQuery>> Channels                       (Parm, OutParm, ZeroConstructor)

void UVault_Controller_C::GetTestObjectChannels(TArray<TEnumAsByte<EObjectTypeQuery>>* Channels)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetTestObjectChannels");

	UVault_Controller_C_GetTestObjectChannels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Channels != nullptr)
		*Channels = params.Channels;
}


// Function Vault_Controller.Vault_Controller_C.UpdateMontageSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::UpdateMontageSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.UpdateMontageSpeed");

	UVault_Controller_C_UpdateMontageSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.ServerCheckBlockDis
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 hitpoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::ServerCheckBlockDis(const struct FVector& hitpoint, const struct FString& Key, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ServerCheckBlockDis");

	UVault_Controller_C_ServerCheckBlockDis_Params params;
	params.hitpoint = hitpoint;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.GetNowOppSideDis
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetNowOppSideDis(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetNowOppSideDis");

	UVault_Controller_C_GetNowOppSideDis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.CheckUpLengthBlock
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckUpLengthBlock(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckUpLengthBlock");

	UVault_Controller_C_CheckUpLengthBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisOffsset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetCrossMaxBlockDisOffsset(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisOffsset");

	UVault_Controller_C_GetCrossMaxBlockDisOffsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.SetLimitPostion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          XValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ZVaule                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::SetLimitPostion(float XValue, float ZVaule)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetLimitPostion");

	UVault_Controller_C_SetLimitPostion_Params params;
	params.XValue = XValue;
	params.ZVaule = ZVaule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.CheckForward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckForward(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckForward");

	UVault_Controller_C_CheckForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function Vault_Controller.Vault_Controller_C.CheckHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, OutParm, IsPlainOldData)

void UVault_Controller_C::CheckHeight(float Height, bool* IsActive, struct FVector* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckHeight");

	UVault_Controller_C_CheckHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
	if (Point != nullptr)
		*Point = params.Point;
}


// Function Vault_Controller.Vault_Controller_C.printReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UVault_Controller_C::printReason(const struct FString& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.printReason");

	UVault_Controller_C_printReason_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.PrintEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::PrintEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.PrintEnable");

	UVault_Controller_C_PrintEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.TestHasFourteenwindowTag
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      acorList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::TestHasFourteenwindowTag(TArray<struct FHitResult>* acorList, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.TestHasFourteenwindowTag");

	UVault_Controller_C_TestHasFourteenwindowTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (acorList != nullptr)
		*acorList = params.acorList;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.CacultLimitData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::CacultLimitData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CacultLimitData");

	UVault_Controller_C_CacultLimitData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisForward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetCrossMaxBlockDisForward(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetCrossMaxBlockDisForward");

	UVault_Controller_C_GetCrossMaxBlockDisForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.GetPlayerStartZ
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetPlayerStartZ(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetPlayerStartZ");

	UVault_Controller_C_GetPlayerStartZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.GetCrossBlockMaxFallingHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::GetCrossBlockMaxFallingHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetCrossBlockMaxFallingHeight");

	UVault_Controller_C_GetCrossBlockMaxFallingHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.ForwardTestObjectType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::ForwardTestObjectType(class AActor* Actor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ForwardTestObjectType");

	UVault_Controller_C_ForwardTestObjectType_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Vault_Controller.Vault_Controller_C.SetEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::SetEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetEnd");

	UVault_Controller_C_SetEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.SetVaultData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VaultKey                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 startPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossmaxFalling                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossmaxDis                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 hitpoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                MoveDir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ArrivalHeight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::SetVaultData(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& startPos, class AActor* checkActor, float crossmaxFalling, float crossmaxDis, const struct FVector& hitpoint, const struct FRotator& MoveDir, float ArrivalHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.SetVaultData");

	UVault_Controller_C_SetVaultData_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.startPos = startPos;
	params.checkActor = checkActor;
	params.crossmaxFalling = crossmaxFalling;
	params.crossmaxDis = crossmaxDis;
	params.hitpoint = hitpoint;
	params.MoveDir = MoveDir;
	params.ArrivalHeight = ArrivalHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.UpdatePostion2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::UpdatePostion2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.UpdatePostion2");

	UVault_Controller_C_UpdatePostion2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.GetNowData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsGet                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::GetNowData(bool* IsGet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.GetNowData");

	UVault_Controller_C_GetNowData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGet != nullptr)
		*IsGet = params.IsGet;
}


// Function Vault_Controller.Vault_Controller_C.CheckCanVault
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::CheckCanVault(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.CheckCanVault");

	UVault_Controller_C_CheckCanVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function Vault_Controller.Vault_Controller_C.OnNotifyEnd_7D71C17943B655B8C686998C00A928EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::OnNotifyEnd_7D71C17943B655B8C686998C00A928EE(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.OnNotifyEnd_7D71C17943B655B8C686998C00A928EE");

	UVault_Controller_C_OnNotifyEnd_7D71C17943B655B8C686998C00A928EE_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.OnNotifyBegin_7D71C17943B655B8C686998C00A928EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::OnNotifyBegin_7D71C17943B655B8C686998C00A928EE(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.OnNotifyBegin_7D71C17943B655B8C686998C00A928EE");

	UVault_Controller_C_OnNotifyBegin_7D71C17943B655B8C686998C00A928EE_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.OnInterrupted_7D71C17943B655B8C686998C00A928EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::OnInterrupted_7D71C17943B655B8C686998C00A928EE(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.OnInterrupted_7D71C17943B655B8C686998C00A928EE");

	UVault_Controller_C_OnInterrupted_7D71C17943B655B8C686998C00A928EE_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.OnBlendOut_7D71C17943B655B8C686998C00A928EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::OnBlendOut_7D71C17943B655B8C686998C00A928EE(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.OnBlendOut_7D71C17943B655B8C686998C00A928EE");

	UVault_Controller_C_OnBlendOut_7D71C17943B655B8C686998C00A928EE_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.OnCompleted_7D71C17943B655B8C686998C00A928EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::OnCompleted_7D71C17943B655B8C686998C00A928EE(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.OnCompleted_7D71C17943B655B8C686998C00A928EE");

	UVault_Controller_C_OnCompleted_7D71C17943B655B8C686998C00A928EE_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.StartVault
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::StartVault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.StartVault");

	UVault_Controller_C_StartVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UVault_Controller_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ReceiveBeginPlay");

	UVault_Controller_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.JumpVault
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::JumpVault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.JumpVault");

	UVault_Controller_C_JumpVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.VaultServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VaultKey                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 startPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossblockMaxFall              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossblockMaxDis               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 hitpoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  WindowActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                MoveDir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ArrivalHeight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::VaultServer(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& startPos, class AActor* checkActor, float crossblockMaxFall, float crossblockMaxDis, const struct FVector& hitpoint, class AActor* WindowActor, const struct FRotator& MoveDir, float ArrivalHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.VaultServer");

	UVault_Controller_C_VaultServer_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.startPos = startPos;
	params.checkActor = checkActor;
	params.crossblockMaxFall = crossblockMaxFall;
	params.crossblockMaxDis = crossblockMaxDis;
	params.hitpoint = hitpoint;
	params.WindowActor = WindowActor;
	params.MoveDir = MoveDir;
	params.ArrivalHeight = ArrivalHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.vaultAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          dis                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VaultKey                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 startPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  checkActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossmaxFalling                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          crossmaxDis                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 hitpoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                MoveDir                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ArrivalHeight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::vaultAll(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& startPos, class AActor* checkActor, float crossmaxFalling, float crossmaxDis, const struct FVector& hitpoint, const struct FRotator& MoveDir, float ArrivalHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.vaultAll");

	UVault_Controller_C_vaultAll_Params params;
	params.dis = dis;
	params.Height = Height;
	params.Length = Length;
	params.VaultKey = VaultKey;
	params.startPos = startPos;
	params.checkActor = checkActor;
	params.crossmaxFalling = crossmaxFalling;
	params.crossmaxDis = crossmaxDis;
	params.hitpoint = hitpoint;
	params.MoveDir = MoveDir;
	params.ArrivalHeight = ArrivalHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.jumpfromUI
// (BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::jumpfromUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.jumpfromUI");

	UVault_Controller_C_jumpfromUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.VaultFail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UVault_Controller_C::VaultFail(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.VaultFail");

	UVault_Controller_C_VaultFail_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.UpdateVault_BluePrint
// (Event, Public, BlueprintEvent)

void UVault_Controller_C::UpdateVault_BluePrint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.UpdateVault_BluePrint");

	UVault_Controller_C_UpdateVault_BluePrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.interrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::interrupted(EPawnState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.interrupted");

	UVault_Controller_C_interrupted_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.vaultLeave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPawnState                     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::vaultLeave(EPawnState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.vaultLeave");

	UVault_Controller_C_vaultLeave_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.ServerStartCancleVault
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::ServerStartCancleVault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ServerStartCancleVault");

	UVault_Controller_C_ServerStartCancleVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.StartCancleVault
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::StartCancleVault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.StartCancleVault");

	UVault_Controller_C_StartCancleVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.EndCancleVault
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UVault_Controller_C::EndCancleVault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.EndCancleVault");

	UVault_Controller_C_EndCancleVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vault_Controller.Vault_Controller_C.ExecuteUbergraph_Vault_Controller
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVault_Controller_C::ExecuteUbergraph_Vault_Controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vault_Controller.Vault_Controller_C.ExecuteUbergraph_Vault_Controller");

	UVault_Controller_C_ExecuteUbergraph_Vault_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
