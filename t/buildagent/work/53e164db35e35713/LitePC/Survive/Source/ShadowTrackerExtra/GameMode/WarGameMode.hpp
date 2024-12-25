

// Class ShadowTrackerExtra.WarGameMode
// //Class ShadowTrackerExtra.WarGameMode
//0x0050 (0x17B0 - 0x1760)
class AWarGameMode : public ABattleRoyaleGameModeTeam
{
public:
	class UPlaneComponent*                             PlaneComp;                                                // 0x1760(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class APlayerController*>                   RespawnedPlayers;                                         // 0x1768(0x0010) (ZeroConstructor)
	int                                                MatchDurationTime;                                        // 0x1778(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WinScore;                                                 // 0x177C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Score_MakeOtherGotoNearDeath;                             // 0x1780(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Score_RescueOthers;                                       // 0x1784(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Score_TeamAllDeath;                                       // 0x1788(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Score_Kill;                                               // 0x178C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FRespawnItemConfigInst>              RespawnItemConfigList;                                    // 0x1790(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class URespawnItemConfig*                          RespawnItemConfig;                                        // 0x17A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class APawn*                                       CurRespawnPlane;                                          // 0x17A8(0x0008) (ZeroConstructor, IsPlainOldData)

}

