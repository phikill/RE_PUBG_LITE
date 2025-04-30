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

// BlueprintGeneratedClass EmoteComponent_BP.EmoteComponent_BP_C
// 0x01C0 (0x0338 - 0x0178)
class UEmoteComponent_BP_C : public UTslEmoteComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (Transient, DuplicateTransient)
	TArray<struct FBP_STRUCT_Item_type>                EmoteDataRow;                                             // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     EmoteItemIDToBPIDMap;                                     // 0x0190(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FString>                          EmoteItemIDToImagePathMap;                                // 0x01E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                EmoteItemType;                                            // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	TMap<int, struct FText>                            EmoteItemIDToItemName;                                    // 0x0238(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FString>                          EmoteBPIDToHandlePath;                                    // 0x0288(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUAEDataTable*                               EmoteBPTable;                                             // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ID;                                                       // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	TMap<int, class UBackpackEmoteHandle*>             EmoteBPIDToAnimHandleMap;                                 // 0x02E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EmoteComponent_BP.EmoteComponent_BP_C");
		return ptr;
	}


	class UBackpackEmoteHandle* GetEmoteHandle(int* ItemID);
	void ReadEmoteDataRowPC();
	bool IsAbleGetEmoteDataByName(struct FName* EmoteName);
	struct FEmoteDBDataRow GetEmoteDataByName(struct FName* EmoteName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_EmoteComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
