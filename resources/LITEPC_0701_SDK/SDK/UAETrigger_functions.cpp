
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

// Function UAETrigger.UAELevelDirector.StartLevelDirector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::StartLevelDirector()
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.StartLevelDirector");

	AUAELevelDirector_StartLevelDirector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.SetTriggerRunType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// EUAETriggerRunType             RunType                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::SetTriggerRunType(const struct FString& TriggerName, EUAETriggerRunType RunType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.SetTriggerRunType");

	AUAELevelDirector_SetTriggerRunType_Params params;
	params.TriggerName = TriggerName;
	params.RunType = RunType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UAETrigger.UAELevelDirector.RequestTriggerComplete
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UUAETriggerObject*       CompleteTrigger                (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::RequestTriggerComplete(class UUAETriggerObject* CompleteTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.RequestTriggerComplete");

	AUAELevelDirector_RequestTriggerComplete_Params params;
	params.CompleteTrigger = CompleteTrigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UAETrigger.UAELevelDirector.OnRep_LevelDirectorData
// (Final, Native, Private)

void AUAELevelDirector::OnRep_LevelDirectorData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.OnRep_LevelDirectorData");

	AUAELevelDirector_OnRep_LevelDirectorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UAETrigger.UAELevelDirector.InitialLevelDirector
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::InitialLevelDirector()
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.InitialLevelDirector");

	AUAELevelDirector_InitialLevelDirector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.GetDataSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVariableSet*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVariableSet* AUAELevelDirector::GetDataSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.GetDataSet");

	AUAELevelDirector_GetDataSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.FlowControllSubControll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllSubControll(TArray<struct FString> TriggerNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllSubControll");

	AUAELevelDirector_FlowControllSubControll_Params params;
	params.TriggerNames = TriggerNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.FlowControllOr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllOr(TArray<struct FString> TriggerNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllOr");

	AUAELevelDirector_FlowControllOr_Params params;
	params.TriggerNames = TriggerNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.FlowControllOneSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllOneSequence(const struct FString& TriggerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllOneSequence");

	AUAELevelDirector_FlowControllOneSequence_Params params;
	params.TriggerName = TriggerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.FlowControllMultiSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllMultiSequence(TArray<struct FString> TriggerNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllMultiSequence");

	AUAELevelDirector_FlowControllMultiSequence_Params params;
	params.TriggerNames = TriggerNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.FlowControllAnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllAnd(TArray<struct FString> TriggerNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllAnd");

	AUAELevelDirector_FlowControllAnd_Params params;
	params.TriggerNames = TriggerNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.AddTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  TriggerClass                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::AddTrigger(const struct FString& TriggerName, class UClass* TriggerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddTrigger");

	AUAELevelDirector_AddTrigger_Params params;
	params.TriggerName = TriggerName;
	params.TriggerClass = TriggerClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.AddEventToTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  Event                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::AddEventToTrigger(const struct FString& TriggerName, class UClass* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddEventToTrigger");

	AUAELevelDirector_AddEventToTrigger_Params params;
	params.TriggerName = TriggerName;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UAETrigger.UAELevelDirector.AddConditionToTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTriggerCondition*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTriggerCondition* AUAELevelDirector::AddConditionToTrigger(const struct FString& TriggerName, class UClass* Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddConditionToTrigger");

	AUAELevelDirector_AddConditionToTrigger_Params params;
	params.TriggerName = TriggerName;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.AddActionToTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTriggerAction*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTriggerAction* AUAELevelDirector::AddActionToTrigger(const struct FString& TriggerName, class UClass* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddActionToTrigger");

	AUAELevelDirector_AddActionToTrigger_Params params;
	params.TriggerName = TriggerName;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.VariableSet.AddStringValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 InValue                        (Parm, ZeroConstructor)

void UVariableSet::AddStringValue(const struct FString& Key, const struct FString& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.VariableSet.AddStringValue");

	UVariableSet_AddStringValue_Params params;
	params.Key = Key;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UAETrigger.VariableSet.AddIntValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UVariableSet::AddIntValue(const struct FString& Key, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.VariableSet.AddIntValue");

	UVariableSet_AddIntValue_Params params;
	params.Key = Key;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UAETrigger.VariableSet.AddFloatValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UVariableSet::AddFloatValue(const struct FString& Key, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UAETrigger.VariableSet.AddFloatValue");

	UVariableSet_AddFloatValue_Params params;
	params.Key = Key;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
