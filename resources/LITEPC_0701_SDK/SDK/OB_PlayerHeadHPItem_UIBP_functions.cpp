
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

// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.SetIconColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_PlayerHeadHPItem_UIBP_C::SetIconColor(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.SetIconColor");

	UOB_PlayerHeadHPItem_UIBP_C_SetIconColor_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.ShowData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoInOB         PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UOB_PlayerHeadHPItem_UIBP_C::ShowData(const struct FPlayerInfoInOB& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.ShowData");

	UOB_PlayerHeadHPItem_UIBP_C_ShowData_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOB_PlayerHeadHPItem_UIBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.Construct");

	UOB_PlayerHeadHPItem_UIBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.RefreshPlayerHealth
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         hpRatio                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         breathRatio                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNearDeath                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_PlayerHeadHPItem_UIBP_C::RefreshPlayerHealth(float* hpRatio, float* breathRatio, bool* IsNearDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.RefreshPlayerHealth");

	UOB_PlayerHeadHPItem_UIBP_C_RefreshPlayerHealth_Params params;
	params.hpRatio = hpRatio;
	params.breathRatio = breathRatio;
	params.IsNearDeath = IsNearDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.BndEvt__Button_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOB_PlayerHeadHPItem_UIBP_C::BndEvt__Button_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.BndEvt__Button_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UOB_PlayerHeadHPItem_UIBP_C_BndEvt__Button_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.ExecuteUbergraph_OB_PlayerHeadHPItem_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOB_PlayerHeadHPItem_UIBP_C::ExecuteUbergraph_OB_PlayerHeadHPItem_UIBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OB_PlayerHeadHPItem_UIBP.OB_PlayerHeadHPItem_UIBP_C.ExecuteUbergraph_OB_PlayerHeadHPItem_UIBP");

	UOB_PlayerHeadHPItem_UIBP_C_ExecuteUbergraph_OB_PlayerHeadHPItem_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
