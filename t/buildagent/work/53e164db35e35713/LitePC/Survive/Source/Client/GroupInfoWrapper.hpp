

// ScriptStruct Client.GroupInfoWrapper
// 0x0050
struct FGroupInfoWrapper
{
	int                                                SnsAction;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Flag;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ErrorCode;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Platform;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Desc;                                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FWechatGroupInfomation                      wechatGroupInfo;                                          // 0x0020(0x0030)
};

