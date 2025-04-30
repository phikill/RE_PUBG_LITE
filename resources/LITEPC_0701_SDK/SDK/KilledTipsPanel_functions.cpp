
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

// Function KilledTipsPanel.KilledTipsPanel_C.Remove First Item
// (Public, BlueprintCallable, BlueprintEvent)

void UKilledTipsPanel_C::Remove_First_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function KilledTipsPanel.KilledTipsPanel_C.Remove First Item");

	UKilledTipsPanel_C_Remove_First_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KilledTipsPanel.KilledTipsPanel_C.Has Used Position
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKilledTipsPanel_C::Has_Used_Position(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function KilledTipsPanel.KilledTipsPanel_C.Has Used Position");

	UKilledTipsPanel_C_Has_Used_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function KilledTipsPanel.KilledTipsPanel_C.AssignToText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   inputText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UKilledTipsPanel_C::AssignToText(int Position, const struct FText& inputText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KilledTipsPanel.KilledTipsPanel_C.AssignToText");

	UKilledTipsPanel_C_AssignToText_Params params;
	params.Position = Position;
	params.inputText = inputText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KilledTipsPanel.KilledTipsPanel_C.ResetPositionAndContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UKilledTipsPanel_C::ResetPositionAndContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KilledTipsPanel.KilledTipsPanel_C.ResetPositionAndContent");

	UKilledTipsPanel_C_ResetPositionAndContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KilledTipsPanel.KilledTipsPanel_C.Has Empty Position
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Has_Empty                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            EmptyPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKilledTipsPanel_C::Has_Empty_Position(bool* Has_Empty, int* EmptyPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function KilledTipsPanel.KilledTipsPanel_C.Has Empty Position");

	UKilledTipsPanel_C_Has_Empty_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Has_Empty != nullptr)
		*Has_Empty = params.Has_Empty;
	if (EmptyPosition != nullptr)
		*EmptyPosition = params.EmptyPosition;
}


// Function KilledTipsPanel.KilledTipsPanel_C.RemoveFirst
// (Public, BlueprintCallable, BlueprintEvent)

void UKilledTipsPanel_C::RemoveFirst()
{
	static auto fn = UObject::FindObject<UFunction>("Function KilledTipsPanel.KilledTipsPanel_C.RemoveFirst");

	UKilledTipsPanel_C_RemoveFirst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KilledTipsPanel.KilledTipsPanel_C.Updata
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 new_killed_tips                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UKilledTipsPanel_C::Updata(const struct FString& new_killed_tips)
{
	static auto fn = UObject::FindObject<UFunction>("Function KilledTipsPanel.KilledTipsPanel_C.Updata");

	UKilledTipsPanel_C_Updata_Params params;
	params.new_killed_tips = new_killed_tips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KilledTipsPanel.KilledTipsPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKilledTipsPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KilledTipsPanel.KilledTipsPanel_C.Tick");

	UKilledTipsPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KilledTipsPanel.KilledTipsPanel_C.ExecuteUbergraph_KilledTipsPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKilledTipsPanel_C::ExecuteUbergraph_KilledTipsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KilledTipsPanel.KilledTipsPanel_C.ExecuteUbergraph_KilledTipsPanel");

	UKilledTipsPanel_C_ExecuteUbergraph_KilledTipsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
