
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

// Function BP_AirDropBox.BP_AirDropBox_C.GetSuperAirDropGenerateWrappersData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAirDropBoxGenerateWrapperItemData> RetData                        (Parm, OutParm, ZeroConstructor)

void ABP_AirDropBox_C::GetSuperAirDropGenerateWrappersData(TArray<struct FAirDropBoxGenerateWrapperItemData>* RetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.GetSuperAirDropGenerateWrappersData");

	ABP_AirDropBox_C_GetSuperAirDropGenerateWrappersData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetData != nullptr)
		*RetData = params.RetData;
}


// Function BP_AirDropBox.BP_AirDropBox_C.IsWater
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWater                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AirDropBox_C::IsWater(class AActor* NewParam, bool* IsWater)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.IsWater");

	ABP_AirDropBox_C_IsWater_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWater != nullptr)
		*IsWater = params.IsWater;
}


// Function BP_AirDropBox.BP_AirDropBox_C.OnRep_ServerDroppingSpeed
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AirDropBox_C::OnRep_ServerDroppingSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.OnRep_ServerDroppingSpeed");

	ABP_AirDropBox_C_OnRep_ServerDroppingSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsBoxInWater
// (BlueprintCallable, BlueprintEvent)

void ABP_AirDropBox_C::OnRep_bIsBoxInWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsBoxInWater");

	ABP_AirDropBox_C_OnRep_bIsBoxInWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsBoxSomking
// (BlueprintCallable, BlueprintEvent)

void ABP_AirDropBox_C::OnRep_bIsBoxSomking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsBoxSomking");

	ABP_AirDropBox_C_OnRep_bIsBoxSomking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsParachuteOpen
// (BlueprintCallable, BlueprintEvent)

void ABP_AirDropBox_C::OnRep_bIsParachuteOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsParachuteOpen");

	ABP_AirDropBox_C_OnRep_bIsParachuteOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsBoxHitTheGroundOrInWater
// (BlueprintCallable, BlueprintEvent)

void ABP_AirDropBox_C::OnRep_bIsBoxHitTheGroundOrInWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.OnRep_bIsBoxHitTheGroundOrInWater");

	ABP_AirDropBox_C_OnRep_bIsBoxHitTheGroundOrInWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.GetRandomGenerateWrappersData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAirDropBoxGenerateWrapperItemData> GenerateData                   (Parm, OutParm, ZeroConstructor)

void ABP_AirDropBox_C::GetRandomGenerateWrappersData(TArray<struct FAirDropBoxGenerateWrapperItemData>* GenerateData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.GetRandomGenerateWrappersData");

	ABP_AirDropBox_C_GetRandomGenerateWrappersData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenerateData != nullptr)
		*GenerateData = params.GenerateData;
}


// Function BP_AirDropBox.BP_AirDropBox_C.CheckBoxIsLand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AirDropBox_C::CheckBoxIsLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.CheckBoxIsLand");

	ABP_AirDropBox_C_CheckBoxIsLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AirDropBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.UserConstructionScript");

	ABP_AirDropBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AirDropBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.ReceiveBeginPlay");

	ABP_AirDropBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AirDropBox_C::BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");

	ABP_AirDropBox_C_BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.HideSmoke
// (BlueprintCallable, BlueprintEvent)

void ABP_AirDropBox_C::HideSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.HideSmoke");

	ABP_AirDropBox_C_HideSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.OnLandBroadCast
// (BlueprintCallable, BlueprintEvent)

void ABP_AirDropBox_C::OnLandBroadCast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.OnLandBroadCast");

	ABP_AirDropBox_C_OnLandBroadCast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AirDropBox_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AirDropBox_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_AirDropBox.BP_AirDropBox_C.DistanceScalerChangedEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AirDropBox_C::DistanceScalerChangedEvent(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.DistanceScalerChangedEvent");

	ABP_AirDropBox_C_DistanceScalerChangedEvent_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AirDropBox_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.ReceiveTick");

	ABP_AirDropBox_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AirDropBox_C::BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AirDropBox_C_BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_AirDropBox.BP_AirDropBox_C.ChangeAirdropAppearance
// (Event, Public, BlueprintEvent)

void ABP_AirDropBox_C::ChangeAirdropAppearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.ChangeAirdropAppearance");

	ABP_AirDropBox_C_ChangeAirdropAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AirDropBox.BP_AirDropBox_C.ExecuteUbergraph_BP_AirDropBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AirDropBox_C::ExecuteUbergraph_BP_AirDropBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AirDropBox.BP_AirDropBox_C.ExecuteUbergraph_BP_AirDropBox");

	ABP_AirDropBox_C_ExecuteUbergraph_BP_AirDropBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
