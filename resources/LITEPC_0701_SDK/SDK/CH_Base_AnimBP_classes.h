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

// AnimBlueprintGeneratedClass CH_Base_AnimBP.CH_Base_AnimBP_C
// 0xD330 (0xDC20 - 0x08F0)
class UCH_Base_AnimBP_C : public USTExtraAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08F8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61316C7E46619171838C3F963F405D2A;// 0x0900(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76B99DC84072BA3C0786C29E9E29BB65;// 0x0980(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B9202814EAEE5E8C6F84BBCA2B779F3;// 0x0A00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_895296D24A9F7A856166378E952F6B69;// 0x0A80(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D5DD345459030B576611CBD5A34BCF4;// 0x0B00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE062345416B64A640EA20B26FCCADD2;// 0x0B80(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CA6B8D5497E74E6F43CAEB6DDEFBBC5;// 0x0C00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1873132544FC0C24E6E9D78009A10781;// 0x0C80(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E88F58F4AB6EE52BA9A69BFC886550A;// 0x0D00(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_517F5CD5482BE5F3342A3C9735993B78;// 0x0D80(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4F9BC4314BE4DA84F20AD4A27AAC395A;// 0x0EA8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FFF262E84F13F43A0FDF44A2F37CA696;// 0x0EF0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9D9D8FCC441A7F05532D81BE6C797E4A;// 0x0F60(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E66A242940BFD90AB027798326F3DC73;// 0x0FA8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_89B2C1D7410B6DA93F9E748F3954C9BB;// 0x1078(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3F8AD8714C18C68CD3447CAF3C2C7CD2;// 0x10C8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_771B757847BE5BD1D142EF9DAC5AD141;// 0x11A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6E1D113D4A61E2CDD8D86989D7072B12;// 0x1218(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76E9869E4F8B8132BE70E98F846027A4;// 0x1260(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5BBC01C4E35430A5EA3F7B595589567;// 0x12D0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F36577154A84E9638340B19CB439624A;// 0x1318(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1CF150234CC2C8D35D381F9C7E447C27;// 0x1368(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EC58EF22440F5629E656CCACAAC6425B;// 0x13D8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C489CE0542F69637F4FF2A8E70E7FF28;// 0x14A8(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6BCD08EB410E000767F30D81197CD228;// 0x1518(0x0078)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_3379463249DB5026719BCDA500803EDE;// 0x1590(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B02F45DC49034869CCF72E8A45EDDEDA;// 0x15F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_58F3F41C45E674D0FEBB6DAE55DA0751;// 0x1638(0x00D8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA0526D343FA015B28DF25921C724329;// 0x1710(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DAA4202148FD06D242386B9962C136D7;// 0x1790(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6D0039F746DBFEE3FB7C8793D9CC4D70;// 0x1810(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC9CAF5142BB29A1D155BB84F7E76CC6;// 0x1890(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3751C1B54ACB51E2AFB43FA7B737E53B;// 0x1910(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_930B49504D5D442AB9E96DA0913A9E63;// 0x1958(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E43CE43A434E0F0926B8F4A8BC2209D4;// 0x19A0(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7A2516CA46D29BE82264509063CA1DDE;// 0x1A58(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EA5D13FA4F1C34813A4CDA98160CD03F;      // 0x1B38(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6640244848BE9AD8413EFF8EAFCBD09D;// 0x1BA0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_66A2CCA54311B900051785B89FBC98D2;// 0x1C70(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4804FB71496354DB262737A36B62B0CF;// 0x1CC0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3C1C448E4BFC14F4DF9541BD7B686D80;// 0x1D10(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5E984FB544A69AFB45E68B8479EA9A9D;      // 0x1DE0(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B370B18543B80658FC331D8359BDA455;// 0x1E48(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8886315C46DC93464C7004BEE2E45D9B;// 0x1E98(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2F713306402D4EB35FA74BA217F872DE;// 0x1EE8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3E7F3743411A3726D8BD919415CBB1AE;// 0x1FC8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A7754639472ADB097643B9B30CBCBC66;// 0x2018(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_528D52F7443BB34F0313688FCBD2C6F0;// 0x2068(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_60E3C51F409D1CB237D47FADD6617FFD;      // 0x2148(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D4B28F76445E4C2A222EAD9D1E15415D;// 0x21B0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8E578557462836E825A81BBBA99AF976;// 0x21F8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_96FDF8D3435C350ABE731795985FDE74;// 0x2248(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6507B2644533C067139086BFD7717CF9;      // 0x2318(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6CD0E986488D07CA72057DAC5A9D8251;// 0x2380(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D7000B504F670B39E309E4AA59C5664A;// 0x23D0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E9A3C94D44667E3133F15EBCD6473CFE;// 0x2418(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_325E24294401CCC7998154AEEDC26C3C;      // 0x2468(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C17E08064AEF9AC3B1C1F8ACB0774A9A;// 0x24D0(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F028E9DB40F9AD00B0793CA4C0A8632C;// 0x2520(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_06F33B634554EECA995589A2AB909737;// 0x2600(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4D35A1BE46C7BC02C07714B2D201567F;// 0x26D0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FD4E561748889CBDBC41DEA234B6657F;      // 0x2720(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F9C396004A7C985102F22CB8A1AB1A73;// 0x2788(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_49DA45D64C0BEAD52ED89AA2C5B48025;// 0x27D0(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5FF54EED4C3B756B4423358AB9200FF4;// 0x28A8(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ACDC5F01413E6CDDD5E26290FB0D2A28;// 0x2950(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA8583CF48558D8742D60989B755AECF;// 0x29D0(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_923ECC9946F87BD9304658A4C6C371E1;// 0x2A50(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7D4B6F6A41970A5756B8039B8D969461;// 0x2B78(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8CCABF8A4335407291BE5F82A4F2DF4C;// 0x2BC0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E36EB3AF45864D643ACA079211777C8E;// 0x2CE8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BD0EC74E47B535EF6B18C4A8DED838DD;// 0x2D30(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6E2A7352482A91283D96DEA609E8844D;// 0x2E08(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_174894E5463498BD5CE2C58529C87F63;      // 0x2EB0(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_458080404F9C55B75C14EF80F4847606;// 0x2F18(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_43A9039E41EF41FC5803878ECCF2115F;// 0x2FF8(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_98F2602F4DC5A49F702075A17D51FF69;      // 0x30A0(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C52841094FE8E562E2A56D8B627DB87F;// 0x3108(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E3DD09C6414B93D2B07AFD8292226B55;// 0x31B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9DBE522A45A8D981027EA092788669F5;// 0x3200(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E94CE6A24C14A812C27178A06F48CDC2;      // 0x3250(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_669C6C0C4F1D960F8CF708B30A34DE05;// 0x32B8(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C0423B7B4B4DF05801AB008AADD6B3AF;// 0x3398(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B1B8C2144F2B644B0EDF5890856C8E8F;// 0x3440(0x00D0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_F4294E2340D99B17779EAAB0ED7F1A6D;// 0x3510(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DE00E31C423EDB53B1E7F4A812674E66;// 0x3668(0x0050)
	unsigned char                                      UnknownData01[0x8];                                       // 0x36B8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_80DFA2864DFC581215F60B95F7DC9380;// 0x36C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E329B0A47E416418324F99CE29A2401;// 0x3740(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B50C1AE84D9436FFBC33709F6F0EB106;// 0x37C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD5B9C494EBA47F8974327B3D99915E2;// 0x3840(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A39C00F94B8B17F3DF23A99C3DDB2E88;// 0x38C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70C75196485F1D5760DEEA95ED192B22;// 0x3940(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA9AA59A413FD2E4529A19A07184E4FA;// 0x39C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_04DFCD6146926108DD38F59F6296BDC1;// 0x3A30(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C96DE772492B98DB0DE80BB734C2116E;// 0x3A78(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_32A4049D45BACC2F0CF64A83AC96F015;// 0x3AE8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_82D7333F471BE3862A2B8DA6A09047DF;// 0x3B30(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E61FA9B94E955F50CF334983A7D033E8;// 0x3C58(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0A72F9B446B5F08D52514C9B023F198F;// 0x3CA0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3DD95A6A4389DA801A52ADA435C84617;// 0x3DC8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D405617F41B462783757E3BD69CB5422;// 0x3E10(0x00D8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_51F2F2CE4F9082CAD0AD7189F7934CB0;// 0x3EE8(0x00E0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8E57203E4703F8A43B3E2BBD49A0C850;// 0x3FC8(0x0280)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4B788175470581A209B76B973D807262;// 0x4248(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FF22DAD4497C34327A559AA3DCF2AE45;// 0x4290(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_201A359C4C06F74821DF918ED7086E55;// 0x42D8(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E1876D99465C1BE509443BAE29D33409;// 0x43A8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EB740BF14F05E0E2CD75D38005819776;// 0x4450(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3C5A5896446BC6123B3769AAE4322641;      // 0x44A0(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_14F88A7F4A4C63B386ED5BBFAFF8ABCE;// 0x4508(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9629294C46AC6A26181183837695EE4C;// 0x45D8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2A1F872D45E5392E9F1F09A1B323C944;// 0x4690(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E6B21B0C4937DF1281AB46ACB479F1A8;// 0x46D8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3CF2A8814FF520521F709DB0D580B2AA;// 0x4720(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6DBDD07943048BB8FB1AB1872A66392C;// 0x47C8(0x00D0)
	unsigned char                                      UnknownData02[0x8];                                       // 0x4898(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFABCF7848AD1903BD064AA242AF9E4F;// 0x48A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E34DB824EFF3ABFE5A086B6B6631475;// 0x4920(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2223AA0840552DE31079948F03279486;// 0x49A0(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2D0E9935487AC2B8048629B6F4680D07;// 0x4A20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5591C71F4B499957FC9875869010AFBD;// 0x4A68(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_06C18A774D8A7CAF0CEA61B5AAF8FE06;// 0x4AD8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B5E3D5F54BF49B7FEA2836B43904823D;// 0x4B20(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD74DAEC46FC936302EAC2AA96FE5A26;// 0x4C48(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5E1D47794DDE33EFBAA0658413060407;// 0x4C90(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_334079BF4A13B2F29708F5AD7E43BC4C;// 0x4D68(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7797FEE34831097BF63BF69B63F59DA9;// 0x4DB8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3719DDAD40D1FF3394A7D0B80B9261EB;// 0x4E60(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E3AD8F1649BB7F3A7B94E0A59FB8EB4D;// 0x4EB0(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5D86B57B40F785D5CBDD7FAFDEB10D85;// 0x4F00(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4546C2E14396773A08760F87EC7A5030;// 0x4FE0(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DF0B9A3F4A87F2F63283E3B7F893A693;// 0x5098(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D45B3A8B440B8F75AC62669D80085DEC;// 0x5140(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EE180C9B4A80C7B3A22DAEA399479C78;// 0x5190(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C22296634B3329DCD18642899124C07B;// 0x51D8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9078DB934183E6FE05BE3281437127A2;// 0x5280(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_71F7B5004EAE8C9FAD7F5EB7EAB7B2B7;// 0x52D0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C042155F4FEE0D669BE9538048391AEC;// 0x5320(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C85B89004FD20DB22B7620BCA4F74F9B;// 0x53F0(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7CF1CF344753662A1160AE885528C832;// 0x54A8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_31DAF3FB48F3FEDEE067079557EEB502;// 0x54F0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_329338674411ED2637246E918B0C8247;// 0x55A8(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A208C4634FF28D66ADBE8894952EBF91;// 0x55F8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6A4D4BB543581CEA78717FAE00540633;// 0x5640(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7598CC394959662FCA78AC8C45BFA981;// 0x5690(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AB1D4C514AD9020A44FE8E99D5E88556;// 0x56E0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4E98CC1C42BDBE0649258FB8F995D839;// 0x5728(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_622244D444EE7EE65F88C8957C185EEF;// 0x5770(0x0050)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_8EB0E4584E691BA977D67E8623780010;  // 0x57C0(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_433E01AA46322548F90AAC9A54AA867B;  // 0x5868(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0DEEA3AF4E997C82A08BD2BB8D58B653;// 0x5910(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6585C49F4E4165EE151CC2B97C7B2F66;// 0x5958(0x00D0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_13AC8CA44937FBA30AB9C392D3298681;// 0x5A28(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5556764F492E2C6DA3D2878EEAC0F256;// 0x5A70(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DCFFAEA6498F4FADF4518C97538818ED;// 0x5B28(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_457372C34A3A70E9726335ABBA036702;// 0x5BE0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_93C780F94070F509C4F343B8D8068090;// 0x5C28(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8919B31E42985B72D0E33C8776686E74;// 0x5C70(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1112DC0A47EE06CCC0FB99A6D56C5D7E;// 0x5D28(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_97A57B76440F2547804DE8B65E588D67;// 0x5D70(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3BEDDAF74266DACAD9913192AC0BB255;// 0x5E18(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_866CD31C4BAF4E2E8B4E54AF4690FC6B;// 0x5E68(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8E1711044635813E18A35BABACA19DF6;      // 0x5EE0(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C99F2028434D0DBD74153089B2D6D5D3;// 0x5F48(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B682FC3D408904703D3DECB95804E4C6;// 0x5F98(0x00D0)
	TEnumAsByte<EFreshWeaponStateType>                 __SUBINSTANCE_WeaponState_B6EA793741EF081F1D4B18BE9B29A9E8;// 0x6068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x6069(0x0003) MISSED OFFSET
	struct FVector                                     __SUBINSTANCE_MoveDir_B6EA793741EF081F1D4B18BE9B29A9E8;   // 0x606C(0x000C) (IsPlainOldData)
	bool                                               __SUBINSTANCE_Scoping_B6EA793741EF081F1D4B18BE9B29A9E8;   // 0x6078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x6079(0x0007) MISSED OFFSET
	class ASTExtraBaseCharacter*                       __SUBINSTANCE_OwnerCharacter_B6EA793741EF081F1D4B18BE9B29A9E8;// 0x6080(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_B6EA793741EF081F1D4B18BE9B29A9E8;// 0x6088(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_16B201EE496A66D027E50CB55A8ABD62;// 0x6150(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F75C21C84EB4D615E9FC2F9A9D8853F5;// 0x61F8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9101E8B941BCBB1C76031A872C91A3FC;// 0x6248(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FFBFF4D34DF5B64FD6C889BE58395DC3;// 0x6298(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_43D12E0C4B649EFEFCAA0AAD51F83A9F;// 0x6368(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C9E5C2DD4EE0358504AB258E8E111BFB;// 0x6490(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B565B8E34E070BA67AF43D8C95D3D1C8;// 0x6508(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8F240C29490F47D8AE158FB5AD3DA767;// 0x6558(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_94F32D994F5433E04265498241C67688;// 0x65A8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E192423B48FB7B33588F24899B296971;// 0x6650(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15B77F8E4E65599DF6232F9AEBCB3FBD;// 0x66A0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6AE6DAEC4BF6E0703556299166FEC2E0;// 0x66F0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A143725F42DD4467D41CA0BFB906A522;// 0x67C0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0712F5734AC37790D9A12F8096EE9C4E;      // 0x6810(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0F051A204E1F9A9172B92E86CB305A1E;// 0x6878(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D9BDED8D4B7DE338450804B21CB65D90;// 0x6958(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1DB39F3145453030AB0728B31A1B2049;// 0x69A8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F70F6EE744718CA0AA76638976CD41C5;// 0x69F8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A31BBF2D4CD8CE0BDF9AEB9FDDF8B096;// 0x6AA0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45E193384DE39BDB8BF5949428D8CDC4;// 0x6AF0(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_78C7AFFE461E973613B6EB970B5A2AB8;// 0x6B40(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_115F73CC4F4EB99D57153CA9C0B25298;// 0x6BF8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5E08C82C430E1441B11FF599B3529D1D;// 0x6C40(0x0048)
	unsigned char                                      UnknownData05[0x8];                                       // 0x6C88(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_072677AC41CA4240D324B3930D3EA4DB;// 0x6C90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2206D959438B4BEE00C4CEAEB75AAAE1;// 0x6D10(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_99A0D43B4625DB28C707B296F897BFAD;// 0x6D90(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A7C94BC84D1B4DE1402B89BCA46090CB;// 0x6EB8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F9D914F84E43412874DB3CB9A2039940;// 0x6F00(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9AA3C81A481374C893DB60AC7BD47D37;// 0x6F50(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B59343664AC4B234A509C6A416B8827B;// 0x6FC0(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FA6ECDD4695357A89E7C290FB015914;// 0x7090(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_27FA876E4F2C51AB4FBB54A4314A9AF1;// 0x70D8(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6B33B0BF4CFBDF576C90BD8B97298239;// 0x71B0(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_220F99A04986C25E9539B2A92C64D7A8;// 0x7258(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0DA5260C449DE23EFBC503A7C77F7E00;// 0x7300(0x0050)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_7A8F51D9413B323BAE44DE93B45D3E3F;    // 0x7350(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_FF7C88124B1026BF8DCDC88396D68D5B;  // 0x74C0(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_50B56FAC4284F32E25CFCEB28B6C5E3A;  // 0x7568(0x00A8)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_E5E672DB4B056FA5A45612B8931A18B6;    // 0x7610(0x0170)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8D15414541B3EB717FE0CF94A60DBD3B;// 0x7780(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_71504472478A09FF13DFE68B69DFEF98;// 0x7860(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E1808C9D43A40CE46EB8F6A534DC1ABC;// 0x7930(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6E46129C4B61CAA43CEB07ADE4C3FD59;// 0x7980(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F95908034B8D9CFB2B155BB5933D94A9;// 0x7A38(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0AFC812147DFC014CDE3A3825EA3CBE5;// 0x7A80(0x0048)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_8CF51CA948DE444C840E599C64AC2CEE;// 0x7AC8(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_9F7F3F294E1BFE8DBC60DEB297EA85BE;// 0x7B40(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DDA68583465674C7C37912B7D4A4E50F;      // 0x7BB8(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F645305E41722890FC22B391480ADEBD;// 0x7C20(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EBA89DFF4E86CAD0DB7051A88EA338B1;// 0x7CF0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53CF4F3440A9C4343DF7A9AEE6CEAADC;// 0x7DC0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0923836A4A1516BEF39634B6DCB6E5B2;// 0x7E10(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_66CC0D1349829696746E958E9ACAFC19;// 0x7EE0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8B02E1854C22FFA0A02A53B3DC679824;// 0x7F88(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6BFA14514C88A4E80BBF529D327F9E58;// 0x7FD8(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9E98E946479BB6F25CF86B8F6C0246AD;// 0x8028(0x0128)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_F73C783C46F301367C465EAFEBA8559A;// 0x8150(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DCFADC264F289627ED48DF95EF386452;// 0x82A8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B070AF83456F0A61C74614987FAE7C80;// 0x8350(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_500C364647FAF281EAF7EEB643A787BE;// 0x83A0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5BC93D324FE71B76644074976E6CC454;// 0x83F0(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C5A628AA4F9EFD70D6EA9BBA06098B5C;// 0x84C0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F1AEDBA24520120F9AAA378FB7CD4DA9;// 0x8568(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8BC235B84F01BD46AFCB7E8A2C2DCBF0;      // 0x85B8(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CB4E3CD2403BE017D2C5D89D248B5649;// 0x8620(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E4815A17400837DC67A56FBF630677D7;// 0x86F0(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_94FCE2534A41922F6EE0ADA29204CE8A;// 0x8740(0x00E0)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_7B2D93424224E2D8E11889A1FEEFC604;    // 0x8820(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_8C883397463C220B272CCABCB5D4D97B;  // 0x8990(0x00A8)
	unsigned char                                      UnknownData06[0x8];                                       // 0x8A38(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_99AA80B74BFC6E1FE4D50E87F3928EE6;    // 0x8A40(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_0FC7D45C43128D12BE8455A82451691C;  // 0x8BB0(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B87ABCF942126AAD092D9CB6CD312ABE;// 0x8C58(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F4E64E8C460933CD02F14487E409ECDE;// 0x8CA0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_618C7B784C8FE43D3670018E65458BAA;// 0x8CE8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F034CE2B40AD3A98AA00AB94BA8C47A0;// 0x8DB8(0x0128)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0D4679C242F79898D029EBB785DC10B3;// 0x8EE0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C4F7B15F4B32CBCC8519998F035B4536;// 0x8F30(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F4FF06B9462B60471B5E3393887C9E40;// 0x8F80(0x0050)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_9FE09B1343F08E378CD23D91CD58C223;    // 0x8FD0(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_732A767340B20CBF50397390E4CEDBA3;  // 0x9140(0x00A8)
	unsigned char                                      UnknownData07[0x8];                                       // 0x91E8(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_1671B2AE4B1E0D2F8E9B769F78DAEA52;    // 0x91F0(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_4C4DC3E64381363E5EB6DC83B485A653;  // 0x9360(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_45B840D54A0CF19F97483E8C8401F0F4;// 0x9408(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D5C6F74A469FBCDA23ED1A86EF582F78;// 0x9450(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7FF39F494AAC7A8DAF913B9B553FA09E;// 0x9498(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0A3738E649065C63DAA33B871C8BF5F4;// 0x9568(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F5AB53FE422F92A928203CA78734E9FD;// 0x9690(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0F0A9BAD4E606ACC202A4DB1099E3308;// 0x9738(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5E6F01C2463734AFD033FAA526A4C777;// 0x9788(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0855A2E34D22984F160B23AF245637C9;// 0x97D8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_195026BB4D191A5BA75F678ED0E00504;// 0x9880(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_860DABD84F12647CE8D454BD09849965;// 0x98D0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8D5A1C1D46D889D39B5C94B51A8DEDBC;// 0x9920(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7FABE8F146269258F98D4DB2127E44F5;// 0x9970(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AF7A57D443A79482DEF1D6ACDD5C6523;// 0x99C0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_ACF67F1E415D08A812090AB622DCCD30;// 0x9AA0(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_48F0801842A1711B2F754F9B57EB1D49;// 0x9B80(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_99EE1C4C462B5FAF5497CC8797147246;// 0x9BC8(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_66D65871430ED6892C1881A104B0E942;  // 0x9C10(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E1359FE7442EFE77E9A20CA77B1E7F9C;  // 0x9CB8(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_F8FEDE8E49559DF8564C41AC8B4D4EA7;  // 0x9D60(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7559E28148D5A1854B4449AFE35775A4;// 0x9E08(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_31EC7AC7485DA0182DF0B6BDAA97518B;// 0x9E50(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_8F1F12BC4AC3516664F4FA94842EB52B;  // 0x9E98(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_40675A604F741DE7D23CDCB96236DFDE;  // 0x9F40(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_224B6CE84DED53427C30A5B097637DC3;  // 0x9FE8(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A1C2F7C94638F977D5756296C143FD33;// 0xA090(0x00E0)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_2E172EDF47AD035573128B9FD045F96D;    // 0xA170(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_D20A990341B6273527E362A8003BAD4B;  // 0xA2E0(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E87DE78A49CA468213C3F39A2BC45209;// 0xA388(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DAC68D834DE4C43D88EE82BD65EE333D;// 0xA3D0(0x0128)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1C330930432AD1BE3D174BA53AEBB464;// 0xA4F8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EAE8A28B4FAA1B286FE8D082AFE9C15D;// 0xA540(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E41F37504D764B67A0181BAEA80B1467;  // 0xA588(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E6DB53504F13AB2A5A80CCBB5D8730E8;  // 0xA630(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_4DD8DC06479B8335789C08914DFAD26C;  // 0xA6D8(0x00A8)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_87C9E41347749FE2FC4E23A0FA1BA51A;    // 0xA780(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_FB9B34734FB8B82EAE8AE3B24B7B289F;  // 0xA8F0(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_44DA701B440A2261258F17B3DE55970B;// 0xA998(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AA5DE6F9455753B758D53EA53E0A6DE8;// 0xA9E0(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FE114F724ECBB30B9CBC1AA69D75740D;// 0xAAB0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B7118A44235ECEB79A05CAD3D979050;// 0xAB58(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43695D744F5967B68D6067A8DD6537D1;// 0xABA8(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C090D630420677578B2503A4E2194A6E;      // 0xABF8(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81B7406A4DB3C66810974698CE096CB7;// 0xAC60(0x0070)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_3BC5777744E78472F0CFDC86099EBC4A;// 0xACD0(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_69EE9A0448E1F9BF4DA327809542DE2A;// 0xAD48(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_68FDCC6744F4FA2465AC5E8899EBEB74;// 0xADF0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_64F01EC84D64FFCA245AA69D6B25BC20;// 0xAE98(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E5A32E2F4A834F3E591E16BAA9B687C5;// 0xAEE8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0750FAD645DF45DCE778BD8D2FF74FCD;// 0xAF38(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E96936184419968456EAF08AA37E47CD;// 0xAF88(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_777AB74C446D5144FF93159CB523BE1E;// 0xB068(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_59FA3FD140FC92E48DC88B84BC476BF9;// 0xB0D8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C2CE9AD3498C3538A6EE53B91B22A2A2;// 0xB1A8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E5D2926F471A9EFFAAA308A0F6E4EC6C;// 0xB1F8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8A889EC7455F95F9D9FC1FA27F52185F;// 0xB2C8(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1561D20A4FF26FA36A2C0198B9A0677D;// 0xB3F0(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_54EFA84740BBED48634848B12C6A102B;// 0xB498(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_102E50A4409DE01E100478A7EA1B024B;// 0xB578(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F187B24D49B8C847429A6DAEE6FC1DE6;// 0xB5E8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_437794CB4C9B6989F39D50A5FFBA92B5;// 0xB6B8(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E117A32741F355AE7BB876A15F6DBEF2;// 0xB708(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_52D8FE6243000E628AFF91ADCADAC2B8;// 0xB750(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0F29878B478869339A447097B208642F;// 0xB808(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_848BBC074DBC4CABDD313EA5A4F23D83;// 0xB850(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BB339FAA4E5C4CA7F3EFF1AC0EE06F81;// 0xB8F8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_262EE8044F54917BC3F9D0B040670EC3;// 0xB948(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2BC5AD69443F82A92F9144BB0099036A;// 0xB998(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_39D350024AE584850AAF5CB6CFCB5EB6;// 0xBA40(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_410C026C49719E1FFCC48A9E690C0782;// 0xBA90(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C046189A421B5E0E60DEEDBCA8B23EAA;// 0xBAE0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6DF74DF9454CFA2F26A28991F12C7036;// 0xBB30(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_69506EA047A1DC2A8A1D7896E6E9817B;      // 0xBC00(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AB6BA3AF4DABD33596A02DAA7179ABF8;// 0xBC68(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_14BAEB104CDD8B99D3C6E0892F2D2C50;      // 0xBCB8(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E5870BF14D2E60847B22B38A770593B5;// 0xBD20(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_379C40C6487989E62F7E68975022BBD1;      // 0xBDC8(0x0068)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FAEB39AB4734DE97CE2CB7B7649F492F;// 0xBE30(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7A86039A44A88F8B65B2789A3D0215CA;// 0xBF58(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DB11133743B1BBC6810C879F0F3610C7;// 0xC000(0x0050)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B6F4A6C34387FEB48B4EEFBCD4AA9A4E;  // 0xC050(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_250AF6C84A20130ED081A59EE3FAE233;  // 0xC0F8(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_568C64AD43CB2E498CE58E9A4FDBBA82;// 0xC1A0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_67967EF148B85202DD8D00AC1A76ECC7;// 0xC1E8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_11184CD346E630A679004A9E00BFC888;// 0xC230(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_40A860A741A35E762B71758D744D27D3;// 0xC2D8(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_787788974CA657018EC7818D84E64D8C;// 0xC328(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A3C5F23D4357DB3FA67129B8E9C16350;// 0xC370(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41FE97344E546F846AB6AFA96E23A6C8;// 0xC428(0x00B8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_7E71FFA2476419387B2F09B019B5C586;  // 0xC4E0(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5134674145FCB2BB9202C18F69DE57F1;// 0xC588(0x00B8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9AC046FC4E4F6035F9371FA3592E95CB;  // 0xC640(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6D0364114285924E15EA1287D83EAC68;// 0xC6E8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6AF5D344420096F7B659F4BDB004B7B7;// 0xC730(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3413B48C4727BB70438AD7A9A8BED16D;// 0xC7D8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8DB8555C4F860B53A8BC97A3B28225CF;// 0xC828(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_413D9BD04836D668080ADCA94D259A52;// 0xC908(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0F084DF14D43018739C742A835978E54;// 0xC958(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_61D95E5E4C9915BCCBDB3883922D950B;// 0xC9A8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1DB3CBAE4359F39F604718B74696F361;// 0xCA88(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D87D16EF4A1E982235B3F494F08606F3;// 0xCAD8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F22B7B1740D924E33690A597ACF64F46;// 0xCB28(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C66B29ED4CD8CD165C2D2C8F599AD0E0;// 0xCB78(0x0048)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_0A517AAD4B0798017DABBA99539A4F81;    // 0xCBC0(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E99420C748EE43978A68729465DCEF06;  // 0xCD30(0x00A8)
	unsigned char                                      UnknownData08[0x8];                                       // 0xCDD8(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_93FFA7DA4D9EAD31A29F03A5530FB87A;    // 0xCDE0(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_FCCEE8FD45611EDCC2E1698EBF1CCDA5;  // 0xCF50(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CF23B616438015457D1E0B8E673549CA;// 0xCFF8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_061BD7874674D6F67FD1EB90E480E36F;// 0xD040(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9A850ECB49C19FEAD693B0B0F700165A;// 0xD0E8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AED35CB848794793E9F39F96BD6EB0DD;// 0xD138(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E66865544E95513DA685638B49463B61;// 0xD218(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_331AAB3F475CF93BBED6E89042078C51;// 0xD268(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_97762B8A474773526840588369BD9D86;// 0xD348(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D624999643FA88BC5D937A9942978CAB;// 0xD398(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1DCA4C4F4382837C9D2CEC8EF0B6FDD0;// 0xD3E8(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D51011FF46384A3F27EFF4B0C5F542BC;// 0xD438(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_59D378624E16BE2956763C836D80FE68;  // 0xD480(0x00A8)
	unsigned char                                      UnknownData09[0x8];                                       // 0xD528(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_1EB81AE24F6E92169F74E6BCE4652D56;    // 0xD530(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B5A1A5F441EEF33083A5258A94D67B9A;  // 0xD6A0(0x00A8)
	unsigned char                                      UnknownData10[0x8];                                       // 0xD748(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_205CC79649D91D4DF3BA50A522702E5B;    // 0xD750(0x0170)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_0E66C0E14EEDC537FFDF10B9FF59E15B;  // 0xD8C0(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_25D14058407F8E061FCA09AE0202F39D;  // 0xD968(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_150D8EF1451790240F61CCAA1D004D58;// 0xDA10(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2503F46E4FEBD9A88765408849A3033D;// 0xDA58(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_Root_54C1F0ED422F557A3D58A1B8B79F8C7E;      // 0xDB00(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E4A4387B4BC037EA75FD898F45322184;  // 0xDB48(0x00A8)
	float                                              MoveRight;                                                // 0xDBF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveForward;                                              // 0xDBF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimRate;                                                 // 0xDBF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandFavoring;                                             // 0xDBFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandIKWeight;                                             // 0xDC00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAnimVehParamList                           CharacterVehParamList;                                    // 0xDC04(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseFlareGun;                                              // 0xDC1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTest;                                                    // 0xDC1D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESTEPoseState>                         CurPose;                                                  // 0xDC1E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AcceptNextHit;                                            // 0xDC1F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CH_Base_AnimBP.CH_Base_AnimBP_C");
		return ptr;
	}


	void GetCardinalDirection(float Direction, const struct FName& BoneName, EMovementDirection* CardinalDirection);
	void PlayHitReactionAnimation(const struct FName& BoneName, const struct FVector& Direction);
	void PlayToggleFiringMode();
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_4546C2E14396773A08760F87EC7A5030();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_C042155F4FEE0D669BE9538048391AEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_C85B89004FD20DB22B7620BCA4F74F9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_31DAF3FB48F3FEDEE067079557EEB502();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6585C49F4E4165EE151CC2B97C7B2F66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_5556764F492E2C6DA3D2878EEAC0F256();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_DCFFAEA6498F4FADF4518C97538818ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_8919B31E42985B72D0E33C8776686E74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TwoWayBlend_866CD31C4BAF4E2E8B4E54AF4690FC6B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_B682FC3D408904703D3DECB95804E4C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SubInstance_B6EA793741EF081F1D4B18BE9B29A9E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_FFBFF4D34DF5B64FD6C889BE58395DC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_43D12E0C4B649EFEFCAA0AAD51F83A9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ApplyAdditive_C9E5C2DD4EE0358504AB258E8E111BFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6AE6DAEC4BF6E0703556299166FEC2E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_78C7AFFE461E973613B6EB970B5A2AB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_072677AC41CA4240D324B3930D3EA4DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_2206D959438B4BEE00C4CEAEB75AAAE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_923ECC9946F87BD9304658A4C6C371E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_99A0D43B4625DB28C707B296F897BFAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_9AA3C81A481374C893DB60AC7BD47D37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_B59343664AC4B234A509C6A416B8827B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_EA8583CF48558D8742D60989B755AECF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByEnum_5D86B57B40F785D5CBDD7FAFDEB10D85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_ACDC5F01413E6CDDD5E26290FB0D2A28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_B5E3D5F54BF49B7FEA2836B43904823D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_71504472478A09FF13DFE68B69DFEF98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_6E46129C4B61CAA43CEB07ADE4C3FD59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TwoWayBlend_9F7F3F294E1BFE8DBC60DEB297EA85BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_F645305E41722890FC22B391480ADEBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_EBA89DFF4E86CAD0DB7051A88EA338B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_0923836A4A1516BEF39634B6DCB6E5B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_9E98E946479BB6F25CF86B8F6C0246AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_F73C783C46F301367C465EAFEBA8559A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_5BC93D324FE71B76644074976E6CC454();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_CB4E3CD2403BE017D2C5D89D248B5649();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_618C7B784C8FE43D3670018E65458BAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_F034CE2B40AD3A98AA00AB94BA8C47A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_7FF39F494AAC7A8DAF913B9B553FA09E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_0A3738E649065C63DAA33B871C8BF5F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_LayeredBoneBlend_AF7A57D443A79482DEF1D6ACDD5C6523();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_DAC68D834DE4C43D88EE82BD65EE333D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_AA5DE6F9455753B758D53EA53E0A6DE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_59FA3FD140FC92E48DC88B84BC476BF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_E5D2926F471A9EFFAAA308A0F6E4EC6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_8A889EC7455F95F9D9FC1FA27F52185F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_F187B24D49B8C847429A6DAEE6FC1DE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_52D8FE6243000E628AFF91ADCADAC2B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6DF74DF9454CFA2F26A28991F12C7036();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_FAEB39AB4734DE97CE2CB7B7649F492F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_2223AA0840552DE31079948F03279486();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_8CCABF8A4335407291BE5F82A4F2DF4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6DBDD07943048BB8FB1AB1872A66392C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_9629294C46AC6A26181183837695EE4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_14F88A7F4A4C63B386ED5BBFAFF8ABCE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_06F33B634554EECA995589A2AB909737();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_201A359C4C06F74821DF918ED7086E55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_96FDF8D3435C350ABE731795985FDE74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_AnimDynamics_8E57203E4703F8A43B3E2BBD49A0C850();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByEnum_51F2F2CE4F9082CAD0AD7189F7934CB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_3C1C448E4BFC14F4DF9541BD7B686D80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6640244848BE9AD8413EFF8EAFCBD09D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_E43CE43A434E0F0926B8F4A8BC2209D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_0A72F9B446B5F08D52514C9B023F198F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_CC9CAF5142BB29A1D155BB84F7E76CC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_6D0039F746DBFEE3FB7C8793D9CC4D70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_DAA4202148FD06D242386B9962C136D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_82D7333F471BE3862A2B8DA6A09047DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_AA0526D343FA015B28DF25921C724329();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_B1B8C2144F2B644B0EDF5890856C8E8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_RotateRootBone_3379463249DB5026719BCDA500803EDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ApplyAdditive_6BCD08EB410E000767F30D81197CD228();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_C489CE0542F69637F4FF2A8E70E7FF28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_EC58EF22440F5629E656CCACAAC6425B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_76E9869E4F8B8132BE70E98F846027A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_70C75196485F1D5760DEEA95ED192B22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_771B757847BE5BD1D142EF9DAC5AD141();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_E66A242940BFD90AB027798326F3DC73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_F4294E2340D99B17779EAAB0ED7F1A6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_FFF262E84F13F43A0FDF44A2F37CA696();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_517F5CD5482BE5F3342A3C9735993B78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_A39C00F94B8B17F3DF23A99C3DDB2E88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_9E88F58F4AB6EE52BA9A69BFC886550A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_1873132544FC0C24E6E9D78009A10781();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_FD5B9C494EBA47F8974327B3D99915E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_1CA6B8D5497E74E6F43CAEB6DDEFBBC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_FE062345416B64A640EA20B26FCCADD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_4D5DD345459030B576611CBD5A34BCF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_895296D24A9F7A856166378E952F6B69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_4B9202814EAEE5E8C6F84BBCA2B779F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_80DFA2864DFC581215F60B95F7DC9380();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_76B99DC84072BA3C0786C29E9E29BB65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_B50C1AE84D9436FFBC33709F6F0EB106();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_61316C7E46619171838C3F963F405D2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_8E329B0A47E416418324F99CE29A2401();
	void BlueprintInitializeAnimation();
	void OnPlayerPoseChange(TEnumAsByte<ESTEPoseState> LastPose, TEnumAsByte<ESTEPoseState> NewPose);
	void OnPlayerPickUp();
	void OnWeaponChangeState(TEnumAsByte<EFreshWeaponStateType> CurState);
	void RescueingEvent(bool IsTurnIntoRescueing);
	void HandleAnimEvent(const struct FName& EventMsg);
	void SetCharacterVehParamList(struct FAnimVehParamList* NewAnimVehParamList);
	void SetUseFlareGun(bool* IsCanFire);
	void OnWeaponToggleFiringMode();
	void OnHit(const struct FName& HitBody, const struct FVector& HurDir);
	void AnimNotify_PlayToggleFiringModeSound();
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
	void ExecuteUbergraph_CH_Base_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
