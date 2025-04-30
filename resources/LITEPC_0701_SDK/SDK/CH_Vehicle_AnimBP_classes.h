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

// AnimBlueprintGeneratedClass CH_Vehicle_AnimBP.CH_Vehicle_AnimBP_C
// 0x4211 (0x4B01 - 0x08F0)
class UCH_Vehicle_AnimBP_C : public USTExtraAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_10907A9949AC45566C73EC8DCAA64FE6;      // 0x08F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CD297B2D4BFB3B1225CCE49AEFBC4EDD;// 0x0940(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17213F834B8D1ABE70CF7CA7AF76EAE4;// 0x09C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E3296FE41E862383EE564BA0143F9E3;// 0x0A40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D301FFF4F644815BBF34FB92F0100F9;// 0x0AC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4350244743C9D895258560BB9CF6BCAE;// 0x0B40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA36EF144EA9A1570569A59CEF29E1B8;// 0x0BC0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3E49F1E4B438514773ED2A88B55A2D9;// 0x0C40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD3159F54DB1F7350B262BBEF69F8FA0;// 0x0CC0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_159ED0144F99E5B6D02D438BF8F03C25;// 0x0D40(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1A5BE3CB42BC1BB23797F8AA181AB2EA;// 0x0E10(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3A3FE796429D80EC39B0F0850F8F0E95;// 0x0F38(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87F7E55E43E6C2DF988F3B8E1CCA2386;// 0x1008(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_251ABF2E4E9CCC6B0438DDA840EE3BFE;// 0x1078(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_88DFF5EC42C09A41B645F38119B680EA;// 0x10F0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_57D3479F4635DED8DBF1B8A0E2E57B1A2;// 0x1218(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5728FC934706177701264A8CD347BC12;// 0x1260(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_57D3479F4635DED8DBF1B8A0E2E57B1A;// 0x12B0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_448592B2467508D5846ABEA1D09AFD7D;// 0x12F8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F112627C4840944B351E188F3241DD19;// 0x1420(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A2F630CB4C8E98F3570445ACEFCD598D;// 0x1468(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC115C8144619180B301EE8F801A790C;// 0x14E0(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_075F27D641BFB284F94DF68E0B25DF93;// 0x1550(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80E9FB1A4ACC5E1F49854CA8FF1AA18B;// 0x1678(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CE4BA39D4C7F19165F4DB8B7A0D7F94A;// 0x16C0(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_26B6A3534BCEE7D2DCBA0E9FE5FFF52B;// 0x17E8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C9926B9D4EBE53267F40FD8BAC9D129F;// 0x18B8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C9117AA4EDAD8156C64238FF6BD7AC0;// 0x1988(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DA1A3D604FD374035AA2F3909ECEA9AE;// 0x19F8(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F93CA3814E81E5DEC54D2E86728D481F;// 0x1A70(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_27E85E4942A049664E0C6EB084F32698;// 0x1B98(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B0CCCE2B416C6B29C753299FEA41CB8D;// 0x1BE0(0x00D8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2E169A074DE301BDA25A0F98D62A23DB;// 0x1CB8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D1E3C446404DE1AC4DF28AA13E0C740A;// 0x1D00(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D67D53D54153F9EC34472F9AF89AF315;// 0x1DB8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7B70D78D47A2314B240BCC9778CB8851;// 0x1E00(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EF96423348D4A3D82783579A06114580;// 0x1ED0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D8265E81457CB24C34DF5D8F7D2FB457;// 0x1F78(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45CBB07C4B6E4E59523204A8DF6EB461;// 0x1FC8(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x2018(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_8A39D8D64C761453DE91B5B83D7E38F4;    // 0x2020(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9A3EEFC1445E1A8E85432D8D40E348C1;  // 0x2190(0x00A8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x2238(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_5AE889E1403589C104707B9BC60DA7BB;    // 0x2240(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6906E6A6492025AA6E1EF3923F1E5302;  // 0x23B0(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D03EBAF041AE206558CE5A8951AD56D9;// 0x2458(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8DE210EF434C8B2A26628AA35C410ED9;// 0x24A0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2143A2DD4E5AA3AB92560290DCB7D065;// 0x24E8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F9D6CE6B4ED93A200167309A33B249E5;// 0x25B8(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C42F4BEA4DD45402038BBFB64F2C3470;// 0x26E0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_54EE5F1049F051FC94D7F6BBECBA73AE;// 0x2788(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C96AFA2F4D966CE18491469ADA6EF30C;// 0x27D8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A1DB10A140DA19EB78508B94048CA783;// 0x2828(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_95130ED14FC69704BEDDB9B0615EB872;// 0x2908(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_29B30C43438E797ECD002FBDE892234F;// 0x2950(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_CECDE150477299F6FBA31F89242C0F88;  // 0x2998(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B276359E4EBFA3350293BEA4861910E2;  // 0x2A40(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_A78692B8443CC3AAE00E419ECA466024;  // 0x2AE8(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D372725348DEF3391C0E52AC2D2B76912;// 0x2B90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29CDC78644C8455BFD9A5A977D6983172;// 0x2C10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F3BD12346A05E88E7326FA0EF0149ED2;// 0x2C90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A85B0A9744CA95032B0C6B87FFA5AA652;// 0x2D10(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F7D073A24238925FD8A1E2949D2F752B;// 0x2D90(0x0128)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A6578D6847DF6BBBFAEB9DAE4B9023232;// 0x2EB8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7B8F8B964F09AB12D8DD0F92555C6DE32;// 0x2F00(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3B7E21C343F6EAFEA2EAB5BFAD85130E2;// 0x2F48(0x00B8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FF4A01EB4376B9C097826D90E979F9212;// 0x3000(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_105206C446AF5DF41BF0F9B28AA9620A;// 0x3048(0x0128)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_02B620884D5B49531598F8A015B71E5A2;// 0x3170(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1A9746844CE057967CCF1FB00A82C2452;// 0x31B8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_496E5AAE416338249263298164733B052;// 0x3200(0x00B8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4E1965104F01FB7E7C2259800E4A47422;// 0x32B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0CF29274C4AA5AD8E27E6862BB369D9;// 0x3300(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_852A2FB84476577D009C0E9DF2DF2F372;// 0x3370(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4BB640794351FC4FAAC10388BE0D3C04;// 0x33B8(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_ACC023B5440C082D578C208BB9CB924C;// 0x3490(0x00A8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2B2F40C84073B51E1FF00783AD743B16;// 0x3538(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D996FF9D44BFCFD776BAE29C641AC833;// 0x3660(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B72E39904BFE86EFF581B99DBFAA277D;// 0x3730(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1C6DB19C4B32762CCCA530BDF522AC67;// 0x3858(0x00A8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_0D3E48374CEBB12FA63DA3AD79D18660;// 0x3900(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5C630C4F401B5E88ED3AE4B43C1D9D8F;// 0x39E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D5B75E0146B4155E77F37CA75D4174DC;// 0x3A30(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_77DDCFB74D552D00B8B34FB457087831;// 0x3A80(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_138E82CD46EA59DB620F6E9FD3ABE3A4;// 0x3AD0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DBACFBEC4B9380B8D52689B88B0C5FFC;// 0x3B20(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BFF9D72B4D16FECCACC122959D7F26C6;// 0x3B70(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D392CD8A41FB6C2F16A0D8A8B2D1B7B1;// 0x3C40(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6DE236004540D4DF0C73059E823E7F0B;// 0x3C90(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0F5169414517A6E2558C46BA0364DF91;// 0x3D38(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_946D383C419A8E3FEDA2ED93DB33BA75;// 0x3D88(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F0E37EF493A6208DDDAC9A5D225B578;// 0x3E00(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4B29C80A4D6ADAC71096A0A70F5AB88F;// 0x3E70(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2F410E054166C825DF6E58B18B444A63;// 0x3F40(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E91FFEDF4F660BCEB0FA77892CFCD949;// 0x3F90(0x00A8)
	unsigned char                                      UnknownData02[0x8];                                       // 0x4038(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D372725348DEF3391C0E52AC2D2B7691;// 0x4040(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29CDC78644C8455BFD9A5A977D698317;// 0x40C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F3BD12346A05E88E7326FA0EF0149ED;// 0x4140(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A85B0A9744CA95032B0C6B87FFA5AA65;// 0x41C0(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_ED1AEA574B32DD1B6806F88AE16D7F86;// 0x4240(0x0128)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A6578D6847DF6BBBFAEB9DAE4B902323;// 0x4368(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7B8F8B964F09AB12D8DD0F92555C6DE3;// 0x43B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3B7E21C343F6EAFEA2EAB5BFAD85130E;// 0x43F8(0x00B8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FF4A01EB4376B9C097826D90E979F921;// 0x44B0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F37C53AB47B80DC842B32ABBA88565F0;// 0x44F8(0x0128)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_02B620884D5B49531598F8A015B71E5A;// 0x4620(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1A9746844CE057967CCF1FB00A82C245;// 0x4668(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_496E5AAE416338249263298164733B05;// 0x46B0(0x00B8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4E1965104F01FB7E7C2259800E4A4742;// 0x4768(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54C1DC8141102EB0CD488EA99E89AC6D;// 0x47B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_852A2FB84476577D009C0E9DF2DF2F37;// 0x4820(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4E47E9F341D831795EC9D4A625DB613D;// 0x4868(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_04E0CEEA4B40D910C8BEF594B9D306B3;// 0x4940(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F6340EEF4B334102EA1765B454ED74F0;// 0x49E8(0x0050)
	struct FPlayerVehAnimList                          CharacterVehAnimList;                                     // 0x4A38(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBlendSpace*                                 IdleAnim;                                                 // 0x4A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace1D*                               LeanInAnim;                                               // 0x4A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace1D*                               LeanOutAnim;                                              // 0x4A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 AimAnim;                                                  // 0x4A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraBaseCharacter*                       OwnerCharacter;                                           // 0x4A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FAnimVehParamList                           VehAnimParam;                                             // 0x4AA0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Scoping;                                                  // 0x4AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x4AB9(0x0007) MISSED OFFSET
	class UAnimSequence*                               AimAdd;                                                   // 0x4AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SeatIdle;                                                 // 0x4AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAimAdd;                                                 // 0x4AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSeatIdle;                                               // 0x4AD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLeanAnim;                                              // 0x4AD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x4AD3(0x0005) MISSED OFFSET
	class UAnimSequence*                               Reload;                                                   // 0x4AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReload;                                                 // 0x4AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x4AE1(0x0007) MISSED OFFSET
	class UBlendSpace*                                 FPPAimAnim;                                               // 0x4AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFPPAimValid;                                            // 0x4AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x4AF1(0x0003) MISSED OFFSET
	struct FVector                                     MoveDir;                                                  // 0x4AF4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFreshWeaponStateType>                 WeaponState;                                              // 0x4B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CH_Vehicle_AnimBP.CH_Vehicle_AnimBP_C");
		return ptr;
	}


	void CacheAnimVar();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_SequencePlayer_AC115C8144619180B301EE8F801A790C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_CE4BA39D4C7F19165F4DB8B7A0D7F94A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendListByBool_26B6A3534BCEE7D2DCBA0E9FE5FFF52B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendListByBool_C9926B9D4EBE53267F40FD8BAC9D129F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_SequencePlayer_2C9117AA4EDAD8156C64238FF6BD7AC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_ApplyAdditive_DA1A3D604FD374035AA2F3909ECEA9AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_F93CA3814E81E5DEC54D2E86728D481F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_88DFF5EC42C09A41B645F38119B680EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_ApplyAdditive_251ABF2E4E9CCC6B0438DDA840EE3BFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_ApplyAdditive_A2F630CB4C8E98F3570445ACEFCD598D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_ModifyBone_D1E3C446404DE1AC4DF28AA13E0C740A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendListByBool_7B70D78D47A2314B240BCC9778CB8851();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendListByBool_2143A2DD4E5AA3AB92560290DCB7D065();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_F9D6CE6B4ED93A200167309A33B249E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_D372725348DEF3391C0E52AC2D2B7691_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_29CDC78644C8455BFD9A5A977D698317_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_SequencePlayer_87F7E55E43E6C2DF988F3B8E1CCA2386();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_5F3BD12346A05E88E7326FA0EF0149ED_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_A85B0A9744CA95032B0C6B87FFA5AA65_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendListByBool_3A3FE796429D80EC39B0F0850F8F0E95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_F7D073A24238925FD8A1E2949D2F752B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_ModifyBone_3B7E21C343F6EAFEA2EAB5BFAD85130E_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_1A5BE3CB42BC1BB23797F8AA181AB2EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendListByBool_159ED0144F99E5B6D02D438BF8F03C25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_105206C446AF5DF41BF0F9B28AA9620A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_ModifyBone_496E5AAE416338249263298164733B05_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_2B2F40C84073B51E1FF00783AD743B16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendListByBool_D996FF9D44BFCFD776BAE29C641AC833();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_B72E39904BFE86EFF581B99DBFAA277D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendListByEnum_0D3E48374CEBB12FA63DA3AD79D18660();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendListByBool_BFF9D72B4D16FECCACC122959D7F26C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_ApplyAdditive_946D383C419A8E3FEDA2ED93DB33BA75();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_SequencePlayer_1F0E37EF493A6208DDDAC9A5D225B578();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendListByBool_4B29C80A4D6ADAC71096A0A70F5AB88F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_D372725348DEF3391C0E52AC2D2B7691();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_29CDC78644C8455BFD9A5A977D698317();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_AD3159F54DB1F7350B262BBEF69F8FA0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_5F3BD12346A05E88E7326FA0EF0149ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_448592B2467508D5846ABEA1D09AFD7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_A85B0A9744CA95032B0C6B87FFA5AA65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_ED1AEA574B32DD1B6806F88AE16D7F86();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_ModifyBone_3B7E21C343F6EAFEA2EAB5BFAD85130E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_D3E49F1E4B438514773ED2A88B55A2D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_F37C53AB47B80DC842B32ABBA88565F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_ModifyBone_496E5AAE416338249263298164733B05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_EA36EF144EA9A1570569A59CEF29E1B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_4350244743C9D895258560BB9CF6BCAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_0D301FFF4F644815BBF34FB92F0100F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_1E3296FE41E862383EE564BA0143F9E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_17213F834B8D1ABE70CF7CA7AF76EAE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_TransitionResult_CD297B2D4BFB3B1225CCE49AEFBC4EDD();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Vehicle_AnimBP_AnimGraphNode_BlendSpacePlayer_075F27D641BFB284F94DF68E0B25DF93();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_CH_Vehicle_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
