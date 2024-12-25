

// ScriptStruct Client.NearByPersonInfo
// 0x0028
struct FNearByPersonInfo
{
	struct FString                                     OpenID;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     gender;                                                   // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      IsFriend : 1;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                Distance;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

