
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

// Function bp_chat_emoji.bp_chat_emoji_C.EventClickEmojiItem_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_chat_emoji_C::EventClickEmojiItem_NoFetch()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_chat_emoji.bp_chat_emoji_C.EventClickEmojiItem_NoFetch");

	Abp_chat_emoji_C_EventClickEmojiItem_NoFetch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_chat_emoji.bp_chat_emoji_C.EventClickEmojiItem
// (BlueprintCallable, BlueprintEvent)

void Abp_chat_emoji_C::EventClickEmojiItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_chat_emoji.bp_chat_emoji_C.EventClickEmojiItem");

	Abp_chat_emoji_C_EventClickEmojiItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_chat_emoji.bp_chat_emoji_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_chat_emoji_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_chat_emoji.bp_chat_emoji_C.UserConstructionScript");

	Abp_chat_emoji_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
