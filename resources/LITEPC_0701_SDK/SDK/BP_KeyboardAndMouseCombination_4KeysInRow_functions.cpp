
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

// Function BP_KeyboardAndMouseCombination_4KeysInRow.BP_KeyboardAndMouseCombination_4KeysInRow_C.SetTargetWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseCombination_4KeysInRow_C::SetTargetWidget(int Index, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseCombination_4KeysInRow.BP_KeyboardAndMouseCombination_4KeysInRow_C.SetTargetWidget");

	UBP_KeyboardAndMouseCombination_4KeysInRow_C_SetTargetWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_KeyboardAndMouseCombination_4KeysInRow.BP_KeyboardAndMouseCombination_4KeysInRow_C.UpdateWidgetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              FunctionIcon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MainIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHold                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRelease                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseCombination_4KeysInRow_C::UpdateWidgetIndex(int Index, bool bEnable, class UTexture2D* FunctionIcon, class UTexture2D* MainIcon, bool bHold, bool bRelease)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseCombination_4KeysInRow.BP_KeyboardAndMouseCombination_4KeysInRow_C.UpdateWidgetIndex");

	UBP_KeyboardAndMouseCombination_4KeysInRow_C_UpdateWidgetIndex_Params params;
	params.Index = Index;
	params.bEnable = bEnable;
	params.FunctionIcon = FunctionIcon;
	params.MainIcon = MainIcon;
	params.bHold = bHold;
	params.bRelease = bRelease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
