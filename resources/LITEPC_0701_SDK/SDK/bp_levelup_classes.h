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

// ScriptBlueprintGeneratedClass bp_levelup.bp_levelup_C
// 0x0108 (0x0498 - 0x0390)
class Abp_levelup_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_LevelUp_PromoteToHigherRank;                           // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FString                                     BP_LevelUp_OldRank_RankName;                              // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LevelUp_RankTypeName;                                  // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LevelUp_RankModeTypeName;                              // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_OldRankLevel;                                  // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_OldRankMaxIntergral;                           // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_NewRankPoint;                                  // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_RankImproveNum;                                // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LevelUp_OldRank_RankBgPath;                            // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_RankModeType;                                  // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsShareAwardGold;                                      // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LevelUp_ShowRankUp;                                    // 0x03F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03F6(0x0002) MISSED OFFSET
	int                                                BP_HasLevelupShareNum;                                    // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LevelUp_ShowLevelUp;                                   // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	struct FString                                     BP_LevelUp_NewRankName;                                   // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RankName;                                              // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_NewRankMinIntergral;                           // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_OldRankPoint;                                  // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_RankFgPath;                                            // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_NewRankLevel;                                  // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FString                                     BP_LevelUp_OldRankName;                                   // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_RankType;                                      // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FString                                     BP_LevelUp_OldRank_RankFgPath;                            // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_OldLevel;                                      // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_RankAnimation;                                 // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_NewRankMaxIntergral;                           // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	struct FString                                     BP_RankBgPath;                                            // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_OldRankMinIntergral;                           // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_levelup.bp_levelup_C");
		return ptr;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventLevelUpShareRank_NoFetch();
	void EventLevelUpShareRank();
	void EventLevelUpShareLevel_NoFetch();
	void EventLevelUpShareLevel();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
