

// Class ShadowTrackerExtra.CoherentCommonBinder
// //Class ShadowTrackerExtra.CoherentCommonBinder
//0x0098 (0x00C0 - 0x0028)
class UCoherentCommonBinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	class UAkComponent*                                NewAkComponent;                                           // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0078(0x0018) MISSED OFFSET
	struct FString                                     DefaultLobbyUrl;                                          // 0x0090(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	// Function ShadowTrackerExtra.CoherentCommonBinder.Test
	// (Final, Native, Private)
	void Test();// sub_A58C40()

	// Function ShadowTrackerExtra.CoherentCommonBinder.OnWebPageOnPlatformFailed
	// (Final, Native, Private)
	void OnWebPageOnPlatformFailed();// sub_A582B0()

	// Function ShadowTrackerExtra.CoherentCommonBinder.BindUI
	// (Native, Protected)
	void BindUI();// sub_558B30()

	// Function ShadowTrackerExtra.CoherentCommonBinder.BindDelegate
	// (Native, Protected)
	void BindDelegate();// sub_A57A70()


}


