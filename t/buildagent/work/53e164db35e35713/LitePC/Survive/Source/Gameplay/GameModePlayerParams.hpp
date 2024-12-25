

// ScriptStruct Gameplay.GameModePlayerParams
// 0x00E0
struct FGameModePlayerParams
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsGM : 1;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      gender;                                                   // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAIPlayer : 1;                                            // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x001B(0x0005) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 ItemList;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        WeaponAvatarList;                                         // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        EquipmentAvatarList;                                      // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVoiceParam>                         VoiceList;                                                // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FGameModePlayerEquipmentAvatar              EquipmentAvatarType;                                      // 0x0060(0x000C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<int>                                        VehicleAvatarList;                                        // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     Emotes;                                                   // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FGameModePlayerBanChat                      banChat;                                                  // 0x0090(0x0018) (Edit)
	struct FName                                       CurrentPlayerState;                                       // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrentCharacterState;                                    // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SyncedTimestamp;                                          // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DestinyValue;                                             // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmScore;                                                // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RatingScore;                                              // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsObserver : 1;                                          // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlatformGender;                                           // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
	struct FString                                     Nation;                                                   // 0x00D0(0x0010) (ZeroConstructor)
};

