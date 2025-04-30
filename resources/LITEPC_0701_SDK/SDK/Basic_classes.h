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

// Class Basic.ItemHandleBase
// 0x0080 (0x00A8 - 0x0028)
class UItemHandleBase : public UObject
{
public:
	int                                                Count;                                                    // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnique;                                                  // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStackable;                                               // 0x0031(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	TMap<struct FName, struct FItemAssociation>        AssociationMap;                                           // 0x0038(0x0050) (ZeroConstructor)
	struct FItemDefineID                               DefineID;                                                 // 0x0088(0x0018)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.ItemHandleBase");
		return ptr;
	}


	void SetAssociation(const struct FName& Name, const struct FItemAssociation& Association);
	void RemoveAssociation(const struct FName& Name);
	void Init(const struct FItemDefineID& InDefineID);
	struct FItemDefineID GetDefineID();
	TMap<struct FName, struct FItemAssociation> GetAssociationMap();
	TArray<struct FItemAssociation> GetAssociationListByTargetType(int Type);
	struct FItemAssociation GetAssociationByTargetDefineID(const struct FItemDefineID& TargetDefineID);
	struct FItemAssociation GetAssociation(const struct FName& Name);
	void AddAssociation(const struct FName& Name, const struct FItemAssociation& Association);
};


// Class Basic.BattleItemHandleBase
// 0x0020 (0x00C8 - 0x00A8)
class UBattleItemHandleBase : public UItemHandleBase
{
public:
	bool                                               bEquipping;                                               // 0x00A8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x00B0(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              UnitWeight;                                               // 0x00C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEquippable;                                              // 0x00C4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumable;                                              // 0x00C5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoEquipAndDrop;                                        // 0x00C6(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00C7(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.BattleItemHandleBase");
		return ptr;
	}


	bool HandleUse(const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	bool HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	bool HandleDrop(int InCount, EBattleItemDropReason Reason);
	bool HandleDisuse(EBattleItemDisuseReason Reason);
	class UWorld* GetWorldInternal();
	struct FBattleItemData ExtractItemData();
};


// Class Basic.UAENetActor
// 0x0010 (0x0378 - 0x0368)
class AUAENetActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.UAENetActor");
		return ptr;
	}

};


// Class Basic.STBaseBuffStatusType
// 0x0000 (0x0028 - 0x0028)
class USTBaseBuffStatusType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffStatusType");
		return ptr;
	}

};


// Class Basic.UAEGameInstance
// 0x0100 (0x0330 - 0x0230)
class UUAEGameInstance : public UGameInstance
{
public:
	struct FClientBaseInfo                             ClientBaseInfo;                                           // 0x0230(0x00C8)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F8(0x0020) MISSED OFFSET
	class UFrontendHUD*                                AssociatedFrontendHUD;                                    // 0x0318(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.UAEGameInstance");
		return ptr;
	}


	int GetWeatherID();
	struct FString GetLocalPlayerNetId();
	int GetDeviceLevel();
	class UFrontendHUD* GetAssociatedFrontendHUD();
};


// Class Basic.UAEGameEngine
// 0x0020 (0x0E70 - 0x0E50)
class UUAEGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0E50(0x0008) MISSED OFFSET
	class UBackendHUD*                                 AssociatedBackendHUD;                                     // 0x0E58(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0E60(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.UAEGameEngine");
		return ptr;
	}

};


// Class Basic.AttrModifyComponent
// 0x00B0 (0x01A8 - 0x00F8)
class UAttrModifyComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnAttrModified;                                           // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FAttrModifyItem>                     ConfigAttrModifyList;                                     // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0118(0x0050) MISSED OFFSET
	TArray<int8_t>                                     AttrModifyStateList;                                      // 0x0168(0x0010) (Net, ZeroConstructor, Transient)
	TArray<struct FAttrModifyItem>                     DynamicModifierRepList;                                   // 0x0178(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0188(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.AttrModifyComponent");
		return ptr;
	}


	bool RegisterModifyAbleAttr(TArray<struct FAttrRegisterItem> AttrRegists);
	void OnRep_DynamicModifierList();
	void OnRep_AttrModifyStateList();
	void OnAttrModifiedEvent__DelegateSignature(TArray<struct FAttrAffected> AffectedAttrS);
	bool EnableAttrModifier(const struct FString& AttrModifyItemName);
	bool EnableAllAttrModifier();
	bool DisableModifierToActor(class AActor* TargetActor);
	bool DisableAttrModifier(const struct FString& AttrModifyItemName);
	bool DisableAllAttrModifier();
};


