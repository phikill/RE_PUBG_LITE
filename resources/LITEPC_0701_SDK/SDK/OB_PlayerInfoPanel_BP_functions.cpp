
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

// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_KillNum
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOB_PlayerInfoPanel_BP_C::SetInfo_KillNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_KillNum");

	UOB_PlayerInfoPanel_BP_C_SetInfo_KillNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_Ammo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOB_PlayerInfoPanel_BP_C::SetInfo_Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_Ammo");

	UOB_PlayerInfoPanel_BP_C_SetInfo_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.OnOBPlayerBulletChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UOB_PlayerInfoPanel_BP_C::OnOBPlayerBulletChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.OnOBPlayerBulletChanged");

	UOB_PlayerInfoPanel_BP_C_OnOBPlayerBulletChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.OnOBPlayerWeaponChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UOB_PlayerInfoPanel_BP_C::OnOBPlayerWeaponChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.OnOBPlayerWeaponChanged");

	UOB_PlayerInfoPanel_BP_C_OnOBPlayerWeaponChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_Weapon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOB_PlayerInfoPanel_BP_C::SetInfo_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_Weapon");

	UOB_PlayerInfoPanel_BP_C_SetInfo_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_PlayerNameID
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOB_PlayerInfoPanel_BP_C::SetInfo_PlayerNameID()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_PlayerNameID");

	UOB_PlayerInfoPanel_BP_C_SetInfo_PlayerNameID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.OnOBPlayerItemChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UOB_PlayerInfoPanel_BP_C::OnOBPlayerItemChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.OnOBPlayerItemChanged");

	UOB_PlayerInfoPanel_BP_C_OnOBPlayerItemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_PlayerHPEnergy
// (Private, BlueprintCallable, BlueprintEvent)

void UOB_PlayerInfoPanel_BP_C::SetInfo_PlayerHPEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_PlayerHPEnergy");

	UOB_PlayerInfoPanel_BP_C_SetInfo_PlayerHPEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetArmorHelmetHP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBattleItemAdditionalData> AdditionData                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UProgressBar*            TargetPB                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_PlayerInfoPanel_BP_C::SetArmorHelmetHP(int ItemID, class UProgressBar* TargetPB, TArray<struct FBattleItemAdditionalData>* AdditionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetArmorHelmetHP");

	UOB_PlayerInfoPanel_BP_C_SetArmorHelmetHP_Params params;
	params.ItemID = ItemID;
	params.TargetPB = TargetPB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdditionData != nullptr)
		*AdditionData = params.AdditionData;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetLvByID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  TargetImg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_PlayerInfoPanel_BP_C::SetLvByID(class UImage* TargetImg, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetLvByID");

	UOB_PlayerInfoPanel_BP_C_SetLvByID_Params params;
	params.TargetImg = TargetImg;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetImgByIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  TargetImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PathString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOB_PlayerInfoPanel_BP_C::SetImgByIcon(class UImage* TargetImage, const struct FString& PathString)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetImgByIcon");

	UOB_PlayerInfoPanel_BP_C_SetImgByIcon_Params params;
	params.TargetImage = TargetImage;
	params.PathString = PathString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_BackpackHelmetArmor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOB_PlayerInfoPanel_BP_C::SetInfo_BackpackHelmetArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_BackpackHelmetArmor");

	UOB_PlayerInfoPanel_BP_C_SetInfo_BackpackHelmetArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_HealingNum
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOB_PlayerInfoPanel_BP_C::SetInfo_HealingNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.SetInfo_HealingNum");

	UOB_PlayerInfoPanel_BP_C_SetInfo_HealingNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.ShowPlayerInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FObservedData           PlayerData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class APawn*                   OBPlayerPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_PlayerInfoPanel_BP_C::ShowPlayerInfo(const struct FObservedData& PlayerData, class APawn* OBPlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerInfoPanel_BP.OB_PlayerInfoPanel_BP_C.ShowPlayerInfo");

	UOB_PlayerInfoPanel_BP_C_ShowPlayerInfo_Params params;
	params.PlayerData = PlayerData;
	params.OBPlayerPawn = OBPlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
