#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class ScriptPlugin.NetInterface
// 0x0000 (0x0028 - 0x0028)
class UNetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.NetInterface");
		return ptr;
	}

};


// Class ScriptPlugin.LuaContext
// 0x0018 (0x0380 - 0x0368)
class ALuaContext : public AActor
{
public:
	class ULuaStateWrapper*                            OwningLuaStateWrapper;                                    // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     OwningObject;                                             // 0x0370(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UScriptContextComponent*                     ScriptContextComponent;                                   // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.LuaContext");
		return ptr;
	}

};


// Class ScriptPlugin.ScriptProfiler
// 0x0020 (0x0048 - 0x0028)
class UScriptProfiler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptProfiler");
		return ptr;
	}

};


// Class ScriptPlugin.LuaStateWrapper
// 0x00E0 (0x0108 - 0x0028)
class ULuaStateWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.LuaStateWrapper");
		return ptr;
	}

};


// Class ScriptPlugin.ScriptBlueprintGeneratedClass
// 0x0030 (0x0308 - 0x02D8)
class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x02D8(0x0010) (ZeroConstructor)
	struct FString                                     SourceCode;                                               // 0x02E8(0x0010) (ZeroConstructor)
	TArray<class UProperty*>                           ScriptProperties;                                         // 0x02F8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptBlueprintGeneratedClass");
		return ptr;
	}

};


// Class ScriptPlugin.ScriptContext
// 0x0008 (0x0030 - 0x0028)
class UScriptContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptContext");
		return ptr;
	}


	void CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptContextComponent
// 0x0010 (0x0108 - 0x00F8)
class UScriptContextComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	class ULuaStateWrapper*                            OwningLuaStateWrapper;                                    // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptContextComponent");
		return ptr;
	}


	void PushOneScriptPropertyValues(const struct FString& ParamName);
	void PushAllScriptPropertyValues();
	void FetchOneScriptPropertyValues(const struct FString& ParamName);
	void FetchAllScriptPropertyValues();
	void CallScriptFunctionWithoutFetch(const struct FString& FunctionName);
	void CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptHelperNetInterface
// 0x0000 (0x0028 - 0x0028)
class UScriptHelperNetInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptHelperNetInterface");
		return ptr;
	}


	int STATIC_SendPacket_LuaState();
	void STATIC_Disconnect(TScriptInterface<class UNetInterface>* NetInterface);
	void STATIC_Connect(int Timeout, TScriptInterface<class UNetInterface>* NetInterface);
};


// Class ScriptPlugin.ScriptPluginComponent
// 0x0008 (0x0030 - 0x0028)
class UScriptPluginComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptPluginComponent");
		return ptr;
	}


	bool CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptTestActor
// 0x0018 (0x0380 - 0x0368)
class AScriptTestActor : public AActor
{
public:
	struct FString                                     TestString;                                               // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TestValue;                                                // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TestBool;                                                 // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x037D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptTestActor");
		return ptr;
	}


	float TestFunction(float InValue, float InFactor, bool bMultiply);
};


// Class ScriptPlugin.LuaClassBaseObj
// 0x0000 (0x0368 - 0x0368)
class ALuaClassBaseObj : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.LuaClassBaseObj");
		return ptr;
	}


	struct FString ItsATest(const struct FPlayerInfo& Player1, TArray<int> nums, int X, const struct FString& Q, TArray<struct FPlayerInfo> Player2);
	void HandleUIMessage(const struct FString& UIMessage);
	struct FString GetGameStatus();
};


// Class ScriptPlugin.ScriptBlueprint
// 0x0020 (0x01C0 - 0x01A0)
class UScriptBlueprint : public UBlueprint
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET
	struct FString                                     SourceCode;                                               // 0x01A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptBlueprint");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
