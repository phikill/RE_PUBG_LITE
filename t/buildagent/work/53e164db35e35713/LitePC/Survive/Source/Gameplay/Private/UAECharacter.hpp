

// Class Gameplay.UAECharacter
// //Class Gameplay.UAECharacter
//0x0060 (0x0850 - 0x07F0)
class AUAECharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07F0(0x0010) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          // 0x0800(0x0010) (Net, ZeroConstructor, Transient)
	ECharacterGender                                   DefaultCharacterGender;                                   // 0x0810(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0811(0x000F) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0820(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsAI : 1;                                                // 0x0824(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0825(0x0007) MISSED OFFSET
	uint32_t                                           PlayerKey;                                                // 0x082C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0830(0x0008) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0838(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0848(0x0008) MISSED OFFSET

	// Function Gameplay.UAECharacter.OnRep_TeamID
	// (Final, Native, Public)
	void OnRep_TeamID();// sub_1580270()

	// Function Gameplay.UAECharacter.OnRep_PlayerKey
	// (Native, Public)
	void OnRep_PlayerKey();// sub_BA4F40()

	// Function Gameplay.UAECharacter.OnRep_InitialItemList
	// (Native, Public)
	void OnRep_InitialItemList();// sub_1580250()

	// Function Gameplay.UAECharacter.GetPlayerKey
	// (Final, Native, Public, BlueprintCallable, BlueprintPure)
	struct FString GetPlayerKey();// sub_157F9D0()

	// Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting
	// (Native, Event, Public, BlueprintEvent, Const)
	TArray<class UActorComponent*> GetNonSimulatedComponents_OnFighting();// sub_157F880()

	// Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates
	// (Native, Event, Public, BlueprintEvent, Const)
	TArray<class UActorComponent*> GetNonSimulatedComponents_NonTeammates();// sub_157F800()

	// Function Gameplay.UAECharacter.GetNonSimulatedComponents
	// (Native, Event, Public, BlueprintEvent, Const)
	TArray<class UActorComponent*> GetNonSimulatedComponents();// sub_157F780()

	// Function Gameplay.UAECharacter.GetNonDedicatedComponents
	// (Native, Event, Public, BlueprintEvent, Const)
	TArray<class UActorComponent*> GetNonDedicatedComponents();// sub_157F700()

	// Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3
	// (Net, NetReliable, Native, Event, Public, NetClient)
	void ClientAcknowledgeReconnection_3(uint32_t Token);// sub_157F140()


}


