
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

// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.AddToWeaponAttachPos
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            attachID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EWeaponAttachmentSocketType    socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackPickUpPanel_BP_C::AddToWeaponAttachPos(EWeaponAttachmentSocketType socket, int* attachID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.AddToWeaponAttachPos");

	UBackPackPickUpPanel_BP_C_AddToWeaponAttachPos_Params params;
	params.socket = socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (attachID != nullptr)
		*attachID = params.attachID;
}


// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.IsGunSupportAttachByRes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            gunResID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            attachresID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           support                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackPickUpPanel_BP_C::IsGunSupportAttachByRes(int gunResID, int attachresID, bool* support)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.IsGunSupportAttachByRes");

	UBackPackPickUpPanel_BP_C_IsGunSupportAttachByRes_Params params;
	params.gunResID = gunResID;
	params.attachresID = attachresID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (support != nullptr)
		*support = params.support;
}


// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.IsGunSupportAttachByDefine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           gunDefine                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemDefineID           attachDefine                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           support                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackPickUpPanel_BP_C::IsGunSupportAttachByDefine(const struct FItemDefineID& gunDefine, const struct FItemDefineID& attachDefine, bool* support)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.IsGunSupportAttachByDefine");

	UBackPackPickUpPanel_BP_C_IsGunSupportAttachByDefine_Params params;
	params.gunDefine = gunDefine;
	params.attachDefine = attachDefine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (support != nullptr)
		*support = params.support;
}


// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponSupportSocket
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EWeaponAttachmentSocketType> socketList                     (Parm, OutParm, ZeroConstructor)

void UBackPackPickUpPanel_BP_C::GetWeaponSupportSocket(int WeaponId, TArray<EWeaponAttachmentSocketType>* socketList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponSupportSocket");

	UBackPackPickUpPanel_BP_C_GetWeaponSupportSocket_Params params;
	params.WeaponId = WeaponId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (socketList != nullptr)
		*socketList = params.socketList;
}


// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponSupportAttachResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    attachID                       (Parm, OutParm, ZeroConstructor)

void UBackPackPickUpPanel_BP_C::GetWeaponSupportAttachResID(int WeaponId, TArray<int>* attachID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponSupportAttachResID");

	UBackPackPickUpPanel_BP_C_GetWeaponSupportAttachResID_Params params;
	params.WeaponId = WeaponId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (attachID != nullptr)
		*attachID = params.attachID;
}


// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponAttachPosByResID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponAttachmentSocketType    socket                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackPickUpPanel_BP_C::GetWeaponAttachPosByResID(int resID, EWeaponAttachmentSocketType* socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.GetWeaponAttachPosByResID");

	UBackPackPickUpPanel_BP_C_GetWeaponAttachPosByResID_Params params;
	params.resID = resID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (socket != nullptr)
		*socket = params.socket;
}


// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.HideBackpackPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UBackPackPickUpPanel_BP_C::HideBackpackPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.HideBackpackPanel");

	UBackPackPickUpPanel_BP_C_HideBackpackPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.OnCloseBackPack
// (BlueprintCallable, BlueprintEvent)

void UBackPackPickUpPanel_BP_C::OnCloseBackPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.OnCloseBackPack");

	UBackPackPickUpPanel_BP_C_OnCloseBackPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UBackPackPickUpPanel_BP_C::ReceivedInitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.ReceivedInitWidget");

	UBackPackPickUpPanel_BP_C_ReceivedInitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackPickUpPanel_BP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.Tick");

	UBackPackPickUpPanel_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.ExecuteUbergraph_BackPackPickUpPanel_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackPackPickUpPanel_BP_C::ExecuteUbergraph_BackPackPickUpPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackPickUpPanel_BP.BackPackPickUpPanel_BP_C.ExecuteUbergraph_BackPackPickUpPanel_BP");

	UBackPackPickUpPanel_BP_C_ExecuteUbergraph_BackPackPickUpPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
