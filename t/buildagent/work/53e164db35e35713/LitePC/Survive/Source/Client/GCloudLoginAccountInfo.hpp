

// ScriptStruct Client.GCloudLoginAccountInfo
// 0x0058
struct FGCloudLoginAccountInfo
{
	int                                                LoginChannel;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     OpenID;                                                   // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     OpenKey;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     PayToken;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     Pf;                                                       // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     PfKey;                                                    // 0x0048(0x0010) (ZeroConstructor)
};

