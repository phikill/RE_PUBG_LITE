
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

// Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.SetBrushAndAdjustSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                SizeBoxWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  ImageWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              IconTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseCombination_General_C::SetBrushAndAdjustSize(class USizeBox* SizeBoxWidget, class UImage* ImageWidget, class UTexture2D* IconTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.SetBrushAndAdjustSize");

	UBP_KeyboardAndMouseCombination_General_C_SetBrushAndAdjustSize_Params params;
	params.SizeBoxWidget = SizeBoxWidget;
	params.ImageWidget = ImageWidget;
	params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.DecorateResponseType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHold                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRelease                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseCombination_General_C::DecorateResponseType(bool bHold, bool bRelease)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.DecorateResponseType");

	UBP_KeyboardAndMouseCombination_General_C_DecorateResponseType_Params params;
	params.bHold = bHold;
	params.bRelease = bRelease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.DecorateMainKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              MainKeyIcon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseCombination_General_C::DecorateMainKey(class UTexture2D* MainKeyIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.DecorateMainKey");

	UBP_KeyboardAndMouseCombination_General_C_DecorateMainKey_Params params;
	params.MainKeyIcon = MainKeyIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.DecorateFunctionKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              FunctionKeyIcon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseCombination_General_C::DecorateFunctionKey(class UTexture2D* FunctionKeyIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.DecorateFunctionKey");

	UBP_KeyboardAndMouseCombination_General_C_DecorateFunctionKey_Params params;
	params.FunctionKeyIcon = FunctionKeyIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.UpdateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              FunctionIcon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MainIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHold                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRelease                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_KeyboardAndMouseCombination_General_C::UpdateWidget(class UTexture2D* FunctionIcon, class UTexture2D* MainIcon, bool bHold, bool bRelease)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KeyboardAndMouseCombination_General.BP_KeyboardAndMouseCombination_General_C.UpdateWidget");

	UBP_KeyboardAndMouseCombination_General_C_UpdateWidget_Params params;
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
