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

// BlueprintGeneratedClass UpdatePlayerStateInterface.UpdatePlayerStateInterface_C
// 0x0000 (0x0028 - 0x0028)
class UUpdatePlayerStateInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UpdatePlayerStateInterface.UpdatePlayerStateInterface_C");
		return ptr;
	}


	void UpdatePlayerState(ExtraPlayerLiveState State, class ACharacter* OwnerCharacter);
	void InitPlayerState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
