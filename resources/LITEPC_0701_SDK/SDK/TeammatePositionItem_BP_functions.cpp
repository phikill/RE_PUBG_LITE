
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

// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.UIMsg_CongregationFlag
// (Public, BlueprintCallable, BlueprintEvent)

void UTeammatePositionItem_BP_C::UIMsg_CongregationFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.UIMsg_CongregationFlag");

	UTeammatePositionItem_BP_C_UIMsg_CongregationFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.HideAll
// (Public, BlueprintCallable, BlueprintEvent)

void UTeammatePositionItem_BP_C::HideAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.HideAll");

	UTeammatePositionItem_BP_C_HideAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.ShowImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammatePositionItem_BP_C::ShowImage(bool isShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.ShowImage");

	UTeammatePositionItem_BP_C_ShowImage_Params params;
	params.isShow = isShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UTeammatePositionItem_BP_C::SetColor(const struct FLinearColor& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetColor");

	UTeammatePositionItem_BP_C_SetColor_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ExtraPlayerLiveState           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammatePositionItem_BP_C::SetState(ExtraPlayerLiveState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetState");

	UTeammatePositionItem_BP_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammatePositionItem_BP_C::SetPlayerName(const struct FString& Name, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetPlayerName");

	UTeammatePositionItem_BP_C_SetPlayerName_Params params;
	params.Name = Name;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeammatePositionItem_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.Construct");

	UTeammatePositionItem_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetCurrentWidgetVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammatePositionItem_BP_C::SetCurrentWidgetVisible(bool* visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.SetCurrentWidgetVisible");

	UTeammatePositionItem_BP_C_SetCurrentWidgetVisible_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.DelayHideQuick
// (BlueprintCallable, BlueprintEvent)

void UTeammatePositionItem_BP_C::DelayHideQuick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.DelayHideQuick");

	UTeammatePositionItem_BP_C_DelayHideQuick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.ExecuteUbergraph_TeammatePositionItem_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammatePositionItem_BP_C::ExecuteUbergraph_TeammatePositionItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammatePositionItem_BP.TeammatePositionItem_BP_C.ExecuteUbergraph_TeammatePositionItem_BP");

	UTeammatePositionItem_BP_C_ExecuteUbergraph_TeammatePositionItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
