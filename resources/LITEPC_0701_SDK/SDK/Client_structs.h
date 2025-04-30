#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Client.GameWidgetConfig
// 0x0030
struct FGameWidgetConfig
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Container;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                ZOrder;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UClass*                                      WidgetClass;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.WebviewInfoWrapper
// 0x0030
struct FWebviewInfoWrapper
{
	int                                                ErrorCode;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Reason;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int                                                Extend;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Extend2;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MsgData;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Client.WakeupInfoWrapper
// 0x0050
struct FWakeupInfoWrapper
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Client.WechatGroupInfomation
// 0x0030
struct FWechatGroupInfomation
{
	struct FString                                     OpenIdList;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MemberNum;                                                // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ChatRoomURL;                                              // 0x0020(0x0010) (ZeroConstructor)
};

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

// ScriptStruct Client.FightFriendChat
// 0x0038
struct FFightFriendChat
{
	struct FString                                     UID;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Msg;                                                      // 0x0020(0x0010) (ZeroConstructor)
	bool                                               selfMsg;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Client.PlayerFinishedGuide
// 0x0008
struct FPlayerFinishedGuide
{
	int                                                guideID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FinishedCounts;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.NearByPersonInfo
// 0x0028
struct FNearByPersonInfo
{
	struct FString                                     OpenID;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     gender;                                                   // 0x0010(0x0010) (ZeroConstructor)
	bool                                               IsFriend;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                Distance;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.QRCodeGenQRImgInfo
// 0x0018
struct FQRCodeGenQRImgInfo
{
	int                                                Tag;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ImagePath;                                                // 0x0008(0x0010) (ZeroConstructor)
};

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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
