

// Class Gameplay.UAECharacterAnimListComponent
// //Class Gameplay.UAECharacterAnimListComponent
//0x0128 (0x02D8 - 0x01B0)
class UUAECharacterAnimListComponent : public UUAECharAnimListCompBase
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x01B0(0x0002) MISSED OFFSET
	TEnumAsByte<EAnimBluePrintType>                    AnimBluePrintType;                                        // 0x01B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01B3(0x0001) MISSED OFFSET
	struct FAnimInfo                                   CharacterMovementAnimInfoData;                            // 0x01B4(0x00D8) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	TArray<struct FCharacterMovementAnimData>          CharacterMovementAnimEditList;                            // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditListFPP;                                 // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      CurrentIsTPP : 1;                                         // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	TArray<struct FCharacterMovementAnimData>          CharacterFPPAnimEditList;                                 // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditList;                                    // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	// Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinished
	// (Final, Native, Public)
	void OnAsyncLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam);// sub_1580080()

	// Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim
	// (Final, Native, Public, Const)
	TArray<struct FPlayerAnimData> GetCharacterJumpAnim(TEnumAsByte<ECharacterJumpType> JumpType);// sub_157F630()

	// Function Gameplay.UAECharacterAnimListComponent.GetCharacterAnim
	// (Final, Native, Public, Const)
	class UAnimationAsset* GetCharacterAnim(ECharacterAnimType AnimTypeECharacterPoseType PoseType);// sub_157F560()


}

