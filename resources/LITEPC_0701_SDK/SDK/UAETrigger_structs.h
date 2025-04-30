#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum UAETrigger.EUAETriggerActionState
enum class EUAETriggerActionState : uint8_t
{
	EUAETriggerActionState__Running = 0,
	EUAETriggerActionState__Deactive = 1,
	EUAETriggerActionState__EUAETriggerActionState_MAX = 2
};


// Enum UAETrigger.EUAETriggerRunType
enum class EUAETriggerRunType : uint8_t
{
	EUAETriggerRunType__RunOnDS    = 0,
	EUAETriggerRunType__RunOnClient = 1,
	EUAETriggerRunType__EUAETriggerRunType_MAX = 2
};


// Enum UAETrigger.EUAETriggerVariableType
enum class EUAETriggerVariableType : uint8_t
{
	EUAETriggerVariableType__Int   = 0,
	EUAETriggerVariableType__Float = 1,
	EUAETriggerVariableType__String = 2,
	EUAETriggerVariableType__EUAETriggerVariableType_MAX = 3
};


// Enum UAETrigger.EFlowNodeType
enum class EFlowNodeType : uint8_t
{
	EFlowNodeType__None            = 0,
	EFlowNodeType__Sequence        = 1,
	EFlowNodeType__Or              = 2,
	EFlowNodeType__And             = 3,
	EFlowNodeType__SubBranch       = 4,
	EFlowNodeType__EFlowNodeType_MAX = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UAETrigger.TriggerEventListenerTrigger
// 0x0008
struct FTriggerEventListenerTrigger
{
	class UUAETriggerObject*                           ListenerTrigger;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UAETrigger.UFlowNodeRepData
// 0x0018
struct FUFlowNodeRepData
{
	struct FString                                     RepData;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int                                                NodeID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UAETrigger.UAELevelDirectorRepData
// 0x0018
struct FUAELevelDirectorRepData
{
	struct FUFlowNodeRepData                           FlowNodeRepData;                                          // 0x0000(0x0018)
};

// ScriptStruct UAETrigger.UAETriggerVariable
// 0x0020
struct FUAETriggerVariable
{
	EUAETriggerVariableType                            VarType;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                IntData;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatData;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     StringData;                                               // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
