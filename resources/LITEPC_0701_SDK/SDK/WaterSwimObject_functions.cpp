
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

// Function WaterSwimObject.WaterSwimObject_C.SetWateMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHDR                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::SetWateMaterial(bool bHDR)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.SetWateMaterial");

	AWaterSwimObject_C_SetWateMaterial_Params params;
	params.bHDR = bHDR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.HideUnderWaterEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    WaterPlane                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UExponentialHeightFogComponent* CamFog                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::HideUnderWaterEffect(class UStaticMeshComponent* WaterPlane, class UExponentialHeightFogComponent* CamFog)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.HideUnderWaterEffect");

	AWaterSwimObject_C_HideUnderWaterEffect_Params params;
	params.WaterPlane = WaterPlane;
	params.CamFog = CamFog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.ShowUnderWaterEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    WaterPlane                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UExponentialHeightFogComponent* CamFog                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::ShowUnderWaterEffect(class UStaticMeshComponent* WaterPlane, class UExponentialHeightFogComponent* CamFog)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.ShowUnderWaterEffect");

	AWaterSwimObject_C_ShowUnderWaterEffect_Params params;
	params.WaterPlane = WaterPlane;
	params.CamFog = CamFog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.IsCapsult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWaterSwimObject_C::IsCapsult(class UObject* PlayerPawn, class UActorComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.IsCapsult");

	AWaterSwimObject_C_IsCapsult_Params params;
	params.PlayerPawn = PlayerPawn;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WaterSwimObject.WaterSwimObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWaterSwimObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.UserConstructionScript");

	AWaterSwimObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	AWaterSwimObject_C_BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWaterSwimObject_C::BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AWaterSwimObject_C_BndEvt__PostSceneBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function WaterSwimObject.WaterSwimObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWaterSwimObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.ReceiveBeginPlay");

	AWaterSwimObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGamePawnEvent>    gamePawnEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::CustomEvent_1(TEnumAsByte<EGamePawnEvent> gamePawnEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.CustomEvent_1");

	AWaterSwimObject_C_CustomEvent_1_Params params;
	params.gamePawnEvent = gamePawnEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UserQualitySettingLevel        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::CustomEvent_2(int UserQualitySettingLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.CustomEvent_2");

	AWaterSwimObject_C_CustomEvent_2_Params params;
	params.UserQualitySettingLevel = UserQualitySettingLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.ReceiveEndPlay");

	AWaterSwimObject_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterSwimObject.WaterSwimObject_C.ExecuteUbergraph_WaterSwimObject
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterSwimObject_C::ExecuteUbergraph_WaterSwimObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSwimObject.WaterSwimObject_C.ExecuteUbergraph_WaterSwimObject");

	AWaterSwimObject_C_ExecuteUbergraph_WaterSwimObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
