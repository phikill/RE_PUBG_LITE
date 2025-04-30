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

// BlueprintGeneratedClass BP_CommonBtn.BP_CommonBtn_C
// 0x000F (0x0127 - 0x0118)
class UBP_CommonBtn_C : public UCommonBtnComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (Transient, DuplicateTransient)
	int                                                openMode;                                                 // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECommonBtn>                            BtnType;                                                  // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShow;                                                    // 0x0125(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOpen;                                                    // 0x0126(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CommonBtn.BP_CommonBtn_C");
		return ptr;
	}


	void OnChangeOpenDoorMode(int openMode);
	void UnRegistShowDoorButton();
	void OnShowDoorButton(TEnumAsByte<ECommonBtn> Type);
	void RegistShowDoorButton();
	void ShowDoorButton(bool Show, bool Open, int openMode);
	void GetPlayerController(class ABP_STExtraPlayerController_C** PlayerController);
	void ReceiveBeginPlay();
	void CharacterStatusChanged(bool IsNearDeath, bool IsRescueingOther);
	void PlayerControllerReconnectedDelegate_Event_1();
	void UI_Click(bool bSimulateExtraDoor);
	void ToogleDoor();
	void BP_ShowDoorBtn(bool* bShow, bool* bOpen, int* doorOpenMode);
	void AutoOpenDoor(bool BoolValue);
	void BP_SimulateUIClick(bool* bExtraDoor);
	void ExecuteUbergraph_BP_CommonBtn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
