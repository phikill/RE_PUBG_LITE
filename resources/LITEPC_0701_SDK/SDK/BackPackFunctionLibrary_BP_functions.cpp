
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

// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachmentSlotIDByResID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            attachresID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponAttachmentSlotID        WeaponAttachmentSlotID         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_GetWeaponAttachmentSlotIDByResID(int attachresID, class UUAEUserWidget* Widget, class UObject* __WorldContext, EWeaponAttachmentSlotID* WeaponAttachmentSlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachmentSlotIDByResID");

	UBackPackFunctionLibrary_BP_C_GetWeaponAttachmentSlotIDByResID_Params params;
	params.attachresID = attachresID;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponAttachmentSlotID != nullptr)
		*WeaponAttachmentSlotID = params.WeaponAttachmentSlotID;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsPistolGun
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPistolGun                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsPistolGun(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsPistolGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsPistolGun");

	UBackPackFunctionLibrary_BP_C_IsPistolGun_Params params;
	params.DefineID = DefineID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPistolGun != nullptr)
		*IsPistolGun = params.IsPistolGun;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGrenadeWeapon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsGrenadeWeapon                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsGrenadeWeapon(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsGrenadeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGrenadeWeapon");

	UBackPackFunctionLibrary_BP_C_IsGrenadeWeapon_Params params;
	params.DefineID = DefineID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGrenadeWeapon != nullptr)
		*IsGrenadeWeapon = params.IsGrenadeWeapon;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsMeleeWeapon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMeleeWeapon                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsMeleeWeapon(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsMeleeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsMeleeWeapon");

	UBackPackFunctionLibrary_BP_C_IsMeleeWeapon_Params params;
	params.DefineID = DefineID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMeleeWeapon != nullptr)
		*IsMeleeWeapon = params.IsMeleeWeapon;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachments
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsContainBullet                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Attachs                        (Parm, OutParm, ZeroConstructor)

void UBackPackFunctionLibrary_BP_C::STATIC_GetWeaponAttachments(int WeaponId, bool IsContainBullet, class UObject* __WorldContext, TArray<int>* Attachs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachments");

	UBackPackFunctionLibrary_BP_C_GetWeaponAttachments_Params params;
	params.WeaponId = WeaponId;
	params.IsContainBullet = IsContainBullet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attachs != nullptr)
		*Attachs = params.Attachs;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByResID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            gunResID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            attachresID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           support                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsGunSupportAttachByResID(int gunResID, int attachresID, class UUAEUserWidget* Widget, class UObject* __WorldContext, bool* support)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByResID");

	UBackPackFunctionLibrary_BP_C_IsGunSupportAttachByResID_Params params;
	params.gunResID = gunResID;
	params.attachresID = attachresID;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (support != nullptr)
		*support = params.support;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByDefineID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           gunDefine                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemDefineID           attachDefine                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUAEUserWidget*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           support                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsGunSupportAttachByDefineID(const struct FItemDefineID& gunDefine, const struct FItemDefineID& attachDefine, class UUAEUserWidget* Widget, class UObject* __WorldContext, bool* support)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByDefineID");

	UBackPackFunctionLibrary_BP_C_IsGunSupportAttachByDefineID_Params params;
	params.gunDefine = gunDefine;
	params.attachDefine = attachDefine;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (support != nullptr)
		*support = params.support;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponSupportSocket
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<EWeaponAttachmentSocketType> socketList                     (Parm, OutParm, ZeroConstructor)

