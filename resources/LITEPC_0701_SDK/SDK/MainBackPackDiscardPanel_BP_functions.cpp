
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

// Function MainBackPackDiscardPanel_BP.MainBackPackDiscardPanel_BP_C.ShowDeleteList
// (BlueprintCallable, BlueprintEvent)

void UMainBackPackDiscardPanel_BP_C::ShowDeleteList()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackDiscardPanel_BP.MainBackPackDiscardPanel_BP_C.ShowDeleteList");

	UMainBackPackDiscardPanel_BP_C_ShowDeleteList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackDiscardPanel_BP.MainBackPackDiscardPanel_BP_C.HideSelf
// (BlueprintCallable, BlueprintEvent)

void UMainBackPackDiscardPanel_BP_C::HideSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackDiscardPanel_BP.MainBackPackDiscardPanel_BP_C.HideSelf");

	UMainBackPackDiscardPanel_BP_C_HideSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackDiscardPanel_BP.MainBackPackDiscardPanel_BP_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainBackPackDiscardPanel_BP_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackDiscardPanel_BP.MainBackPackDiscardPanel_BP_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UMainBackPackDiscardPanel_BP_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainBackPackDiscardPanel_BP.MainBackPackDiscardPanel_BP_C.ExecuteUbergraph_MainBackPackDiscardPanel_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainBackPackDiscardPanel_BP_C::ExecuteUbergraph_MainBackPackDiscardPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainBackPackDiscardPanel_BP.MainBackPackDiscardPanel_BP_C.ExecuteUbergraph_MainBackPackDiscardPanel_BP");

	UMainBackPackDiscardPanel_BP_C_ExecuteUbergraph_MainBackPackDiscardPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
