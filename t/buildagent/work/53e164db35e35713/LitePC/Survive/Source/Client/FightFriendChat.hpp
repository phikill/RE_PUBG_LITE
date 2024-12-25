

// ScriptStruct Client.FightFriendChat
// 0x0038
struct FFightFriendChat
{
	struct FString                                     UID;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Msg;                                                      // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      selfMsg : 1;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

