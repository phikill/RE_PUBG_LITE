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

// AnimBlueprintGeneratedClass CH_Base_AnimBP_FPP.CH_Base_AnimBP_FPP_C
// 0xC80C (0xD13C - 0x0930)
class UCH_Base_AnimBP_FPP_C : public USTExtraFPPAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0938(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_819F09F24B8759F570E955ADADC4B577;// 0x0940(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_421A3B29443A83E13F2F338ADDE00C94;// 0x09C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A8D51968446B29D2E4CA13A552E6FE2B;// 0x0A40(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FEBB273249AD7BEBAA996AAFC65CD63F;// 0x0AC0(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C819C87942CE29144A226E9DAE666B07;// 0x0B40(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D2010A6A461D3CC11D7EA3A0D294A1E3;// 0x0B88(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5856453D43E3F6C42CACA89EB5773A36;// 0x0BD0(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5A09D4CD4499ED1623F90580B78136B7;// 0x0C88(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8B75378A47E84F2A75ECD89A5BA7DF35;      // 0x0D68(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_09450CB44CDFB86B24A84685E1088627;// 0x0DD0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_87C135A74DA0D9613D5A0BA41083C15F;// 0x0EA0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_78BE94DD484D179AE25A37A7D649371C;// 0x0EF0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9A99440443051897EAAE9F8F5279BE39;// 0x0F40(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DA98F00E4D642B3D0F62EE8BBC1FCFD3;      // 0x1010(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0AB6F00A40491C1B801450BD527AF2AB;// 0x1078(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45243D90403DAF64C1195B9188EEBD27;// 0x10C8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B60CF65B418159CC6BA8BEB27F3023C9;// 0x1118(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0BDCAA3D40FA1D6E91F949A9FEFBD677;// 0x11F8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7CE6FB854DE942A60E51DCB9B202397A;// 0x1248(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C1F552F84E34D5907EC2E49727F8ECA2;// 0x1298(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9F3788814538D7105B4E5685C614EF18;      // 0x1378(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03F73B6B491BA1FAE7B6D2855ABA584B;// 0x13E0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F446CB9E4678C2DE62B6DAADC101A8D1;// 0x1428(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C00A85E24654F9CF733C1A8F0EA13B0F;      // 0x1478(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_07C3C52D4EB58633F7B11DB578BC069B;// 0x14E0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CC3A0C5744313092EDEEBCA005C2BCD5;// 0x15B0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_66B0AFDF406406A035EB1690B5C0E3CB;// 0x1600(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72CFEFD94599FDDDEA8CFE8CEDEB7A79;// 0x1648(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F63159824EE0077181DC0B9628F651C8;      // 0x1698(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FFBEE9E444A540A4B724F4A86EB24AC6;// 0x1700(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AE2972974FE126C67DC594A591A7E0DE;// 0x1750(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F8A366DD46B426919C6A069A3CC6F71A;// 0x1830(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F30B9F0549C1B4A45A137FA01ADD1D10;// 0x1900(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AAC611C244AE13AD1DC167BFC5D5BD4F;      // 0x1950(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FF1AB76C4CAE7157264F73908AFB527E;// 0x19B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_665C9EE54EA0FCBD09CCB6A4465234D2;// 0x1A00(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B6B51C7842A8453AEE86DB970DCEAC16;// 0x1AD8(0x00A8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B35D23F94F528AA9F663D7924C22F00F;// 0x1B80(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_42C099994986128B874B32A0788CC231;// 0x1CA8(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0541E61A427C4C1D64482DBBCD776791;      // 0x1D78(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_42A3B4BD4BCDA3F01820538D20D5C7B1;// 0x1DE0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1F75AFB644F8B55A4415308052960AAB;// 0x1EC0(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E4E69E9546D8E4C5961D71A374D33A28;      // 0x1F68(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F8A3BA194F7E13FBE8877C87A2C43DC3;// 0x1FD0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1FD1F100441CA47072E9E0B8D78944DD;// 0x2078(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8B28004F48879ADE7DD548B7A9E926EF;// 0x20C8(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_930014054BACBC0EC9D3E4BC9BDA5488;      // 0x2118(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_83497C7E4F602E53705003AE8A2AB5B5;// 0x2180(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_19F9FF324E25D0D87570458FC6184E27;// 0x2260(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B4C57B7B4053DD5CCF4BE893B8D06763;// 0x2308(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73A9A7244E6153039DE2639D7DCA1664;// 0x2358(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AD6DEEEF4618C5CAAED3989C0EFD5437;// 0x23A8(0x0050)
	unsigned char                                      UnknownData01[0x8];                                       // 0x23F8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D7AB36A54C39E47B4419EA814B563ED7;// 0x2400(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F92567864A00F33DA7C6D2AA9F5FD464;// 0x2480(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68AB701B4EE1839E7140C9A514899B8E;// 0x2500(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_07EF437043EC397A134518B6F93692FC;// 0x2580(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CEECA4634065E0331B7BA7830F76CA46;// 0x2600(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_300CAB39471BE487D09D24839225CFA9;// 0x2680(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_825E19634077ED3E71EC6793C5885265;// 0x2700(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_633C86074C087C0687F2A8B0629CD8C2;// 0x2770(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44DDE51F49C44C6CCBB976984EAC1F3D;// 0x27B8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1416E7C84F0EC5454B5627B0DD3164A3;// 0x2828(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_ACC64C9046361A883E98F48E85DAC422;// 0x2870(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_202F07A04318EF14DC688EADE7D29E07;// 0x2998(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C999D0E34A4783FE7E06FFB3DFFED2B1;// 0x29E0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3B077B9348DF739F8AB11FBBAD5AC2B4;// 0x2B08(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D64F10BE470E4B5610C5B7A7D2A00C5D;// 0x2B50(0x00D8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_090BADD147429234668553B57A682F52;// 0x2C28(0x00E0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0FE5360247BA7FC6F843C4925433896A;// 0x2D08(0x0280)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5A8B24D0408A61460D41488E372590A1;// 0x2F88(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_036B9E474B01E19B389142AA4D7DD2FF;// 0x2FD0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1B64891E469841346EB671B361A3ED26;// 0x3018(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4D30A90D41D729F86D84E7BC19E0789F;// 0x30E8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1EC95DD24EA75D98B8AC5F86A5A393D6;// 0x3190(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_90954B954AD37D87AC37E799F80061BC;      // 0x31E0(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AEB4F75947D3EAEC1ED8B5B77CF80166;// 0x3248(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F469D23641C3316F2660BBA735743CFC;// 0x3318(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FAC447EB413889C061A892867867D1EE;// 0x33D0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_97B75FBB4AFA87411533758E4CE32BBF;// 0x3418(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_88666B8F4335F71A8327FBBD27D4D3C7;// 0x3460(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0805C7E54A191272CCD6269D2CFFC11B;// 0x3508(0x00D0)
	unsigned char                                      UnknownData02[0x8];                                       // 0x35D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9B63E2CE49F58C62D9009EB98C7F5CEA;// 0x35E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_892CC1204AFFA8004F40D2B888868D7A;// 0x3660(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E49897FB4E25E134E6DD639B357CC642;// 0x36E0(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_09119569420503A81D99D9A97CF04D21;// 0x3760(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_472D58964288B964717C75A613289113;// 0x37A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6CCA24F34AE462D815D54B836781498E;// 0x3818(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D57EB8154C29F05ADF6604B3EBCC7C94;// 0x3860(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3BA00E5F4DEABA9DEBCC8C9632E7E462;// 0x3988(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5E9618944B293E313DFFA5A6975D1CA8;// 0x39D0(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1319D52F43DC628A5B031392F77A1C48;// 0x3AA8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8E3A0CDA4711EA4318EB0CAB019C5AE2;// 0x3AF8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_904BA98247E85B848DE69BB0106F2DC8;// 0x3BA0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72C0E1C74054CE7423DE77BCA9ECE5D8;// 0x3BF0(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8477C74D418220CAD7D13BA60A762F5D;// 0x3C40(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_492797D54E4688B5037B8191E95A9E19;// 0x3D20(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_24808BDA4FF0FC1035817CB4E9485ABD;// 0x3DD8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_205CDDF14BC64DC6D084B1AEC70E0036;// 0x3E80(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0CF3CFCB49EED48CD55E49AD498EC7A1;// 0x3ED0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_75CC05A8468E0D313313B19D79608A55;// 0x3F18(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50A69A5D4C7AE0E1159E3CB53C7A9F7B;// 0x3FC0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3920DE1142E8D46EB27204ABCF4692AE;// 0x4010(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_45965DB041EC175D5533B59BE958C1AD;// 0x4060(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7F25F1284940658101F2F6BD78293A41;// 0x4130(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2EFE791C44BDB5EB7ED731BA97E9A019;// 0x41E8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B85499014B7F0D0F5A9881915789C560;// 0x4230(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5FD5B58F4C152579642EBC983B43CDD0;// 0x42E8(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1C7086C24ABEFE9DDCB698B038145234;// 0x4338(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8CBEF898422E8D1ECBB04BA40011EE24;// 0x4380(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_67FEEAA94592A3FDADF1458D866B1B42;// 0x43D0(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2AE57F0D4E7A8E755C608CBB184CD4EE;// 0x4420(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C236D63A4A638EF2743116AA6B97A1A9;// 0x4468(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AF00228F4BF566C5FE8BA5992C22A166;// 0x44B0(0x0050)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_675C7D5147D81B2595B5B1B02E39B134;  // 0x4500(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C574093147411813960C67BE63C3C35C;  // 0x45A8(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_63FBC5F94990CB868D408A90C3FF0640;// 0x4650(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_54A815EB441D552FC888E0A7EFD60D9C;// 0x4698(0x00D0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3C251CF744BDB3B41C964C886F762551;// 0x4768(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_44B8C86D4E2659C79CA74DAD3E32112C;// 0x47B0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C9065E564BC6A8FF2246EF825B9A9471;// 0x4868(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_32F1507841B59DE55363A293CDA128B2;// 0x4920(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B44625804B3AC9D29154C4A5437E69F4;// 0x4968(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AF43ED364F40B08AB6010A8B4B10D88C;// 0x49B0(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B95145304D6AF5EA821D2DBB0813ED01;// 0x4A68(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_36E433984933A526008E8589C19D2D84;// 0x4AB0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6C05D43343749E17F85DF99E2CA16A71;// 0x4B58(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_815095F4450DD2BECEF6A7900AF5790F;// 0x4BA8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2A9BB1A64CB5F74C6004EABF1052A0CC;      // 0x4C20(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C923F8EF4FEBF6FCE52801A303D19111;// 0x4C88(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_272A5F6F49E21BB9A63DA48C2AAE550D;// 0x4CD8(0x00D0)
	TEnumAsByte<EFreshWeaponStateType>                 __SUBINSTANCE_WeaponState_01C5DDE6436BAD98D4DB43A180B7FA5E;// 0x4DA8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x4DA9(0x0003) MISSED OFFSET
	struct FVector                                     __SUBINSTANCE_MoveDir_01C5DDE6436BAD98D4DB43A180B7FA5E;   // 0x4DAC(0x000C) (IsPlainOldData)
	bool                                               __SUBINSTANCE_Scoping_01C5DDE6436BAD98D4DB43A180B7FA5E;   // 0x4DB8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x4DB9(0x0007) MISSED OFFSET
	class ASTExtraBaseCharacter*                       __SUBINSTANCE_OwnerCharacter_01C5DDE6436BAD98D4DB43A180B7FA5E;// 0x4DC0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_01C5DDE6436BAD98D4DB43A180B7FA5E;// 0x4DC8(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C2F5FAB844F07153120CF1887AA75B43;// 0x4E90(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C463B8784BF39C6AD680A0AA7BB0A1DC;// 0x4F38(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_481BB0AB4C238738AEA47D9B0E0BF39E;// 0x4FE0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_468F0F4D47C01D514BF4AF9D8C2F1EC1;// 0x5030(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_98D4D2814E4CE5783A4481B69F4169EC;// 0x5080(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E11585634AF1D9A7B82D8782A8DFA9DD;// 0x5150(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CCF8541C41497390EA8738908A84AC2D;// 0x5278(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AE41320C4591013256C4BF997A499BF6;// 0x52F0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7FCBBE074541DB5B4CE664B2CC31F2FA;// 0x5340(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_306C714A460600E880B0B9B464C3E19D;// 0x5390(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7DEC5FB140B7EE77587A04A7FD628293;// 0x5438(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_70195F71479F9CF8CB78EB92534187FB;// 0x5488(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8B78B4C442058A2E9FEAA8BF05B1E136;// 0x54D8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_017235CD4DCA17D0A37E6EB416AC84FD;// 0x55A8(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2A4486E645A2C6F9C9BE539AEA7550C9;      // 0x55F8(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0F7A1F0D47833347434D518C2D92448F;// 0x5660(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FA446BF94104ABB02DABEF869AFA3B40;// 0x5740(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61A8471C436A3791A4E710AB85850F93;// 0x5790(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3582F5E04EAABAC250E40E8428574DB9;// 0x57E0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_466215F5493DAEDAA10A0EBDA54C62C5;// 0x5888(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5113D6BE41405B52167B38814759817B;// 0x58D8(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6D09FE1040F5F3F11EBEAAB83603A196;// 0x5928(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_64AF4C174DCBB1FB66BEBF9125920B3A;// 0x59E0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_805A13DE4CF9CBA6BF1C46BE61341386;// 0x5A28(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8A18D2724ABCF5910E147F99626CF982;// 0x5A70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D0E8CFE4E00CAEC967D1FB66F01E84A;// 0x5AF0(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9EC4DAEE4268A22A5BC917A942D1A88B;// 0x5B70(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EC728E674B05DF907ECB5DB98C437885;// 0x5C98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53EE22CE48622AA28A5091B3DCD69AF8;// 0x5CE0(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F6CDBF024AD756F06F3F1792FFC90157;// 0x5D50(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_893BFC40474E0BC7EFDE4B9B929D9FBA;// 0x5DA0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_506039ED4B1693B39B9E3AA062DB4858;// 0x5E18(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DAEA96404C4820FC6D1837A00CB09617;// 0x5EE8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7F68EA174B13D243AC28639E370C5963;// 0x5F38(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67702E4143A2FE8BC144A383E6D0CA53;// 0x5F88(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D405EBFE49EA9DD32BC07C8A3A91B628;// 0x6058(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12A37B5D43E700A5BE321DAA201C80E0;// 0x6128(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AB3599374CBC5835B263CEA04664028D;// 0x6178(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DB4E0225444178E89F676F9CFB510C80;// 0x6248(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C23EA9E140CDC59C31DD0AB98FF15488;// 0x6298(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_14B21BB545EA6DE7905CDFB656273693;// 0x62E8(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1E7660CE41FDA90CF8D49594D40C8EA3;// 0x63B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_323F182448C1586AD14FC082A19ECD5A;// 0x6400(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_595985CC4B97B08651806BB05982BDB2;// 0x64D8(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0AC7D8314626FAF7E01A1683E61E6CE7;// 0x6580(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CA36BE8B48FEDE53D233ABB9BC484202;// 0x6628(0x0050)
	unsigned char                                      UnknownData05[0x8];                                       // 0x6678(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_C2B47DC343A5282259743AB730208727;    // 0x6680(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B47CA1104BB42AA2F37668A9A27A1B44;  // 0x67F0(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_C048745241F8230B485994A08F05D90A;  // 0x6898(0x00A8)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_AB8AC3D246F5C32AAB188697840D721C;    // 0x6940(0x0170)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A4B43E444744C0AE1763C4AB91241AF6;// 0x6AB0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F9211E9940AE57D5FB393D9EE7CC7DAC;// 0x6B90(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_74E9BB944295E589F9BE0489FC47980B;// 0x6C60(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D837D11B4814B6B8E5D46A895DD8D3BE;// 0x6CB0(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_59CA64A547A62A5CF1C13D9751676CF1;// 0x6D68(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6E88BBDE4C55AD3A491EFDBB0FEE1A89;// 0x6DB0(0x0048)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_4F1EE2884EFDFF9F5616B78365EA6602;// 0x6DF8(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_5CD43D1144745383124E4ABD3421DF18;// 0x6E70(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AF3D6A7D441A33FFAB4E9E97AFDB0DDE;      // 0x6EE8(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C9B8FAF14A663C5913FF869577FB7744;// 0x6F50(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A3E88D0C4A2307025B0981BA56F45A79;// 0x7020(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F5DAB8394703A032B8D1BE8BDDE89524;// 0x70F0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8619BA8F4FC1BCCC7307E399DED8EA10;// 0x7140(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8557AD6B4FD93EC99D908F89F773C651;// 0x7210(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6E564B8242A54FC85605AC82AF20E90C;// 0x72B8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_44B13BBE4A92DA293FEE7198BFE6F7FC;// 0x7308(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6B7A7C744DDA28A9B7D82B855E7C4643;// 0x7358(0x0128)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_B125729E41D5D3B9A482D99BE3E3BDB5;// 0x7480(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6AF499D641F7D6717461B1B25DE91E07;// 0x75D8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9D95A6F445088E0640BE3CB5D2C72B85;// 0x7680(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F12843194710A1A3A300408A48CB8BE6;// 0x76D0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3C2DA94743D08446C7404BAD65101393;// 0x7720(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0788CDEC469496B34C550BB35E33E124;// 0x77F0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2B55C06044D7C1C374136DAF3FB32BA0;// 0x7898(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0C9AEBEB48AA99000D3461802CAD57FE;      // 0x78E8(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_191554F04B478EDA987EF397FCE1405B;// 0x7950(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2574B94D40B12D48C2FC43BBE402830D;// 0x7A20(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3440059646342D802277119F38DEE8A2;// 0x7A70(0x00E0)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_6BF44B3B4937456ADE23D99F91DE8FAE;    // 0x7B50(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E8C08BE245498BDB7FF075AE40A3B54E;  // 0x7CC0(0x00A8)
	unsigned char                                      UnknownData06[0x8];                                       // 0x7D68(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_E580E2E84B5E164420E735BF64E97938;    // 0x7D70(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_74C988984A924B34E14322B8FCD6A647;  // 0x7EE0(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DA07F2584530BA531A8CC1A6C9A9128B;// 0x7F88(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BEA114B9473E08DE18A870BFD21CC2FB;// 0x7FD0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7611640E4DC98C7553A69588D5EE2434;// 0x8018(0x0128)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4CCD1E6641E226B269D6F7A5E1702A12;// 0x8140(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F237FF654A2592B4262F10B2FBA2A596;// 0x8190(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_806A949D457D3B43F0E89386A3751DF2;// 0x8238(0x0050)
	unsigned char                                      UnknownData07[0x8];                                       // 0x8288(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_AF0FAD634170EAC392FB349367EA9CA6;    // 0x8290(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9307917248960F91175B19803BF13FA1;  // 0x8400(0x00A8)
	unsigned char                                      UnknownData08[0x8];                                       // 0x84A8(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_50EB2B684202ACCAA28B939BD1DA0D2B;    // 0x84B0(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_F0DFEE3441FAFE8F4D3E1C93E90E7AAC;  // 0x8620(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8004155045BA2A5F90E2A89CAACE559F;// 0x86C8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D67F7C124446C3D6A5720AAB05F00A12;// 0x8710(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DB708EA24B4B4D88073E3ABAF27A1151;// 0x8758(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B90E927D446408B9B4D4779FC3C27A22;// 0x8828(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_625F983D43E69A62C6C9A4BDCF5182E1;// 0x8950(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_610375AE4D1324C30C8EA99539B53305;// 0x89F8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_047F60AE4EB967280F438EAB04F56FE3;// 0x8A48(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4A32F6204D173E54CD3E529289886246;// 0x8A98(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CDBE013A4E6931B59AE0E18C8234F0B4;// 0x8B40(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_35150772460AF495ECDB428358160A02;// 0x8B90(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_95FADF424416C4C4AF1718A32B853E64;// 0x8BE0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45FCC6DB4992E2017807BC8F7DF27E6F;// 0x8C30(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C32EC64145083AED52A4848EDC966FCF;// 0x8C80(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8B8541C14352FEFADAB1DFB17BEFDC3D;// 0x8D60(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_ABC12BC546187B8B031320936F794A73;// 0x8E40(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_CACDD928496D5D7E382D86B93938739D;  // 0x8E88(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E37D142340DC06ACC5F7DB86A905D242;  // 0x8F30(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3B46ECDA4161499D1C48C38F754EFCC7;  // 0x8FD8(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_55F806154759889094D227B6E8F52A63;// 0x9080(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9810FBB444463E5B63906C842D7BB87C;  // 0x90C8(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5A32C3DA45441C8D5622A798007F1732;  // 0x9170(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B7A1CD1E497E21122C1F809A736810BD;  // 0x9218(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8EEC868040A11426BAEBEA86DF2D87B0;// 0x92C0(0x00E0)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_FD0AACF44CA65D2F43629280A441F719;    // 0x93A0(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_EF30125F47FAB54A9E3A4DA6F74ADE18;  // 0x9510(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6BFE411B4D9ED84CA54D449ACAA51E81;// 0x95B8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_381B7F2B4A3B53C41FD82A86C697D4DE;// 0x9600(0x0128)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A31A98AF40CB92AC2FFCE88BF5A564BC;// 0x9728(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_73BC546D4CB440F015A88F91873FBCF8;// 0x9770(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_AA8803A44B316CD42375698CC900B2A5;  // 0x97B8(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3EBAB19F4C3972214B564A92700DE9B7;  // 0x9860(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6B32063849148131AF6CF3A4A401236E;  // 0x9908(0x00A8)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_5B13067C4AE04324D3A9E4ADE9469462;    // 0x99B0(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_20E3D5894F11485D7D51B6B8F1D995AF;  // 0x9B20(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4E8CDAA148B67554CFE81EA300E7D8D7;// 0x9BC8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CFEB88CC413F24E4B023B487A4EAF537;// 0x9C10(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_90DBB976431BABC40CFF59A4EFC07329;// 0x9CE0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_94B23A06461C48743E830B82687CF73F;// 0x9D88(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7CB31CA14085BBA399E640B1CED6CCF9;// 0x9DD8(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2F5408924B75534A2DCFABADB50F5B65;      // 0x9E28(0x0068)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE6E9CE048F55961847E299CDFD2BF78;// 0x9E90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18DF957E49653361D740C28776127FE3;// 0x9F10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB950BCC4AE538F8FB55ADB162DDCD9B;// 0x9F90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33CAEF734C1B2FDD2C3F8F939AE5D994;// 0xA010(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98BEFD3B4C6702BC107B1D8C1DDF235D;// 0xA090(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54D4E06B4D484DDE77E9DCBC6C63F7A2;// 0xA110(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_992D3B10440FBDFFA650279C8B8BFD8C;// 0xA190(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0990237449BE1A5E396733B8DCCA9AA3;// 0xA210(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A91A5FB644DAA8A9B57A72BA513218BA;// 0xA290(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_97904664454AE8B093856DA490A958E6;// 0xA360(0x0070)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_B48DDB0D4ACCA56FB870199575598C68;// 0xA3D0(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_679CBD8F4B05BB3F4CDB5A8DAD9423FD;// 0xA448(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F05B95C1427BA2E106AF75BB22DBEAC5;// 0xA570(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C521F2864681BC9029529483A64E22B2;// 0xA5B8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_837B6A8B43C4BAF03CBA208D18B7EDF8;// 0xA628(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E1F698AA48C40FB9CB1305990FF90793;// 0xA670(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_629F56724891ABE9B2EAE7B0638FCCEF;// 0xA740(0x0070)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3FDA66C04319D66660E4FF94D1337344;// 0xA7B0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_16D532574DEE83D10FC06A97813F7A21;// 0xA828(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_832CD26D40478412E670ABBE456892DA;// 0xA8F8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9C6E83984DDDB762659B40A24C6307D9;// 0xA948(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64EE56634EB186BF3C4BB1B122FB6EDE;// 0xAA28(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6C97B5224CCF3B9F2CA81494ADFF6076;// 0xAA98(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3ABEFDCB47415D1C8881E383CA1E53DA;// 0xAAE0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_047DC4634026CAA50095C8AA74B14336;// 0xABB0(0x0070)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_51B952CD4BD020AFE51813BA4BBA982B;// 0xAC20(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F5F256084E31E21A8F2D2EA60C41857B;// 0xAC98(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1915AC484B467C670C66FEB6B2D7BE47;// 0xAD08(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F8989A4D46DF2DE3D867ED8A3B587727;// 0xAD50(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1D1619304165535254FE468974232424;// 0xADA0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_71BCB8BE45CEA9CE3D9DA586B123E332;// 0xAE10(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_110DCC724A631E760713D1B52CA921E2;// 0xAEE0(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E86F19AB472ABA0D9844418197C16F89;// 0xAF50(0x0078)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_50C042C344CD51B9F838F191E62AF98C;// 0xAFC8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4296BD7F47C64EE7F5364EAEDF70BE35;// 0xB028(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0DC75B874BD226860A5D4D8CE8FB68E6;// 0xB070(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BF4FEF514D0F1C786D1E69BE642DFC54;// 0xB148(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_595CCF8B4C41C86D850280ACD4ABF193;// 0xB200(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_312C6ECC4FC42ED635F359BDE704AE72;// 0xB248(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DE9AA8B44BD08C0A749535AFA3D9DA9F;// 0xB300(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_867EE5C040BBD1F7085E638925574828;  // 0xB348(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0F36AA4F4511BCC83787C7AA6858C5AD;// 0xB3F0(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A55C09D24011CCA399023EB7BADC864A;// 0xB4C0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E776AA9C4F7AEE120A783EB7C82C5B6D;// 0xB568(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C3BD126448F983C946BAFA9F366425B8;// 0xB5B8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_46395093484EADC3BFBC6AA48E7EA683;// 0xB608(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7861BF094C1557516B7B63B241B41A06;// 0xB6E8(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C52493B345A09529C6A969A3224DE043;// 0xB738(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_95CDCD624D253B73546B78AA79582BF4;// 0xB7F0(0x00B8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6BCF934D4EBF2FCB9E071FB2FCA58B63;  // 0xB8A8(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EF36C0594E4AA1A641A0E2BC453783D5;      // 0xB950(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D2C29BB04E063E08C955DB948D8795C3;// 0xB9B8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7BA2EC7145770C8E211CA086BF848A30;// 0xBA00(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B81669574F00FFD3CF3B258F1AC332F4;// 0xBA48(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D5455A3A4BCBDE5E4F82AC969B0AE6D6;// 0xBAF0(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A34BF40449ADA86907E640B39C7E081F;// 0xBB40(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EB5DB00E4EA0049F4828A0B3814DE3DB;// 0xBB88(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C474742D4CAE16B162843CAA8455AEBF;// 0xBC58(0x0050)
	unsigned char                                      UnknownData09[0x8];                                       // 0xBCA8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D4553EFE443296D61B14DDBEFF4F3BAE;// 0xBCB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F791CF24EF2996EDE48BD862C4203A2;// 0xBD30(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_39E12D0E47A07F80212382BB8BBD1140;// 0xBDB0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AF0E6B6A4835FE6937105C9A4479DF2C;// 0xBED8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3888782A4BFF19D4EBF4578C577F506C;// 0xBF20(0x00D0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_962335854178D5584BF9BCA218CC3976;// 0xBFF0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ED6797E94107E1F1AEA34097A9EFE8CF;// 0xC068(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A9119B9C497FC13473C3639A1FDD88B4;// 0xC0D8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E5515FD241FF0B71714F3E91D95917E9;// 0xC200(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3B2E562D4515E606AA40D682169B9A8A;// 0xC248(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A6A3349C40C4BC3C6FF7AE99CCDDFEB4;// 0xC320(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2E4125A64C973D74610B56B35C2BCF1F;// 0xC3C8(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DE5839BF4A851FD3AF3B7F9BD2B5CD3F;// 0xC418(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_76877B0F49DF675F94F420A34F1275D1;// 0xC460(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CEEB0C8E45AF1A7891EBD2A1B10D0E4D;// 0xC508(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B90B9E28479C765C4F5559BA77AA31D9;// 0xC5D8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A3D713964A6B6218AA71C7A21FB94065;// 0xC628(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C8B8B82143F394073FDDFFB2969971E7;// 0xC678(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EAE672BC4C1E4F6D24F64C9F069B9016;// 0xC748(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_546FBB304CDE20FF90397DB6B5A211A9;// 0xC800(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6EF8F97149CB155ADB9CE4B78B32B58E;// 0xC928(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7415427742B27BBD2EB855AC1F02E7E8;// 0xC9D0(0x00D0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B13AE56241768FF5D802CE977E3C626A;// 0xCAA0(0x0078)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_6DDF13FF4976A1BFFD40EBA5AC2386EE;// 0xCB18(0x0158)
	struct FAnimNode_Root                              AnimGraphNode_Root_BEB82FFE46C1F3FF92C807AB3B424624;      // 0xCC70(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_05A6D59C41C21D5B982C079A7BC7EB46;// 0xCCB8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_473233D64E034E92C7E8E6A74883B754;// 0xCD98(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2D1FF0D44552CC612A84219CCE59B87A;// 0xCE08(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2F270E6D4C1A4FDAE9E730B77ECD342C;// 0xCED8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_35B0809343CA50CC485ED7BF602763E8;// 0xCF28(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_586947A046C412CCD68EE18EC8CA5B4A;// 0xCF78(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9303E2764F1819BCAD04ECA2AC606864;// 0xD020(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_440873C740DB3E9E771BE38B5F0631C3;// 0xD070(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C5F737614DA901C50CC3F4BEB19FCEB3;// 0xD0C0(0x0050)
	float                                              MoveRight;                                                // 0xD110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveForward;                                              // 0xD114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimRate;                                                 // 0xD118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandFavoring;                                             // 0xD11C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandIKWeight;                                             // 0xD120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAnimVehParamList                           CharacterVehParamList;                                    // 0xD124(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CH_Base_AnimBP_FPP.CH_Base_AnimBP_FPP_C");
		return ptr;
	}


	void PlayBoltAnim(bool IsPreFirew);
	void InitAnimVarDefaultValue();
	void PlayDeadAnim();
	void RefreshPeekState();
	void HandlePlayerAnimEvent(const struct FName& Msg);
	void PlayFireAnim(bool IsPreFirew);
	void PlayReloadAnim();
	void HandleWeaponStateChanged(TEnumAsByte<EFreshWeaponStateType> NewState);
	void PlaySwitchWeaponAnim(bool IsEquip);
	void PlayPickUpAnim();
	void PlayPoseChangeAnim(TEnumAsByte<ESTEPoseState> LastPose, TEnumAsByte<ESTEPoseState> NewPose);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_18DF957E49653361D740C28776127FE3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_EB950BCC4AE538F8FB55ADB162DDCD9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_AB3599374CBC5835B263CEA04664028D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_33CAEF734C1B2FDD2C3F8F939AE5D994();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_98BEFD3B4C6702BC107B1D8C1DDF235D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_D405EBFE49EA9DD32BC07C8A3A91B628();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_54D4E06B4D484DDE77E9DCBC6C63F7A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_992D3B10440FBDFFA650279C8B8BFD8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_67702E4143A2FE8BC144A383E6D0CA53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_0990237449BE1A5E396733B8DCCA9AA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_A91A5FB644DAA8A9B57A72BA513218BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_679CBD8F4B05BB3F4CDB5A8DAD9423FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_506039ED4B1693B39B9E3AA062DB4858();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_SequencePlayer_C521F2864681BC9029529483A64E22B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_9EC4DAEE4268A22A5BC917A942D1A88B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_E1F698AA48C40FB9CB1305990FF90793();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_16D532574DEE83D10FC06A97813F7A21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_SequencePlayer_64EE56634EB186BF3C4BB1B122FB6EDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_3D0E8CFE4E00CAEC967D1FB66F01E84A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_14B21BB545EA6DE7905CDFB656273693();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_3ABEFDCB47415D1C8881E383CA1E53DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_SequencePlayer_F5F256084E31E21A8F2D2EA60C41857B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_8A18D2724ABCF5910E147F99626CF982();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_6D09FE1040F5F3F11EBEAAB83603A196();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_AE6E9CE048F55961847E299CDFD2BF78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_CFEB88CC413F24E4B023B487A4EAF537();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_71BCB8BE45CEA9CE3D9DA586B123E332();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_SequencePlayer_110DCC724A631E760713D1B52CA921E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ApplyAdditive_E86F19AB472ABA0D9844418197C16F89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_RotateRootBone_50C042C344CD51B9F838F191E62AF98C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_8B78B4C442058A2E9FEAA8BF05B1E136();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ApplyAdditive_CCF8541C41497390EA8738908A84AC2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_E11585634AF1D9A7B82D8782A8DFA9DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_BF4FEF514D0F1C786D1E69BE642DFC54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_0F36AA4F4511BCC83787C7AA6858C5AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_C52493B345A09529C6A969A3224DE043();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_95CDCD624D253B73546B78AA79582BF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_EB5DB00E4EA0049F4828A0B3814DE3DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_D4553EFE443296D61B14DDBEFF4F3BAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_7F791CF24EF2996EDE48BD862C4203A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_98D4D2814E4CE5783A4481B69F4169EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_39E12D0E47A07F80212382BB8BBD1140();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_SubInstance_01C5DDE6436BAD98D4DB43A180B7FA5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_3888782A4BFF19D4EBF4578C577F506C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_A9119B9C497FC13473C3639A1FDD88B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_381B7F2B4A3B53C41FD82A86C697D4DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_CEEB0C8E45AF1A7891EBD2A1B10D0E4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_C8B8B82143F394073FDDFFB2969971E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_EAE672BC4C1E4F6D24F64C9F069B9016();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_546FBB304CDE20FF90397DB6B5A211A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_7415427742B27BBD2EB855AC1F02E7E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_RotationOffsetBlendSpace_6DDF13FF4976A1BFFD40EBA5AC2386EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_2D1FF0D44552CC612A84219CCE59B87A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_272A5F6F49E21BB9A63DA48C2AAE550D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_LayeredBoneBlend_C32EC64145083AED52A4848EDC966FCF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TwoWayBlend_815095F4450DD2BECEF6A7900AF5790F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_AF43ED364F40B08AB6010A8B4B10D88C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_C9065E564BC6A8FF2246EF825B9A9471();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_44B8C86D4E2659C79CA74DAD3E32112C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_54A815EB441D552FC888E0A7EFD60D9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_B85499014B7F0D0F5A9881915789C560();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_7F25F1284940658101F2F6BD78293A41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_B90E927D446408B9B4D4779FC3C27A22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_45965DB041EC175D5533B59BE958C1AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_492797D54E4688B5037B8191E95A9E19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByEnum_8477C74D418220CAD7D13BA60A762F5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_D57EB8154C29F05ADF6604B3EBCC7C94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_9B63E2CE49F58C62D9009EB98C7F5CEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_DB708EA24B4B4D88073E3ABAF27A1151();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_0805C7E54A191272CCD6269D2CFFC11B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_F469D23641C3316F2660BBA735743CFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_AEB4F75947D3EAEC1ED8B5B77CF80166();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_1B64891E469841346EB671B361A3ED26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_AnimDynamics_0FE5360247BA7FC6F843C4925433896A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByEnum_090BADD147429234668553B57A682F52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_7611640E4DC98C7553A69588D5EE2434();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_C999D0E34A4783FE7E06FFB3DFFED2B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_191554F04B478EDA987EF397FCE1405B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_ACC64C9046361A883E98F48E85DAC422();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_300CAB39471BE487D09D24839225CFA9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_CEECA4634065E0331B7BA7830F76CA46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_07EF437043EC397A134518B6F93692FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_3C2DA94743D08446C7404BAD65101393();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_68AB701B4EE1839E7140C9A514899B8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_RotationOffsetBlendSpace_B125729E41D5D3B9A482D99BE3E3BDB5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_6B7A7C744DDA28A9B7D82B855E7C4643();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_F92567864A00F33DA7C6D2AA9F5FD464();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_D7AB36A54C39E47B4419EA814B563ED7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_42C099994986128B874B32A0788CC231();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendSpacePlayer_B35D23F94F528AA9F663D7924C22F00F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_8619BA8F4FC1BCCC7307E399DED8EA10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_A3E88D0C4A2307025B0981BA56F45A79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_C9B8FAF14A663C5913FF869577FB7744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TwoWayBlend_5CD43D1144745383124E4ABD3421DF18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_D837D11B4814B6B8E5D46A895DD8D3BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_F9211E9940AE57D5FB393D9EE7CC7DAC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_F8A366DD46B426919C6A069A3CC6F71A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_07C3C52D4EB58633F7B11DB578BC069B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_9A99440443051897EAAE9F8F5279BE39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_BlendListByBool_09450CB44CDFB86B24A84685E1088627();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_ModifyBone_5856453D43E3F6C42CACA89EB5773A36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_FEBB273249AD7BEBAA996AAFC65CD63F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_A8D51968446B29D2E4CA13A552E6FE2B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_421A3B29443A83E13F2F338ADDE00C94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_FPP_AnimGraphNode_TransitionResult_819F09F24B8759F570E955ADADC4B577();
	void BlueprintInitializeAnimation();
	void OnPlayerPoseChange(TEnumAsByte<ESTEPoseState> LastPose, TEnumAsByte<ESTEPoseState> NewPose);
	void OnPlayerPickUp();
	void OnWeaponChangeState(TEnumAsByte<EFreshWeaponStateType> CurState);
	void RescueingEvent(bool IsTurnIntoRescueing);
	void HandleAnimEvent(const struct FName& EventMsg);
	void SetCharacterVehParamList(struct FAnimVehParamList* NewAnimVehParamList);
	void AnimNotify_PlayShellDropFX();
	void AnimNotify_PlayMagOUTSound();
	void AnimNotify_PlayMagINSound();
	void AnimNotify_PlayBoltSound();
	void AnimNotify_PlayChangeMagazineSound();
	void AnimNotify_PlayLoadBulletSound();
	void AnimNotify_PlayCrawlSound();
	void AnimNotify_PlaySquatSound();
	void AnimNotify_PlayRunSound();
	void AnimNotify_PlayWalkSound();
	void AnimNotify_LandHardCameraShake();
	void AnimNotify_LandCameraShake();
	void ExecuteUbergraph_CH_Base_AnimBP_FPP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
