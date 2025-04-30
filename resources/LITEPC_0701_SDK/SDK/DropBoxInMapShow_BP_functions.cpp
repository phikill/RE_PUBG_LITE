
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

// Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.ShowBeSelectCircle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropBoxInMapShow_BP_C::ShowBeSelectCircle(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.ShowBeSelectCircle");

	UDropBoxInMapShow_BP_C_ShowBeSelectCircle_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.ShowDropBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAirDropBoxInOb         Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UDropBoxInMapShow_BP_C::ShowDropBox(const struct FAirDropBoxInOb& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.ShowDropBox");

	UDropBoxInMapShow_BP_C_ShowDropBox_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.BndEvt__Button_SelectedBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDropBoxInMapShow_BP_C::BndEvt__Button_SelectedBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.BndEvt__Button_SelectedBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDropBoxInMapShow_BP_C_BndEvt__Button_SelectedBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.ExecuteUbergraph_DropBoxInMapShow_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropBoxInMapShow_BP_C::ExecuteUbergraph_DropBoxInMapShow_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.ExecuteUbergraph_DropBoxInMapShow_BP");

	UDropBoxInMapShow_BP_C_ExecuteUbergraph_DropBoxInMapShow_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.OnBoxBeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAirDropBoxInOb         BoxInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UDropBoxInMapShow_BP_C::OnBoxBeClicked__DelegateSignature(const struct FAirDropBoxInOb& BoxInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropBoxInMapShow_BP.DropBoxInMapShow_BP_C.OnBoxBeClicked__DelegateSignature");

	UDropBoxInMapShow_BP_C_OnBoxBeClicked__DelegateSignature_Params params;
	params.BoxInfo = BoxInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
