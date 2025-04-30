
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

// Function KillInfoItem_BP.KillInfoItem_BP_C.RefreshWeaponIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillInfoItem_BP_C::RefreshWeaponIcon(class UObject* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillInfoItem_BP.KillInfoItem_BP_C.RefreshWeaponIcon");

	UKillInfoItem_BP_C_RefreshWeaponIcon_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillInfoItem_BP.KillInfoItem_BP_C.GetIsDeadIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHeadshot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealthStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillInfoItem_BP_C::GetIsDeadIcon(bool IsHeadshot, int HealthStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillInfoItem_BP.KillInfoItem_BP_C.GetIsDeadIcon");

	UKillInfoItem_BP_C_GetIsDeadIcon_Params params;
	params.IsHeadshot = IsHeadshot;
	params.HealthStatus = HealthStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillInfoItem_BP.KillInfoItem_BP_C.GetIconByItemID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKillInfoItem_BP_C::GetIconByItemID(int inInt, bool* HasFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillInfoItem_BP.KillInfoItem_BP_C.GetIconByItemID");

	UKillInfoItem_BP_C_GetIconByItemID_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasFound != nullptr)
		*HasFound = params.HasFound;
}


// Function KillInfoItem_BP.KillInfoItem_BP_C.GetWeapIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AdditionalParam                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PreviousHealthStatus           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              AsTexture_2D                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKillInfoItem_BP_C::GetWeapIcon(int DamageType, int AdditionalParam, int PreviousHealthStatus, class UTexture2D** AsTexture_2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillInfoItem_BP.KillInfoItem_BP_C.GetWeapIcon");

	UKillInfoItem_BP_C_GetWeapIcon_Params params;
	params.DamageType = DamageType;
	params.AdditionalParam = AdditionalParam;
	params.PreviousHealthStatus = PreviousHealthStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsTexture_2D != nullptr)
		*AsTexture_2D = params.AsTexture_2D;
}


// Function KillInfoItem_BP.KillInfoItem_BP_C.FileItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientFatalDamageRecordData NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UKillInfoItem_BP_C::FileItem(const struct FClientFatalDamageRecordData& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillInfoItem_BP.KillInfoItem_BP_C.FileItem");

	UKillInfoItem_BP_C_FileItem_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillInfoItem_BP.KillInfoItem_BP_C.SwitchToMode2
// (BlueprintCallable, BlueprintEvent)

void UKillInfoItem_BP_C::SwitchToMode2()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillInfoItem_BP.KillInfoItem_BP_C.SwitchToMode2");

	UKillInfoItem_BP_C_SwitchToMode2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillInfoItem_BP.KillInfoItem_BP_C.EventBeginAnim
// (BlueprintCallable, BlueprintEvent)

void UKillInfoItem_BP_C::EventBeginAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillInfoItem_BP.KillInfoItem_BP_C.EventBeginAnim");

	UKillInfoItem_BP_C_EventBeginAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillInfoItem_BP.KillInfoItem_BP_C.ExecuteUbergraph_KillInfoItem_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillInfoItem_BP_C::ExecuteUbergraph_KillInfoItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillInfoItem_BP.KillInfoItem_BP_C.ExecuteUbergraph_KillInfoItem_BP");

	UKillInfoItem_BP_C_ExecuteUbergraph_KillInfoItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
