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

// BlueprintGeneratedClass Vault_Controller.Vault_Controller_C
// 0x0241 (0x0339 - 0x00F8)
class UVault_Controller_C : public UPlayerVaultComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class ABP_PlayerPawn_C*                            PlayerPawn;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowBlockDis;                                              // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowBlockHeight;                                           // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowAfterBlockMaxFallingHeight;                            // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowCrossBlockMaxDis;                                      // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NowBlockLength;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCheckDis;                                              // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCheckOppSiteDis;                                       // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnActiveMaxAngle;                                         // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCheckHeight;                                           // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      checkActor;                                               // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerStartPostion;                                       // 0x0138(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PlayerRotation;                                           // 0x0144(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     hitpoint;                                                 // 0x0150(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         HitComponent;                                             // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleHalfHeight;                                        // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     blockDir;                                                 // 0x0170(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	struct FVaultData                                  NowVaultData;                                             // 0x0180(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxJumpLength;                                            // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJump;                                                   // 0x01E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01E5(0x0003) MISSED OFFSET
	float                                              CountTime;                                                // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVaulting;                                               // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       NowDrawDebugType;                                         // 0x01ED(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x01EE(0x0002) MISSED OFFSET
	float                                              realStartTime;                                            // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DataStartpos;                                             // 0x01F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     nowVaultKey;                                              // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FVaultData>            vaultDataallMap;                                          // 0x0210(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsEnd;                                                    // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	float                                              nowMaxX;                                                  // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              nowMinFallingY;                                           // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              realStartZ;                                               // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      WindowActor;                                              // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              offsetSpeed;                                              // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESurviveWeaponPropSlot                             gunSlot;                                                  // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isShowReson;                                              // 0x027D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x027E(0x0002) MISSED OFFSET
	struct FVector                                     oppsiteHitPoint;                                          // 0x0280(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     uphitPoint;                                               // 0x028C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPreUseMedicine;                                         // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	float                                              heightoffsetcheck;                                        // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightFowardCheck;                                        // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinCheckHeight;                                           // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              nowAnimSpeed;                                             // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              animSpeedChangeTime;                                      // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              animChangegSpeedRate;                                     // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ischangeMontageSpeed;                                     // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	TArray<struct FvaultCheckRule>                     checkRuleList;                                            // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              laststandDis;                                             // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lastwalkDis;                                              // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lastsprintDis;                                            // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<class UBP_WindowCompBase_C*>                VaultWindows;                                             // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               iswondowbroken;                                           // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	float                                              windowsbrokenoffsetdis;                                   // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckBlockHeight;                                         // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AveragedVelocity;                                         // 0x02F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastPlayerLocation;                                       // 0x0300(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothTime;                                               // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallHeightTime;                                           // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOnceFalling;                                            // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	float                                              MaxHeightTime;                                            // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPawnState                                         PlayerState;                                              // 0x031C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x031D(0x0003) MISSED OFFSET
	float                                              ArrivalFloorHeight;                                       // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArrivalHeight;                                            // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      IgnoreWater;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                VaultMontage;                                             // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCancleVault;                                            // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Vault_Controller.Vault_Controller_C");
		return ptr;
	}


	void CanCancleVault(bool* Result);
	void OnRep_NowDrawDebugType();
	void CheckVaultPath(float Height, const struct FVector& OppSiteHitLocation, const struct FVector& StartLocation, const struct FRotator& StartPlayerRotation, const struct FVaultData& VaultData, bool* Result);
	void StartSmoothLocation(const struct FVector& PlayerLocation, const struct FVector& StartLocation, const struct FVector& MoveLocation, float Time, struct FVector* ResultLocation);
	void CheckFloor(const struct FVector& Location, bool* Result);
	void DealBrokenWindows();
	bool VaultFromCPP();
	void CheckVaultWindows(const struct FVector& CheckStart, const struct FVector& CheckEnd);
	void EnableCulling(bool bEnable);
	void GetCliblastCheckDis(float* Result);
	void NowStateCheck(bool Sprint, bool Walk, bool Stand, bool* Result);
	void CheckNowisJumpAnimation(float dis, float Height, float thcikLength, bool* IsJump, bool* ishasAnimation);
	void CheckIsValidByHeightCheckDis(float nowheight, float checkDis, bool* isVaild);
	void IsValidVault(bool* IsValid);
	void GetTestObjectChannels(TArray<TEnumAsByte<EObjectTypeQuery>>* Channels);
	void UpdateMontageSpeed();
	void ServerCheckBlockDis(const struct FVector& hitpoint, const struct FString& Key, bool* Result);
	void GetNowOppSideDis(float* Result);
	void CheckUpLengthBlock(bool* Result);
	void GetCrossMaxBlockDisOffsset(bool* Result);
	void SetLimitPostion(float XValue, float ZVaule);
	void CheckForward(bool* IsActive);
	void CheckHeight(float Height, bool* IsActive, struct FVector* Point);
	void printReason(const struct FString& Result);
	void PrintEnable();
	void TestHasFourteenwindowTag(TArray<struct FHitResult>* acorList, bool* Result);
	void CacultLimitData();
	void GetCrossMaxBlockDisForward(bool* Result);
	void GetPlayerStartZ(float* Result);
	void GetCrossBlockMaxFallingHeight();
	void ForwardTestObjectType(class AActor* Actor, bool* Result);
	void SetEnd();
	void SetVaultData(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& startPos, class AActor* checkActor, float crossmaxFalling, float crossmaxDis, const struct FVector& hitpoint, const struct FRotator& MoveDir, float ArrivalHeight);
	void UpdatePostion2();
	void GetNowData(bool* IsGet);
	void CheckCanVault(bool* IsActive);
	void OnNotifyEnd_7D71C17943B655B8C686998C00A928EE(const struct FName& NotifyName);
	void OnNotifyBegin_7D71C17943B655B8C686998C00A928EE(const struct FName& NotifyName);
	void OnInterrupted_7D71C17943B655B8C686998C00A928EE(const struct FName& NotifyName);
	void OnBlendOut_7D71C17943B655B8C686998C00A928EE(const struct FName& NotifyName);
	void OnCompleted_7D71C17943B655B8C686998C00A928EE(const struct FName& NotifyName);
	void StartVault();
	void ReceiveBeginPlay();
	void JumpVault();
	void VaultServer(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& startPos, class AActor* checkActor, float crossblockMaxFall, float crossblockMaxDis, const struct FVector& hitpoint, class AActor* WindowActor, const struct FRotator& MoveDir, float ArrivalHeight);
	void vaultAll(float dis, float Height, float Length, const struct FString& VaultKey, const struct FVector& startPos, class AActor* checkActor, float crossmaxFalling, float crossmaxDis, const struct FVector& hitpoint, const struct FRotator& MoveDir, float ArrivalHeight);
	void jumpfromUI();
	void VaultFail(const struct FString& Reason);
	void UpdateVault_BluePrint();
	void interrupted(EPawnState State);
	void vaultLeave(EPawnState State);
	void ServerStartCancleVault();
	void StartCancleVault();
	void EndCancleVault();
	void ExecuteUbergraph_Vault_Controller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
