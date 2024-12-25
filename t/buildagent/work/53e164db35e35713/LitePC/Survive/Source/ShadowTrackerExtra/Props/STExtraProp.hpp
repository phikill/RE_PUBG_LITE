

// Class ShadowTrackerExtra.STExtraProp
// //Class ShadowTrackerExtra.STExtraProp
//0x0070 (0x0430 - 0x03C0)
class ASTExtraProp : public AActor
{
public:
	unsigned char                                      bKeepRelevantWhenHiddenInGame : 1;                        // 0x03C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class ASTExtraBaseCharacter*                       OwnerPlayer;                                              // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       LastOwnerPlayer;                                          // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FTransform                                  OriginTrans;                                              // 0x03E0(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       PropAttachSocket;                                         // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               EquipSound;                                               // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               UnEquipSound;                                             // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

}

