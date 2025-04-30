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

// ScriptBlueprintGeneratedClass bp_corps_Invitation.bp_corps_Invitation_C
// 0x0118 (0x04A8 - 0x0390)
class Abp_corps_Invitation_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x0398(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsSummary_Data                BP_STRUCT_CorpsSummary_Data;                              // 0x03E8(0x0060) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsInvitation_AvatarData       BP_STRUCT_CorpsInvitation_AvatarData;                     // 0x0448(0x0050) (Edit, BlueprintVisible)
	int                                                BP_CorpsInvitation_ShowType;                              // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_Invitation.bp_corps_Invitation_C");
		return ptr;
	}


	void EventCorpsInvitationReport_NoFetch();
	void EventCorpsInvitationReport();
	void EventCorpsInvitationUIClose_NoFetch();
	void EventCorpsInvitationUIClose();
	void EventCorpsInvitationUIConfirm_NoFetch();
	void EventCorpsInvitationUIConfirm();
	void EventCorpsInvitationApply_NoFetch();
	void EventCorpsInvitationApply();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
