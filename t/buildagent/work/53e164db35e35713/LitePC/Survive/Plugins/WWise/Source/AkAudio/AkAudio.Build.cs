// Copyright 1998-2011 Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System;
using System.IO;
using System.Collections.Generic;

public class AkAudio : ModuleRules
{
	string akLibPath = string.Empty;

	bool TargetPlatformIsNintendoSwitch = false;

#if WITH_FORWARDED_MODULE_RULES_CTOR
    private void AddWwiseLib(ReadOnlyTargetRules Target, string in_libName)
#else
	private void AddWwiseLib(TargetInfo Target, string in_libName)
#endif
	{
		if (Target.Platform == UnrealTargetPlatform.PS4 || Target.Platform == UnrealTargetPlatform.Android || Target.Platform == UnrealTargetPlatform.Linux || Target.Platform == UnrealTargetPlatform.IOS || TargetPlatformIsNintendoSwitch)
		{
			PublicAdditionalLibraries.Add(in_libName);
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			PublicAdditionalLibraries.Add(Path.Combine(akLibPath, "lib" + in_libName + ".a"));
		}
		else
		{
			PublicAdditionalLibraries.Add(in_libName + ".lib");
		}
	}

#if UE_4_18_OR_LATER
    private string GetVisualStudioVersion(ReadOnlyTargetRules Target)
#else
    private string GetVisualStudioVersion()
#endif
    {
#if UE_4_18_OR_LATER
        WindowsCompiler Compiler = Target.WindowsPlatform.Compiler;
#else
        WindowsCompiler Compiler = WindowsPlatform.Compiler;
#endif
        string VSVersion = "vc140";


		try
		{
			if (Compiler == (WindowsCompiler)Enum.Parse(typeof(WindowsCompiler), "VisualStudio2013"))
			{
				VSVersion = "vc120";
			}
		}
		catch (Exception)
		{
		}

		try
		{
			if (Compiler == (WindowsCompiler)Enum.Parse(typeof(WindowsCompiler), "VisualStudio2015"))
			{
				VSVersion = "vc140";
			}
		}
		catch (Exception)
		{
		}

		try
		{
			if (Compiler == (WindowsCompiler)Enum.Parse(typeof(WindowsCompiler), "VisualStudio2017"))
			{
				VSVersion = "vc150";
			}
		}
		catch (Exception)
		{
		}

		return VSVersion;
	}

#if WITH_FORWARDED_MODULE_RULES_CTOR
    public AkAudio(ReadOnlyTargetRules Target) : base(Target)
#else
	public AkAudio(TargetInfo Target)
#endif
	{
		PCHUsage = PCHUsageMode.UseSharedPCHs;
		PrivateIncludePathModuleNames.Add("Settings");

        // Need to use Enum.Parse because Switch is not present in UE < 4.15
        try
        {
			var SwitchPlatform = (UnrealTargetPlatform)Enum.Parse(typeof(UnrealTargetPlatform), "Switch");
			if (SwitchPlatform != UnrealTargetPlatform.Unknown)
				TargetPlatformIsNintendoSwitch = (Target.Platform == SwitchPlatform);
		}
		catch (Exception)
		{
		}

		PrivateIncludePaths.AddRange(
			new string[] {
			"AkAudio/Private",
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"MovieScene",
				"MovieSceneTracks"
			});

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"SlateCore",
				"NetworkReplayStreaming",
				"Projects",
			});

		string akDir = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty"));
		List<string> akPlatformLibDir = new List<string>();
		
#if UE_4_19_OR_LATER
        var Defs = PublicDefinitions;
#else
        var Defs = Definitions;
#endif
		Defs.Add("USE_AKAUDIO");

		PublicIncludePaths.AddRange(
			new string[] {
				// SDK includes
				Path.Combine(akDir, "include"),
				Path.Combine(akDir, "samples" + Path.DirectorySeparatorChar + "SoundEngine" + Path.DirectorySeparatorChar + "Common"),
				Path.Combine(akDir, "samples" + Path.DirectorySeparatorChar + "SoundEngine")
			}
		);

		// These definitions can be set as platform-specific.
#if WITH_FORWARDED_MODULE_RULES_CTOR
		if (Target.bBuildEditor == true)
#else
		if (UEBuildConfiguration.bBuildEditor == true)
