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

// Class UAEStateMachine.UAEState
// 0x0008 (0x0030 - 0x0028)
class UUAEState : public UObject
{
public:
	int                                                I;                                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAEStateMachine.UAEState");
		return ptr;
	}


	void Update(float DeltaTime);
	void OnLeave(class UUAEState* TranitToState);
	void OnEnter(class UUAEState* PrevState);
};


// Class UAEStateMachine.TestStatemachine
// 0x0008 (0x0370 - 0x0368)
class ATestStatemachine : public AActor
{
public:
	class UUAEStateMachineComponent*                   UAEStateMachineComponent;                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAEStateMachine.TestStatemachine");
		return ptr;
	}

};


// Class UAEStateMachine.UAEStateMachineComponent
// 0x0088 (0x0180 - 0x00F8)
class UUAEStateMachineComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBeforeTransientEvent;                                   // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAfterTransientEvent;                                    // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UUAEState*>                           States;                                                   // 0x0118(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FUAEStateMachineTransition> Transitions;                                              // 0x0128(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UUAEState*                                   CurrentState;                                             // 0x0178(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAEStateMachine.UAEStateMachineComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
