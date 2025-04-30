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

// Function ScriptPlugin.ScriptContext.CallScriptFunction
struct UScriptContext_CallScriptFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptContextComponent.PushOneScriptPropertyValues
struct UScriptContextComponent_PushOneScriptPropertyValues_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptContextComponent.PushAllScriptPropertyValues
struct UScriptContextComponent_PushAllScriptPropertyValues_Params
{
};

// Function ScriptPlugin.ScriptContextComponent.FetchOneScriptPropertyValues
struct UScriptContextComponent_FetchOneScriptPropertyValues_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptContextComponent.FetchAllScriptPropertyValues
struct UScriptContextComponent_FetchAllScriptPropertyValues_Params
{
};

// Function ScriptPlugin.ScriptContextComponent.CallScriptFunctionWithoutFetch
struct UScriptContextComponent_CallScriptFunctionWithoutFetch_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptContextComponent.CallScriptFunction
struct UScriptContextComponent_CallScriptFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptHelperNetInterface.SendPacket_LuaState
struct UScriptHelperNetInterface_SendPacket_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScriptPlugin.ScriptHelperNetInterface.Disconnect
struct UScriptHelperNetInterface_Disconnect_Params
{
	TScriptInterface<class UNetInterface>              NetInterface;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScriptPlugin.ScriptHelperNetInterface.Connect
struct UScriptHelperNetInterface_Connect_Params
{
	TScriptInterface<class UNetInterface>              NetInterface;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScriptPlugin.ScriptPluginComponent.CallScriptFunction
struct UScriptPluginComponent_CallScriptFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScriptPlugin.ScriptTestActor.TestFunction
struct AScriptTestActor_TestFunction_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InFactor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiply;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScriptPlugin.LuaClassBaseObj.ItsATest
struct ALuaClassBaseObj_ItsATest_Params
{
	struct FPlayerInfo                                 Player1;                                                  // (Parm)
	TArray<int>                                        nums;                                                     // (Parm, ZeroConstructor)
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Q;                                                        // (Parm, ZeroConstructor)
	TArray<struct FPlayerInfo>                         Player2;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ScriptPlugin.LuaClassBaseObj.HandleUIMessage
struct ALuaClassBaseObj_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.LuaClassBaseObj.GetGameStatus
struct ALuaClassBaseObj_GetGameStatus_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
