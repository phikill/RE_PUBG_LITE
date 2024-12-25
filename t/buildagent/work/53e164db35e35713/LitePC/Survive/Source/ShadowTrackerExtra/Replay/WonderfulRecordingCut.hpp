

// Class ShadowTrackerExtra.WonderfulRecordingCut
// //Class ShadowTrackerExtra.WonderfulRecordingCut
//0x0058 (0x0080 - 0x0028)
class UWonderfulRecordingCut : public UObject
{
public:
	TArray<struct FWonderfulCutOutputData>             WonderfulCutOutputDataList;                               // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0038(0x0024) MISSED OFFSET
	unsigned char                                      bIsChickenDinner : 1;                                     // 0x005C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              ChickenDinnerTimeSecs;                                    // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsShowSmallCircle : 1;                                   // 0x0064(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              ShowSmallCircleTimeSecs;                                  // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FWonderfulCutShootDamageData>        ShootDamageDataList;                                      // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	// Function ShadowTrackerExtra.WonderfulRecordingCut.StopRecord
	// (Final, Native, Public, BlueprintCallable)
	void StopRecord(unsigned char bRankFirst);// sub_B91D50()

	// Function ShadowTrackerExtra.WonderfulRecordingCut.StartRecord
	// (Final, Native, Public, BlueprintCallable)
	void StartRecord();// sub_B91D30()

	// Function ShadowTrackerExtra.WonderfulRecordingCut.SortShootDamageData
	// (Final, Native, Protected, HasOutParms)
	void SortShootDamageData(TArray<struct FWonderfulCutShootDamageSortData>* LargeCircleDataListTArray<struct FWonderfulCutShootDamageSortData>* SmallCircleDataList);// sub_B91BD0()

	// Function ShadowTrackerExtra.WonderfulRecordingCut.CaptureRecordCut
	// (Final, Native, Public)
	void CaptureRecordCut(TEnumAsByte<EWonderfulCutCaptureType> CaptureTypeint DamagePlayerIDTEnumAsByte<EWonderfulCutShootDamageType> ShootDamageTypefloat ShootDistanceconst struct FString& CauserName);// sub_B907B0()

	// Function ShadowTrackerExtra.WonderfulRecordingCut.BuildOutputData
	// (Final, Native, Protected)
	void BuildOutputData();// sub_B90790()


}

