
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

// Function TickableDynamicAddItemInterface.TickableDynamicAddItemInterface_C.MapScaleChangeRedrawPos
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTickableDynamicAddItemInterface_C::MapScaleChangeRedrawPos(float NewScale, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TickableDynamicAddItemInterface.TickableDynamicAddItemInterface_C.MapScaleChangeRedrawPos");

	UTickableDynamicAddItemInterface_C_MapScaleChangeRedrawPos_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TickableDynamicAddItemInterface.TickableDynamicAddItemInterface_C.CustomTickFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTickableDynamicAddItemInterface_C::CustomTickFunc(float DeltaTime, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TickableDynamicAddItemInterface.TickableDynamicAddItemInterface_C.CustomTickFunc");

	UTickableDynamicAddItemInterface_C_CustomTickFunc_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
