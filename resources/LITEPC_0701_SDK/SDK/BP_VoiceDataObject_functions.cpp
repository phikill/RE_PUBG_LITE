
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

// Function BP_VoiceDataObject.BP_VoiceDataObject_C.SetSubObjectData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          nowScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 nowPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UBP_VoiceDataSubObject_C* SubObject                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxCheckLength                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceDataObject_C::SetSubObjectData(float nowScale, const struct FVector& nowPos, class UBP_VoiceDataSubObject_C* SubObject, float MaxCheckLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceDataObject.BP_VoiceDataObject_C.SetSubObjectData");

	UBP_VoiceDataObject_C_SetSubObjectData_Params params;
	params.nowScale = nowScale;
	params.nowPos = nowPos;
	params.SubObject = SubObject;
	params.MaxCheckLength = MaxCheckLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceDataObject.BP_VoiceDataObject_C.SetCheckData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Postion                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          CheckLength                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   nowplayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraShootWeapon*     nowWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraVehicleBase*     nowVehicle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceDataObject_C::SetCheckData(int Index, const struct FVector& Postion, float CheckLength, class ASTExtraBaseCharacter* nowplayer, class ASTExtraShootWeapon* nowWeapon, class ASTExtraVehicleBase* nowVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceDataObject.BP_VoiceDataObject_C.SetCheckData");

	UBP_VoiceDataObject_C_SetCheckData_Params params;
	params.Index = Index;
	params.Postion = Postion;
	params.CheckLength = CheckLength;
	params.nowplayer = nowplayer;
	params.nowWeapon = nowWeapon;
	params.nowVehicle = nowVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceDataObject.BP_VoiceDataObject_C.InitSubList
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VoiceDataObject_C::InitSubList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceDataObject.BP_VoiceDataObject_C.InitSubList");

	UBP_VoiceDataObject_C_InitSubList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateWaeponCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_VoiceDataObject_C::UpdateWaeponCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateWaeponCheck");

	UBP_VoiceDataObject_C_UpdateWaeponCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateChekcVehicleMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_VoiceDataObject_C::UpdateChekcVehicleMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateChekcVehicleMove");

	UBP_VoiceDataObject_C_UpdateChekcVehicleMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateCheckPlayeCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_VoiceDataObject_C::UpdateCheckPlayeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateCheckPlayeCheck");

	UBP_VoiceDataObject_C_UpdateCheckPlayeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VoiceDataObject_C::UpdateCheck(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceDataObject.BP_VoiceDataObject_C.UpdateCheck");

	UBP_VoiceDataObject_C_UpdateCheck_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
