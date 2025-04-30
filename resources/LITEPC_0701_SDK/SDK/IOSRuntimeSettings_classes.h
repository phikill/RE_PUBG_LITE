#pragma once

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class IOSRuntimeSettings.IOSRuntimeSettings
// 0x0178 (0x01A0 - 0x0028)
class UIOSRuntimeSettings : public UObject
{
public:
	unsigned char                                      bEnableGameCenterSupport : 1;                             // 0x0028(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      bEnableCloudKitSupport : 1;                               // 0x0028(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      bEnableRemoteNotificationsSupport : 1;                    // 0x0028(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	bool                                               bSupportsMetal;                                           // 0x002C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bSupportsMetalMRT;                                        // 0x002D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bCookPVRTCTextures;                                       // 0x002E(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bCookASTCTextures;                                        // 0x002F(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bSupportsOpenGLES2;                                       // 0x0030(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               EnableRemoteShaderCompile;                                // 0x0031(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bGeneratedSYMFile;                                        // 0x0032(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bGeneratedSYMBundle;                                      // 0x0033(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bGenerateXCArchive;                                       // 0x0034(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bDevForArmV7;                                             // 0x0035(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bDevForArm64;                                             // 0x0036(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bDevForArmV7S;                                            // 0x0037(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bShipForArmV7;                                            // 0x0038(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bShipForArm64;                                            // 0x0039(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bShipForArmV7S;                                           // 0x003A(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bShipForBitcode;                                          // 0x003B(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     AdditionalLinkerFlags;                                    // 0x0040(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     AdditionalShippingLinkerFlags;                            // 0x0050(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     RemoteServerName;                                         // 0x0060(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bUseRSync;                                                // 0x0070(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FString                                     RSyncUsername;                                            // 0x0078(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FIOSBuildResourceDirectory                  DeltaCopyInstallPath;                                     // 0x0088(0x0010) (Edit, Config, GlobalConfig)
	struct FString                                     SSHPrivateKeyLocation;                                    // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FIOSBuildResourceFilePath                   SSHPrivateKeyOverridePath;                                // 0x00A8(0x0010) (Edit, Config, GlobalConfig)
	bool                                               bTreatRemoteAsSeparateController;                         // 0x00B8(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bAllowRemoteRotation;                                     // 0x00B9(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseRemoteAsVirtualJoystick;                              // 0x00BA(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseRemoteAbsoluteDpadValues;                             // 0x00BB(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bSupportsPortraitOrientation : 1;                         // 0x00BC(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      bSupportsUpsideDownOrientation : 1;                       // 0x00BC(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      bSupportsLandscapeLeftOrientation : 1;                    // 0x00BC(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      bSupportsLandscapeRightOrientation : 1;                   // 0x00BC(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	struct FString                                     BundleDisplayName;                                        // 0x00C0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     BundleName;                                               // 0x00D0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     BundleIdentifier;                                         // 0x00E0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     VersionInfo;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	EPowerUsageFrameRateLock                           FrameRateLock;                                            // 0x0100(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	EIOSVersion                                        MinimumiOSVersion;                                        // 0x0101(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	unsigned char                                      bSupportsIPad : 1;                                        // 0x0104(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      bSupportsIPhone : 1;                                      // 0x0104(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FString                                     AdditionalPlistData;                                      // 0x0108(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bEnableFacebookSupport;                                   // 0x0118(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FString                                     FacebookAppID;                                            // 0x0120(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     MobileProvision;                                          // 0x0130(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     SigningCertificate;                                       // 0x0140(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bAutomaticSigning;                                        // 0x0150(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      MaxShaderLanguageVersion;                                 // 0x0151(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseFastIntrinsics;                                        // 0x0152(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableMathOptimisations;                                  // 0x0153(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseIntegratedKeyboard;                                   // 0x0154(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	int                                                AudioSampleRate;                                          // 0x0158(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioCallbackBufferFrameSize;                             // 0x015C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioNumBuffersToEnqueue;                                 // 0x0160(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioMaxChannels;                                         // 0x0164(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AudioNumSourceWorkers;                                    // 0x0168(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FString                                     SpatializationPlugin;                                     // 0x0170(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ReverbPlugin;                                             // 0x0180(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     OcclusionPlugin;                                          // 0x0190(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IOSRuntimeSettings.IOSRuntimeSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