#endif
		{
			// Boost the number of IO for the editor, since it uses the old IO system
			Defs.Add("AK_UNREAL_MAX_CONCURRENT_IO=256");
		}
		else
		{
			Defs.Add("AK_UNREAL_MAX_CONCURRENT_IO=32");
		}

		Defs.Add("AK_UNREAL_IO_GRANULARITY=32768");

		string samplesSoundEngineBasePath = Path.Combine(akDir, "samples" + Path.DirectorySeparatorChar + "SoundEngine");

		if (Target.Platform == UnrealTargetPlatform.Win32 || Target.Platform == UnrealTargetPlatform.Win64)
		{
			string tempDir = (Target.Platform == UnrealTargetPlatform.Win32) ? "Win32_" : "x64_";
#if UE_4_18_OR_LATER
			tempDir += GetVisualStudioVersion(Target);
#else
            tempDir += GetVisualStudioVersion();
#endif
            akPlatformLibDir.Add(tempDir);
            string LibFolder = (Target.Platform == UnrealTargetPlatform.Win32) ? "x86" : "x64";
			PublicLibraryPaths.Add("$(DXSDK_DIR)" + Path.DirectorySeparatorChar + "Lib" + Path.DirectorySeparatorChar + LibFolder);
			PublicIncludePaths.Add(Path.Combine(samplesSoundEngineBasePath, "Win32"));

#if WITH_FORWARDED_MODULE_RULES_CTOR
			if (Target.bBuildEditor == true)
#else
			if (UEBuildConfiguration.bBuildEditor == true)
#endif
			{
				// Sound frame is required for enabling communication between Wwise Application and the unreal editor.
				// Not to be defined in shipping mode.
				Defs.Add("AK_SOUNDFRAME");
			}

			PublicAdditionalLibraries.Add("dsound.lib");
			PublicAdditionalLibraries.Add("dxguid.lib");
			PublicAdditionalLibraries.Add("Msacm32.lib");
			PublicAdditionalLibraries.Add("XInput.lib");
		}
		else if (Target.Platform == UnrealTargetPlatform.XboxOne)
		{
			string VSVersion = "vc140";

			// Use reflection because the GitHub version of UE is missing things.
			Type XboxOnePlatformType = System.Type.GetType("XboxOnePlatform", false);
			if (XboxOnePlatformType != null)
			{
				System.Reflection.FieldInfo XboxOneCompilerField = XboxOnePlatformType.GetField("Compiler");
				if (XboxOneCompilerField != null)
				{
					var XboxOneCompilerValue = XboxOneCompilerField.GetValue(null);
					if (XboxOneCompilerValue.ToString() == "VisualStudio2012")
					{
						VSVersion = "vc110";
					}
				}
			}

            akPlatformLibDir.Add("XboxOne_" + VSVersion);
			PublicIncludePaths.Add(Path.Combine(samplesSoundEngineBasePath, "Win32"));
			Defs.Add("_XBOX_ONE");

			PublicAdditionalLibraries.Add("AcpHal.lib");
			PublicAdditionalLibraries.Add("MMDevApi.lib");
		}
		else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
            akPlatformLibDir.Add("Linux_x64");
			PublicIncludePaths.Add(Path.Combine(samplesSoundEngineBasePath, "POSIX"));
			PublicIncludePaths.Add(Path.Combine(samplesSoundEngineBasePath, "Common"));
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
            akPlatformLibDir.Add("Mac");
			PublicIncludePaths.Add(Path.Combine(samplesSoundEngineBasePath, "POSIX"));
		}
		else if (Target.Platform == UnrealTargetPlatform.IOS)
		{
            akPlatformLibDir.Add("iOS");
			PublicIncludePaths.Add(Path.Combine(samplesSoundEngineBasePath, "POSIX"));
		}
		else if (Target.Platform == UnrealTargetPlatform.PS4)
		{
            akPlatformLibDir.Add("PS4");
			PublicIncludePaths.Add(Path.Combine(samplesSoundEngineBasePath, "PS4"));
			Defs.Add("__ORBIS__");

			PublicAdditionalLibraries.Add("SceAjm_stub_weak");
			PublicAdditionalLibraries.Add("SceAudio3d_stub_weak");
		}
		else if (Target.Platform == UnrealTargetPlatform.Android)
		{
            akPlatformLibDir.Add("android-9_armeabi-v7a");
            akPlatformLibDir.Add("android-9_x86");
            akPlatformLibDir.Add("android-21_arm64-v8a");
            akPlatformLibDir.Add("android-21_x86_64");
            PublicIncludePaths.Add(Path.Combine(samplesSoundEngineBasePath, "Android"));
			PublicIncludePaths.Add(Path.Combine(samplesSoundEngineBasePath, "POSIX"));
			Defs.Add("__ANDROID__");
		}
		else if (TargetPlatformIsNintendoSwitch)
		{
            akPlatformLibDir.Add("NX64");
			PublicIncludePaths.Add(Path.Combine(samplesSoundEngineBasePath, "NX"));
			Defs.Add("NN_NINTENDO_SDK");
		}

		if (Target.Configuration == UnrealTargetConfiguration.Shipping)
		{
			Defs.Add("AK_OPTIMIZED");
		}

		string akConfigurationDir;

		if (Target.Configuration == UnrealTargetConfiguration.Debug)
		{
			// change bDebugBuildsActuallyUseDebugCRT to true in BuildConfiguration.cs to actually link debug binaries
#if UE_4_18_OR_LATER
            if (!Target.bDebugBuildsActuallyUseDebugCRT)
#else
            if (!BuildConfiguration.bDebugBuildsActuallyUseDebugCRT)
#endif
			{
				akConfigurationDir = "Profile";
			}
			else
			{
				akConfigurationDir = "Debug";
			}
		}
		else if (Target.Configuration == UnrealTargetConfiguration.Development ||
				Target.Configuration == UnrealTargetConfiguration.Test ||
				Target.Configuration == UnrealTargetConfiguration.DebugGame)
		{
			akConfigurationDir = "Profile";
		}
		else // if (Target.Configuration == UnrealTargetConfiguration.Shipping)
		{
			akConfigurationDir = "Release";
		}

		if (Target.Platform == UnrealTargetPlatform.IOS)
		{
			akConfigurationDir += "-iphoneos";
		}

		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			// No profiler support in the cross-compile toolchain.
			akConfigurationDir = "Release";
		}

        foreach (string libDir in akPlatformLibDir)
        {
            akLibPath = Path.Combine(Path.Combine(Path.Combine(akDir, libDir), akConfigurationDir), "lib");
            PublicLibraryPaths.Add(akLibPath);
        }

		AddWwiseLib(Target, "AkSoundEngine");
		AddWwiseLib(Target, "AkMemoryMgr");
		AddWwiseLib(Target, "AkStreamMgr");
		AddWwiseLib(Target, "AkMusicEngine");
		AddWwiseLib(Target, "AkSpatialAudio");

		AddWwiseLib(Target, "AkVorbisDecoder");
		AddWwiseLib(Target, "AkSilenceSource");
		AddWwiseLib(Target, "AkSineSource");
		AddWwiseLib(Target, "AkToneSource");
		AddWwiseLib(Target, "AkPeakLimiterFX");
		AddWwiseLib(Target, "AkMatrixReverbFX");
		AddWwiseLib(Target, "AkParametricEQFX");
		AddWwiseLib(Target, "AkDelayFX");
		AddWwiseLib(Target, "AkExpanderFX");
		AddWwiseLib(Target, "AkFlangerFX");
		AddWwiseLib(Target, "AkCompressorFX");
		AddWwiseLib(Target, "AkGainFX");
		AddWwiseLib(Target, "AkHarmonizerFX");
		AddWwiseLib(Target, "AkTimeStretchFX");
		AddWwiseLib(Target, "AkPitchShifterFX");
		AddWwiseLib(Target, "AkStereoDelayFX");
		AddWwiseLib(Target, "AkMeterFX");
		AddWwiseLib(Target, "AkGuitarDistortionFX");
		AddWwiseLib(Target, "AkTremoloFX");
		AddWwiseLib(Target, "AkRoomVerbFX");
		AddWwiseLib(Target, "AkAudioInputSource");
		AddWwiseLib(Target, "AkSynthOne");
		AddWwiseLib(Target, "AkReflectFX");
		AddWwiseLib(Target, "AkConvolutionReverbFX");
		AddWwiseLib(Target, "AkRecorderFX");
		AddWwiseLib(Target, "AuroHeadphoneFX");

		if ((Target.Platform != UnrealTargetPlatform.Android) && (Target.Platform != UnrealTargetPlatform.Linux) && (Target.Platform != UnrealTargetPlatform.Mac) && (Target.Platform != UnrealTargetPlatform.IOS) && (!TargetPlatformIsNintendoSwitch))
		{
			AddWwiseLib(Target, "AkMotionGenerator");
			AddWwiseLib(Target, "AkRumble");
		}

		if (Target.Platform == UnrealTargetPlatform.PS4)
		{
			AddWwiseLib(Target, "SceAudio3dEngine");
		}

		if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			PublicAdditionalFrameworks.Add(new UEBuildFramework("AudioUnit"));
			PublicAdditionalFrameworks.Add(new UEBuildFramework("AudioToolbox"));
			PublicAdditionalFrameworks.Add(new UEBuildFramework("CoreAudio"));
			AddWwiseLib(Target, "AkAACDecoder");
		}

		if (Target.Platform == UnrealTargetPlatform.IOS)
		{
			PublicAdditionalFrameworks.Add(new UEBuildFramework("AudioToolbox"));
			PublicAdditionalFrameworks.Add(new UEBuildFramework("CoreAudio"));
			AddWwiseLib(Target, "AkAACDecoder");
		}

		if (TargetPlatformIsNintendoSwitch)
		{
			AddWwiseLib(Target, "AkOpusDecoder");
		}

		if (Defs.Contains("AK_OPTIMIZED") == false && Target.Platform != UnrealTargetPlatform.Linux)
		{
			AddWwiseLib(Target, "CommunicationCentral");
		}

		// SoundFrame libs
		if (Defs.Contains("AK_SOUNDFRAME") == true)
		{
			PublicAdditionalLibraries.Add("SFLib.lib");
		}

		// If AK_SOUNDFRAME is defined, make UnrealEd a dependency
#if WITH_FORWARDED_MODULE_RULES_CTOR
		if (Target.bBuildEditor == true)
#else
		if (UEBuildConfiguration.bBuildEditor == true)
#endif
		{
			PrivateDependencyModuleNames.Add("SlateCore");
			PrivateDependencyModuleNames.Add("Slate");
			PrivateDependencyModuleNames.Add("UnrealEd");
		}
	}
}
