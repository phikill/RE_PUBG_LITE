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

// AnimBlueprintGeneratedClass Lobby_AnimBP.Lobby_AnimBP_C
// 0x0BB6 (0x0F76 - 0x03C0)
class ULobby_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AFF52F6C457272B774D5C286273B97F4;      // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42CA781147EE9629A4B19BA9775B36AD;// 0x0410(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8DA05499428414A4017E28AC85C92530;// 0x0480(0x0078)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B;// 0x04F8(0x0280)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9A8BCB494C60C4E6B163B69FBF189C85;// 0x0778(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9E8CA6A84B12F57225A6DB8E983D5123;// 0x07C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_473AC4274B4CEED81B20C9A9ACC2EB17;// 0x0808(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_47BBD58E47BA952B4BC65BB1577F4EF6;// 0x0878(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8071977A4FB6B25745D3ABADF1526C64;// 0x08F0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_D4D579C14F7A1C5C2F080D8F14DF9F2D;// 0x0960(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5D47C1FA4C4DE8ECB258FD903E31DDF9;// 0x0A40(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_785497A0444B6D6A1A697C81EEB65A76;// 0x0AB0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F373DCD64FCC54C2AAC68B8D0AD1E691;// 0x0B20(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3CAFC25D45DCF244637FCD9BE82C83A9;// 0x0B90(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D0739C04EDC0AEE304B8C8A23C350B6;// 0x0C00(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F70B56DC45D3872F383A5D9294ED3EB2;// 0x0C70(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B7FEA2D4ED122EC8B70BE8F7734FD0B;// 0x0CE0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_477190394C9B0E06D3B1B09C37218BF9;// 0x0D50(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42FE84854B9F45F0ECBFC5A692C3B6B3;// 0x0DC0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_79A2703B467373D9467D57BB63DBBF47;      // 0x0E30(0x0068)
	bool                                               Man;                                                      // 0x0E98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFront;                                                  // 0x0E99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChange;                                                 // 0x0E9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseHairAnimDynamics;                                     // 0x0E9B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAnimParamList                              CharacterAnimParam;                                       // 0x0E9C(0x00D8) (Edit, BlueprintVisible, DisableEditOnInstance)
	EWeaponType                                        WeaponType;                                               // 0x0F74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAnimWeaponType                                    AnimWeaponType;                                           // 0x0F75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Lobby_AnimBP.Lobby_AnimBP_C");
		return ptr;
	}


	void SetWeaponPose(EWeaponType WeaponType);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_BlendListByEnum_D4D579C14F7A1C5C2F080D8F14DF9F2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Lobby_AnimBP_AnimGraphNode_AnimDynamics_2BE462B7452BD6CC7AA9BEB99A15F46B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Lobby_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
