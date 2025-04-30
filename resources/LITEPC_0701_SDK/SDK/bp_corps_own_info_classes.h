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

// ScriptBlueprintGeneratedClass bp_corps_own_info.bp_corps_own_info_C
// 0x0260 (0x05F0 - 0x0390)
class Abp_corps_own_info_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x0398(0x0050) (Edit, BlueprintVisible)
	struct FString                                     BP_OperateMemberId;                                       // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsInfo_SeasonTimeStr;                               // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_InfoMemberInfo>           BP_ARRAY_PartMemberList;                                  // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_LogInfo                          BP_STRUCT_LogInfo;                                        // 0x0418(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_GROUP_INFO                       BP_STRUCT_GROUP_INFO;                                     // 0x0468(0x0028) (Edit, BlueprintVisible)
	bool                                               BP_InviteRedDot;                                          // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_LogInfo>                  BP_ARRAY_LogInfos;                                        // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsInfoMemberInfo_PageEnd;                           // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsCommander;                                           // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	struct FBP_STRUCT_InfoCorpsInfo                    BP_STRUCT_InfoCorpsInfo;                                  // 0x04B0(0x0028) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsInfoActiveHelpPos           BP_STRUCT_CorpsInfoActiveHelpPos;                         // 0x04D8(0x0008) (Edit, BlueprintVisible)
	struct FString                                     BP_SelfRoleId;                                            // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsInfoMemberNum;                                    // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	struct FBP_STRUCT_InfoMemberInfo                   BP_STRUCT_InfoMemberInfo;                                 // 0x04F8(0x00A8) (Edit, BlueprintVisible)
	int                                                BP_CorpsInfoMemberInfo_PageStart;                         // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ShowOp                           BP_STRUCT_ShowOp;                                         // 0x05A4(0x0006) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x6];                                       // 0x05AA(0x0006) MISSED OFFSET
	struct FBP_STRUCT_CorpsInfoRankInfo                BP_STRUCT_CorpsInfoRankInfo;                              // 0x05B0(0x0030) (Edit, BlueprintVisible)
	bool                                               BP_CorpsOwn_SkipRecruit;                                  // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x05E1(0x0007) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_own_info.bp_corps_own_info_C");
		return ptr;
	}


	void EventCorpsOpClickRecruit_NoFetch();
	void EventCorpsOpClickRecruit();
	void EventGetPartMember_NoFetch();
	void EventGetPartMember();
	void EventCorpsLogShow_NoFetch();
	void EventCorpsLogShow();
	void EventCorpsOpClickManage_NoFetch();
	void EventCorpsOpClickManage();
	void EventCorpsOwnExit_NoFetch();
	void EventCorpsOwnExit();
	void EventCorpsClickInfoHelp_NoFetch();
	void EventCorpsClickInfoHelp();
	void EventCorpsOpClickPlayerInfo_NoFetch();
	void EventCorpsOpClickPlayerInfo();
	void EventCorpsOpClickChat_NoFetch();
	void EventCorpsOpClickChat();
	void EventCorpsApplyListShow_NoFetch();
	void EventCorpsApplyListShow();
	void EventCorpsClickActiveHelp_NoFetch();
	void EventCorpsClickActiveHelp();
	void EventCorpsOpClickAddFriend_NoFetch();
	void EventCorpsOpClickAddFriend();
	void EventCorpsManageShow_NoFetch();
	void EventCorpsManageShow();
	void EventCorpsOpClickRemove_NoFetch();
	void EventCorpsOpClickRemove();
	void EventCorpsShowMemberOp_Push_NoFetch();
	void EventCorpsShowMemberOp_Push();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