void UBackPackFunctionLibrary_BP_C::STATIC_GetWeaponSupportSocket(int WeaponId, class UUAEUserWidget* Widget, class UObject* __WorldContext, TArray<EWeaponAttachmentSocketType>* socketList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponSupportSocket");

	UBackPackFunctionLibrary_BP_C_GetWeaponSupportSocket_Params params;
	params.WeaponId = WeaponId;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (socketList != nullptr)
		*socketList = params.socketList;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponSupportAttachResID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    attachID                       (Parm, OutParm, ZeroConstructor)

void UBackPackFunctionLibrary_BP_C::STATIC_GetWeaponSupportAttachResID(int WeaponId, class UUAEUserWidget* Widget, class UObject* __WorldContext, TArray<int>* attachID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponSupportAttachResID");

	UBackPackFunctionLibrary_BP_C_GetWeaponSupportAttachResID_Params params;
	params.WeaponId = WeaponId;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (attachID != nullptr)
		*attachID = params.attachID;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachPosByResID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponAttachmentSocketType    socket                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_GetWeaponAttachPosByResID(int resID, class UUAEUserWidget* Widget, class UObject* __WorldContext, EWeaponAttachmentSocketType* socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachPosByResID");

	UBackPackFunctionLibrary_BP_C_GetWeaponAttachPosByResID_Params params;
	params.resID = resID;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (socket != nullptr)
		*socket = params.socket;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportBullet
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraWeapon*          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           bulletDefineID                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSupport                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsGunSupportBullet(class ASTExtraWeapon* Weapon, const struct FItemDefineID& bulletDefineID, class UObject* __WorldContext, bool* isSupport)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportBullet");

	UBackPackFunctionLibrary_BP_C_IsGunSupportBullet_Params params;
	params.Weapon = Weapon;
	params.bulletDefineID = bulletDefineID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isSupport != nullptr)
		*isSupport = params.isSupport;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsBullet
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBullet                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsBullet(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsBullet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsBullet");

	UBackPackFunctionLibrary_BP_C_IsBullet_Params params;
	params.DefineID = DefineID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBullet != nullptr)
		*IsBullet = params.IsBullet;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getItemTypeByDefineID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_getItemTypeByDefineID(const struct FItemDefineID& DefineID, class UObject* __WorldContext, int* ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getItemTypeByDefineID");

	UBackPackFunctionLibrary_BP_C_getItemTypeByDefineID_Params params;
	params.DefineID = DefineID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemType != nullptr)
		*ItemType = params.ItemType;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByRes
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            gunResID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            attachresID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           support                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsGunSupportAttachByRes(int gunResID, int attachresID, class UUAEUserWidget* Widget, class UObject* __WorldContext, bool* support)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByRes");

	UBackPackFunctionLibrary_BP_C_IsGunSupportAttachByRes_Params params;
	params.gunResID = gunResID;
	params.attachresID = attachresID;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (support != nullptr)
		*support = params.support;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getBPIDbyResID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_getBPIDbyResID(int resID, class UObject* __WorldContext, int* BPID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getBPIDbyResID");

	UBackPackFunctionLibrary_BP_C_getBPIDbyResID_Params params;
	params.resID = resID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPID != nullptr)
		*BPID = params.BPID;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getBPIDbyDefineID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BPID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_getBPIDbyDefineID(const struct FItemDefineID& DefineID, class UObject* __WorldContext, int* BPID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.getBPIDbyDefineID");

	UBackPackFunctionLibrary_BP_C_getBPIDbyDefineID_Params params;
	params.DefineID = DefineID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPID != nullptr)
		*BPID = params.BPID;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByDefine
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           gunDefine                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemDefineID           attachDefine                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUAEUserWidget*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           support                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsGunSupportAttachByDefine(const struct FItemDefineID& gunDefine, const struct FItemDefineID& attachDefine, class UUAEUserWidget* Widget, class UObject* __WorldContext, bool* support)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGunSupportAttachByDefine");

	UBackPackFunctionLibrary_BP_C_IsGunSupportAttachByDefine_Params params;
	params.gunDefine = gunDefine;
	params.attachDefine = attachDefine;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (support != nullptr)
		*support = params.support;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetVolAvatarConfigByResID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandle_AvatarBP_C* Config                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_GetVolAvatarConfigByResID(int resID, class UObject* Outer, class UObject* __WorldContext, class UBattleItemHandle_AvatarBP_C** Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetVolAvatarConfigByResID");

	UBackPackFunctionLibrary_BP_C_GetVolAvatarConfigByResID_Params params;
	params.resID = resID;
	params.Outer = Outer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Config != nullptr)
		*Config = params.Config;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsAttach
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAttach                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsAttach(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsAttach");

	UBackPackFunctionLibrary_BP_C_IsAttach_Params params;
	params.DefineID = DefineID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttach != nullptr)
		*IsAttach = params.IsAttach;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGun
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsGun                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_IsGun(const struct FItemDefineID& DefineID, class UObject* __WorldContext, bool* IsGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.IsGun");

	UBackPackFunctionLibrary_BP_C_IsGun_Params params;
	params.DefineID = DefineID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGun != nullptr)
		*IsGun = params.IsGun;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetBattleItemByDefineID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemData         BattleItemData                 (Parm, OutParm)

void UBackPackFunctionLibrary_BP_C::STATIC_GetBattleItemByDefineID(const struct FItemDefineID& DefineID, class UUserWidget* Widget, class UObject* __WorldContext, struct FBattleItemData* BattleItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetBattleItemByDefineID");

	UBackPackFunctionLibrary_BP_C_GetBattleItemByDefineID_Params params;
	params.DefineID = DefineID;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BattleItemData != nullptr)
		*BattleItemData = params.BattleItemData;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponHandleByBPID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BPID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandle_MainWeapon_C* Handle                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_GetWeaponHandleByBPID(int BPID, class UObject* Outer, class UObject* __WorldContext, class UBattleItemHandle_MainWeapon_C** Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponHandleByBPID");

	UBackPackFunctionLibrary_BP_C_GetWeaponHandleByBPID_Params params;
	params.BPID = BPID;
	params.Outer = Outer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponHandleByResID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandle_MainWeapon_C* Handle                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackPackFunctionLibrary_BP_C::STATIC_GetWeaponHandleByResID(int resID, class UObject* Outer, class UObject* __WorldContext, class UBattleItemHandle_MainWeapon_C** Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponHandleByResID");

	UBackPackFunctionLibrary_BP_C_GetWeaponHandleByResID_Params params;
	params.resID = resID;
	params.Outer = Outer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachConfigByResID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponAttachmentConfig Config                         (Parm, OutParm)

void UBackPackFunctionLibrary_BP_C::STATIC_GetWeaponAttachConfigByResID(int resID, class UObject* Outer, class UObject* __WorldContext, struct FWeaponAttachmentConfig* Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackPackFunctionLibrary_BP.BackPackFunctionLibrary_BP_C.GetWeaponAttachConfigByResID");

	UBackPackFunctionLibrary_BP_C_GetWeaponAttachConfigByResID_Params params;
	params.resID = resID;
	params.Outer = Outer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Config != nullptr)
		*Config = params.Config;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
