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

// BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C
// 0x0020 (0x0420 - 0x0400)
class ABP_TslBaseLobbySceneTravel_FadeInOut_C : public ATslBaseLobbySceneTravel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInOut_Value_207F64F9402383AD44EA1C882F5837CB;         // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeInOut__Direction_207F64F9402383AD44EA1C882F5837CB;    // 0x0414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeInOut;                                                // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C");
		return ptr;
	}


	void UserConstructionScript();
	void FadeInOut__FinishedFunc();
	void FadeInOut__UpdateFunc();
	void OnStartTravel();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_TslBaseLobbySceneTravel_FadeInOut(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
