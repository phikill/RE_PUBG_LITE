
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

// Function EmoteComponent_BP.EmoteComponent_BP_C.GetEmoteHandle
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBackpackEmoteHandle*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackEmoteHandle* UEmoteComponent_BP_C::GetEmoteHandle(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteComponent_BP.EmoteComponent_BP_C.GetEmoteHandle");

	UEmoteComponent_BP_C_GetEmoteHandle_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmoteComponent_BP.EmoteComponent_BP_C.ReadEmoteDataRowPC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEmoteComponent_BP_C::ReadEmoteDataRowPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteComponent_BP.EmoteComponent_BP_C.ReadEmoteDataRowPC");

	UEmoteComponent_BP_C_ReadEmoteDataRowPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteComponent_BP.EmoteComponent_BP_C.IsAbleGetEmoteDataByName
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EmoteName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmoteComponent_BP_C::IsAbleGetEmoteDataByName(struct FName* EmoteName)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteComponent_BP.EmoteComponent_BP_C.IsAbleGetEmoteDataByName");

	UEmoteComponent_BP_C_IsAbleGetEmoteDataByName_Params params;
	params.EmoteName = EmoteName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmoteComponent_BP.EmoteComponent_BP_C.GetEmoteDataByName
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EmoteName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEmoteDBDataRow         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmoteDBDataRow UEmoteComponent_BP_C::GetEmoteDataByName(struct FName* EmoteName)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteComponent_BP.EmoteComponent_BP_C.GetEmoteDataByName");

	UEmoteComponent_BP_C_GetEmoteDataByName_Params params;
	params.EmoteName = EmoteName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmoteComponent_BP.EmoteComponent_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UEmoteComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteComponent_BP.EmoteComponent_BP_C.ReceiveBeginPlay");

	UEmoteComponent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteComponent_BP.EmoteComponent_BP_C.ExecuteUbergraph_EmoteComponent_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEmoteComponent_BP_C::ExecuteUbergraph_EmoteComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteComponent_BP.EmoteComponent_BP_C.ExecuteUbergraph_EmoteComponent_BP");

	UEmoteComponent_BP_C_ExecuteUbergraph_EmoteComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
