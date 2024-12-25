

// Class ShadowTrackerExtra.GMCheatManager
// //Class ShadowTrackerExtra.GMCheatManager
//0x0000 (0x0078 - 0x0078)
class UGMCheatManager : public UCheatManager
{
public:

	// Function Engine.CheatManager.Walk
	// (Exec, Native, Public, BlueprintCallable)
	void Walk();// sub_B5B0F0()

	// Function Engine.CheatManager.ViewSelf
	// (Exec, Native, Public)
	void ViewSelf();// sub_E983D0()

	// Function Engine.CheatManager.ViewPlayer
	// (Exec, Native, Public)
	void ViewPlayer(const struct FString& S);// sub_1612EA0()

	// Function Engine.CheatManager.ViewClass
	// (Exec, Native, Public)
	void ViewClass(class AActor* DesiredClass);// sub_1612E10()

	// Function Engine.CheatManager.ViewActor
	// (Exec, Native, Public)
	void ViewActor(const struct FName& ActorName);// sub_1612D80()

	// Function Engine.CheatManager.ToggleDebugCamera
	// (Exec, Native, Public)
	void ToggleDebugCamera();// sub_1612D40()

	// Function Engine.CheatManager.ToggleAILogging
	// (Exec, Native, Public)
	void ToggleAILogging();// sub_F16210()

	// Function Engine.CheatManager.TestCollisionDistance
	// (Exec, Native, Public)
	void TestCollisionDistance();// sub_1612D20()

	// Function Engine.CheatManager.Teleport
	// (Exec, Native, Public, BlueprintCallable)
	void Teleport();// sub_F30ED0()

	// Function Engine.CheatManager.Summon
	// (Exec, Native, Public)
	void Summon(const struct FString& ClassName);// sub_11EC5A0()

	// Function Engine.CheatManager.StreamLevelOut
	// (Exec, Native, Public)
	void StreamLevelOut(const struct FName& PackageName);// sub_1612C90()

	// Function Engine.CheatManager.StreamLevelIn
	// (Exec, Native, Public)
	void StreamLevelIn(const struct FName& PackageName);// sub_E95980()

	// Function Engine.CheatManager.Slomo
	// (Exec, Native, Public, BlueprintCallable)
	void Slomo(float NewTimeDilation);// sub_1612BF0()

	// Function Engine.CheatManager.SetWorldOrigin
	// (Final, Exec, Native, Public)
	void SetWorldOrigin();// sub_1612BD0()

	// Function Engine.CheatManager.SetNavDrawDistance
	// (Final, Exec, Native, Public)
	void SetNavDrawDistance(float DrawDistance);// sub_1612B50()

	// Function Engine.CheatManager.SetMouseSensitivityToDefault
	// (Final, Exec, Native, Public)
	void SetMouseSensitivityToDefault();// sub_1612B30()

	// Function Engine.CheatManager.ServerToggleAILogging
	// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	void ServerToggleAILogging();// sub_1612940()

	// Function Engine.CheatManager.ReceiveInitCheatManager
	// (Event, Public, BlueprintEvent)
	void ReceiveInitCheatManager();// sub_1B0A820()

	// Function Engine.CheatManager.ReceiveEndPlay
	// (Event, Public, BlueprintEvent)
	void ReceiveEndPlay();// sub_1B0A820()

	// Function Engine.CheatManager.RebuildNavigation
	// (Exec, Native, Public)
	void RebuildNavigation();// sub_16128E0()

	// Function Engine.CheatManager.PlayersOnly
	// (Exec, Native, Public, BlueprintCallable)
	void PlayersOnly();// sub_1612830()

	// Function Engine.CheatManager.OnlyLoadLevel
	// (Exec, Native, Public)
	void OnlyLoadLevel(const struct FName& PackageName);// sub_16127A0()

	// Function Engine.CheatManager.LogLoc
	// (Exec, Native, Public)
	void LogLoc();// sub_1612780()

	// Function Engine.CheatManager.InvertMouse
	// (Final, Exec, Native, Public)
	void InvertMouse();// sub_1612500()

	// Function Engine.CheatManager.God
	// (Exec, Native, Public, BlueprintCallable)
	void God();// sub_16124E0()

	// Function Engine.CheatManager.Ghost
	// (Exec, Native, Public, BlueprintCallable)
	void Ghost();// sub_F160D0()

