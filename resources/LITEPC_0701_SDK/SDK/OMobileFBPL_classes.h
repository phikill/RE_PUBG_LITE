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

// Class OMobileFBPL.OMobileFBPL
// 0x0000 (0x0028 - 0x0028)
class UOMobileFBPL : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OMobileFBPL.OMobileFBPL");
		return ptr;
	}


	int STATIC_GetVolumeState();
	struct FString STATIC_GetDeviceName();
	float STATIC_GetBatteryTemperature();
	int STATIC_GetBatteryLevel();
	bool STATIC_AreHeadphonesPluggedIn();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
