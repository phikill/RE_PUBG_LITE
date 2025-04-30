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

// BlueprintGeneratedClass BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C
// 0x00F3 (0x011B - 0x0028)
class UBP_SAVEGAME_UIElemLayout_C : public USaveGame
{
public:
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    LayoutDetailDict1;                                        // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    LayoutDetailDict2;                                        // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    LayoutDetailDict3;                                        // 0x00C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsDataValid1;                                             // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDataValid2;                                             // 0x0119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDataValid3;                                             // 0x011A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
