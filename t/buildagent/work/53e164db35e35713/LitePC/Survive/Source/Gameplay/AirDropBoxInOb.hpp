

// ScriptStruct Gameplay.AirDropBoxInOb
// 0x0014
struct FAirDropBoxInOb
{
	int                                                boxId;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Flying : 1;                                               // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x0005(0x0001)
	unsigned char                                      IsEmpty : 1;                                              // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FVector                                     Pos;                                                      // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

