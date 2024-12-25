

// ScriptStruct Gameplay.GameDataMining
// 0x0038
struct FGameDataMining
{
	struct FString                                     BattleID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     PlaneStartPoint;                                          // 0x0010(0x000C) (IsPlainOldData)
	struct FVector                                     PlaneEndPoint;                                            // 0x001C(0x000C) (IsPlainOldData)
	TArray<struct FCircleDataMining>                   CircleDataMining;                                         // 0x0028(0x0010) (ZeroConstructor)
};


