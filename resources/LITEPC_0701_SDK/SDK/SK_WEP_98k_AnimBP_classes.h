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

// AnimBlueprintGeneratedClass SK_WEP_98k_AnimBP.SK_WEP_98k_AnimBP_C
// 0x0680 (0x0A40 - 0x03C0)
class USK_WEP_98k_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E289CAC34D6D6C1F9826E3982962FE4E;// 0x03D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83D9B651448B775C9FD5288354626605;// 0x0450(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1368E0D444326A649FB0F68E2CA6B909;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_545DF4B443CC19202EBE6DAF033B597C;// 0x0550(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A5BCBA246F42A05C0228EAAD5C7FEAE;// 0x05D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EC345107462E521CF5F62DB98EF83F72;// 0x0640(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2214364749080F11638F7DBFF13E6C3E;// 0x0688(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_16B9FBA749FCBEC4EF81EEBE14A2397E;// 0x06F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F800DFF442AF39253409D4B29A0D9EDA;// 0x0740(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80385011410F043B941E219C339BCE19;// 0x07B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D1B8BCC442FC5E1D09910EAE9B2838AF;// 0x07F8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3C8E99A744073215BC6DC5BEB14BCF12;// 0x0868(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F124A0444476D546B101B9A35404FE2B;// 0x08B0(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_42BB4C5E4FDCCA5D8FCCED89F6EBF54C;      // 0x0988(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_9935AB564D4AB66D499F77B36D216597;      // 0x09F0(0x0048)
	TEnumAsByte<EFreshWeaponStateType>                 WeaponState;                                              // 0x0A38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Charge;                                                   // 0x0A39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Tactial;                                                  // 0x0A3A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0A3B(0x0001) MISSED OFFSET
	float                                              AnimRate;                                                 // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_WEP_98k_AnimBP.SK_WEP_98k_AnimBP_C");
		return ptr;
	}


	void Handle_ReloadByOne_Stop();
	void Handle_ReloadByOne_Single();
	void Handle_ReloadByOne_Start();
	void HandleWeaponStateChanged(TEnumAsByte<EFreshWeaponStateType> NewParam);
	void PlayBoltAnim();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_98k_AnimBP_AnimGraphNode_TransitionResult_1368E0D444326A649FB0F68E2CA6B909();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_98k_AnimBP_AnimGraphNode_TransitionResult_545DF4B443CC19202EBE6DAF033B597C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_98k_AnimBP_AnimGraphNode_SequencePlayer_6A5BCBA246F42A05C0228EAAD5C7FEAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_98k_AnimBP_AnimGraphNode_TransitionResult_E289CAC34D6D6C1F9826E3982962FE4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_98k_AnimBP_AnimGraphNode_SequencePlayer_F800DFF442AF39253409D4B29A0D9EDA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void OnWeaponChangeState(TEnumAsByte<EFreshWeaponStateType> CurState);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_98k_AnimBP_AnimGraphNode_TransitionResult_83D9B651448B775C9FD5288354626605();
	void ExecuteUbergraph_SK_WEP_98k_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
