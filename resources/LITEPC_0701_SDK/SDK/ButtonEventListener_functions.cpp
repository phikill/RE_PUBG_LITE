
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

// Function ButtonEventListener.ButtonEventListener_C.OnRightClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D*              TempScreenPos                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UButtonEventListener_C::OnRightClicked(struct FVector2D* TempScreenPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonEventListener.ButtonEventListener_C.OnRightClicked");

	UButtonEventListener_C_OnRightClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonEventListener.ButtonEventListener_C.ExecuteUbergraph_ButtonEventListener
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonEventListener_C::ExecuteUbergraph_ButtonEventListener(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonEventListener.ButtonEventListener_C.ExecuteUbergraph_ButtonEventListener");

	UButtonEventListener_C_ExecuteUbergraph_ButtonEventListener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonEventListener.ButtonEventListener_C.OnRightClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UButtonEventListener_C::OnRightClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonEventListener.ButtonEventListener_C.OnRightClick__DelegateSignature");

	UButtonEventListener_C_OnRightClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
