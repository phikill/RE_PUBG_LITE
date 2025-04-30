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

// BlueprintGeneratedClass RespawnSetUIInterface.RespawnSetUIInterface_C
// 0x0000 (0x0028 - 0x0028)
class URespawnSetUIInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RespawnSetUIInterface.RespawnSetUIInterface_C");
		return ptr;
	}


	void ResetUIStateAfterRespawn();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
