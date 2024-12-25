

// Class ShadowTrackerExtra.FakePlayerAIController
// //Class ShadowTrackerExtra.FakePlayerAIController
//0x0048 (0x06D8 - 0x0690)
class AFakePlayerAIController : public ABaseAIController
{
public:
	class ASTExtraBaseCharacter*                       CharacterClass;                                           // 0x0690(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEnterJumping;                                           // 0x0698(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x06A8(0x0010) MISSED OFFSET
	class UNewPathFollowingComponent*                  newFollowingComponent;                                    // 0x06B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bUseDynamicNAV : 1;                                       // 0x06C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class ASTExtraBaseCharacter*                       ControlledCharacter;                                      // 0x06C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x06D0(0x0008) MISSED OFFSET

}

