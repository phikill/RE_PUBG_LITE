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

// BlueprintGeneratedClass GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C
// 0x0010 (0x0038 - 0x0028)
class UGlobalUIEventDispatcher_BP_C : public UObject
{
public:
	struct FScriptMulticastDelegate                    WardrobePutDownEvent;                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C");
		return ptr;
	}


	void WardrobePutDownEvent__DelegateSignature(int PutonID, int resID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
