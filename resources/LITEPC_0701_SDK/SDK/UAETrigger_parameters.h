#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UAETrigger.UAELevelDirector.StartLevelDirector
struct AUAELevelDirector_StartLevelDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.SetTriggerRunType
struct AUAELevelDirector_SetTriggerRunType_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	EUAETriggerRunType                                 RunType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.RequestTriggerComplete
struct AUAELevelDirector_RequestTriggerComplete_Params
{
	class UUAETriggerObject*                           CompleteTrigger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.OnRep_LevelDirectorData
struct AUAELevelDirector_OnRep_LevelDirectorData_Params
{
};

// Function UAETrigger.UAELevelDirector.InitialLevelDirector
struct AUAELevelDirector_InitialLevelDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.GetDataSet
struct AUAELevelDirector_GetDataSet_Params
{
	class UVariableSet*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllSubControll
struct AUAELevelDirector_FlowControllSubControll_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllOr
struct AUAELevelDirector_FlowControllOr_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllOneSequence
struct AUAELevelDirector_FlowControllOneSequence_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllMultiSequence
struct AUAELevelDirector_FlowControllMultiSequence_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllAnd
struct AUAELevelDirector_FlowControllAnd_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddTrigger
struct AUAELevelDirector_AddTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      TriggerClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddEventToTrigger
struct AUAELevelDirector_AddEventToTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddConditionToTrigger
struct AUAELevelDirector_AddConditionToTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTriggerCondition*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddActionToTrigger
struct AUAELevelDirector_AddActionToTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTriggerAction*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.VariableSet.AddStringValue
struct UVariableSet_AddStringValue_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
};

// Function UAETrigger.VariableSet.AddIntValue
struct UVariableSet_AddIntValue_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.VariableSet.AddFloatValue
struct UVariableSet_AddFloatValue_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
