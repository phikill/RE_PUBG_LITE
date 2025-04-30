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

// Class UAETrigger.TriggerAction
// 0x0010 (0x0038 - 0x0028)
class UTriggerAction : public UObject
{
public:
	bool                                               bEnableActionTick;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UUAETriggerObject*                           ParentTrigger;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.TriggerAction");
		return ptr;
	}

};


// Class UAETrigger.TriggerCondition
// 0x0008 (0x0030 - 0x0028)
class UTriggerCondition : public UObject
{
public:
	class UVariableSet*                                DataSource;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.TriggerCondition");
		return ptr;
	}

};


// Class UAETrigger.TriggerEvent
// 0x0068 (0x0090 - 0x0028)
class UTriggerEvent : public UObject
{
public:
	class UObject*                                     EventInstigator;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	TMap<struct FString, struct FTriggerEventListenerTrigger> RelevantListener;                                         // 0x0040(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.TriggerEvent");
		return ptr;
	}

};


// Class UAETrigger.FlowNodeBase
// 0x0048 (0x0070 - 0x0028)
class UFlowNodeBase : public UObject
{
public:
	class UFlowNodeBase*                               NextFlowNode;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUFlowNodeRepData                           RepData;                                                  // 0x0030(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	class UTriggersFlowTree*                           CarriedFlowTree;                                          // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	EFlowNodeType                                      NodeType;                                                 // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class UUAETriggerObject*>                   TriggerObjects;                                           // 0x0060(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.FlowNodeBase");
		return ptr;
	}

};


// Class UAETrigger.AndFlowNode
// 0x0050 (0x00C0 - 0x0070)
class UAndFlowNode : public UFlowNodeBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0070(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.AndFlowNode");
		return ptr;
	}

};


// Class UAETrigger.BranchFlowNode
// 0x0000 (0x0070 - 0x0070)
class UBranchFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.BranchFlowNode");
		return ptr;
	}

};


// Class UAETrigger.LevelEventCenter
// 0x0050 (0x0078 - 0x0028)
class ULevelEventCenter : public UObject
{
public:
	TMap<struct FString, class UTriggerEvent*>         TriggerEvents;                                            // 0x0028(0x0050) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.LevelEventCenter");
		return ptr;
	}

};


// Class UAETrigger.OrFlowNode
// 0x0000 (0x0070 - 0x0070)
class UOrFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.OrFlowNode");
		return ptr;
	}

};


// Class UAETrigger.SequenceFlowNode
// 0x0008 (0x0078 - 0x0070)
class USequenceFlowNode : public UFlowNodeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.SequenceFlowNode");
		return ptr;
	}

};


// Class UAETrigger.SubBranchFlowNode
// 0x0000 (0x0070 - 0x0070)
class USubBranchFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.SubBranchFlowNode");
		return ptr;
	}

};


// Class UAETrigger.TriggerEventBroadcastInterface
// 0x0000 (0x0028 - 0x0028)
class UTriggerEventBroadcastInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.TriggerEventBroadcastInterface");
		return ptr;
	}

};


// Class UAETrigger.TriggersFlowTree
// 0x0030 (0x0058 - 0x0028)
class UTriggersFlowTree : public UObject
{
public:
	class UFlowNodeBase*                               RootNode;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               TailNode;                                                 // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               CurrentNode;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	class AUAELevelDirector*                           OwnerLevelDirector;                                       // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.TriggersFlowTree");
		return ptr;
	}

};


// Class UAETrigger.UAELevelDirector
// 0x0080 (0x03E8 - 0x0368)
class AUAELevelDirector : public AActor
{
public:
	struct FUAELevelDirectorRepData                    LevelDirectorRepData;                                     // 0x0368(0x0018) (Net, Transient)
	class UTriggersFlowTree*                           TriggersFlowTree;                                         // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<struct FString, class UUAETriggerObject*>     TriggerObjectMap;                                         // 0x0388(0x0050) (ZeroConstructor)
	class UVariableSet*                                AllVariableSet;                                           // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.UAELevelDirector");
		return ptr;
	}


	bool StartLevelDirector();
	void SetTriggerRunType(const struct FString& TriggerName, EUAETriggerRunType RunType);
	void RequestTriggerComplete(class UUAETriggerObject* CompleteTrigger);
	void OnRep_LevelDirectorData();
	bool InitialLevelDirector();
	class UVariableSet* GetDataSet();
	bool FlowControllSubControll(TArray<struct FString> TriggerNames);
	bool FlowControllOr(TArray<struct FString> TriggerNames);
	bool FlowControllOneSequence(const struct FString& TriggerName);
	bool FlowControllMultiSequence(TArray<struct FString> TriggerNames);
	bool FlowControllAnd(TArray<struct FString> TriggerNames);
	bool AddTrigger(const struct FString& TriggerName, class UClass* TriggerClass);
	void AddEventToTrigger(const struct FString& TriggerName, class UClass* Event);
	class UTriggerCondition* AddConditionToTrigger(const struct FString& TriggerName, class UClass* Condition);
	class UTriggerAction* AddActionToTrigger(const struct FString& TriggerName, class UClass* Action);
};


// Class UAETrigger.UAELevelEventCenterInterface
// 0x0000 (0x0028 - 0x0028)
class UUAELevelEventCenterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.UAELevelEventCenterInterface");
		return ptr;
	}

};


// Class UAETrigger.UAETriggerEventSystem
// 0x0000 (0x0028 - 0x0028)
class UUAETriggerEventSystem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.UAETriggerEventSystem");
		return ptr;
	}

};


// Class UAETrigger.UAETriggerObject
// 0x0108 (0x0130 - 0x0028)
class UUAETriggerObject : public UObject
{
public:
	EUAETriggerRunType                                 RunType;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     TriggerName;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bEnableTick;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              TickInterval;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OuterActor;                                               // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
	TArray<class UClass*>                              TriggerEventsClass;                                       // 0x00A0(0x0010) (ZeroConstructor)
	TArray<class UTriggerCondition*>                   TriggerConditions;                                        // 0x00B0(0x0010) (ZeroConstructor)
	TArray<class UTriggerAction*>                      TriggerActions;                                           // 0x00C0(0x0010) (ZeroConstructor)
	class UFlowNodeBase*                               CarrierFlowNode;                                          // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x00D8(0x0050) UNKNOWN PROPERTY: SetProperty UAETrigger.UAETriggerObject.TriggeredEvents
	unsigned char                                      UnknownData04[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.UAETriggerObject");
		return ptr;
	}

};


// Class UAETrigger.Variable
// 0x0000 (0x0028 - 0x0028)
class UVariable : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.Variable");
		return ptr;
	}

};


// Class UAETrigger.VariableSet
// 0x0050 (0x0078 - 0x0028)
class UVariableSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UAETrigger.VariableSet");
		return ptr;
	}


	void AddStringValue(const struct FString& Key, const struct FString& InValue);
	void AddIntValue(const struct FString& Key, int InValue);
	void AddFloatValue(const struct FString& Key, float InValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
