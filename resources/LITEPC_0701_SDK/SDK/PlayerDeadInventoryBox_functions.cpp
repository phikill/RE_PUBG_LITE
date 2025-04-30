
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

// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetGroundLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector APlayerDeadInventoryBox_C::GetGroundLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetGroundLocation");

	APlayerDeadInventoryBox_C_GetGroundLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetVector4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Dest                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerDeadInventoryBox_C::GetVector4(const struct FVector& Dest, float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.GetVector4");

	APlayerDeadInventoryBox_C_GetVector4_Params params;
	params.Dest = Dest;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerDeadInventoryBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.UserConstructionScript");

	APlayerDeadInventoryBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.CameraMove__FinishedFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::CameraMove__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.CameraMove__FinishedFunc");

	APlayerDeadInventoryBox_C_CameraMove__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.CameraMove__UpdateFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::CameraMove__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.CameraMove__UpdateFunc");

	APlayerDeadInventoryBox_C_CameraMove__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.MatParamTimeline__FinishedFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::MatParamTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.MatParamTimeline__FinishedFunc");

	APlayerDeadInventoryBox_C_MatParamTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.MatParamTimeline__UpdateFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::MatParamTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.MatParamTimeline__UpdateFunc");

	APlayerDeadInventoryBox_C_MatParamTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.PitchTimeline__FinishedFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::PitchTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.PitchTimeline__FinishedFunc");

	APlayerDeadInventoryBox_C_PitchTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.PitchTimeline__UpdateFunc
// (BlueprintEvent)

void APlayerDeadInventoryBox_C::PitchTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.PitchTimeline__UpdateFunc");

	APlayerDeadInventoryBox_C_PitchTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowShine
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerDeadInventoryBox_C::ShowShine()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowShine");

	APlayerDeadInventoryBox_C_ShowShine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowNormal
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerDeadInventoryBox_C::ShowNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ShowNormal");

	APlayerDeadInventoryBox_C_ShowNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerDeadInventoryBox_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APlayerDeadInventoryBox_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerDeadInventoryBox_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	APlayerDeadInventoryBox_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerDeadInventoryBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ReceiveBeginPlay");

	APlayerDeadInventoryBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.SwitchToDeadTombBox
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerDeadInventoryBox_C::SwitchToDeadTombBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.SwitchToDeadTombBox");

	APlayerDeadInventoryBox_C_SwitchToDeadTombBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.HideDeadTombApparence
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerDeadInventoryBox_C::HideDeadTombApparence()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.HideDeadTombApparence");

	APlayerDeadInventoryBox_C_HideDeadTombApparence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ExecuteUbergraph_PlayerDeadInventoryBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerDeadInventoryBox_C::ExecuteUbergraph_PlayerDeadInventoryBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerDeadInventoryBox.PlayerDeadInventoryBox_C.ExecuteUbergraph_PlayerDeadInventoryBox");

	APlayerDeadInventoryBox_C_ExecuteUbergraph_PlayerDeadInventoryBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
