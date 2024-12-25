

// Class ShadowTrackerExtra.ParachutingWidget
// //Class ShadowTrackerExtra.ParachutingWidget
//0x00A8 (0x0360 - 0x02B8)
class UParachutingWidget : public UUAEUserWidget
{
public:
	float                                              AirborneAltitude;                                         // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AltitudeBarLength;                                        // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParachuteBarLength;                                       // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AltitudeBarYPosition;                                     // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightAndSpeedBoxXPosition;                               // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FString                                     SpeedText;                                                // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UHorizontalBox*                              HeightAndSpeedBox;                                        // 0x02E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            HeightAndSpeedBoxPanelSlot;                               // 0x02E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      ParachuteBarImage;                                        // 0x02F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      HeightBarImage;                                           // 0x02F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ACharacter*                                  AirbornePawn;                                             // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    AirborneController;                                       // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HeightAndSpeedBoxPosition;                                // 0x0310(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	class UCanvasPanelSlot*                            ParachuteBarCanvasSlot;                                   // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            HeightBarCanvasSlot;                                      // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSpeedValueChangeDelegate;                               // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bUseAccelerationUpdating : 1;                             // 0x0338(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	float                                              UpdateAccleratingThreshold;                               // 0x033C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CalAcceleratingPeriod;                                    // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseMultiFramePastUpdate : 1;                             // 0x0344(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	int                                                UpdateSpeedTextFrameThreshold;                            // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x034C(0x0014) MISSED OFFSET

}

