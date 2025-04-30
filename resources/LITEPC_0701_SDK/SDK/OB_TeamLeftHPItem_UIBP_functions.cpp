
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

// Function OB_TeamLeftHPItem_UIBP.OB_TeamLeftHPItem_UIBP_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOB_TeamLeftHPItem_UIBP_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_TeamLeftHPItem_UIBP.OB_TeamLeftHPItem_UIBP_C.OnMouseButtonUp");

	UOB_TeamLeftHPItem_UIBP_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function OB_TeamLeftHPItem_UIBP.OB_TeamLeftHPItem_UIBP_C.ShowHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HPPersent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ExtraPlayerLiveState           LiveState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_TeamLeftHPItem_UIBP_C::ShowHP(float HPPersent, ExtraPlayerLiveState LiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_TeamLeftHPItem_UIBP.OB_TeamLeftHPItem_UIBP_C.ShowHP");

	UOB_TeamLeftHPItem_UIBP_C_ShowHP_Params params;
	params.HPPersent = HPPersent;
	params.LiveState = LiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_TeamLeftHPItem_UIBP.OB_TeamLeftHPItem_UIBP_C.ShowData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoInOB         PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UOB_TeamLeftHPItem_UIBP_C::ShowData(const struct FPlayerInfoInOB& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_TeamLeftHPItem_UIBP.OB_TeamLeftHPItem_UIBP_C.ShowData");

	UOB_TeamLeftHPItem_UIBP_C_ShowData_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