// Class Basic.AttrModifyInterface
// 0x0000 (0x0028 - 0x0028)
class UAttrModifyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.AttrModifyInterface");
		return ptr;
	}


	TArray<class AActor*> GetRelevantActors();
	class UAttrModifyComponent* GetAttrModifyComponent();
};


// Class Basic.BPClassManager
// 0x00C0 (0x00F0 - 0x0030)
class UBPClassManager : public UDataAsset
{
public:
	TArray<struct FBPClassItem>                        BPClassList;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) UNKNOWN PROPERTY: MapProperty Basic.BPClassManager.BPClassLookUp
	unsigned char                                      UnknownData01[0x50];                                      // 0x0090(0x0050) UNKNOWN PROPERTY: MapProperty Basic.BPClassManager.BPClassNameLookUp
	struct FString                                     BPClassManagerPath;                                       // 0x00E0(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.BPClassManager");
		return ptr;
	}


	class UClass* GetUClass(int KeyIndex);
	class UClass* GetBPClassOverrideByName(const struct FString& ClassTagName);
	class UClass* GetBPClassOverride(class UClass* InNativeClass);
	class UBPClassManager* STATIC_Get();
};


// Class Basic.ItemContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UItemContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.ItemContainerInterface");
		return ptr;
	}


	class UObject* GetOwningObject();
	TArray<class UItemHandleBase*> GetItemHandleListByDefineID(const struct FItemDefineID& DefineID);
	class UItemHandleBase* GetItemHandleByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FItemDefineID> GetItemDefineIDList();
};


// Class Basic.ItemFactoryInterface
// 0x0000 (0x0028 - 0x0028)
class UItemFactoryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.ItemFactoryInterface");
		return ptr;
	}

};


// Class Basic.NetRelevancyGroup
// 0x0038 (0x0060 - 0x0028)
class UNetRelevancyGroup : public UObject
{
public:
	struct FNetRelevancyGroupID                        GroupID;                                                  // 0x0028(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<class UUAENetConnection*>                   Connections;                                              // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.NetRelevancyGroup");
		return ptr;
	}

};


// Class Basic.OwnerRelevancyDependencyInterface
// 0x0000 (0x0028 - 0x0028)
class UOwnerRelevancyDependencyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.OwnerRelevancyDependencyInterface");
		return ptr;
	}

};


// Class Basic.PackTool
// 0x0010 (0x0038 - 0x0028)
class UPackTool : public UObject
{
public:
	TArray<class UObject*>                             CookCache;                                                // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.PackTool");
		return ptr;
	}


	void CookResBySelection();
};


// Class Basic.STBaseBuff
// 0x00F0 (0x0118 - 0x0028)
class USTBaseBuff : public UObject
{
public:
	struct FString                                     BuffName;                                                 // 0x0028(0x0010) (ZeroConstructor, Transient)
	struct FString                                     DisplayName;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Message;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Icon;                                                     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundData;                                                // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDeBuff;                                                 // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreMagicalImmunity;                                    // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Layerable;                                                // 0x006A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceExsist;                                            // 0x006B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DetachIfReplace;                                          // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StaysOnDeath;                                             // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	int                                                LayerMax;                                                 // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InitialLayerCount;                                        // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ValidityTime;                                             // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Internal;                                                 // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<class UUTSkillCondition*>                   BuffConditions;                                           // 0x0088(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	float                                              Expiry;                                                   // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FStatusChange>                       StatusChanges;                                            // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               NeedSimulateToClientMulticast;                            // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedSimulateToClient;                                     // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimulateAddBuffRole>                  SimulateAddBuffRole;                                      // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x00B3(0x0005) MISSED OFFSET
	TArray<struct FName>                               MutexBuffers;                                             // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBuffActionItem>                     BuffActions;                                              // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBuffEventActionItem>                EventBuffActions;                                         // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              fADScale;                                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fAPScale;                                                 // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlwaysExists;                                           // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class AController*                                 CauserPawnController;                                     // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class APawn*                                       Target;                                                   // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	class AActor*                                      BuffApplier;                                              // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuff");
		return ptr;
	}


	float GetBuffPassPercentage();
};


// Class Basic.STBaseBuffCarrierInterface
// 0x0000 (0x0028 - 0x0028)
class USTBaseBuffCarrierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffCarrierInterface");
		return ptr;
	}


	void SyncInvincibleData(float TotalTime);
	bool RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly);
	bool IsSameTeamWithFirstPC();
	bool HasBuff(const struct FName& BuffName);
	class USTBaseBuff* GetBuffByName(const struct FName& BuffName);
	bool AddBuffLayer(const struct FName& BuffName, int layerNum);
	bool AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	int AddBuff(const struct FName& BuffName, class AController* SkillActor, int LayerCount, class AActor* BuffApplierActor);
};


