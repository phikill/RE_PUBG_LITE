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

// Class Skill.UTSkillBaseWidget
// 0x0028 (0x0120 - 0x00F8)
class UUTSkillBaseWidget : public UActorComponent
{
public:
	bool                                               bWidgetEnabled;                                           // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FString                                     WidgetDescription;                                        // 0x0100(0x0010) (ZeroConstructor)
	class APawn*                                       BuffOwnerPawn;                                            // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      BuffTargetActor;                                          // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillBaseWidget");
		return ptr;
	}

};


// Class Skill.UTSkillEffect
// 0x0010 (0x0130 - 0x0120)
class UUTSkillEffect : public UUTSkillBaseWidget
{
public:
	float                                              fADScale;                                                 // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fAPScale;                                                 // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillEffect");
		return ptr;
	}


	void UpdateAction(float DeltaSeconds);
	void UndoAction();
	void DoHurtAppearance(class APawn* Victim);
	bool DoAction();
};


// Class Skill.UTSkillAction
// 0x0018 (0x0148 - 0x0130)
class UUTSkillAction : public UUTSkillEffect
{
public:
	struct FUTSkillActionCreateData                    BaseData;                                                 // 0x0130(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0134(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillAction");
		return ptr;
	}


	void UpdateAction(float DeltaSeconds);
	void UndoAction();
	void Reset();
	bool RealDoAction();
	bool JudgeNeedPhaseWait();
	bool DoAction();
};


// Class Skill.UTSkill
// 0x0118 (0x0480 - 0x0368)
class AUTSkill : public AActor
{
public:
	struct FString                                     SkillName;                                                // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SkillDescription;                                         // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SkillDetailDes;                                           // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bMeleeSkill;                                              // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedAutonomousClientSimulate;                            // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClearInputCache;                                         // 0x039A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x039B(0x0005) MISSED OFFSET
	struct FUTSkillCreateData                          BaseData;                                                 // 0x03A0(0x0040) (Edit, BlueprintVisible)
	class UTexture2D*                                  SkillIcon;                                                // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SkillVehicleIcon;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SkillVehicleName;                                         // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               NegativeSkill;                                            // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldShowTargetPrompt;                                   // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ChangePawnStatus;                                         // 0x0402(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0403(0x0001) MISSED OFFSET
	TWeakObjectPtr<class APawn>                        OwnerPawn;                                                // 0x0404(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UUTSkillManagerComponent>     OwnerSkillManager;                                        // 0x040C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LastSpawnedActor;                                         // 0x0414(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        LastSpawnedPawn;                                          // 0x041C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0424(0x0030) MISSED OFFSET
	float                                              PhasePercentage;                                          // 0x0454(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FString>                             ParentFolderPath;                                         // 0x0458(0x0010) (ZeroConstructor)
	int64_t                                            LastEditBluePrintTime;                                    // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurComponentNameIndex;                                    // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSkillEnabled;                                           // 0x0474(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB];                                       // 0x0475(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkill");
		return ptr;
	}


	void SetSkillPhasePercentage(float Percentage);
	bool OnEvent(TEnumAsByte<EUTSkillEventType> TheEventType);
	float GetSkillPhasePercentage();
	class UUTSkillPhase* GetSkillPhase(int PhaseIndex);
	void DoSkillCoolDown();
	bool CanBePlayed(bool bShowErrorMsg);
};


// Class Skill.UTSkillCondition
// 0x0008 (0x0128 - 0x0120)
class UUTSkillCondition : public UUTSkillBaseWidget
{
public:
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillCondition");
		return ptr;
	}


	bool IsTargetOK(class APawn* Target);
	bool IsOK();
};


// Class Skill.UTSkillEventEffectMapForEditor
// 0x0030 (0x0150 - 0x0120)
class UUTSkillEventEffectMapForEditor : public UUTSkillBaseWidget
{
public:
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class UUTSkillEffect*                              SkillEffect;                                              // 0x0128(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSkillConditionWarpper>              Conditions;                                               // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkillConditionWarpper>              TargetConditions;                                         // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillEventEffectMapForEditor");
		return ptr;
	}

};


// Class Skill.UTSkillInterface
// 0x0000 (0x0028 - 0x0028)
class UUTSkillInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillInterface");
		return ptr;
	}


	void TriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void HandleSkillStart(int SkillID);
	void HandleSkillEnd(int SkillID, EUTSkillStopReason Reason);
};