	// Function Engine.CheatManager.FreezeFrame
	// (Exec, Native, Public, BlueprintCallable)
	void FreezeFrame(float Delay);// sub_16123B0()

	// Function Engine.CheatManager.Fly
	// (Exec, Native, Public, BlueprintCallable)
	void Fly();// sub_316F20()

	// Function Engine.CheatManager.FlushLog
	// (Exec, Native, Public)
	void FlushLog();// sub_1612390()

	// Function Engine.CheatManager.EnableDebugCamera
	// (Native, Protected, BlueprintCallable)
	void EnableDebugCamera();// sub_1612370()

	// Function Engine.CheatManager.DumpVoiceMutingState
	// (Exec, Native, Public)
	void DumpVoiceMutingState();// sub_1612350()

	// Function Engine.CheatManager.DumpPartyState
	// (Exec, Native, Public)
	void DumpPartyState();// sub_1612330()

	// Function Engine.CheatManager.DumpOnlineSessionState
	// (Exec, Native, Public)
	void DumpOnlineSessionState();// sub_1612310()

	// Function Engine.CheatManager.DumpChatState
	// (Exec, Native, Public)
	void DumpChatState();// sub_16122F0()

	// Function Engine.CheatManager.DisableDebugCamera
	// (Native, Protected, BlueprintCallable)
	void DisableDebugCamera();// sub_E03E90()

	// Function Engine.CheatManager.DestroyTarget
	// (Exec, Native, Public, BlueprintCallable)
	void DestroyTarget();// sub_16122D0()

	// Function Engine.CheatManager.DestroyPawns
	// (Exec, Native, Public)
	void DestroyPawns(class APawn* aClass);// sub_1612240()

	// Function Engine.CheatManager.DestroyAllPawnsExceptTarget
	// (Exec, Native, Public)
	void DestroyAllPawnsExceptTarget();// sub_1612220()

	// Function Engine.CheatManager.DestroyAll
	// (Exec, Native, Public)
	void DestroyAll(class AActor* aClass);// sub_1612190()

	// Function Engine.CheatManager.DebugCapsuleSweepSize
	// (Exec, Native, Public)
	void DebugCapsuleSweepSize(float HalfHeightfloat Radius);// sub_16120C0()

	// Function Engine.CheatManager.DebugCapsuleSweepPawn
	// (Exec, Native, Public)
	void DebugCapsuleSweepPawn();// sub_16120A0()

	// Function Engine.CheatManager.DebugCapsuleSweepComplex
	// (Exec, Native, Public)
	void DebugCapsuleSweepComplex(unsigned char bTraceComplex);// sub_1612010()

	// Function Engine.CheatManager.DebugCapsuleSweepClear
	// (Exec, Native, Public)
	void DebugCapsuleSweepClear();// sub_1611FF0()

	// Function Engine.CheatManager.DebugCapsuleSweepChannel
	// (Exec, Native, Public)
	void DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);// sub_1611F70()

	// Function Engine.CheatManager.DebugCapsuleSweepCapture
	// (Exec, Native, Public)
	void DebugCapsuleSweepCapture();// sub_1611F50()

	// Function Engine.CheatManager.DebugCapsuleSweep
	// (Exec, Native, Public)
	void DebugCapsuleSweep();// sub_1611F30()

	// Function Engine.CheatManager.DamageTarget
	// (Exec, Native, Public, BlueprintCallable)
	void DamageTarget(float DamageAmount);// sub_1611EB0()

	// Function Engine.CheatManager.CheatScript
	// (Final, Exec, Native, Public)
	void CheatScript(const struct FString& ScriptName);// sub_1611C10()

	// Function Engine.CheatManager.ChangeSize
	// (Exec, Native, Public, BlueprintCallable)
	void ChangeSize(float F);// sub_1611B90()

	// Function Engine.CheatManager.BugItStringCreator
	// (Exec, Native, Public, HasOutParms, HasDefaults)
	void BugItStringCreator(const struct FVector& ViewLocationconst struct FRotator& ViewRotationstruct FString* GoStringstruct FString* LocString);// sub_16119A0()

	// Function Engine.CheatManager.BugItGo
	// (Exec, Native, Public)
	void BugItGo(float Xfloat Yfloat Zfloat Pitchfloat Yawfloat Roll);// sub_16117D0()

	// Function Engine.CheatManager.BugIt
	// (Exec, Native, Public)
	void BugIt(const struct FString& ScreenShotDescription);// sub_1611730()


}