// Class Basic.STBaseBuffConditionBase
// 0x0008 (0x0100 - 0x00F8)
class USTBaseBuffConditionBase : public UActorComponent
{
public:
	TWeakObjectPtr<class USTBaseBuff>                  OwnerBuff;                                                // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffConditionBase");
		return ptr;
	}

};


// Class Basic.STBaseBuffEventType
// 0x0008 (0x0030 - 0x0028)
class USTBaseBuffEventType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffEventType");
		return ptr;
	}

};


// Class Basic.STBaseBuffEventType_LayerMax
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_LayerMax : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffEventType_LayerMax");
		return ptr;
	}

};


// Class Basic.STBaseBuffEventType_LayerSpecific
// 0x0008 (0x0038 - 0x0030)
class USTBaseBuffEventType_LayerSpecific : public USTBaseBuffEventType
{
public:
	int                                                LayerCountParam;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffEventType_LayerSpecific");
		return ptr;
	}

};


// Class Basic.STBaseBuffEventType_Removed
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_Removed : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffEventType_Removed");
		return ptr;
	}

};


// Class Basic.STBaseBuffEventType_TakeBuffDamage
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_TakeBuffDamage : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffEventType_TakeBuffDamage");
		return ptr;
	}

};


// Class Basic.STBaseBuffEventType_OnAttach
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_OnAttach : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffEventType_OnAttach");
		return ptr;
	}

};


// Class Basic.STBaseBuffEventType_ConditionNotMatch
// 0x0000 (0x0030 - 0x0030)
class USTBaseBuffEventType_ConditionNotMatch : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffEventType_ConditionNotMatch");
		return ptr;
	}

};


// Class Basic.STBaseBuffList
// 0x0010 (0x0038 - 0x0028)
class USTBaseBuffList : public UObject
{
public:
	TArray<struct FSTBaseBuffTemplateItem>             BuffList;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffList");
		return ptr;
	}

};


// Class Basic.BuffManagerPathClass
// 0x0010 (0x0378 - 0x0368)
class ABuffManagerPathClass : public AActor
{
public:
	struct FString                                     BuffManagerBlueprintPath;                                 // 0x0368(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.BuffManagerPathClass");
		return ptr;
	}

};


// Class Basic.STBaseBuffManager
// 0x0030 (0x0058 - 0x0028)
class USTBaseBuffManager : public UObject
{
public:
	TArray<struct FSTBaseBuffTemplateItem>             BuffList;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              BuffListTemplates;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffManager");
		return ptr;
	}

};


// Class Basic.STBaseBuffStatusType_ImmuneDebuff
// 0x0000 (0x0028 - 0x0028)
class USTBaseBuffStatusType_ImmuneDebuff : public USTBaseBuffStatusType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffStatusType_ImmuneDebuff");
		return ptr;
	}

};


// Class Basic.STBaseBuffSystemComponent
// 0x0020 (0x0118 - 0x00F8)
class USTBaseBuffSystemComponent : public UActorComponent
{
public:
	TArray<struct FBuffInstancedItem>                  AllBuffs;                                                 // 0x00F8(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class APawn>                        PawnOwner;                                                // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.STBaseBuffSystemComponent");
		return ptr;
	}


	void ResetForDeath();
	bool RemoveBuffWithCauser(const struct FName& BuffName, bool RemoveLayerOnly, class AController* pCauser);
	bool RemoveBuffByID(int BuffID, bool RemoveLayerOnly, class AController* pCauser);
	bool RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly);
	bool IsBufferMutexed(const struct FName& NewBuffName);
	void InitModifier(class APawn* TempPawn);
	bool HasBuff(const struct FName& BuffName);
	struct FName GetBuffName(int BuffID);
	int GetBuffID(const struct FName& BuffName);
	class USTBaseBuff* GetBuffByName(const struct FName& BuffName);
	void ClientSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly);
	void ClientSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount);
	void ClientMulticastSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly);
	void ClientMulticastSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount);
	void ClearBuff(bool bDebuff, bool bGainBuff);
	bool CheckBuffStatus(class UClass* status, bool* Value);
	bool AddBuffLayer(const struct FName& BuffName, int layerNum);
	bool AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	int AddBuffByID(int BuffID, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	int AddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
};


