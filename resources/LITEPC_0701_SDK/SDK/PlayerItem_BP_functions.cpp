
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

// Function PlayerItem_BP.PlayerItem_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPlayerItem_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerItem_BP.PlayerItem_BP_C.OnTouchEnded");

	UPlayerItem_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function PlayerItem_BP.PlayerItem_BP_C.ShowCone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItem_BP_C::ShowCone(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerItem_BP.PlayerItem_BP_C.ShowCone");

	UPlayerItem_BP_C_ShowCone_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerItem_BP.PlayerItem_BP_C.ShowBeSelectCircle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItem_BP_C::ShowBeSelectCircle(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerItem_BP.PlayerItem_BP_C.ShowBeSelectCircle");

	UPlayerItem_BP_C_ShowBeSelectCircle_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerItem_BP.PlayerItem_BP_C.ShowName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFull                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItem_BP_C::ShowName(bool IsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerItem_BP.PlayerItem_BP_C.ShowName");

	UPlayerItem_BP_C_ShowName_Params params;
	params.IsFull = IsFull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerItem_BP.PlayerItem_BP_C.ShowAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShowAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationZ                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItem_BP_C::ShowAngle(bool IsShowAngle, float RotationZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerItem_BP.PlayerItem_BP_C.ShowAngle");

	UPlayerItem_BP_C_ShowAngle_Params params;
	params.IsShowAngle = IsShowAngle;
	params.RotationZ = RotationZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerItem_BP.PlayerItem_BP_C.ShowData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoInOB         PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSinglar                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsObing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItem_BP_C::ShowData(const struct FPlayerInfoInOB& PlayerInfo, bool IsSinglar, bool IsObing)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerItem_BP.PlayerItem_BP_C.ShowData");

	UPlayerItem_BP_C_ShowData_Params params;
	params.PlayerInfo = PlayerInfo;
	params.IsSinglar = IsSinglar;
	params.IsObing = IsObing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerItem_BP.PlayerItem_BP_C.BeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoInOB         PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerItem_BP_C::BeSelected__DelegateSignature(const struct FPlayerInfoInOB& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerItem_BP.PlayerItem_BP_C.BeSelected__DelegateSignature");

	UPlayerItem_BP_C_BeSelected__DelegateSignature_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
