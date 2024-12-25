

// Class ShadowTrackerExtra.TargetKeyOperation
// //Class ShadowTrackerExtra.TargetKeyOperation
//0x0068 (0x0090 - 0x0028)
class UTargetKeyOperation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	class ASTExtraBaseCharacter*                       PawnOwner;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       Target;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)

	// Function ShadowTrackerExtra.TargetKeyOperation.Update
	// (Native, Public)
	TEnumAsByte<EOperationRunResult> Update(float DeltaTime);// sub_178C5B0()

	// Function ShadowTrackerExtra.TargetKeyOperation.ToString
	// (Final, Native, Public, Const)
	struct FString ToString();// sub_178C4C0()

	// Function ShadowTrackerExtra.TargetKeyOperation.TaskRemoved
	// (Native, Public)
	void TaskRemoved();// sub_AE7B90()

	// Function ShadowTrackerExtra.TargetKeyOperation.Start
	// (Native, Public)
	TEnumAsByte<EOperationRunResult> Start();// sub_A152C0()

	// Function ShadowTrackerExtra.TargetKeyOperation.IsValidate
	// (Native, Public)
	unsigned char IsValidate();// sub_178BB80()

	// Function ShadowTrackerExtra.TargetKeyOperation.IsReachable
	// (Native, Public)
	unsigned char IsReachable();// sub_178BA80()

	// Function ShadowTrackerExtra.TargetKeyOperation.Finish
	// (Native, Public)
	TEnumAsByte<EOperationRunResult> Finish();// sub_A14F80()

	// Function ShadowTrackerExtra.TargetKeyOperation.DebugDraw
	// (Native, Public, HasDefaults)
	void DebugDraw(const struct FColor& DebugColorunsigned char isPersist);// sub_178B7D0()

	// Function ShadowTrackerExtra.TargetKeyOperation.Awake
	// (Native, Public)
	void Awake();// sub_F30ED0()


}

