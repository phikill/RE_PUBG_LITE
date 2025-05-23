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

// Class MediaAssets.MediaSource
// 0x0008 (0x0030 - 0x0028)
class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}


	bool Validate();
	struct FString GetUrl();
};


// Class MediaAssets.BaseMediaSource
// 0x0008 (0x0038 - 0x0030)
class UBaseMediaSource : public UMediaSource
{
public:
	struct FName                                       PlayerName;                                               // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return ptr;
	}

};


// Class MediaAssets.FileMediaSource
// 0x0018 (0x0050 - 0x0038)
class UFileMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     FilePath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PrecacheFile;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}


	void SetFilePath(const struct FString& Path);
};


// Class MediaAssets.MediaPlayer
// 0x0168 (0x0190 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnEndReached;                                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaClosed;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpenFailed;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackResumed;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackSuspended;                                      // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSeekCompleted;                                          // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTracksChanged;                                          // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FTimespan                                   CacheAhead;                                               // 0x00A8(0x0008) (BlueprintVisible)
	struct FTimespan                                   CacheBehind;                                              // 0x00B0(0x0008) (BlueprintVisible)
	struct FTimespan                                   CacheBehindGame;                                          // 0x00B8(0x0008) (BlueprintVisible)
	bool                                               NativeAudioOut;                                           // 0x00C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnOpen;                                               // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	unsigned char                                      Shuffle : 1;                                              // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      Loop : 1;                                                 // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	class UMediaPlaylist*                              Playlist;                                                 // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PlaylistIndex;                                            // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalFieldOfView;                                    // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalFieldOfView;                                      // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ViewRotation;                                             // 0x00DC(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x88];                                      // 0x00E8(0x0088) MISSED OFFSET
	struct FGuid                                       PlayerGuid;                                               // 0x0170(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate);
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex);
	bool SetRate(float Rate);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(const struct FName& PlayerName);
	bool SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex);
	bool Seek(const struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	bool Play();
	bool Pause();
	bool OpenURL(const struct FString& URL);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const struct FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsBuffering();
	bool HasError();
	struct FRotator GetViewRotation();
	struct FString GetVideoTrackType(int TrackIndex, int FormatIndex);
	struct FFloatRange GetVideoTrackFrameRates(int TrackIndex, int FormatIndex);
	float GetVideoTrackFrameRate(int TrackIndex, int FormatIndex);
	struct FIntPoint GetVideoTrackDimensions(int TrackIndex, int FormatIndex);
	float GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex);
	float GetVerticalFieldOfView();
	struct FString GetUrl();
	struct FString GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex);
	int GetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FTimespan GetTime();
	void GetSupportedRates(bool Unthinned, TArray<struct FFloatRange>* OutRates);
	int GetSelectedTrack(EMediaPlayerTrack TrackType);
	float GetRate();
	int GetPlaylistIndex();
	class UMediaPlaylist* GetPlaylist();
	struct FName GetPlayerName();
	int GetNumTracks(EMediaPlayerTrack TrackType);
	int GetNumTrackFormats(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetMediaName();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	struct FName GetDesiredPlayerName();
	struct FString GetAudioTrackType(int TrackIndex, int FormatIndex);
	int GetAudioTrackSampleRate(int TrackIndex, int FormatIndex);
	int GetAudioTrackChannels(int TrackIndex, int FormatIndex);
	void Close();
	bool CanPlayUrl(const struct FString& URL);
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPause();
};


// Class MediaAssets.MediaPlaylist
// 0x0018 (0x0040 - 0x0028)
class UMediaPlaylist : public UObject
{
public:
	unsigned char                                      Loop : 1;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<class UMediaSource*>                        Items;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}


	bool Replace(int Index, class UMediaSource* Replacement);
	bool RemoveAt(int Index);
	bool Remove(class UMediaSource* MediaSource);
	int Num();
	void Insert(class UMediaSource* MediaSource, int Index);
	class UMediaSource* GetRandom(int* OutIndex);
	class UMediaSource* GetPrevious(int* InOutIndex);
	class UMediaSource* GetNext(int* InOutIndex);
	class UMediaSource* Get(int Index);
	bool AddUrl(const struct FString& URL);
	bool AddFile(const struct FString& FilePath);
	bool Add(class UMediaSource* MediaSource);
};


// Class MediaAssets.MediaSoundComponent
// 0x0060 (0x0640 - 0x05E0)
class UMediaSoundComponent : public USynthComponent
{
public:
	EMediaSoundChannels                                Channels;                                                 // 0x05E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05E0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x05F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		return ptr;
	}

};


// Class MediaAssets.MediaTexture
// 0x0070 (0x0138 - 0x00C8)
class UMediaTexture : public UTexture
{
public:
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoClear;                                                // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CB(0x0001) MISSED OFFSET
	struct FLinearColor                                ClearColor;                                               // 0x00CC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x00E8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}


	int GetWidth();
	int GetHeight();
	float GetAspectRatio();
};


// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0038 - 0x0030)
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}

};


// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0048 - 0x0038)
class UStreamMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     StreamUrl;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}

};


// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_EnumerateWebcamCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);
	void STATIC_EnumerateVideoCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);
	void STATIC_EnumerateAudioCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
