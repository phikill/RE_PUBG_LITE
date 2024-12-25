

// Class ShadowTrackerExtra.SRadarChartUserWidget
// //Class ShadowTrackerExtra.SRadarChartUserWidget
//0x0060 (0x0170 - 0x0110)
class USRadarChartUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
	class USlateBrushAsset*                            RadarBrush;                                               // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CenterPointImg;                                           // 0x0128(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FColor>                              VertexColor;                                              // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UImage*>                              VertexFarPointImg;                                        // 0x0140(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<float>                                      VertexScale;                                              // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector2D>                           VertexUV;                                                 // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	// Function ShadowTrackerExtra.SRadarChartUserWidget.OnHide
	// (Final, Native, Public, BlueprintCallable)
	void OnHide();// sub_11E8160()

	// Function ShadowTrackerExtra.SRadarChartUserWidget.FreshChartDataToContent
	// (Final, Native, Public, BlueprintCallable)
	void FreshChartDataToContent();// sub_11E7980()


}

