

// Class Client.ImageDownloader
// //Class Client.ImageDownloader
//0x0058 (0x0080 - 0x0028)
class UImageDownloader : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     FileURL;                                                  // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FileSavePath;                                             // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UrlHash;                                                  // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      InvalidImageFormat : 1;                                   // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 8;                                        // 0x0079(0x0001)
	unsigned char                                      SaveDiskFile : 1;                                         // 0x0079(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

	// Function Client.ImageDownloader.Start
	// (Final, Native, Public, BlueprintCallable)
	void Start(const struct FString& URL);// sub_1E7F8D0()

	// Function Client.ImageDownloader.SetSubDirTime
	// (Final, Native, Static, Public, BlueprintCallable)
	static void STATIC_SetSubDirTime(int sec);// sub_1E7F860()

	// Function Client.ImageDownloader.MakeDownloader
	// (Final, Native, Static, Public, BlueprintCallable)
	static class UImageDownloader* STATIC_MakeDownloader();// sub_1E7F830()


}

