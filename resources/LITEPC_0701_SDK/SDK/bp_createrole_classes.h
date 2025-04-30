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

// ScriptBlueprintGeneratedClass bp_createrole.bp_createrole_C
// 0x00D0 (0x0460 - 0x0390)
class Abp_createrole_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CreateRole_Mode;                                       // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_CreateRole_AvatarInfo>    BP_ARRAY_CreateRole_Hairs;                                // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CreateRole_Gold;                                       // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_HairID;                                     // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CreateRole_SelectTip             BP_STRUCT_CreateRole_SelectTip;                           // 0x03B8(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CreateRole_BuyAvatarInfo         BP_STRUCT_CreateRole_BuyAvatarInfo;                       // 0x03E8(0x0010) (Edit, BlueprintVisible)
	int                                                BP_CreateRole_HairType;                                   // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_HairColor;                                  // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_HeadId;                                     // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_Sex;                                        // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_ModeCost;                                   // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_Race;                                       // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CreateRole_AvatarInfo>    BP_ARRAY_CreateRole_Races;                                // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CreateRole_Name;                                       // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CreateRole_LobbyToAvatar;                              // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_CreateRole_BuyAvatarInfo> BP_Array_CreateRole_BuyAvatars;                           // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CreateRole_AvatarInfo            BP_STRUCT_CreateRole_AvatarInfo;                          // 0x0448(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_createrole.bp_createrole_C");
		return ptr;
	}


	void EventSelectHairType_NoFetch();
	void EventSelectHairType();
	void EventSelectRace_NoFetch();
	void EventSelectRace();
	void EventBuyAvatar_NoFetch();
	void EventBuyAvatar();
	void EventSelectHairColor3_NoFetch();
	void EventSelectHairColor3();
	void EventSelectHairColor6_NoFetch();
	void EventSelectHairColor6();
	void EventOpenAvatarResetPanel_NoFetch();
	void EventOpenAvatarResetPanel();
	void EventCancelAvatarReset_NoFetch();
	void EventCancelAvatarReset();
	void EventCloseAvatarResetPanelInter_NoFetch();
	void EventCloseAvatarResetPanelInter();
	void EventShowAvatarResetBuyPanel_NoFetch();
	void EventShowAvatarResetBuyPanel();
	void EventSelectHairColor1_NoFetch();
	void EventSelectHairColor1();
	void EventGetCreateRoleHairID_NoFetch();
	void EventGetCreateRoleHairID();
	void EventSelectHairColor4_NoFetch();
	void EventSelectHairColor4();
	void EventGetCreateRoleHairColor_NoFetch();
	void EventGetCreateRoleHairColor();
	void EventGetCreateRoleSex_NoFetch();
	void EventGetCreateRoleSex();
	void EventEnterLobby_NoFetch();
	void EventEnterLobby();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventSelectMale_NoFetch();
	void EventSelectMale();
	void EventCloseAvatarResetPanel_NoFetch();
	void EventCloseAvatarResetPanel();
	void EventSelectFeMale_NoFetch();
	void EventSelectFeMale();
	void EventRandomName_NoFetch();
	void EventRandomName();
	void EventFilterName_NoFetch();
	void EventFilterName();
	void EventSelectHairColor2_NoFetch();
	void EventSelectHairColor2();
	void EventSelectHairColor5_NoFetch();
	void EventSelectHairColor5();
	void EventGetCreateRoleHeadID_NoFetch();
	void EventGetCreateRoleHeadID();
	void EventOpenAvatarResetPanelInter_NoFetch();
	void EventOpenAvatarResetPanelInter();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
