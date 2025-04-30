
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

// Function ScriptPlugin.ScriptContext.CallScriptFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UScriptContext::CallScriptFunction(const struct FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContext.CallScriptFunction");

	UScriptContext_CallScriptFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScriptPlugin.ScriptContextComponent.PushOneScriptPropertyValues
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)

void UScriptContextComponent::PushOneScriptPropertyValues(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.PushOneScriptPropertyValues");

	UScriptContextComponent_PushOneScriptPropertyValues_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScriptPlugin.ScriptContextComponent.PushAllScriptPropertyValues
// (Native, Public, BlueprintCallable)

void UScriptContextComponent::PushAllScriptPropertyValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.PushAllScriptPropertyValues");

	UScriptContextComponent_PushAllScriptPropertyValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScriptPlugin.ScriptContextComponent.FetchOneScriptPropertyValues
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)

void UScriptContextComponent::FetchOneScriptPropertyValues(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.FetchOneScriptPropertyValues");

	UScriptContextComponent_FetchOneScriptPropertyValues_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScriptPlugin.ScriptContextComponent.FetchAllScriptPropertyValues
// (Native, Public, BlueprintCallable)

void UScriptContextComponent::FetchAllScriptPropertyValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.FetchAllScriptPropertyValues");

	UScriptContextComponent_FetchAllScriptPropertyValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScriptPlugin.ScriptContextComponent.CallScriptFunctionWithoutFetch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UScriptContextComponent::CallScriptFunctionWithoutFetch(const struct FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.CallScriptFunctionWithoutFetch");

	UScriptContextComponent_CallScriptFunctionWithoutFetch_Params params;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScriptPlugin.ScriptContextComponent.CallScriptFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UScriptContextComponent::CallScriptFunction(const struct FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.CallScriptFunction");

	UScriptContextComponent_CallScriptFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScriptPlugin.ScriptHelperNetInterface.SendPacket_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperNetInterface::STATIC_SendPacket_LuaState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptHelperNetInterface.SendPacket_LuaState");

	UScriptHelperNetInterface_SendPacket_LuaState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScriptPlugin.ScriptHelperNetInterface.Disconnect
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UNetInterface> NetInterface                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperNetInterface::STATIC_Disconnect(TScriptInterface<class UNetInterface>* NetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptHelperNetInterface.Disconnect");

	UScriptHelperNetInterface_Disconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NetInterface != nullptr)
		*NetInterface = params.NetInterface;
}


// Function ScriptPlugin.ScriptHelperNetInterface.Connect
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UNetInterface> NetInterface                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Timeout                        (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperNetInterface::STATIC_Connect(int Timeout, TScriptInterface<class UNetInterface>* NetInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptHelperNetInterface.Connect");

	UScriptHelperNetInterface_Connect_Params params;
	params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NetInterface != nullptr)
		*NetInterface = params.NetInterface;
}


// Function ScriptPlugin.ScriptPluginComponent.CallScriptFunction
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptPluginComponent::CallScriptFunction(const struct FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptPluginComponent.CallScriptFunction");

	UScriptPluginComponent_CallScriptFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScriptPlugin.ScriptTestActor.TestFunction
// (Final, Native, Public)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InFactor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMultiply                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AScriptTestActor::TestFunction(float InValue, float InFactor, bool bMultiply)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptTestActor.TestFunction");

	AScriptTestActor_TestFunction_Params params;
	params.InValue = InValue;
	params.InFactor = InFactor;
	params.bMultiply = bMultiply;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScriptPlugin.LuaClassBaseObj.ItsATest
// (Native, Public)
// Parameters:
// struct FPlayerInfo             Player1                        (Parm)
// TArray<int>                    nums                           (Parm, ZeroConstructor)
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Q                              (Parm, ZeroConstructor)
// TArray<struct FPlayerInfo>     Player2                        (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ALuaClassBaseObj::ItsATest(const struct FPlayerInfo& Player1, TArray<int> nums, int X, const struct FString& Q, TArray<struct FPlayerInfo> Player2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.LuaClassBaseObj.ItsATest");

	ALuaClassBaseObj_ItsATest_Params params;
	params.Player1 = Player1;
	params.nums = nums;
	params.X = X;
	params.Q = Q;
	params.Player2 = Player2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScriptPlugin.LuaClassBaseObj.HandleUIMessage
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void ALuaClassBaseObj::HandleUIMessage(const struct FString& UIMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.LuaClassBaseObj.HandleUIMessage");

	ALuaClassBaseObj_HandleUIMessage_Params params;
	params.UIMessage = UIMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScriptPlugin.LuaClassBaseObj.GetGameStatus
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ALuaClassBaseObj::GetGameStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.LuaClassBaseObj.GetGameStatus");

	ALuaClassBaseObj_GetGameStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