// Class Basic.UAEAnimListComponentBase
// 0x00A8 (0x01A0 - 0x00F8)
class UUAEAnimListComponentBase : public UActorComponent
{
public:
	TMap<int, struct FAnimListMapValueData>            AnimListMap;                                              // 0x00F8(0x0050) (ZeroConstructor, Transient)
	TMap<unsigned char, struct FAnimInfoMapValue>      AnimInfoMap;                                              // 0x0148(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.UAEAnimListComponentBase");
		return ptr;
	}

};


// Class Basic.BPTable
// 0x0060 (0x0088 - 0x0028)
class UBPTable : public UObject
{
public:
	struct FString                                     BPTableName;                                              // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	TMap<int, struct FBPTableItem>                     BPTableItemMap;                                           // 0x0038(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.BPTable");
		return ptr;
	}


	struct FString GetSkinPath(int ID);
	struct FString GetPath(int ID);
	struct FString GetParentID(int ID);
	class UClass* GetClass(int ID);
};


// Class Basic.UAELoadedClassManager
// 0x0238 (0x0260 - 0x0028)
class UUAELoadedClassManager : public UObject
{
public:
	TArray<class UClass*>                              m_CachClass;                                              // 0x0028(0x0010) (ZeroConstructor)
	TMap<uint32_t, class UClass*>                      m_CookClass;                                              // 0x0038(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	TMap<int, struct FUAEResList>                      m_ResTableData;                                           // 0x0090(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UBPTable*>              BPTableMap;                                               // 0x00E0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoadedClassManagerClassName;                              // 0x0130(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x120];                                     // 0x0140(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.UAELoadedClassManager");
		return ptr;
	}


	void InitTableData();
	void InitBPTableMap();
	void Init();
	struct FString GetSkinPath(const struct FString& BPTableName, int ID);
	struct FString GetPath(const struct FString& BPTableName, int ID);
	struct FString GetParentID(const struct FString& BPTableName, int ID);
	class UClass* GetClass(const struct FString& BPTableName, int ID);
	class UUAELoadedClassManager* STATIC_Get();
	class UBPTable* CreateAndAddBPTable(const struct FString& BPTableName);
	void ClearAllData();
};


// Class Basic.UAEMeshComponent
// 0x0000 (0x0DC0 - 0x0DC0)
class UUAEMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.UAEMeshComponent");
		return ptr;
	}

};


// Class Basic.UAENetConnection
// 0x02E0 (0x339A0 - 0x336C0)
class UUAENetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x336C0(0x01E8) MISSED OFFSET
	float                                              MinRegionActorTickDelta;                                  // 0x338A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRegionActorTickDelta;                                  // 0x338AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x338B0(0x0034) MISSED OFFSET
	int                                                InitialHandshakeTimeoutNumThreshold;                      // 0x338E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x338E8(0x0004) MISSED OFFSET
	int                                                ActorChannelProcessBunchErrorNumThreshold_Server_Global;  // 0x338EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_Global;  // 0x338F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_PerActor;// 0x338F4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x338F8(0x0050) MISSED OFFSET
	bool                                               bEnableHTTPDNS;                                           // 0x33948(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x33949(0x0007) MISSED OFFSET
	struct FString                                     HTTPDNSServerAddr;                                        // 0x33950(0x0010) (ZeroConstructor, Config)
	float                                              HTTPDNSResponseTimeout;                                   // 0x33960(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x33964(0x000C) MISSED OFFSET
	class UNetRelevancyGroup*                          RelevancyGroup;                                           // 0x33970(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecreateSocketOnLost;                                    // 0x33978(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x27];                                      // 0x33979(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.UAENetConnection");
		return ptr;
	}

};


// Class Basic.UAENetDriver
// 0x0050 (0x0530 - 0x04E0)
class UUAENetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x04E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.UAENetDriver");
		return ptr;
	}

};


// Class Basic.UAETableManager
// 0x0080 (0x00A8 - 0x0028)
class UUAETableManager : public UObject
{
public:
	struct FString                                     TableRelativeDir;                                         // 0x0028(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             InitalizedTables;                                         // 0x0038(0x0010) (ZeroConstructor, Config)
	TArray<class UUAEDataTable*>                       TableObjList;                                             // 0x0048(0x0010) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> TableObjMap;                                              // 0x0058(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Basic.UAETableManager");
		return ptr;
	}


	void ReleaseTable(const struct FName& TableName);
	class UUAEDataTable* GetTablePtr(const struct FName& TableName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
