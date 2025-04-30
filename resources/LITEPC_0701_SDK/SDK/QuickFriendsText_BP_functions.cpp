
#include "../SDK.h"

// Name: LitePC_0701, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function QuickFriendsText_BP.QuickFriendsText_BP_C.ShowUnread
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuickFriendsText_BP_C::ShowUnread()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickFriendsText_BP.QuickFriendsText_BP_C.ShowUnread");

	UQuickFriendsText_BP_C_ShowUnread_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickFriendsText_BP.QuickFriendsText_BP_C.ClearUnread
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickFriendsText_BP_C::ClearUnread()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickFriendsText_BP.QuickFriendsText_BP_C.ClearUnread");

	UQuickFriendsText_BP_C_ClearUnread_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickFriendsText_BP.QuickFriendsText_BP_C.AddUnread
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickFriendsText_BP_C::AddUnread()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickFriendsText_BP.QuickFriendsText_BP_C.AddUnread");

	UQuickFriendsText_BP_C_AddUnread_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickFriendsText_BP.QuickFriendsText_BP_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UQuickFriendsText_BP_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickFriendsText_BP.QuickFriendsText_BP_C.OnTouchEnded");

	UQuickFriendsText_BP_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}


// Function QuickFriendsText_BP.QuickFriendsText_BP_C.ClickChatFriend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 friendGid                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UQuickFriendsText_BP_C::ClickChatFriend__DelegateSignature(const struct FString& friendGid)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickFriendsText_BP.QuickFriendsText_BP_C.ClickChatFriend__DelegateSignature");

	UQuickFriendsText_BP_C_ClickChatFriend__DelegateSignature_Params params;
	params.friendGid = friendGid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