// Class Skill.UTSkillPhase
// 0x00D8 (0x01D0 - 0x00F8)
class UUTSkillPhase : public UActorComponent
{
public:
	struct FString                                     PhaseName;                                                // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PhaseDescription;                                         // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bPhaseEnabled;                                            // 0x0118(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x011C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0124(0x0024) MISSED OFFSET
	struct FUTSkillPhaseCreateData                     BaseData;                                                 // 0x0148(0x0070) (Edit)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET
	class UUTSkillPicker*                              InEffectPickerOnAction;                                   // 0x01C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillPhase");
		return ptr;
	}


	bool TryJumpToPhase(int PhaseID);
	void StopPhase();
	void StartPhase();
	void RepeatPhase();
	bool PlaySkillHurtEffect(class APawn* Victim);
	bool PlaySkillHurtAppearances(class APawn* Victim);
	void PickTargets();
	bool OnEvent(TEnumAsByte<EUTSkillEventType> TheEventType);
	bool OnCustomEvent(TEnumAsByte<EUTSkillEventType> TheEventType);
	float GetChargePhaseRate();
	bool ForceStopPhase();
	bool ClearAttachments();
};


// Class Skill.UTSkillPicker
// 0x0048 (0x0168 - 0x0120)
class UUTSkillPicker : public UUTSkillBaseWidget
{
public:
	struct FUTSkillPickerCreateData                    BaseData;                                                 // 0x0120(0x000C) (Edit)
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x012C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0134(0x000C) MISSED OFFSET
	TArray<struct FUTSkillPickedTarget>                PickedResultTargets;                                      // 0x0140(0x0010) (ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class AActor>>               IgnoreTargets;                                            // 0x0150(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0160(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillPicker");
		return ptr;
	}

};


// Class Skill.UTSkillManagerComponent
// 0x00D8 (0x01D0 - 0x00F8)
class UUTSkillManagerComponent : public UActorComponent
{
public:
	class APawn*                                       OwnerPawn;                                                // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              SkillArchetypes;                                          // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AUTSkill*>                            Skills;                                                   // 0x0110(0x0010) (ZeroConstructor, Transient)
	class AActor*                                      Target;                                                   // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class APawn*>                               RepTargets;                                               // 0x0128(0x0010) (Net, ZeroConstructor)
	struct FUTSkillSynData                             SkillSynData;                                             // 0x0138(0x0008) (BlueprintVisible, Net)
	struct FScriptMulticastDelegate                    OnSkillHit;                                               // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSkillCast;                                              // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	struct FUTSkillHitInfo                             SkillHitInfo;                                             // 0x0168(0x0030) (Net)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0198(0x0018) MISSED OFFSET
	struct FString                                     LastESkillTargetDesc;                                     // 0x01B0(0x0010) (ZeroConstructor)
	int                                                SkillSynRandomSeed;                                       // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               SkillSynRandStream;                                       // 0x01C4(0x0008)
	int                                                SkillSynRandomSeedExpireCount;                            // 0x01CC(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillManagerComponent");
		return ptr;
	}


	bool TraceTarget(const struct FVector& StartTrace, const struct FVector& EndTrace, EUTPickerTargetType TargetType, float Radius, class APawn** TargetActor);
	void SwitchSkill(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void StopSkill(int SkillID, EUTSkillStopReason StopReason);
	bool ShouldTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void SetCurSkill(int SkillIndex);
	void ServerTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	bool ServerStartSkill(int SkillID, bool bAutoCast);
	void ServerNotifyRandomSeed(int Seed);
	void RepSkillSynData();
	void RepSkillHitInfo();
	int RandRangeSyn(int StartIndex, int EndIndex);
	bool PreCheckNewSkill(int SkillID);
	void PlayHurtSkillEffect(const struct FUTSkillHitInfo& TheSkillHitInfo);
	bool STATIC_OnSameTeam(class AActor* A, class AActor* B);
	void OnRep_SkillHitInfo();
	bool IsReadyToCastSkill(int SkillID);
	bool IsCastingSkill();
	void InitSkillSystem();
	class AUTSkill* GetSkillByName(const struct FString& SkillName);
	class AUTSkill* GetSkill(int SkillID);
	class UUTSkillPhase* GetCurSkillPhase();
	class AUTSkill* GetCurSkill();
	void ClearSkill();
	bool CheckNewSkill(int SkillID);
	void CheckAutoSkill();
};


// Class Skill.UTSkillLocationPicker
// 0x0000 (0x0028 - 0x0028)
class UUTSkillLocationPicker : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillLocationPicker");
		return ptr;
	}

};


// Class Skill.UTSkillEvent
// 0x0008 (0x0030 - 0x0028)
class UUTSkillEvent : public UObject
{
public:
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Skill.UTSkillEvent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
