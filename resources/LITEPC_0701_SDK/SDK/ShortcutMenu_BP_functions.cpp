
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

// Function ShortcutMenu_BP.ShortcutMenu_BP_C.On_HandClose_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShortcutMenu_BP_C::On_HandClose_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortcutMenu_BP.ShortcutMenu_BP_C.On_HandClose_MouseButtonDown_1");

	UShortcutMenu_BP_C_On_HandClose_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function ShortcutMenu_BP.ShortcutMenu_BP_C.On_but_boxClose_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShortcutMenu_BP_C::On_but_boxClose_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortcutMenu_BP.ShortcutMenu_BP_C.On_but_boxClose_MouseButtonDown_1");

	UShortcutMenu_BP_C_On_but_boxClose_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function ShortcutMenu_BP.ShortcutMenu_BP_C.BndEvt__Button_NormalStuff_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShortcutMenu_BP_C::BndEvt__Button_NormalStuff_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortcutMenu_BP.ShortcutMenu_BP_C.BndEvt__Button_NormalStuff_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UShortcutMenu_BP_C_BndEvt__Button_NormalStuff_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShortcutMenu_BP.ShortcutMenu_BP_C.ExecuteUbergraph_ShortcutMenu_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShortcutMenu_BP_C::ExecuteUbergraph_ShortcutMenu_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortcutMenu_BP.ShortcutMenu_BP_C.ExecuteUbergraph_ShortcutMenu_BP");

	UShortcutMenu_BP_C_ExecuteUbergraph_ShortcutMenu_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShortcutMenu_BP.ShortcutMenu_BP_C.ClickCloseBox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShortcutMenu_BP_C::ClickCloseBox__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortcutMenu_BP.ShortcutMenu_BP_C.ClickCloseBox__DelegateSignature");

	UShortcutMenu_BP_C_ClickCloseBox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShortcutMenu_BP.ShortcutMenu_BP_C.ClickClosePickup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShortcutMenu_BP_C::ClickClosePickup__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortcutMenu_BP.ShortcutMenu_BP_C.ClickClosePickup__DelegateSignature");

	UShortcutMenu_BP_C_ClickClosePickup__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShortcutMenu_BP.ShortcutMenu_BP_C.ClickNormal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShortcutMenu_BP_C::ClickNormal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortcutMenu_BP.ShortcutMenu_BP_C.ClickNormal__DelegateSignature");

	UShortcutMenu_BP_C_ClickNormal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
