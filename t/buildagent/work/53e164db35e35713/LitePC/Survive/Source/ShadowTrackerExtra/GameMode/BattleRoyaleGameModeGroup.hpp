

// Class ShadowTrackerExtra.BattleRoyaleGameModeGroup
// //Class ShadowTrackerExtra.BattleRoyaleGameModeGroup
//0x00C0 (0x1820 - 0x1760)
class ABattleRoyaleGameModeGroup : public ABattleRoyaleGameModeTeam
{
public:
	TArray<int>                                        GenerateGodSon;                                           // 0x1760(0x0010) (Edit, ZeroConstructor)
	TMap<int, int>                                     TeamSpecialPlayerNum;                                     // 0x1770(0x0050) (ZeroConstructor)
	TMap<int, int>                                     TeamLeftSpecialPlayerNum;                                 // 0x17C0(0x0050) (ZeroConstructor)
	TArray<int>                                        LoseTeamId;                                               // 0x1810(0x0010) (ZeroConstructor)

}

