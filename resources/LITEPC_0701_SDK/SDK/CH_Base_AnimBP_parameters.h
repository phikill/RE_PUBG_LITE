#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.GetCardinalDirection
struct UCH_Base_AnimBP_C_GetCardinalDirection_Params
{
	float                                              Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMovementDirection                                 CardinalDirection;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.PlayHitReactionAnimation
struct UCH_Base_AnimBP_C_PlayHitReactionAnimation_Params
{
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.PlayToggleFiringMode
struct UCH_Base_AnimBP_C_PlayToggleFiringMode_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.PlayBoltAnim
struct UCH_Base_AnimBP_C_PlayBoltAnim_Params
{
	bool                                               IsPreFirew;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.InitAnimVarDefaultValue
struct UCH_Base_AnimBP_C_InitAnimVarDefaultValue_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.PlayDeadAnim
struct UCH_Base_AnimBP_C_PlayDeadAnim_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.RefreshPeekState
struct UCH_Base_AnimBP_C_RefreshPeekState_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.HandlePlayerAnimEvent
struct UCH_Base_AnimBP_C_HandlePlayerAnimEvent_Params
{
	struct FName                                       Msg;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.PlayFireAnim
struct UCH_Base_AnimBP_C_PlayFireAnim_Params
{
	bool                                               IsPreFirew;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.PlayReloadAnim
struct UCH_Base_AnimBP_C_PlayReloadAnim_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.HandleWeaponStateChanged
struct UCH_Base_AnimBP_C_HandleWeaponStateChanged_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.PlaySwitchWeaponAnim
struct UCH_Base_AnimBP_C_PlaySwitchWeaponAnim_Params
{
	bool                                               IsEquip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.PlayPickUpAnim
struct UCH_Base_AnimBP_C_PlayPickUpAnim_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.PlayPoseChangeAnim
struct UCH_Base_AnimBP_C_PlayPoseChangeAnim_Params
{
	TEnumAsByte<ESTEPoseState>                         LastPose;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESTEPoseState>                         NewPose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_4546C2E14396773A08760F87EC7A5030
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_4546C2E14396773A08760F87EC7A5030_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_C042155F4FEE0D669BE9538048391AEC
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_C042155F4FEE0D669BE9538048391AEC_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_C85B89004FD20DB22B7620BCA4F74F9B
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_C85B89004FD20DB22B7620BCA4F74F9B_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_31DAF3FB48F3FEDEE067079557EEB502
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_31DAF3FB48F3FEDEE067079557EEB502_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6585C49F4E4165EE151CC2B97C7B2F66
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6585C49F4E4165EE151CC2B97C7B2F66_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_5556764F492E2C6DA3D2878EEAC0F256
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_5556764F492E2C6DA3D2878EEAC0F256_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_DCFFAEA6498F4FADF4518C97538818ED
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_DCFFAEA6498F4FADF4518C97538818ED_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_8919B31E42985B72D0E33C8776686E74
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_8919B31E42985B72D0E33C8776686E74_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TwoWayBlend_866CD31C4BAF4E2E8B4E54AF4690FC6B
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TwoWayBlend_866CD31C4BAF4E2E8B4E54AF4690FC6B_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_B682FC3D408904703D3DECB95804E4C6
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_B682FC3D408904703D3DECB95804E4C6_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SubInstance_B6EA793741EF081F1D4B18BE9B29A9E8
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SubInstance_B6EA793741EF081F1D4B18BE9B29A9E8_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_FFBFF4D34DF5B64FD6C889BE58395DC3
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_FFBFF4D34DF5B64FD6C889BE58395DC3_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_43D12E0C4B649EFEFCAA0AAD51F83A9F
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_43D12E0C4B649EFEFCAA0AAD51F83A9F_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ApplyAdditive_C9E5C2DD4EE0358504AB258E8E111BFB
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ApplyAdditive_C9E5C2DD4EE0358504AB258E8E111BFB_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6AE6DAEC4BF6E0703556299166FEC2E0
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6AE6DAEC4BF6E0703556299166FEC2E0_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_78C7AFFE461E973613B6EB970B5A2AB8
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_78C7AFFE461E973613B6EB970B5A2AB8_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_072677AC41CA4240D324B3930D3EA4DB
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_072677AC41CA4240D324B3930D3EA4DB_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_2206D959438B4BEE00C4CEAEB75AAAE1
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_2206D959438B4BEE00C4CEAEB75AAAE1_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_923ECC9946F87BD9304658A4C6C371E1
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_923ECC9946F87BD9304658A4C6C371E1_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_99A0D43B4625DB28C707B296F897BFAD
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_99A0D43B4625DB28C707B296F897BFAD_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_9AA3C81A481374C893DB60AC7BD47D37
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_9AA3C81A481374C893DB60AC7BD47D37_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_B59343664AC4B234A509C6A416B8827B
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_B59343664AC4B234A509C6A416B8827B_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_EA8583CF48558D8742D60989B755AECF
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_EA8583CF48558D8742D60989B755AECF_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByEnum_5D86B57B40F785D5CBDD7FAFDEB10D85
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByEnum_5D86B57B40F785D5CBDD7FAFDEB10D85_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_ACDC5F01413E6CDDD5E26290FB0D2A28
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_ACDC5F01413E6CDDD5E26290FB0D2A28_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_B5E3D5F54BF49B7FEA2836B43904823D
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_B5E3D5F54BF49B7FEA2836B43904823D_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_71504472478A09FF13DFE68B69DFEF98
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_71504472478A09FF13DFE68B69DFEF98_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_6E46129C4B61CAA43CEB07ADE4C3FD59
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_6E46129C4B61CAA43CEB07ADE4C3FD59_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TwoWayBlend_9F7F3F294E1BFE8DBC60DEB297EA85BE
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TwoWayBlend_9F7F3F294E1BFE8DBC60DEB297EA85BE_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_F645305E41722890FC22B391480ADEBD
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_F645305E41722890FC22B391480ADEBD_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_EBA89DFF4E86CAD0DB7051A88EA338B1
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_EBA89DFF4E86CAD0DB7051A88EA338B1_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_0923836A4A1516BEF39634B6DCB6E5B2
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_0923836A4A1516BEF39634B6DCB6E5B2_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_9E98E946479BB6F25CF86B8F6C0246AD
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_9E98E946479BB6F25CF86B8F6C0246AD_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_F73C783C46F301367C465EAFEBA8559A
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_F73C783C46F301367C465EAFEBA8559A_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_5BC93D324FE71B76644074976E6CC454
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_5BC93D324FE71B76644074976E6CC454_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_CB4E3CD2403BE017D2C5D89D248B5649
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_CB4E3CD2403BE017D2C5D89D248B5649_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_618C7B784C8FE43D3670018E65458BAA
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_618C7B784C8FE43D3670018E65458BAA_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_F034CE2B40AD3A98AA00AB94BA8C47A0
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_F034CE2B40AD3A98AA00AB94BA8C47A0_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_7FF39F494AAC7A8DAF913B9B553FA09E
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_7FF39F494AAC7A8DAF913B9B553FA09E_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_0A3738E649065C63DAA33B871C8BF5F4
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_0A3738E649065C63DAA33B871C8BF5F4_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_LayeredBoneBlend_AF7A57D443A79482DEF1D6ACDD5C6523
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_LayeredBoneBlend_AF7A57D443A79482DEF1D6ACDD5C6523_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_DAC68D834DE4C43D88EE82BD65EE333D
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_DAC68D834DE4C43D88EE82BD65EE333D_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_AA5DE6F9455753B758D53EA53E0A6DE8
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_AA5DE6F9455753B758D53EA53E0A6DE8_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_59FA3FD140FC92E48DC88B84BC476BF9
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_59FA3FD140FC92E48DC88B84BC476BF9_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_E5D2926F471A9EFFAAA308A0F6E4EC6C
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_E5D2926F471A9EFFAAA308A0F6E4EC6C_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_8A889EC7455F95F9D9FC1FA27F52185F
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_8A889EC7455F95F9D9FC1FA27F52185F_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_F187B24D49B8C847429A6DAEE6FC1DE6
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_F187B24D49B8C847429A6DAEE6FC1DE6_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_52D8FE6243000E628AFF91ADCADAC2B8
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_52D8FE6243000E628AFF91ADCADAC2B8_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6DF74DF9454CFA2F26A28991F12C7036
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6DF74DF9454CFA2F26A28991F12C7036_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_FAEB39AB4734DE97CE2CB7B7649F492F
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_FAEB39AB4734DE97CE2CB7B7649F492F_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_2223AA0840552DE31079948F03279486
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_2223AA0840552DE31079948F03279486_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_8CCABF8A4335407291BE5F82A4F2DF4C
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_8CCABF8A4335407291BE5F82A4F2DF4C_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6DBDD07943048BB8FB1AB1872A66392C
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6DBDD07943048BB8FB1AB1872A66392C_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_9629294C46AC6A26181183837695EE4C
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_9629294C46AC6A26181183837695EE4C_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_14F88A7F4A4C63B386ED5BBFAFF8ABCE
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_14F88A7F4A4C63B386ED5BBFAFF8ABCE_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_06F33B634554EECA995589A2AB909737
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_06F33B634554EECA995589A2AB909737_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_201A359C4C06F74821DF918ED7086E55
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_201A359C4C06F74821DF918ED7086E55_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_96FDF8D3435C350ABE731795985FDE74
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_96FDF8D3435C350ABE731795985FDE74_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_AnimDynamics_8E57203E4703F8A43B3E2BBD49A0C850
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_AnimDynamics_8E57203E4703F8A43B3E2BBD49A0C850_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByEnum_51F2F2CE4F9082CAD0AD7189F7934CB0
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByEnum_51F2F2CE4F9082CAD0AD7189F7934CB0_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_3C1C448E4BFC14F4DF9541BD7B686D80
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_3C1C448E4BFC14F4DF9541BD7B686D80_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6640244848BE9AD8413EFF8EAFCBD09D
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_6640244848BE9AD8413EFF8EAFCBD09D_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_E43CE43A434E0F0926B8F4A8BC2209D4
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ModifyBone_E43CE43A434E0F0926B8F4A8BC2209D4_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_0A72F9B446B5F08D52514C9B023F198F
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_0A72F9B446B5F08D52514C9B023F198F_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_CC9CAF5142BB29A1D155BB84F7E76CC6
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_CC9CAF5142BB29A1D155BB84F7E76CC6_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_6D0039F746DBFEE3FB7C8793D9CC4D70
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_6D0039F746DBFEE3FB7C8793D9CC4D70_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_DAA4202148FD06D242386B9962C136D7
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_DAA4202148FD06D242386B9962C136D7_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_82D7333F471BE3862A2B8DA6A09047DF
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_82D7333F471BE3862A2B8DA6A09047DF_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_AA0526D343FA015B28DF25921C724329
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_AA0526D343FA015B28DF25921C724329_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_B1B8C2144F2B644B0EDF5890856C8E8F
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_B1B8C2144F2B644B0EDF5890856C8E8F_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_RotateRootBone_3379463249DB5026719BCDA500803EDE
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_RotateRootBone_3379463249DB5026719BCDA500803EDE_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ApplyAdditive_6BCD08EB410E000767F30D81197CD228
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_ApplyAdditive_6BCD08EB410E000767F30D81197CD228_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_C489CE0542F69637F4FF2A8E70E7FF28
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_C489CE0542F69637F4FF2A8E70E7FF28_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_EC58EF22440F5629E656CCACAAC6425B
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_EC58EF22440F5629E656CCACAAC6425B_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_76E9869E4F8B8132BE70E98F846027A4
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_76E9869E4F8B8132BE70E98F846027A4_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_70C75196485F1D5760DEEA95ED192B22
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_70C75196485F1D5760DEEA95ED192B22_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_771B757847BE5BD1D142EF9DAC5AD141
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_771B757847BE5BD1D142EF9DAC5AD141_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_E66A242940BFD90AB027798326F3DC73
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendListByBool_E66A242940BFD90AB027798326F3DC73_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_F4294E2340D99B17779EAAB0ED7F1A6D
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_F4294E2340D99B17779EAAB0ED7F1A6D_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_FFF262E84F13F43A0FDF44A2F37CA696
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_SequencePlayer_FFF262E84F13F43A0FDF44A2F37CA696_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_517F5CD5482BE5F3342A3C9735993B78
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_BlendSpacePlayer_517F5CD5482BE5F3342A3C9735993B78_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_A39C00F94B8B17F3DF23A99C3DDB2E88
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_A39C00F94B8B17F3DF23A99C3DDB2E88_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_9E88F58F4AB6EE52BA9A69BFC886550A
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_9E88F58F4AB6EE52BA9A69BFC886550A_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_1873132544FC0C24E6E9D78009A10781
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_1873132544FC0C24E6E9D78009A10781_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_FD5B9C494EBA47F8974327B3D99915E2
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_FD5B9C494EBA47F8974327B3D99915E2_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_1CA6B8D5497E74E6F43CAEB6DDEFBBC5
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_1CA6B8D5497E74E6F43CAEB6DDEFBBC5_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_FE062345416B64A640EA20B26FCCADD2
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_FE062345416B64A640EA20B26FCCADD2_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_4D5DD345459030B576611CBD5A34BCF4
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_4D5DD345459030B576611CBD5A34BCF4_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_895296D24A9F7A856166378E952F6B69
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_895296D24A9F7A856166378E952F6B69_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_4B9202814EAEE5E8C6F84BBCA2B779F3
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_4B9202814EAEE5E8C6F84BBCA2B779F3_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_80DFA2864DFC581215F60B95F7DC9380
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_80DFA2864DFC581215F60B95F7DC9380_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_76B99DC84072BA3C0786C29E9E29BB65
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_76B99DC84072BA3C0786C29E9E29BB65_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_B50C1AE84D9436FFBC33709F6F0EB106
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_B50C1AE84D9436FFBC33709F6F0EB106_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_61316C7E46619171838C3F963F405D2A
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_61316C7E46619171838C3F963F405D2A_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_8E329B0A47E416418324F99CE29A2401
struct UCH_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Base_AnimBP_AnimGraphNode_TransitionResult_8E329B0A47E416418324F99CE29A2401_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.BlueprintInitializeAnimation
struct UCH_Base_AnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.OnPlayerPoseChange
struct UCH_Base_AnimBP_C_OnPlayerPoseChange_Params
{
	TEnumAsByte<ESTEPoseState>                         LastPose;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESTEPoseState>                         NewPose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.OnPlayerPickUp
struct UCH_Base_AnimBP_C_OnPlayerPickUp_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.OnWeaponChangeState
struct UCH_Base_AnimBP_C_OnWeaponChangeState_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 CurState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.RescueingEvent
struct UCH_Base_AnimBP_C_RescueingEvent_Params
{
	bool                                               IsTurnIntoRescueing;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.HandleAnimEvent
struct UCH_Base_AnimBP_C_HandleAnimEvent_Params
{
	struct FName                                       EventMsg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.SetCharacterVehParamList
struct UCH_Base_AnimBP_C_SetCharacterVehParamList_Params
{
	struct FAnimVehParamList*                          NewAnimVehParamList;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.SetUseFlareGun
struct UCH_Base_AnimBP_C_SetUseFlareGun_Params
{
	bool*                                              IsCanFire;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.OnWeaponToggleFiringMode
struct UCH_Base_AnimBP_C_OnWeaponToggleFiringMode_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.OnHit
struct UCH_Base_AnimBP_C_OnHit_Params
{
	struct FName                                       HitBody;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HurDir;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlayToggleFiringModeSound
struct UCH_Base_AnimBP_C_AnimNotify_PlayToggleFiringModeSound_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlayShellDropFX
struct UCH_Base_AnimBP_C_AnimNotify_PlayShellDropFX_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlayMagOUTSound
struct UCH_Base_AnimBP_C_AnimNotify_PlayMagOUTSound_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlayMagINSound
struct UCH_Base_AnimBP_C_AnimNotify_PlayMagINSound_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlayBoltSound
struct UCH_Base_AnimBP_C_AnimNotify_PlayBoltSound_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlayChangeMagazineSound
struct UCH_Base_AnimBP_C_AnimNotify_PlayChangeMagazineSound_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlayLoadBulletSound
struct UCH_Base_AnimBP_C_AnimNotify_PlayLoadBulletSound_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlayCrawlSound
struct UCH_Base_AnimBP_C_AnimNotify_PlayCrawlSound_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlaySquatSound
struct UCH_Base_AnimBP_C_AnimNotify_PlaySquatSound_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlayRunSound
struct UCH_Base_AnimBP_C_AnimNotify_PlayRunSound_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_PlayWalkSound
struct UCH_Base_AnimBP_C_AnimNotify_PlayWalkSound_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_LandHardCameraShake
struct UCH_Base_AnimBP_C_AnimNotify_LandHardCameraShake_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.AnimNotify_LandCameraShake
struct UCH_Base_AnimBP_C_AnimNotify_LandCameraShake_Params
{
};

// Function CH_Base_AnimBP.CH_Base_AnimBP_C.ExecuteUbergraph_CH_Base_AnimBP
struct UCH_Base_AnimBP_C_ExecuteUbergraph_CH_Base_AnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
