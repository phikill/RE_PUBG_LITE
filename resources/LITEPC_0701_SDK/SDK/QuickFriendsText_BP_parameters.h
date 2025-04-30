#pragma once

#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function QuickFriendsText_BP.QuickFriendsText_BP_C.ShowUnread
struct UQuickFriendsText_BP_C_ShowUnread_Params
{
};

// Function QuickFriendsText_BP.QuickFriendsText_BP_C.ClearUnread
struct UQuickFriendsText_BP_C_ClearUnread_Params
{
};

// Function QuickFriendsText_BP.QuickFriendsText_BP_C.AddUnread
struct UQuickFriendsText_BP_C_AddUnread_Params
{
};

// Function QuickFriendsText_BP.QuickFriendsText_BP_C.OnTouchEnded
struct UQuickFriendsText_BP_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function QuickFriendsText_BP.QuickFriendsText_BP_C.ClickChatFriend__DelegateSignature
struct UQuickFriendsText_BP_C_ClickChatFriend__DelegateSignature_Params
{
	struct FString                                     friendGid;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
