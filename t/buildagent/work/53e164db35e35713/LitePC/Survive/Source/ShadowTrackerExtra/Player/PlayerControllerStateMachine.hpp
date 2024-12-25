

// Class ShadowTrackerExtra.PlayerControllerStateMachine
// //Class ShadowTrackerExtra.PlayerControllerStateMachine
//0x0098 (0x00C0 - 0x0028)
class UPlayerControllerStateMachine : public UObject
{
public:
	class ASTExtraPlayerController*                    OwnerPlayerController;                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayerControllerState*                      CurrentState;                                             // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerControllerState*                      PlayerControllerStateActive;                              // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerControllerState*                      PlayerControllerStateFlying;                              // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerControllerState*                      PlayerControllerStateJumping;                             // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerControllerState*                      PlayerControllerStateLanding;                             // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerControllerState*                      PlayerControllerStateFighting;                            // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerControllerState*                      PlayerControllerStateFinished;                            // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FName, class UPlayerControllerState*>  PlayerControllerStateList;                                // 0x0068(0x0050) (ExportObject, ZeroConstructor)
	struct FName                                       CurrentStateName;                                         // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)

}

