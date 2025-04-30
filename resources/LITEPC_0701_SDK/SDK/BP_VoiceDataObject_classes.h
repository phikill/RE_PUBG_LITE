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

// BlueprintGeneratedClass BP_VoiceDataObject.BP_VoiceDataObject_C
// 0x0078 (0x00A0 - 0x0028)
class UBP_VoiceDataObject_C : public UObject
{
public:
	struct FBP_VoiceCheckData                          Data;                                                     // 0x0028(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              nowdis;                                                   // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              nowCheckCd;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBP_VoiceCheckType>                    nowType;                                                  // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class UBP_VoiceCheck_C*                            VoiceCheck;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCheckDis;                                              // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              showTime;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              showScale;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UBP_VoiceDataSubObject_C*>            subcheckList;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxCheckNum;                                              // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCheckCD;                                               // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRefresh;                                                // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	class UBP_VoiceDataSubObject_C*                    TriggerSubObject;                                         // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_STExtraPlayerController_C*               PlayerController;                                         // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VoiceDataObject.BP_VoiceDataObject_C");
		return ptr;
	}


	void SetSubObjectData(float nowScale, const struct FVector& nowPos, class UBP_VoiceDataSubObject_C* SubObject, float MaxCheckLength);
	void SetCheckData(int Index, const struct FVector& Postion, float CheckLength, class ASTExtraBaseCharacter* nowplayer, class ASTExtraShootWeapon* nowWeapon, class ASTExtraVehicleBase* nowVehicle);
	void InitSubList();
	void UpdateWaeponCheck();
	void UpdateChekcVehicleMove();
	void UpdateCheckPlayeCheck();
	void UpdateCheck(float DeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
